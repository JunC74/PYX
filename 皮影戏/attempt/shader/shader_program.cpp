#include "shader_program.h"

namespace AttemptSpace
{
	ShaderProgram::ShaderProgram():Object()
	{
		shader_program_ = -1;
		memset(lighting_num_, 0, sizeof(lighting_num_));
	}

	ShaderProgram::~ShaderProgram()
	{
		if (shader_program_ != -1)
		{
			glDeleteProgram(shader_program_);
		}
	}


	int ShaderProgram::Bind()
	{
		// 绑定当前的着色器 
		glUseProgram(shader_program_);
		return 0;
	}

	void ShaderProgram::SetAttribute(std::vector<PairIntString> attribute_vec)
	{
		for (std::vector<PairIntString>::iterator it = attribute_vec.begin(); 
			it != attribute_vec.end(); 
			it++)
		{
			// 排除重复的索引
			SetAttribute((AttributeType)it->first, it->second.c_str());
		}
	}

	void ShaderProgram::SetAttribute(AttributeType value_type, const char *value_name)
	{
		AttributeIterator it = attribute_map_.find(value_type);
		if (value_name == NULL || 
			it != attribute_map_.end() && it->second != -1)
		{
			return ;
		}
		attribute_map_[value_type] = glGetAttribLocation(shader_program_, value_name);
	}

	void ShaderProgram::SetUniform(std::vector<PairIntString> uniform_vec)
	{
		for (std::vector<PairIntString>::iterator it = uniform_vec.begin();
			it != uniform_vec.end();
			it++)
		{
			SetUniform((UniformType)it->first, it->second.c_str());
		}
	}

	void ShaderProgram::SetUniform(UniformType value_type, const char *value_name)
	{
		UniformIterator it = uniform_map_.find(value_type);
		if (value_name == NULL || 
			it != uniform_map_.end() && it->second != -1)
		{
			return ;
		}
		uniform_map_[value_type] = glGetUniformLocation(shader_program_, value_name);
	}

	ShaderProgram* ShaderProgram::Create(GLuint shader, const char* shader_name)
	{
		ShaderProgram *program = new ShaderProgram();
		
		if(program && shader != -1)
		{
			program->shader_program_ = shader;
			program->shader_name_ = shader_name;
			program->AutoRelease();
			return program;
		}
		SAFRelease(program);
		return NULL;
	}

	// 获取统一变量的位置
	GLuint ShaderProgram::GetUniformLocation(UniformType type)
	{
		if (uniform_map_.find(type) != uniform_map_.end())
		{
			return uniform_map_[type];
		}
		else
		{
			return -1;
		}
	}

	// 获取顶点的属性值得位置
	GLuint ShaderProgram::GetAttributeLocation(AttributeType type)
	{
		if (attribute_map_.find(type) != attribute_map_.end())
		{
			return attribute_map_[type];
		}
		else
		{
			return -1;
		}
	}



}	// end namespace AttemptSpacee