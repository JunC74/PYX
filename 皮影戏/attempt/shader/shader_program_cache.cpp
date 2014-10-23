#include "shader_program_cache.h"
#include "cocoa/ResourceManager.h"
#include "cocoa/FileTool.h"

namespace AttemptSpace
{
	ShaderProgramCache *ShaderProgramCache::instance_ = NULL;

	ShaderProgramCache::ShaderProgramCache()
		:Object()
	{
		LoadDefineShader();
	}

	ShaderProgramCache::~ShaderProgramCache()
	{
		for (ShaderMap::iterator it = shader_program_data_.begin();
			it != shader_program_data_.end(); it++)
		{
			SAFRelease(it->second);
		}
	}

	ShaderProgramCache* ShaderProgramCache::GetInstance()
	{
		if (instance_ == NULL)
		{
			instance_ = new ShaderProgramCache();
		}
		return instance_;
	}

	ShaderProgram* ShaderProgramCache::LoadShaderProgram(const char* file_name)
	{
		return LoadShaderProgram(file_name, file_name, file_name);
	}

	ShaderProgram* ShaderProgramCache::LoadShaderProgram(const char* shader_name, 
		const char *vertex_shader,
		const char *face_shader)
	{
		if (vertex_shader == NULL || 
			face_shader == NULL ||
			shader_name == NULL)
		{
			return NULL;
		}

		string vert = vertex_shader;
		vert += ".vert";
		string frag = face_shader;
		frag += ".frag";
		GLuint program = LoadShader(vert.c_str(), frag.c_str());
		if (program == -1)
		{
			program = LoadShader(vertex_shader, face_shader);
		}

		ShaderProgram *shader = ShaderProgram::Create(program, shader_name);

		if (shader == NULL)
		{
			return NULL;
		}
		AddShader(shader);

		vector<PairIntString> attribute_vector;
		attribute_vector.push_back(make_pair(Attribute_Position4, "vPosition4"));
		attribute_vector.push_back(make_pair(Attribute_Position3, "vPosition3"));
		attribute_vector.push_back(make_pair(Attribute_Color4, "vColor"));
		attribute_vector.push_back(make_pair(Attribute_TexCoord2, "vTexCoord"));
		attribute_vector.push_back(make_pair(Attribute_Normal, "vNormal"));

		vector<PairIntString> uniform_vector;
		uniform_vector.push_back(make_pair(Uniform_Matirx_ModelView, "ModelViewMatrix"));
		uniform_vector.push_back(make_pair(Uniform_Matrix_Projection, "ProjectionMatrix"));
		uniform_vector.push_back(make_pair(Uniform_Matrix_MVP, "MVPMatrix"));

		// Light
		uniform_vector.push_back(make_pair(Uniform_LightPosition, "LightPosition"));
		uniform_vector.push_back(make_pair(Uniform_LightPower, "LightOn"));
		uniform_vector.push_back(make_pair(Uniform_Attenuation, "Attenuation"));
		uniform_vector.push_back(make_pair(Uniform_AmbientProduct, "AmbientProduct"));
		uniform_vector.push_back(make_pair(Uniform_DiffuseProduct, "DiffuseProduct"));
		uniform_vector.push_back(make_pair(Uniform_SpecularProduct, "SpecularProduct"));
		uniform_vector.push_back(make_pair(Uniform_LightDirection, "LightDirection"));
		uniform_vector.push_back(make_pair(Uniform_SpotTheta, "SpotTheta"));
		uniform_vector.push_back(make_pair(Uniform_SpotPhi, "SpotPhi"));

		// Material
		uniform_vector.push_back(make_pair(Uniform_Material_Shininess, "Shininess"));
		uniform_vector.push_back(make_pair(Uniform_Material_Emission, "Emission"));

		shader->SetAttribute(attribute_vector);
		shader->SetUniform(uniform_vector);
		return shader;

	}
	ShaderProgram* ShaderProgramCache::GetShaderForKey(const char *key)
	{
		string skey = key;
		ShaderMap::iterator it = shader_program_data_.find(skey);
		if (it != shader_program_data_.end())
		{
			return it->second;
		}
		else
		{
			return NULL;
		}
	}

	void ShaderProgramCache::AddShader(ShaderProgram* shader)
	{
		string skey = shader->GetShaderName();
		ShaderMap::iterator it = shader_program_data_.find(skey);
		if (it != shader_program_data_.end())
		{
			return ;
		}
		else
		{
			shader_program_data_[skey] = shader;
			SAFRetain(shader);
		}
	}

	void ShaderProgramCache::LoadDefineShader()
	{
		// position.vert position.frag
		ShaderProgram *position = this->LoadShaderProgram(DefShader[ShaderType_Position]);
		assert(position != NULL);
		this->AddShader(position);

		// position_color.vert position_color.frag
		ShaderProgram *position_color = this->LoadShaderProgram(DefShader[ShaderType_Position_Color]);
		assert(position_color != NULL);
		this->AddShader(position_color);

		// position_tex.vert position_tex.frag
		ShaderProgram *position_tex = this->LoadShaderProgram(DefShader[ShaderType_Position_Tex]);
		assert(position_tex != NULL);
		this->AddShader(position_tex);

		// phone.vert phone.frag
		ShaderProgram *phone = this->LoadShaderProgram(DefShader[ShaderType_Phone]);
		assert(phone != NULL);
		// 设置光源信息
		phone->SetLightNum(LIGHT_Point, 1);
		this->AddShader(phone);

	}

	char* ShaderProgramCache::ReadShaderSource(const char* shaderFile)
	{
		FILE* fp = FileTool::GetInstance()->OpenFile(shaderFile); // 以只读方式打开文件

		if ( fp == NULL ) { return NULL; } 

		fseek(fp, 0L, SEEK_END); // 将文件指针移到文件尾
		long size = ftell(fp);   // 返回当前文件指针位置，此时对应文件长度

		fseek(fp, 0L, SEEK_SET); // 将文件指针移到文件头
		char* buf = new char[size + 1]; // 根据size创建buffer，+1是为了留位置给'\0'
		memset(buf, 0, size+1);	 // 清空buf
		fread(buf, 1, size, fp); // 将文件内容一次全部读出

		buf[size] = '\0'; // 最后为空字符
		fclose(fp);		  // 关闭文件

		return buf;		  // 返回读取到的字符串
	}



	//  加载shader文件
	int ShaderProgramCache::LoadShader(const char *vertex_shader_file_nanme,  const char *face_shader_file_name)
	{
		struct ShaderSource {
			const char*  filename; // shader文件名
			GLenum       type;     // shader类型
			GLchar*      source;   // shader程序字符串
		} shaders[2] = {
			{ vertex_shader_file_nanme, GL_VERTEX_SHADER, NULL },
			{ face_shader_file_name, GL_FRAGMENT_SHADER, NULL }
		}; // 定义ShaderProgram结构体数组shaders

		GLuint program = glCreateProgram(); // 创建shader程序对象，返回其ID

		for ( int i = 0; i < 2; ++i ) 
		{ 
			// 分别对顶点shader和片元shader进程处理
			ShaderSource& s = shaders[i];		// s是shader[i]的引用
			s.source = ReadShaderSource( s.filename ); // 从文件读取程序内容(字符串)
			if ( s.source == NULL ) 
			{ 
				// 读取失败？
				Log::GetInstance()->Error(L"Failed to read %s", s.filename);
				return 0; // DEFINE_ERR
			}

			// 创建shader对象，参数为shader类型(GL_VERTEX_SHADER或GL_FRAGMENT_SHADER)，返回shader对象ID
			GLuint shader = glCreateShader( s.type ); 
			// 为shader对象指定shader源码
			glShaderSource( shader,	// shader对象ID 
				1,		// 参数3中含有的字符串个数
				(const GLchar**) &s.source, // 含有源码的字符串数组
				NULL	// 字符串长度数组(成员为参数3中各字符串长度)，为NULL表示各字符串均以NULL结束)
				);
			glCompileShader( shader ); // 编译shader程序

			GLint  compiled;
			// 获取编译状态信息
			glGetShaderiv( shader,	// shader对象ID
				GL_COMPILE_STATUS,  // 表明获取的是编译状态信息
				&compiled			// 输出参数，用于存储信息(这里可能返回GL_TRUE或GL_FALSE)
				);
			if ( !compiled ) 
			{		


				// 输出错误信息
				GLint  logSize;
				glGetShaderiv( shader, GL_INFO_LOG_LENGTH, &logSize ); // 获取错误信息的长度
				char* logMsg = new char[logSize];  // 根据信息长度创建buffer
				// 获取错误信息
				glGetShaderInfoLog( shader, // shader对象ID
					logSize,	// 用于存储信息的buffer(这里即logMsg)的大小
					NULL,       // 输出参数，存储获取到的信息长度的变量指针
					logMsg      // 用于保存信息的字符buffer
					); 
				// 如果编译失败
				Log::GetInstance()->Error("%s failed to compile: %s", s.filename, logMsg); 
				delete [] logMsg;
				return 0; // DEFINE_ERR
			}

			delete [] s.source;

			glAttachShader( program, shader ); // 将shader对象与program对象关联起来
			glDeleteShader(shader);	// 删除着色器
		}

		/* 链接并检查错误信息 */
		glLinkProgram(program);	// 链接shader程序

		GLint  linked;
		glGetProgramiv( program, GL_LINK_STATUS, &linked ); // 获取链接信息，参数含义和glGetShaderiv类似
		if ( !linked ) {	// 链接失败？


			GLint  logSize;
			glGetProgramiv( program, GL_INFO_LOG_LENGTH, &logSize);	// 获取链接信息的长度
			char* logMsg = new char[logSize];
			glGetProgramInfoLog( program, logSize, NULL, logMsg );	// 获取链接信息
			Log::GetInstance()->Error("ShaderProgram program failed to link: %s", logMsg);
			delete [] logMsg;
			return 0; // DEFINE_ERR
		}
		return program;
	}
}	// end namespace AttemptSpace