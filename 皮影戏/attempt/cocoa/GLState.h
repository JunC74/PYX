#ifndef __gl_state_h__
#define __gl_state_h__

#include "at_prefix.h"
#include "shader/shader_program_cache.h"
#include "Render/camera_class.h"
#include "Render/light_manage.h"
#include "GLViewInterface.h"
#include "Object.h"
#include "Render/material.h"
#include "MatrixStack.h"

namespace AttemptSpace
{

	class GLState : public Object
	{
	public:

		static GLState* GetInstance();

		bool Init();

		virtual ~GLState();

		void SetGLWinView(GLViewInterface *gl_win);

		void SetWinName(wstring win_name);

		Size2D GetViewSize();

		void SetViewSize(Size2D view_size);

		// 显示opengl的信息
		void ShowOpenGLInfo();

		// 获取光源管理器
		LightManage* GetLightManage() { return lighting_manage_; };

		// 获取投影矩阵栈
		inline
		MatrixStack* GetProjectionStack() { return projection_stack_; };

		// 获取变换矩阵
		inline
		MatrixStack* GetModelViewStack() { return model_view_stack_; };

		// Shader设置
		void PushShaderProgram(ShaderProgram *shader);
		void PopShaderProgram();
		ShaderProgram* GetShaderProgram();

		// Camera 设置
		void PushCamera(CameraClass *camera);
		void PopCamera();
		CameraClass* GetCamera();

		void SetMaterial(Material *material);

		// 更新系统定义的Uniorm变量
		void UpdateUniform();


	protected:
	private:
		static GLState *instance;
		wstring wstr_win_name_;	// 窗口的名字
		GLViewInterface *gl_win_;
		Size2D win_view_size_;

		stack<ShaderProgram *> shader_stack_;

		stack<CameraClass *> camera_stack_;

		Material *material_;
		LightManage *lighting_manage_;

		MatrixStack *projection_stack_, *model_view_stack_;

		GLState();
	};
}	// end namespace AttemptSpace
#endif
