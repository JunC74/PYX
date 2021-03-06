#include "model.h"
#include "cocoa/ResourceManager.h"


namespace AttemptSpace
{
	Model::Model()
		:Object(),
		aabb()
	{
		vao_ = -1;
		vertex_attribute_buffer_ = -1;
		index_buffer_ = -1;
		vertex_fomat_ = 0;
		vertex_num_ = 0;
		material_ = Material::Create();
		texture_ = NULL;
		time_long_ = 0;
		SAFRetain(material_);
	}

	Model::~Model()
	{
		glDeleteVertexArrays(1, &vao_);
		glDeleteBuffers(1, &vertex_attribute_buffer_);
		glDeleteBuffers(1, &index_buffer_);

		SAFRelease(texture_);
		SAFRelease(material_);
	}

	void Model::SetIndex(void *index, int index_count)
	{

		GLuint index_buffer;
		glGenBuffers(1, &index_buffer);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, index_buffer);
		glBufferData(GL_ELEMENT_ARRAY_BUFFER,
			index_count * sizeof(GLuint),		// 使用的是GLuint
			index,
			GL_STATIC_DRAW);
		if (index_buffer_ != -1)
		{
			glDeleteBuffers(1, &index_buffer_);
			index_buffer_ = -1;
		}
		index_buffer_ = index_buffer;
		index_size_ = index_count;
		glEnable(GL_INDEX_ARRAY);
	}

	void Model::SetVertexData(
		void *data,
		int data_size,
		int count)
	{
		if (vao_ != -1)
		{
			glDeleteVertexArrays(1, &vao_);
		}
		glGenVertexArrays(1, &vao_);
		glBindVertexArray(vao_);

		// 申请并绑定顶点数据缓冲区
		if (vertex_attribute_buffer_ != -1)
		{
			glDeleteBuffers(1, &vertex_attribute_buffer_);
			vertex_attribute_buffer_ =-1;
		}

 		glGenBuffers(1, &vertex_attribute_buffer_);
		glBindBuffer(GL_ARRAY_BUFFER, vertex_attribute_buffer_);
		glBufferData(GL_ARRAY_BUFFER,
			data_size,
			data,
			GL_STATIC_DRAW);
		vertex_num_ = count;
	}

	void Model::SetVertexFomat(VertexFomat vertex_fomat)
	{
		vertex_size_ = GetVertexFomatSize(vertex_fomat);
		vertex_fomat_ = vertex_fomat;

	}

	int Model::SetTexture(Texture2D *tex)
	{
		if (tex != NULL && tex != texture_)
		{
			SAFRelease(texture_);
			SAFRetain(tex);
			texture_ = tex;
		}
		return AT_OK;
	}


	void Model::SetMaterial(Material *material)
	{
		if (material_ != material)
		{
			SAFRelease(material_);
			SAFRetain(material);
			material_ = material;
		}
		
	}


	AttemptERR Model::BindData()
	{
		ShaderProgram *shader = GLState::GetInstance()->GetShaderProgram();

		if(shader == NULL)
		{
			return AT_FAIL;
		}

		if (vao_ != -1)
		{
			glBindVertexArray(vao_);
			// [bug] 为什么需要重新绑定才可以的 
			glBindBuffer(GL_ARRAY_BUFFER, vertex_attribute_buffer_);
			
			// 如果shader没有发生改变则不需要重新绑定
			if (shader)
			{
				int offset = 0;	// 记录当前的偏移值

				// 设置顶点的坐标属性
				if(vertex_fomat_ & FVF_XYZW)
				{
					GLuint location = shader->GetAttributeLocation(Attribute_Position4);
					glEnableVertexAttribArray(location);
					glVertexAttribPointer(
						location,				
						4,
						GL_FLOAT,
						GL_FALSE,
						vertex_size_,
						BUFFER_OFFSET(offset)
						);
					offset += sizeof(vec4);
				}
				else if (vertex_fomat_ & FVF_XYZ)
				{
					GLuint location = shader->GetAttributeLocation(Attribute_Position3);
					glEnableVertexAttribArray(location);
					glVertexAttribPointer(
						location,				
						3,
						GL_FLOAT,
						GL_FALSE,
						vertex_size_,
						BUFFER_OFFSET(offset)
						);
					offset += sizeof(vec3);
				}

				// 设置顶点的法线属性
				if(vertex_fomat_ & FVF_NORMAL)
				{
					GLuint location = shader->GetAttributeLocation(Attribute_Normal);
					glEnableVertexAttribArray(location);
					glVertexAttribPointer(
						location,
						3,
						GL_FLOAT,
						GL_FALSE,
						vertex_size_,
						BUFFER_OFFSET(offset)
						);
					offset += sizeof(vec3);
				}

				// 设置顶点的颜色属性
				if(vertex_fomat_ & FVF_RGBA)
				{
					GLuint location = shader->GetAttributeLocation(Attribute_Color4);
					glEnableVertexAttribArray(location);
					glVertexAttribPointer(
						location,
						4,
						GL_FLOAT,
						GL_FALSE,
						vertex_size_,
						BUFFER_OFFSET(offset)
						);
					offset += sizeof(Color4f);
				}

				if (vertex_fomat_ & FVF_TEX)
				{
					GLuint location = shader->GetAttributeLocation(Attribute_TexCoord2);
					glEnableVertexAttribArray(location);
					glVertexAttribPointer(
						location,
						2,
						GL_FLOAT,
						GL_FALSE,
						vertex_size_,
						BUFFER_OFFSET(offset)
						);
					offset += sizeof(vec2);
				}
				shader_ = shader;
			}

		}

		
		// 设置材质属性
		GLState::GetInstance()->SetMaterial(material_);

		// 绑定纹理
		if (texture_ != NULL)
		{
			// 绑定纹理
			GLuint tex_location = shader->GetUniformLocation(Uniform_Tex);
			glUniform1i(tex_location, 0);
			glBindTexture(GL_TEXTURE_2D, texture_->GetTexHandle());
		}

		// 更新光照,材质变换矩阵等Uniform变量
		GLState::GetInstance()->UpdateUniform();

 		return AT_OK;
	}
	

	// 绑定数据并且渲染
	AttemptERR Model::Draw(float f_delta)
	{
		// 绑定渲染的数据
		assert(BindData() == AT_OK);

		// 渲染函数
		if (index_buffer_ != -1)
		{
			glEnable(GL_INDEX_ARRAY);
			glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, index_buffer_);
			glDrawElements(GL_TRIANGLES, index_size_, GL_UNSIGNED_INT, NULL);
		}
		else
		{
			glDisable(GL_INDEX_ARRAY);
			glDrawArrays(GL_TRIANGLES, 0, vertex_num_);
		}
		return AT_OK;
	}




	int Model::GetVertexFomatSize(VertexFomat fomat)
	{
		int fomat_size = 0;
		if (fomat & FVF_XYZ)
		{
			fomat_size += sizeof(vec3);
		}
		else if(fomat & FVF_XYZW)
		{
			fomat_size += sizeof(vec4);
		}

		if (fomat & FVF_NORMAL)
		{
			fomat_size += sizeof(vec3);
		}

		if(fomat & FVF_RGB)
		{
			fomat_size += sizeof(Color3f);
		}
		else if (fomat & FVF_RGBA)
		{
			fomat_size += sizeof(Color4f);
		}

		if (fomat & FVF_TEX)
		{
			fomat_size += sizeof(vec2);
		}
		if (fomat & FVF_TEX1)
		{
			fomat_size += sizeof(vec2);
		}
		if (fomat & FVF_TEX2)
		{
			fomat_size += sizeof(vec2);
		}
		if (fomat & FVF_TEX3)
		{
			fomat_size += sizeof(vec2);
		}
		return fomat_size;
	}

} // end namespace AttemptSpace
