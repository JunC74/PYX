#ifndef __RENDER_MANAGEMENT_H__  
#define __RENDER_MANAGEMENT_H__ 

#include "attempt/promise.h"
#include "attempt/Render//shader.h"

namespace AttemptSpace
{

	class RenderClass;
	class RenderState
	{
	public:
		GLenum  cull_face_mode; // 面剔除模式（默认为背面剔除（逆时针方向为正面））
		boost::shared_ptr<Shader>  shader_;      // 使用的着色器程序对象

		RenderState();
		~RenderState();

		//  绑定渲染状态
		int Bind(RenderClass *render_device);

	protected:
	private:

	};
}

#endif

