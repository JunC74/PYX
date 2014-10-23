#ifndef __win32_prefix_h__
#define __win32_prefix_h__

#include <Windows.h>
#include <WindowsX.h>
#include "external_support/glew-1.10.0/include/GL/glew.h"

#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "msimg32.lib")

#pragma comment (lib, "opengl32.lib") // link Microsoft OpenGL lib   
//#pragma comment (lib, "external_support/glew-1.10.0/lib/Release/Win32/glew32.lib")		
#pragma comment (lib, "glew32.lib")

// 使用控制台进行输出调试信息
#define _USE_WIN32_CONSOLE_OUT_

#endif
