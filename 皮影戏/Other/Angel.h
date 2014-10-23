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

// Define a helpful macro for handling offsets into buffer objects
// 定义buffer对象偏移量宏，主要实现类型转化
#define BUFFER_OFFSET( offset )   ((GLvoid*) (offset))

//----------------------------------------------------------------------------
//
//  --- Include our class libraries and constants ---
//

namespace Angel {

//  定义最小浮点数，防止被0除
const GLfloat  DivideByZeroTolerance = GLfloat(1.0e-07);

//  角度转弧度的系数 
const GLfloat  DegreesToRadians = M_PI / 180.0f;

void PrintfGLError();
}  // namespace Angel

/*包含自定义的头文件*/
#include "vec.h"
#include "mat.h"

#define VERTEX_OFFSET_V 0
#define VERTEX_OFFSET_VT 12
#define VERTEX_OFFSET_VN 20

//  使用Angel命名空间
using namespace Angel;

struct VERTEX
{
    vec3 v;		//几何体顶点
    vec2 vt;	//贴图坐标点
    vec3 vn;	//顶点法线
};

#endif // __ANGEL_H__
