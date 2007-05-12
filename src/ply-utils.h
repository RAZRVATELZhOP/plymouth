/* vim: ts=4 sw=2 expandtab autoindent cindent cino={1s
 * ply-utils.h - random useful functions and macros
 *
 * Copyright (C) 2007 Red Hat, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * Written By: Ray Strode <rstrode@redhat.com>
 */
#ifndef PLY_UTILS_H
#define PLY_UTILS_H

#ifndef MIN
#define MIN(a,b) ((a) <= (b)? (a) : (b))
#endif

#ifndef MAX
#define MAX(a,b) ((a) >= (b)? (a) : (b))
#endif

#ifndef CLAMP
#define CLAMP(a,b,c) (MIN (MAX ((a), (b)), (c)))
#endif

#endif /* PLY_UTILS_H */