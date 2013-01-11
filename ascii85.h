/* File: ascii85.h
 *
 *  Copyright (C) 2013, Patrick M. Elsen
 *
 *  This file is part of Ascii85 (http://github.com/xfbs/Ascii85)
 *  Lead Maintainer: Patrick M. Elsen <pelsen.vn at gmail.com>
 *
 *  All rights reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <stdlib.h>
#include <string.h>

/* Ascii85 state struct
 * used for both encoding and decoding!
 */
typedef struct {
    int mode;
    unsigned char **encoded_fragments;
    unsigned char partial_data[4];
} ascii85_state;

void ascii85_init(ascii85_state *state, int mode);
void ascii85_encode(ascii85_state *state, char *data, size_t len);
void ascii85_decode(ascii85_state *state, char *data);
int ascii85_size(ascii85_state *state);
void ascii85_output(ascii85_state *state, char *out);
