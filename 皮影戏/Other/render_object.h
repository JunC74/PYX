#ifndef __RENDER_OBJECT_H__
#define __RENDER_OBJECT_H__

#include "attempt/Render/render_object_data.h"

namespace AttemptSpace
{

	class RenderClass;

	class RenderObject
	{
	public:
		RenderObject();
		RenderObject(RenderObjectData* render_data);
		~RenderObject();

		//  设置渲染的数据对象
		// 参数： render_data -- 需要渲染的数据源
		void SetVertexData(RenderObjectData* render_data);

		//  获取渲染的对象数据
		RenderObjectData* GetRenderObjectData();

		//  绘制对象
		// 参数： render_device -- 渲染设备
		virtual void Draw(RenderClass *render_device, mat4 father_translation, DrawMode mode);

		// 拾取是绘制
		virtual void DrawForSelect(RenderClass *render_deviece, mat4 father_translation);

		// 获取拾取是的颜色
		Color4 GetSelectColor();

		//  设置拾取颜色
		void SetSelectColor(Color4 select_color);

		// 计算z轴方向的偏移值
		float ComputeZOffset(RenderClass *render_device, mat4 father_translation);

		float GetZOffset();

	protected:
	private:
		RenderObjectData* render_data_; // 顶点数据
		
		Color4 select_color_;	// 拾取时的颜色

		mat4 transformation_; // 对象的变换矩阵

		float z_offset_;	// z轴方向的偏移值
	};
	
} // end namespace AttemptSpacee

#endif