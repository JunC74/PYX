#include "render_object_data.h"
#include "render.h"
#include "texture.h"

namespace AttemptSpace
{
	RenderObjectData::RenderObjectData()
	{
		vao_ = 0;
		vertex_attribute_buffer_ = 0;
		now_frame_id_ = 0;
		vertex_fomat_ = 0;
	}

	RenderObjectData::~RenderObjectData()
	{
		Free();
	}

	void RenderObjectData::Free()
	{
		glDeleteVertexArrays(1, &vao_);
		vao_ = 0;
		glDeleteBuffers(1, &vertex_attribute_buffer_);
		vertex_attribute_buffer_ = 0;
		tex_.reset();
		for (int i = 0; i < frame_info_.size(); i++)
		{
			glDeleteBuffers(1, &frame_info_.at(i).index_buffer);
		}
	}

	void RenderObjectData::SetVertexData(void *data,
		int data_size,
		VERTEXFOMAT vertex_fromat)
	{
		// 申请顶点数组并绑定
		if (vao_ == 0)
		{
			glGenVertexArrays(1, &vao_);	// 申请顶点数组
		}
		glBindVertexArray(vao_);	// 绑定顶点数组

		// 申请并绑定顶点数据缓冲区
		if (vertex_attribute_buffer_ != 0)
		{
			glDeleteBuffers(1, &vertex_attribute_buffer_);
			vertex_attribute_buffer_ = 0;
		}
		glGenBuffers(1, &vertex_attribute_buffer_);
		glBindBuffer(GL_ARRAY_BUFFER, vertex_attribute_buffer_);
		glBufferData(GL_ARRAY_BUFFER,
			data_size,
			data,
			GL_STATIC_DRAW);
		vertex_size_ = GetVertexFomatSize(vertex_fromat);
	}

	GLuint RenderObjectData::GetVao()
	{
		return vao_;
	}

	int RenderObjectData::SetTexData(std::wstring texture_name)
	{
		boost::shared_ptr<Texture> tex(new Texture(texture_name));
		if(tex->GetResID() == 0)
		{
			return -1;
		}
		tex_ = tex;
		return 0;
	}

	GLuint RenderObjectData::GetTexBuffer()
	{
		return tex_->GetResID();
	}

	FrameInfoStruct RenderObjectData::GetFrameInfo(DrawMode mode)
	{
		FrameInfoStruct frame_info = frame_info_[now_frame_id_];
		if (mode == DRAW_UPDATA)
		{
			now_frame_id_++;
			if (now_frame_id_ >= frame_info_.size())
			{
				now_frame_id_ = 0;
			}
		}
		return frame_info;
	}

	void RenderObjectData::AddFrame(unsigned short *index, int index_size)
	{
		FrameInfoStruct frame_info;
		frame_info.vertex_num = index_size;
		glGenBuffers(1, &frame_info.index_buffer);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, frame_info.index_buffer);
		glBufferData(GL_ELEMENT_ARRAY_BUFFER,
			sizeof(short) * index_size,
			index,
			GL_STATIC_DRAW);
		frame_info_.push_back(frame_info);
	}

	void RenderObjectData::SetMaterial(Material material)
	{
		material_ = material;
	}

	Material RenderObjectData::GetMaterial()
	{
		return material_;
	}

	AttemptERR RenderObjectData::Bind(RenderClass *render_device)
	{
		Shader* shader = render_device->GetShader();
		if(shader == NULL)
		{
			return AT_SHADER_NULL;
		}
		
		glBindVertexArray(vao_);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 
			frame_info_.at(now_frame_id_).index_buffer);

		int offset = 0;	// 记录当前的偏移值

		// 设置顶点的坐标属性
		if(vertex_fomat_ & VF_XYZ)
		{
			glEnableVertexAttribArray(shader->GetAttribLocation("vPosition"));
			glVertexAttribPointer(
				shader->GetAttribLocation("vPosition"),
				3,
				GL_FLOAT,
				GL_FALSE,
				vertex_size_,
				BUFFER_OFFSET(offset)
				);
			offset += sizeof(vec3);
		}

		// 设置顶点的法线属性
		if(vertex_fomat_ & VF_NORMAL)
		{
			glEnableVertexAttribArray(shader->GetAttribLocation("vNormal"));
			glVertexAttribPointer(
				shader->GetAttribLocation("vNormal"),
				3,
				GL_FLOAT,
				GL_FALSE,
				vertex_size_,
				BUFFER_OFFSET(offset)
				);
			offset += sizeof(vec3);
		}

		// 设置顶点的颜色属性
		if(vertex_fomat_ & VF_COLOR)
		{
			glEnableVertexAttribArray(shader->GetAttribLocation("vColor"));
			glVertexAttribPointer(
				shader->GetAttribLocation("vColor"),
				4,
				GL_FLOAT,
				GL_FALSE,
				vertex_size_,
				BUFFER_OFFSET(offset)
				);
			offset += sizeof(vec4);
		}

		// 设置顶点的纹理坐标属性
		if(vertex_fomat_ & VF_TEX)
		{
			glEnableVertexAttribArray(shader->GetAttribLocation("vTexCoord"));
			glVertexAttribPointer(
				shader->GetAttribLocation("vTexCoord"),
				2,
				GL_FLOAT,
				GL_FALSE,
				vertex_size_,
				BUFFER_OFFSET(offset)
				);
			offset += sizeof(vec2);
		}
		return AT_OK;
	}

} // end namespace AttemptSpace
