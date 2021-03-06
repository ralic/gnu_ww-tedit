/*

File: helpcmd.c
COPYING: Full text of the copyrights statement at the bottom of the file
Project: WW
Started: 22nd November, 2000
Descrition:
  Help system related commands

*/

#include "global.h"
#include "filemenu.h"
#include "infordr.h"
#include "helpcmd.h"
#include "main2.h"

char sHelpFile[_MAX_PATH];

/* ************************************************************************
   Function: PrepareHelpFileName
   Description:
*/
void PrepareHelpFileName(void)
{
  /* Set the file to be in the directory of the program */
  strcpy(sHelpFile, sModulePath);
  strcat(sHelpFile, "ww.info");
}

/* ************************************************************************
   Function: CmdHelpEditor
   Description:
     Invokes the hyper-text navigation ulitity to show the editor
     main help page.
     This feature is usually accessible from the main menu:
     Help|Editor_help_page
*/
void CmdHelpEditor(void *pCtx)
{
  NavigateInfoPage(sHelpFile, "Top", FALSE);
}

/* ************************************************************************
   Function: CmdHelpOpenFile
   Description:
*/
void CmdHelpOpenFile(void *pCtx)
{
  static char sOpenFileName[_MAX_PATH] = "*.info";

  if (!InputFileName("InfoFile:", sOpenFileName, NULL, "*.info", 0))
    return;

  NavigateInfoPage(sOpenFileName, "Top", FALSE);
}

/*
This software is distributed under the conditions of the BSD style license.

Copyright (c)
1995-2002
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

