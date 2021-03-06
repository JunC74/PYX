#ifndef __RENDER_GROUP_H__
#define __RENDER_GROUP_H__

#include "attempt/Render/shader.h"
#include "attempt/render/object_control.h"

namespace AttemptSpace
{

	class RenderClass;

	/*
	RenderGroup 是负责对多个对象再同一摄像机下的渲染，其渲染顺序是按照与摄像机的纵向深度来决定
	的，纵向深度越大，其就越早渲染。

	*/
	class RenderGroup
	{
	public:
		RenderGroup(){};
		~RenderGroup() {};

		//  渲染组里面的所有对象
		void Draw(RenderClass *render_divec);

		// 拾取绘制
		void DrawForSelect(RenderClass *render);
		
		// 获取shader
		boost::shared_ptr<Shader> GetShader();

		// 设置shader
		void SetShader(boost::shared_ptr<Shader> shader);

		// 实现对于渲染对象的管理
		ObjectControl object_manage;
		
	protected:
	private:
		
		boost::shared_ptr<Shader> shader_;

		mat4 transformation_;
	}; // end class RenderGroup

} // end namespace AttemptSpace

#endif  // end #ifndef __RENDER_GROUP_H__