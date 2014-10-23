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

#include <cmath>	 // ����C++��ѧ��
#include <iostream>  // ����C++��׼���������

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
// ����buffer����ƫ�����꣬��Ҫʵ������ת��
#define BUFFER_OFFSET( offset )   ((GLvoid*) (offset))

//----------------------------------------------------------------------------
//
//  --- Include our class libraries and constants ---
//

namespace Angel {

//  ������С����������ֹ��0��
const GLfloat  DivideByZeroTolerance = GLfloat(1.0e-07);

//  �Ƕ�ת���ȵ�ϵ�� 
const GLfloat  DegreesToRadians = M_PI / 180.0f;

void PrintfGLError();
}  // namespace Angel

/*�����Զ����ͷ�ļ�*/
#include "vec.h"
#include "mat.h"

#define VERTEX_OFFSET_V 0
#define VERTEX_OFFSET_VT 12
#define VERTEX_OFFSET_VN 20

//  ʹ��Angel�����ռ�
using namespace Angel;

struct VERTEX
{
    vec3 v;		//�����嶥��
    vec2 vt;	//��ͼ�����
    vec3 vn;	//���㷨��
};

#endif // __ANGEL_H__
