//#define WIN32_LEAN_AND_MEAN  // just say no to MFC
#ifndef __TOOL_H__
#define  __TOOL_H__

#include <windows.h>   // include all the windows headers
#include <windowsx.h>  // include useful macros
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define WINDOW_CLASS_NAME "WINCLASS1"
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

// GLOBALS ////////////////////////////////////////////////
extern HWND      g_hWnd;
extern HINSTANCE g_hInstance;

///////////////////////////////////////////////////////////////

//
// Interpolation
//

template<class T> 
void Delete(T &t)
{
    if( t )
    {
        delete t;
        t = 0;
    }
}

#endif


