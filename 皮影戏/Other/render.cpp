// 
// --- Include system headers ---
//

#include <cmath>	 // 包含C++数学库
#include <iostream>  // 包含C++标准输入输出库

//----------------------------------------------------------------------------
//
// --- Include OpenGL header files and helpers ---
//
//   The location of these files vary by operating system.  We've included
//     copies of open-soruce project headers in the "GL" directory local
//     this this "include" directory.
//

// #  include <GL/glew.h>
// #pragma comment (lib, "glew32.lib")		
// #pragma comment (lib, "opengl32.lib") // link Microsoft OpenGL lib   

//----------------------------------------------------------------------------
//
//  --- Include our class libraries and constants ---
//
#include "attempt/Render/render.h"

namespace AttemptSpace
{

	RenderClass::RenderClass()
	{

	}

	RenderClass::RenderClass(HWND hwnd)
	{

	}

	RenderClass::~RenderClass()
	{
		//KillGLWindow();
	}

	// 创建Render环境
	int RenderClass::CreaterRender(const wchar_t *windows_name)
	{

		GLuint		PixelFormat;						// 保存查找匹配的结果
		WNDCLASS	wc;							// 窗口类结构
		DWORD		dwExStyle;						// 扩展窗口风格
		DWORD		dwStyle;						// 窗口风格

		RECT WindowRect;							// 取得矩形的左上角和右下角的坐标值
		WindowRect.left=(long)0;						// 将Left   设为 0
		WindowRect.right=(long)width_;						// 将Right  设为要求的宽度
		WindowRect.top=(long)0;							// 将Top    设为 0
		WindowRect.bottom=(long)height_;						// 将Bottom 设为要求的高度


		hinstance_		= GetModuleHandle(NULL);			// 取得我们窗口的实例
		wc.style		= CS_HREDRAW | CS_VREDRAW | CS_OWNDC;		// 移动时重画，并为窗口取得DC
		wc.lpfnWndProc		= (WNDPROC) window_sun_proc_;				// WndProc处理消息
		wc.cbClsExtra		= 0;						// 无额外窗口数据
		wc.cbWndExtra		= 0;						// 无额外窗口数据
		wc.hInstance		= hinstance_;					// 设置实例
		wc.hIcon		= LoadIcon(NULL, IDI_WINLOGO);			// 装入缺省图标
		wc.hCursor		= LoadCursor(NULL, IDC_ARROW);			// 装入鼠标指针
		wc.hbrBackground	= NULL;						// GL不需要背景
		wc.lpszMenuName		= NULL;						// 不需要菜单
		wc.lpszClassName	= L"OpenGL";					// 设定类名字

		if (!RegisterClass(&wc))						// 尝试注册窗口类
		{
			MessageBox(NULL,L"注册窗口失败",L"错误",MB_OK|MB_ICONEXCLAMATION);
			return FALSE;							// 退出并返回FALSE
		}
		if (full)								// 要尝试全屏模式吗?
		{
			DEVMODE dmScreenSettings;						// 设备模式
			memset(&dmScreenSettings,0,sizeof(dmScreenSettings));			// 确保内存清空为零
			dmScreenSettings.dmSize=sizeof(dmScreenSettings);			// Devmode 结构的大小
			dmScreenSettings.dmPelsWidth	= width_;				// 所选屏幕宽度
			dmScreenSettings.dmPelsHeight	= height_;				// 所选屏幕高度
			dmScreenSettings.dmBitsPerPel	= 32;					// 每象素所选的色彩深度
			dmScreenSettings.dmFields=DM_BITSPERPEL|DM_PELSWIDTH|DM_PELSHEIGHT;
			// 尝试设置显示模式并返回结果。注: CDS_FULLSCREEN 移去了状态条。
			if (ChangeDisplaySettings(&dmScreenSettings,CDS_FULLSCREEN)!=DISP_CHANGE_SUCCESSFUL)
			{
				// 若模式失败，提供两个选项：退出或在窗口内运行。
				if (MessageBox(NULL,L"全屏模式在当前显卡上设置失败！\n使用窗口模式？",L" G",MB_YESNO|MB_ICONEXCLAMATION)==IDYES)
				{
					full=FALSE;				// 选择窗口模式(Fullscreen=FALSE)
				}
				else
				{
					// 弹出一个对话框，告诉用户程序结束
					MessageBox(NULL,L"程序将被关闭",L"错误",MB_OK|MB_ICONSTOP);
					return FALSE;					//  退出并返回 FALSE
				}
			}
		}
		if (full)								// 仍处于全屏模式吗?
		{
			dwExStyle=WS_EX_APPWINDOW;					// 扩展窗体风格
			dwStyle=WS_POPUP;						// 窗体风格
			ShowCursor(FALSE);						// 隐藏鼠标指针
		}
		else
		{
			dwExStyle=WS_EX_APPWINDOW | WS_EX_WINDOWEDGE;			// 扩展窗体风格
			dwStyle=WS_OVERLAPPEDWINDOW;					//  窗体风格
		}
		AdjustWindowRectEx(&WindowRect, dwStyle, FALSE, dwExStyle);		// 调整窗口达到真正要求的大小

		if (!(hwnd_=CreateWindowEx(	dwExStyle,				// 扩展窗体风格
			L"OpenGL",				// 类名字
			windows_name,			// 窗口标题
			WS_CLIPSIBLINGS |		// 必须的窗体风格属性
			WS_CLIPCHILDREN |		// 必须的窗体风格属性
			dwStyle,				// 选择的窗体属性
			0, 0,					// 窗口位置
			WindowRect.right-WindowRect.left,	// 计算调整好的窗口宽度
			WindowRect.bottom-WindowRect.top,	// 计算调整好的窗口高度
			NULL,					// 无父窗口
			NULL,					// 无菜单
			hinstance_,				// 实例
			NULL)))					// 不向WM_CREATE传递任何东东
		{
			KillGLWindow();							// 重置显示区
			MessageBox(NULL,L"不能创建一个窗口设备描述表",L"错误",MB_OK|MB_ICONEXCLAMATION);
			return FALSE;							// 返回 FALSE
		}
		static	PIXELFORMATDESCRIPTOR pfd=					// /pfd 告诉窗口我们所希望的东东，即窗口使用的像素格式
		{
			sizeof(PIXELFORMATDESCRIPTOR),					// 上述格式描述符的大小
			1,								// 版本号
			PFD_DRAW_TO_WINDOW |						// 格式支持窗口
			PFD_SUPPORT_OPENGL |						// 格式必须支持OpenGL
			PFD_DOUBLEBUFFER,						// 必须支持双缓冲
			PFD_TYPE_RGBA,							// 申请 RGBA 格式
			32,								// 选定色彩深度
			0, 0, 0, 0, 0, 0,						// 忽略的色彩位
			0,								// 无Alpha缓存
			0,								// 忽略Shift Bit
			0,								// 无累加缓存
			0, 0, 0, 0,							// 忽略聚集位
			16,								// 16位 Z-缓存 (深度缓存)
			0,								// 无蒙板缓存
			0,								// 无辅助缓存
			PFD_MAIN_PLANE,							// 主绘图层
			0,								// Reserved
			0, 0, 0								// 忽略层遮罩
		};
		if (!(hdc=GetDC(hwnd_)))							// 取得设备描述表了么?
		{
			KillGLWindow();							// 重置显示区
			MessageBox(NULL,L"不能创建一种相匹配的像素格式",L"错误",MB_OK|MB_ICONEXCLAMATION);
			return FALSE;							// 返回 FALSE
		}
		if (!(PixelFormat=ChoosePixelFormat(hdc,&pfd)))				// Windows 找到相应的象素格式了吗?
		{
			KillGLWindow();							// 重置显示区
			MessageBox(NULL,L"不能设置像素格式",L"错误",MB_OK|MB_ICONEXCLAMATION);
			return FALSE;							// 返回 FALSE
		}
		if(!SetPixelFormat(hdc,PixelFormat,&pfd))				// 能够设置象素格式么?
		{
			KillGLWindow();							// 重置显示区
			MessageBox(NULL,L"不能设置像素格式",L"错误",MB_OK|MB_ICONEXCLAMATION);
			return FALSE;							// 返回 FALSE
		}
		if (!(hrc=wglCreateContext(hdc)))					// 能否取得着色描述表?
		{
			KillGLWindow();							// 重置显示区
			MessageBox(NULL,L"不能创建OpenGL渲染描述表",L"错误",MB_OK|MB_ICONEXCLAMATION);
			return FALSE;							// 返回 FALSE
		}
		if(!wglMakeCurrent(hdc,hrc))						// 尝试激活着色描述表
		{
			KillGLWindow();							// 重置显示区
			MessageBox(NULL,L"不能激活当前的OpenGL渲然描述表",L"错误",MB_OK|MB_ICONEXCLAMATION);
			return FALSE;							// 返回 FALSE
		}
		ShowWindow(hwnd_,SW_SHOW);						// 显示窗口
		SetForegroundWindow(hwnd_);						// 略略提高优先级
		SetFocus(hwnd_);								// 设置键盘的焦点至此窗口
		ChangeWindowSize(width_, height_);						// 设置透视 GL 屏幕


		glewExperimental = GL_TRUE; 

		GLenum err = glewInit(); // 初始化glew库，必须在glutCreateWindow之后调用
		if(err != GLEW_OK)  // 初始化不成功？
		{
			std::cout << "glewInit 失败, 退出程序." << std::endl;
			exit(EXIT_FAILURE); // 退出程序
		}

		glClearColor(0.6f, 0.4f, 0.7f, 1.0f);

		//开启混合
		glEnable(GL_BLEND);
		//设置混合模式
		glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
		//质量最佳
		glPolygonMode(GL_FRONT, GL_NICEST);

		return 0;
	}

	// 设置摄像机
	int RenderClass::SetCamera(CameraClass camera)
	{
		return 0;
	}

	//  获取相机对象
	CameraClass RenderClass::GetCamera()
	{
		return camera_;
	}

	// 设置渲染对象
	int RenderClass::SetRenderTarget(FrameBuffer target)
	{
		return 0;
	}

	//  获取渲染对象
	int RenderClass::GetRenderTaget(FrameBuffer &frame)
	{
		return 0;
	}

	//  交换帧缓冲区
	int RenderClass::SwapFrameBuffer()
	{
		SwapBuffers(hdc);
		ClearWindows();
		return 0;
	}

	//  改变窗口的大小
	int RenderClass::ChangeWindowSize(GLsizei width, GLsizei height)
	{
		width_ = width;
		height_ = height;
		if (height==0)								// 防止被零除
		{
			height=1;							// 将Height设为1
		}

		glViewport(0, 0, width, height);					// 重置当前的视口						// 重置投影矩阵
		// 设置视口的大小
		//matProj = Perspective(45.0f,(GLfloat)width/(GLfloat)height,0.1f,100.0f);

		return 0;
	}

	//  设置窗口过程函数
	int RenderClass::SetWNDPROC(WNDPROC wndproc)
	{
		window_sun_proc_ = wndproc;
		return 0;
	}

	//  设在窗口是否全屏
	void RenderClass::SetFullWindow(bool mode)
	{
		full = mode;
	}

	// 设置实例句柄
	void RenderClass::SetHINSTANCE(HINSTANCE hinstance)
	{
		hinstance_ = hinstance;
	}

	void RenderClass::KillGLWindow(GLvoid)							// 正常销毁窗口
	{
		if (full)								// 我们处于全屏模式吗?
		{
			ChangeDisplaySettings(NULL,0);					// 是的话，切换回桌面
			ShowCursor(TRUE);						// 显示鼠标指针
		}
		if (hrc)								// 我们拥有OpenGL渲染描述表吗?
		{
			if (!wglMakeCurrent(NULL,NULL))					// 我们能否释放DC和RC描述表?
			{
				MessageBox(NULL,L"释放DC或RC失败。",L"关闭错误",MB_OK | MB_ICONINFORMATION);
			}
			if (!wglDeleteContext(hrc))					// 我们能否删除RC?
			{
				MessageBox(NULL,L"释放RC失败。",L"关闭错误",MB_OK | MB_ICONINFORMATION);
			}
			hrc=NULL;							// 将RC设为 NULL
		}
		if (hdc && !ReleaseDC(hwnd_,hdc))					// 我们能否释放 DC?
		{
			MessageBox(NULL,L"释放DC失败。",L"关闭错误",MB_OK | MB_ICONINFORMATION);
			hdc=NULL;							// 将 DC 设为 NULL
		}
		if (hwnd_ && !DestroyWindow(hwnd_))					// 能否销毁窗口?
		{
			MessageBox(NULL,L"释放窗口句柄失败。",L"关闭错误",MB_OK | MB_ICONINFORMATION);
			hwnd_=NULL;							// 将 hWnd 设为 NULL
		}
		if (!UnregisterClass(L"OpenGL",hinstance_))				// 能否注销类?
		{
			MessageBox(NULL,L"不能注销窗口类。",L"关闭错误",MB_OK | MB_ICONINFORMATION);
			hinstance_=NULL;							// 将 hInstance 设为 NULL
		}
	}

	void RenderClass::ClearWindows()
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	}

	// 设置当前的shader
	int RenderClass::SetShader(Shader* shader_ptr)
	{
		if(shader_ptr == NULL)
		{
			return -1;
		}

		shader_ = shader_ptr;

		return 0;
	}

	Shader* RenderClass::GetShader()
	{
		return shader_;
	}

} // end namespace AttemptSpacee