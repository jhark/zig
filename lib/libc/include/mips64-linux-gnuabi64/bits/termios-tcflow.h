/* termios local mode definitions.  Linux/mips version.
   Copyright (C) 2019-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library.  If not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _TERMIOS_H
# error "Never include <bits/termios-tcflow.h> directly; use <termios.h> instead."
#endif

/* tcsetattr uses these */
#define	TCSANOW		0x540e	/* Same as TCSETS; change immediately.  */
#define	TCSADRAIN	0x540f	/* Same as TCSETSW; change when pending output is written.  */
#define	TCSAFLUSH	0x5410	/* Same as TCSETSF; flush pending input before changing.  */