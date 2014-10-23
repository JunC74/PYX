#include "attempt/promise.h"

namespace AttemptSpace
{
	int GetVertexFomatSize(VERTEXFOMAT vertex_fomat)
	{
		int size = 0;
		if(vertex_fomat & VF_XYZ)
		{
			size += sizeof(vec3);
		}
		if(vertex_fomat & VF_NORMAL)
		{
			size += sizeof(vec3);
		}
		if(vertex_fomat & VF_COLOR)
		{
			size += sizeof(vec4);
		}
		if(vertex_fomat & VF_TEX)
		{
			size += sizeof(vec2);
		}
		return size;
	}

	template<class T> void Release(T &t)
	{
		if( t )
		{
			t->Release();
			t = 0;
		}
	}
} // end namespace AttemptSpace