#include "attempt/Render/render_object.h"
#include "attempt/Render/render.h"

namespace AttemptSpace
{
	RenderObject::RenderObject()
	{
		select_color_ = vec4(0, 0, 0, 0);
		transformation_ = identity();
	}

	RenderObject::RenderObject(boost::shared_ptr<RenderObjectData> render_data) 
	{ 
		select_color_ = vec4(0, 0, 0,0); 
		transformation_ = identity(); 
		render_data_ = render_data; 
	}

	void RenderObject::SetVertexData(boost::shared_ptr<RenderObjectData> render_data)
	{
		render_data_ = render_data;
	}



	boost::shared_ptr<RenderObjectData> RenderObject::GetRenderObjectData()
	{
		return render_data_;
	}

	void RenderObject::Draw(RenderClass *render_device,
		mat4 father_translation,
		DrawMode mode)
	{
		Shader *shader = render_device->GetShader();
		if (shader == NULL)
		{
			return ;
		}
		// 设置变换矩阵
		glUniformMatrix4fv(shader->GetUniformLocation("ModelView"), 
			1, GL_TRUE, father_translation * transformation_);
		render_data_->Bind(render_device);
		FrameInfoStruct frame = render_data_->GetFrameInfo(mode);
		glDrawElements(
			GL_TRIANGLES,
			frame.vertex_num,
			GL_UNSIGNED_SHORT,
			NULL);
	}

	void RenderObject::DrawForSelect(RenderClass *render_device, 
		mat4 father_tanslation)
	{
		Shader *shader = render_device->GetShader();
		if(shader == NULL)
		{
			return;
		}

		// 设置拾取的颜色设置
		glUniform4fv(shader->GetUniformLocation("color"), 1, select_color_); 
		Draw(render_device, father_tanslation, DRAW_NO_UPDATA);
	}

	void RenderObject::SetSelectColor(Color4 select_color)
	{
		select_color_ = select_color;
	}

	Color4 RenderObject::GetSelectColor()
	{
		return select_color_;
	}

	float RenderObject::ComputeZOffset(RenderClass *render_device, mat4 father_translation)
	{
		z_offset_ = (render_device->GetCamera().GetView() * father_translation * transformation_)[2][3];
		return z_offset_;
	}

	float RenderObject::GetZOffset()
	{
		return z_offset_;
	}
	
}	// end namespace AttemptSpacee