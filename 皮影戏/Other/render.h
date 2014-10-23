#ifndef __RENDER_H__
#define __RENDER_H__

#include "shader_program.h"

namespace AttemptSpace
{
	/*

	*/
	typedef GLuint FrameBuffer;

	class RenderClass
	{
	private:
		HWND hwnd_;
		HINSTANCE hinstance_;
		HDC  hdc;
		HGLRC hrc;

		FrameBuffer back_frame_buffer;
		FrameBuffer now_frame_buffer;

		bool full;  //是否全屏

		WNDPROC window_sun_proc_; // 回调函数的函数指针

		int width_;
		int height_;
		
	public:

		RenderClass();

		RenderClass(HWND hwnd);

		~RenderClass();

		//////////////////////////////////////////////////////////////////////////
		// 资源的处理（创建，绑定和销毁）
		//////////////////////////////////////////////////////////////////////////
		
		// 创建Render环境
		// 参数：
		//		window_name -- 窗口的名称
		//		width -- 窗口的宽
		//		hight -- 窗口的高
		int CreaterRender(const wchar_t *windows_name);
		
		//  删除窗口
		void KillGLWindow();

		//////////////////////////////////////////////////////////////////////////
		// 状态的设置
		//////////////////////////////////////////////////////////////////////////
		// 设置摄像机
		int SetCamera(CameraClass camera);

		//  获取相机对象
		CameraClass GetCamera();

		// 设置渲染对象
		int SetRenderTarget(FrameBuffer target);

		//  获取渲染目标
		int GetRenderTaget(FrameBuffer &frame);

		//  交换帧缓冲区
		int SwapFrameBuffer();

		//  改变窗口的大小
		int ChangeWindowSize(int width, int hight);

		//  设置窗口过程函数
		int SetWNDPROC(WNDPROC wndproc);

		//  设在窗口是否全屏
		void SetFullWindow(bool mode);

		// 设置实例句柄
		void SetHINSTANCE(HINSTANCE hinstance);

		//  清屏
		void ClearWindows();

		// 设置当前的shader
		int SetShader(Shader* shader_ptr);
		
		// 获取当前的shader
		Shader* GetShader();
	};
}	// end namespace AttemptSpacee
#endif