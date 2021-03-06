/***************************************************************************************
 *
 *  WRITEPAD(r): Handwriting Recognition Engine (HWRE) and components.
 *  Copyright (c) 2001-2016 PhatWare (r) Corp. All rights reserved.
 *
 *  Licensing and other inquires: <developer@phatware.com>
 *  Developer: Stan Miasnikov, et al. (c) PhatWare Corp. <http://www.phatware.com>
 *
 *  WRITEPAD HWRE is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  THE MATERIAL EMBODIED ON THIS SOFTWARE IS PROVIDED TO YOU "AS-IS"
 *  AND WITHOUT WARRANTY OF ANY KIND, EXPRESS, IMPLIED OR OTHERWISE,
 *  INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF MERCHANTABILITY OR
 *  FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT SHALL PHATWARE CORP.
 *  BE LIABLE TO YOU OR ANYONE ELSE FOR ANY DIRECT, SPECIAL, INCIDENTAL,
 *  INDIRECT OR CONSEQUENTIAL DAMAGES OF ANY KIND, OR ANY DAMAGES WHATSOEVER,
 *  INCLUDING WITHOUT LIMITATION, LOSS OF PROFIT, LOSS OF USE, SAVINGS
 *  OR REVENUE, OR THE CLAIMS OF THIRD PARTIES, WHETHER OR NOT PHATWARE CORP.
 *  HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH LOSS, HOWEVER CAUSED AND ON
 *  ANY THEORY OF LIABILITY, ARISING OUT OF OR IN CONNECTION WITH THE
 *  POSSESSION, USE OR PERFORMANCE OF THIS SOFTWARE.
 *  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with WritePad.  If not, see <http://www.gnu.org/licenses/>.
 *
 **************************************************************************************/

/* ************************************************************************************* * /
/* *    PhatWare WritePad handwriting recognition engine configurator                  * */
/* *    Copyright (c) 1997-2014 PhatWare(r) Corp. All rights reserved.                 * */
/* ************************************************************************************* */

/* ************************************************************************************* *
*
* File: wgtls.h
*
* Unauthorized distribution of this code is prohibited.
* Contractor/manufacturer is PhatWare Corp.
* 1314 S. Grand Blvd. Ste. 2-175 Spokane, WA 99202
*
* ************************************************************************************* */

#define     TOOLBARCOLOR     LTGRAY_BRUSH

#define     WG_TOOLS         100

#define     ID_AVAILABLE     1200
#define     ID_TOOLBUTTONS   1203

#define     PRESS            128
#define     TOOLBMP          100

#define     TOOLSAVETAP      0
#define     TOOLOPENTAP      1
#define     TOOLOPENINK      2
#define     TOOLZOOMIN       6
#define     TOOLZOOMOUT      7
#define     TOOLRECOGNIZE    18
#define     TOOLPREVWORD     28
#define     TOOLNEXTWORD     29
#define     TOOLCONFIG       30
#define     TOOLSTOPDEBBUG   31
#define     TOOLCHANGEINI    32
#define     TOOLMOVEWINDOW   33
#define     TOOLCLOSEWINDOW  34
#define     TOOLCORRECT_CANCEL 35
#define     TOOLCORRECT_OK     36

#define     SELECT           0x0001
#define     TOGGLE           0x0002
#define     NOBUTTON              -1

#define     STOPPED          "Breakpoint"
#define     BUSY             "Recognition"
#define     IDLE             "Idle"
#define     SUSPENDED        "Suspended"
#define     READINPUT        "Reading port"

#define     MAX_SECT_TEXT    25

typedef     struct
{
	int    ButtonNumber;
	RECT   ButtonRect;
} _tlsTOOLBUTTONDATA;

typedef _tlsTOOLBUTTONDATA FAR * _tlsLPTOOLBUTTONDATA;

BOOL FAR tlsCreateToolWindow(HWND hWnd);
LRESULT CALLBACK tlsToolWndProc(HWND hWnd, UINT message,
                                WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK tlsEditProc(HWND hWnd, UINT message,
                             WPARAM wParam, LPARAM lParam);
int  FAR tlsGetToolBarHeight(void);
int  FAR tlsSetControlFocus(char Letter);
void FAR tlsGetLevels(void);
void FAR tlsSetLevels(void);
void FAR tlsUpdateStatusBar(LPSTR Status);
void FAR tlsSetSectNum(LPSTR buff);
