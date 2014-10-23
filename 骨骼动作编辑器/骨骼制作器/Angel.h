//////////////////////////////////////////////////////////////////////////////
//
//  --- Angel.h ---
//
//   The main header file for all examples from Angel 6th Edition
//
//////////////////////////////////////////////////////////////////////////////

#ifndef __ANGEL_H__
#define __ANGEL_H__

//----------------------------------------------------------------------------
// 
// --- Include system headers ---
//

#include <cmath>	 // 包含C++数学库
#include <iostream>  // 包含C++标准输入输出库

//  Define M_PI in the case it's not defined in the math header file
#ifndef M_PI
#  define M_PI  3.14159265358979323846
#endif

//----------------------------------------------------------------------------
//
// --- Include OpenGL header files and helpers ---
//
//   The location of these files vary by operating system.  We've included
//     copies of open-soruce project headers in the "GL" directory local
//     this this "include" directory.
//

#  include <GL/glew.h>
#pragma comment (lib, "glew32.lib")  

//----------------------------------------------------------------------------
//
//  --- Include our class libraries and constants ---
//

namespace Angel {

//  定义最小浮点数，防止被0除
const GLfloat  DivideByZeroTolerance = GLfloat(1.0e-07);

//  角度转弧度的系数 
const GLfloat  DegreesToRadians = M_PI / 180.0f;

}  // namespace Angel

/*包含自定义的头文件*/
#include "vec.h"
#include "mat.h"

// 打印输出宏，其中#x表示将x转为字符数组
#define Print(x)  do { std::cerr << #x " = " << (x) << std::endl; } while(0)

//  使用Angel命名空间
using namespace Angel;

#endif // __ANGEL_H__
