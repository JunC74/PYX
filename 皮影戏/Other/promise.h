#ifndef PROMISE_H_
#define PROMISE_H_

#include <Windows.h>
#include <WindowsX.h>
#include <vector>
#include <map>
#include <algorithm>
#include <list>
#include <string>
#include <GL/glew.h>
#pragma comment (lib, "glew32.lib")		
#pragma comment (lib, "opengl32.lib") // link Microsoft OpenGL lib   

#include "attempt/other/Angel.h"
#include "attempt/attempt_err.h"

namespace AttemptSpace {


	typedef vec2 point2;
	typedef vec3 point3;
	typedef vec4 Color4;

	typedef unsigned short VERTEXFOMAT;

	const static unsigned int VF_XYZ	 = 0x0001;
	const static unsigned int VF_NORMAL  = 0x0002;
	const static unsigned int VF_COLOR   = 0x0004;
	const static unsigned int VF_TEX     = 0x0008;

	enum DIRECTIONTYPE
	{
		DIRECTION_UP,
		DIRECTION_DOWN,
		DIRECTION_LEFT,
		DIRECTION_RIGHT,
		DIRECTION_FRONT,
		DIRECTION_BACK,
		DIRECTION_NUM,
	};

	enum  DrawMode
	{
		DRAW_UPDATA,
		DRAW_NO_UPDATA,
	};

	// 光源的类型
	enum LightType
	{
		LIGHT_POINT,	// 点光源
		LIGHT_SPOT,		// 聚光灯
		LIGHT_VOLUME_SPOT,	// 带体积的聚光灯
		LIGHT_TYPE_NUM,		// 光源的数量
	};

	struct POS{
		float x;
		float z;
	};

	template<class T> void Release(T &t);

	int GetVertexFomatSize(VERTEXFOMAT vertex_fomat);
}
#endif // end PROMISE_H_