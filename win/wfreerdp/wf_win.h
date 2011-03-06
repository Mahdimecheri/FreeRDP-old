/*
   FreeRDP: A Remote Desktop Protocol client.

   Copyright (c) 2009-2011 Jay Sorg
   Copyright (c) 2010-2011 Vic Lee

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef __WF_WIN_H
#define __WF_WIN_H

#include <windows.h>
#include <freerdp/freerdp.h>

int
wf_pre_connect(rdpInst * inst, HWND hwnd);
int
wf_post_connect(rdpInst * inst);
int
wf_update_window(rdpInst * inst);
void
wf_uninit(rdpInst * inst);

#endif
