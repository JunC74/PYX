#include "GLState.h"
#include "GLViewInterface.h"
#include "ResourceManager.h"

namespace AttemptSpace
{

	GLState::GLState()
		:Object(),
		gl_win_(NULL)
	{
		lighting_manage_ = LightManage::Create();
		SAFRetain(lighting_manage_);
		model_view_stack_ = new MatrixStack();
		model_view_stack_->Push(Identity());
		projection_stack_ = new MatrixStack();
		projection_stack_->Push(Identity());
	}

	GLState::~GLState()
	{
		SAFDelete(gl_win_);
		SAFDelete(model_view_stack_);
		SAFDelete(projection_stack_);
		SAFRelease(lighting_manage_);
		SAFRelease(material_);
		while (!shader_stack_.empty())
		{
			SAFRelease(shader_stack_.top());
			shader_stack_.pop();
		}
		while (!camera_stack_.empty())
		{
			SAFRelease(camera_stack_.top());
			camera_stack_.pop();
		}
	}

	inline
	bool GLState::Init()
	{
		wstr_win_name_ = L"OpenGL Win";
		glClearColor(0.0, 0.0, 0.0, 1.0);
		material_ = Material::Create();
		SAFRetain(material_);
		return true;
	}


	void GLState::SetGLWinView(GLViewInterface *gl_win)
	{
		if (gl_win)
		{
			gl_win_ = gl_win;
			this->SetViewSize(gl_win_->GetViewSize());

			// 初始化OpenGL的相关参数
			glEnable(GL_DEPTH_TEST);
			glEnable(GL_BLEND);
			glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
			glPolygonMode(GL_FRONT, GL_NICEST);

			glPolygonOffset(-1.0f,-1.0f);
			glEnable(GL_POLYGON_OFFSET_FILL);
			
			// 开启背面裁剪
			//glEnable(GL_CULL_FACE);
			//glCullFace(GL_BACK);

			this->ShowOpenGLInfo();
		}
		else
		{
			Log::GetInstance()->Error(L"已经存在 gl_win_ ！");
		}
	}


	void GLState::SetWinName(wstring win_name)
	{
		if (win_name.compare(wstr_win_name_) != 0)
		{
			wstr_win_name_ = win_name;
			if (gl_win_ != NULL)
			{
				gl_win_->SetViewName(wstr_win_name_);
			}
		}
	}

	void GLState::ShowOpenGLInfo()
	{
		//返回负责当前OpenGL实现厂商的名字
		const GLubyte* name = glGetString(GL_VENDOR); 
		Log::GetInstance()->Info("OpenGL Vendor: %s", name);

		//返回一个渲染器标识符，通常是个硬件平台
		const GLubyte* biaoshifu = glGetString(GL_RENDERER); 
		Log::GetInstance()->Info("OpenGL Render: %s", biaoshifu);

		//返回当前OpenGL实现的版本号
		const GLubyte* OpenGLVersion =glGetString(GL_VERSION); 
		Log::GetInstance()->Info("OpenGL Version: %s",OpenGLVersion );

		// 当前使用的分辨率
		Log::GetInstance()->Info("OpenGL View Size: %.0fx%.0f", win_view_size_.width, win_view_size_.height );
		
	}

	void GLState::PushShaderProgram(ShaderProgram *shader)
	{
		if (shader != NULL)
		{
			SAFRetain(shader);
			shader->Bind();
			shader_stack_.push(shader);
		}
	}
	
	void GLState::PopShaderProgram()
	{
		if (!shader_stack_.empty())
		{
			shader_stack_.pop();
			if (!shader_stack_.empty())
			{
				shader_stack_.top()->Bind();
			}
		}
	}

	ShaderProgram* GLState::GetShaderProgram()
	{
		if (!shader_stack_.empty())
		{
			return shader_stack_.top();
		}
		else
		{
			return NULL;
		}
	}

	GLState* GLState::GetInstance()
	{
		if (instance == NULL)
		{
			Log::GetInstance()->Info("Create GLState Instance");
			instance = new GLState();
			instance->Init();
		}
		return instance;
	}

	Size2D GLState::GetViewSize()
	{
		return win_view_size_;
	}

	void GLState::SetViewSize(Size2D view_size)
	{
		if (gl_win_ != NULL && win_view_size_ != view_size)
		{
			win_view_size_ = view_size;
			glViewport(0, 0, win_view_size_.width, win_view_size_.height);
		}
	}

	void GLState::PushCamera(CameraClass *camera)
	{
		if (camera != NULL)
		{
			SAFRetain(camera);
			camera_stack_.push(camera);
		}
	}

	void GLState::PopCamera()
	{
		if (!camera_stack_.empty())
		{
			SAFRelease(camera_stack_.top());
			camera_stack_.pop();
		}
	}

	CameraClass* GLState::GetCamera()
	{
		if (!camera_stack_.empty())
		{
			return camera_stack_.top();
		}
		else
		{
			return NULL;
		}
	}

	void GLState::SetMaterial(Material *material)
	{
		SAFRelease(material_);
		SAFRetain(material);
		material_ = material;
	}

	void GLState::UpdateUniform()
	{
		mat4 projection = projection_stack_->GetTop();
		mat4 model_view = model_view_stack_->GetTop();

		CameraClass *camera_ = GetCamera();
		if (camera_)
		{
			projection = camera_->GetProjectionMatrix() * projection;
			model_view = camera_->GetViewMatrix() * model_view;
		}
		
		mat4 mvp = projection * model_view;

		ShaderProgram * p_shader_program_ = GetShaderProgram();
		assert(p_shader_program_);
		glUniformMatrix4fv( p_shader_program_->GetUniformLocation(Uniform_Matrix_Projection), 
			1, GL_TRUE, 
			projection);

		glUniformMatrix4fv( p_shader_program_->GetUniformLocation(Uniform_Matirx_ModelView), 
			1, GL_TRUE, 
			model_view);

		glUniformMatrix4fv( p_shader_program_->GetUniformLocation(Uniform_Matrix_MVP), 
			1, GL_TRUE, 
			mvp);

		// Bind Material
		glUniform4fv(p_shader_program_->GetUniformLocation(Uniform_Material_Emission),
			1, material_->emmissive);
		glUniform1f(p_shader_program_->GetUniformLocation(Uniform_Material_Shininess),
			material_->shininess);

		// lighting
		lighting_manage_->Bind(material_);
	}
	GLState *GLState::instance = NULL;
} // end namespace AttemptSpace
