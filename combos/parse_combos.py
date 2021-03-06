#!/usr/bin/env python

################################################################################
# This file is part of LeoBraille.                                             #
#                                                                              #
# Copyright (C) 2016 by SukkoPera <software@sukkology.net>                     #
#                                                                              #
# LeoBraille is free software: you can redistribute it and/or modify           #
# it under the terms of the GNU General Public License as published by         #
# the Free Software Foundation, either version 3 of the License, or            #
# (at your option) any later version.                                          #
#                                                                              #
# LeoBraille is distributed in the hope that it will be useful,                #
# but WITHOUT ANY WARRANTY; without even the implied warranty of               #
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                #
# GNU General Public License for more details.                                 #
#                                                                              #
# You should have received a copy of the GNU General Public License            #
# along with LeoBraille. If not, see <http://www.gnu.org/licenses/>.           #
################################################################################
#
# LeoBraille - Customizable Arduino-Based Braille Keyboard
#
# Run this script like this:
# ./parse_combos.py combos_XX.txt > keycodes.h
#
# Note that this is untested on Windows/OSX!
#
# Please refer to the GitHub page and wiki for any information:
# https://github.com/SukkoPera/LeoBraille

import sys
import datetime
import argparse

parser = argparse.ArgumentParser (description = 'Convert Braille character combos for use with LeoBraille')
parser.add_argument ('combos', metavar = "COMBOS_FILE", help = "File containing Braille combos")

args = parser.parse_args ()

symbols = {}

with open (args.combos, "r") as fp:
	char = None
	line = fp.readline ()
	while line:
		line = line.strip ()
		if len (line) > 0:
			if line[0] == '#':
				# Comment
				pass
			elif line[0] == ':':
				# Symbol definition
				if char is not None:
					#~ print "%s = %s" % (char, str (mtx))
					symbols[char] = mtx
				char = line[1:]
				mrow = 0
				mtx = [['.' for x in range (2)] for y in range (4)]	# 2 cols x 4 rows
			else:
				# Symbol line
				cols = list (line.upper ())
				invalid = filter (lambda c: c != 'X' and c != '.', cols)
				if len (cols) != 2 or len (invalid) > 0:
					print "Invalid line: %s" % line
				else:
					mtx[mrow] = cols
					mrow += 1
		line = fp.readline ()

# Parse dot matrixes, convert them to a bitmask and create a
# bitmask -> symbol(s) dictionary
sym2bytes = {}
for s in sorted (symbols.keys ()):
	mtx = symbols[s]
	#~ print "%s = %s" % (s, str (mtx))

	# Keys are mapped to bits in dot order:
	# 0 3
	# 1 4
	# 2 5
	# 7 6

	b = 0
	if mtx[0][0] == 'X':
		b |= 1 << 0
	if mtx[0][1] == 'X':
		b |= 1 << 3
	if mtx[1][0] == 'X':
		b |= 1 << 1
	if mtx[1][1] == 'X':
		b |= 1 << 4
	if mtx[2][0] == 'X':
		b |= 1 << 2
	if mtx[2][1] == 'X':
		b |= 1 << 5
	if mtx[3][0] == 'X':
		b |= 1 << 7
	if mtx[3][1] == 'X':
		b |= 1 << 6

	# Normalize symbols
	c = s.count (":")
	if c == 0:
		s = [s, None, None]
	elif c == 1:
		s = s.split (':')
		s.append (None)
	elif c == 2:
		s = s.split (':')
	else:
		print "???"

	#~ print >> sys.stderr, "%s = %s" % ('0b{0:08b}'.format (b), s)
	sym2bytes[b] = s

################################################################################

COMMENT_COL = 40
TAB_WIDTH = 4
NULL_CHAR = "'\\0'"

def makeLine (c, i):
	s = "\t" + str (c) + ","
	l = TAB_WIDTH + len (c) + 1
	while l < COMMENT_COL:
		s += '\t'
		l += TAB_WIDTH - (l % TAB_WIDTH)
	s += "// %s (%d)" % ('0b{0:08b}'.format (i), i)
	return s

# Output creation date
print "// Created on %s" % datetime.datetime.now ()
print

# Output array size
KEY_COMBOS_NO = 64
print "const byte KEY_COMBOS_NO = %d;" % KEY_COMBOS_NO
print

# Output character mode array
print "const uint16_t keycodesLetterMode[KEY_COMBOS_NO] PROGMEM = {"
i = 0
for b in sorted (sym2bytes.keys ()):
	c = sym2bytes[b][0]
	#~ print c
	while b > i:
		print makeLine (NULL_CHAR, i)
		i += 1

	if c is not None and c[0] != '<':
		print makeLine (c, b)
	else:
		print makeLine (NULL_CHAR, i)
	i += 1
while i < KEY_COMBOS_NO:
	print makeLine (NULL_CHAR, i)
	i += 1
print "};"
print

# Output number mode array
print "const uint16_t keycodesNumberMode[KEY_COMBOS_NO] PROGMEM = {"
i = 0
for b in sorted (sym2bytes.keys ()):
	n = sym2bytes[b][1]
	#~ print n
	while b > i:
		print makeLine (NULL_CHAR, i)
		i += 1

	if n is not None and len (n) > 0:
		print makeLine (n, b)
		i += 1
while i < KEY_COMBOS_NO:
	print makeLine (NULL_CHAR, i)
	i += 1
print "};"
print

# Output extra mode array
print "const uint16_t keycodesExtraMode[KEY_COMBOS_NO] PROGMEM = {"
i = 0
for b in sorted (sym2bytes.keys ()):
	e = sym2bytes[b][2]
	#~ print n
	while b > i:
		print makeLine (NULL_CHAR, i)
		i += 1

	if e is not None and len (e) > 0:
		print makeLine (e, b)
		i += 1
while i < KEY_COMBOS_NO:
	print makeLine (NULL_CHAR, i)
	i += 1
print "};"
