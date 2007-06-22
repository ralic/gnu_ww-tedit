/*

File: tktf_rend.h
COPYING: Full text of the copyrights statement at the bottom of the file
Project: WW
Started: 27th October, 1998
Refactored: 20th Feb, 2006 from l2disp.h and wline.h
Descrition:
  Text file render functions

*/

#ifndef _TKTF_REND_H
#define _TKTF_REND_H

enum txtf_colors
{
  txtf_EOF,
  txtf_Text,
  txtf_Block,
  txtf_Number,
  txtf_Comment,
  txtf_Reserved,
  txtf_Register,
  txtf_Instruction,
  txtf_String,
  txtf_Preproc,
  txtf_Oper,
  txtf_SFR,
  txtf_Pair,
  txtf_Tooltip,
  txtf_BlockCursor,
  txtf_Bookmark
};

struct txtf_char_attr
{
  char c;
  enum txtf_colors attr;
};

struct txtf_disp_x
{
  void (*put_buf)(void *dispc,
    int x, int y, int num_chars, const struct txtf_char_attr *rnd_buf);
};

void txtf_show(struct txtf *f, const struct txtf_edit_flags *fflags,
  struct txtf_disp_x *disp_x, void *dispc, int width, int height);

#endif  /* _TKTF_REND_H */

/*
This software is distributed under the conditions of the BSD style license.

Copyright (c)
1995-2006
Petar Marinov

All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:
1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. The name of the author may not be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

