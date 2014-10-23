#include "GLView.h"
#include "attempt.h"


//窗口函数
LRESULT CALLBACK GLView::WinProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_CLOSE:
		MessagePump::GetInstance()->SendMessage(Message::Create(MSG_ProgramExit));
		break;
	case WM_DESTROY:			    	// 撤销窗口消息
		PostQuitMessage(0);             // 产生退出程序消息 WM_QUIT
		return 0;
	case MM_MCINOTIFY:
		break;
	default:
		break;
	}
	return DefWindowProc(hwnd, message, wParam, lParam);    //其他转默认窗口函数处理
}


GLView::GLView()
	:Object(),
	hwnd_(0),
	hinstance_(0),
	hdc_(0),
	hrc_(0)
{

}

GLView::~GLView()
{
	KillView();
}

// 创建Render环境
bool GLView::CreateView(wstring windows_name, int height, int width)
{
	Log::GetInstance()->Info("Create Windows");

	hinstance_ = GetModuleHandle(NULL);				// 取得我们窗口的实例
	view_size_.height = height;
	view_size_.width = width;

	WNDCLASS	wc;											// 窗口类结构
	wc.style		= CS_HREDRAW | CS_VREDRAW | CS_OWNDC;	// 移动时重画，并为窗口取得DC
	wc.lpfnWndProc		= GLView::WinProc;							// WndProc处理消息
	wc.cbClsExtra		= 0;								// 无额外窗口数据
	wc.cbWndExtra		= 0;								// 无额外窗口数据
	wc.hInstance		= hinstance_;						// 设置实例
	wc.hIcon		= LoadIcon(NULL, IDI_WINLOGO);			// 装入缺省图标
	wc.hCursor		= LoadCursor(NULL, IDC_ARROW);			// 装入鼠标指针
	wc.hbrBackground	= NULL;								// GL不需要背景
	wc.lpszMenuName		= NULL;								// 不需要菜单
	wc.lpszClassName	= L"OpenGLView";					// 设定类名字

	if (!RegisterClass(&wc))								// 尝试注册窗口类
	{
		MessageBox(NULL,L"注册窗口失败",L"错误",MB_OK|MB_ICONEXCLAMATION);
		return FALSE;							
	}

	int location_x = desktop_size_.width / 2 - view_size_.width / 2;
	int location_y = desktop_size_.height / 2 - view_size_.height / 2;
	bool win_err = false;
	if (!(hwnd_=CreateWindowEx(	
		WS_EX_APPWINDOW | WS_EX_WINDOWEDGE,	 // 扩展窗体风格
		L"OpenGLView",			// 类名字
		windows_name.c_str(),	// 窗口标题
		WS_OVERLAPPED|WS_CAPTION|WS_SYSMENU,	// 选择的窗体属性
		location_x, location_y,					// 窗口位置
		view_size_.width,	// 计算调整好的窗口宽度
		view_size_.height,	// 计算调整好的窗口高度
		NULL,					// 无父窗口
		NULL,					// 无菜单
		hinstance_,				// 实例
		NULL)))					// 不向WM_CREATE传递任何东东
	{
		win_err = true;
		MessageBox(NULL,L"不能创建一个窗口设备描述表",L"错误",MB_OK|MB_ICONEXCLAMATION);
	}
	
	if (!(hdc_=GetDC(hwnd_)))			// 取得设备描述表了么?
	{
		win_err = true;
		MessageBox(NULL,L"不能创建一种相匹配的像素格式",L"错误",MB_OK|MB_ICONEXCLAMATION);
	}
	
	if(SetupPixelFormat(hdc_) == false)
	{
		win_err = true;
		MessageBox(NULL,L"不能创建OpenGL渲染描述表",L"错误",MB_OK|MB_ICONEXCLAMATION);
	}

	if (!(hrc_=wglCreateContext(hdc_)))			// 能否取得着色描述表?
	{
		win_err = true;
		MessageBox(NULL,L"不能创建OpenGL渲染描述表",L"错误",MB_OK|MB_ICONEXCLAMATION);
	}
	if(!wglMakeCurrent(hdc_,hrc_))						// 尝试激活着色描述表
	{
		win_err = true;					// 重置显示区
		MessageBox(NULL,L"不能激活当前的OpenGL渲然描述表",L"错误",MB_OK|MB_ICONEXCLAMATION);
	}

	ShowWindow(hwnd_,SW_SHOW);						// 显示窗口
	SetForegroundWindow(hwnd_);						// 略略提高优先级
	SetFocus(hwnd_);								// 设置键盘的焦点至此窗口


	glewExperimental = GL_TRUE; 

	GLenum err = glewInit(); // 初始化glew库，必须在glutCreateWindow之后调用
	if(err != GLEW_OK || win_err)  // 初始化不成功？
	{
		KillView();
		MessageBox(NULL,L"glewInit 失败, 退出程序.",L"错误",MB_OK|MB_ICONEXCLAMATION);
		return false;
	}

	return true;
}


//  交换帧缓冲区
void GLView::SwapRenderBuffer()
{
	SwapBuffers(hdc_);
}

//  改变窗口的大小
void GLView::SetViewSize(Size2D size)
{
	if (size != view_size_)
	{
		view_size_ = size;
		if (hwnd_ != 0)
		{
			// 发送WM_WINDOWPOSCHANGING，WM_WINDOWPOSCHANGED，
			//     WM_MOVE，WM_SIZE和WM_NCCALCSIZE消息。
			MoveWindow(hwnd_, 
				desktop_size_.width / 2, desktop_size_.height / 2, 
				view_size_.width, view_size_.height,
				true);
		}
	}
}

Size2D GLView::GetViewSize()
{
	return view_size_;
}


void GLView::KillView()							// 正常销毁窗口
{
	Log::GetInstance()->Info("Kill Windows");
	
	if (hrc_)								// 我们拥有OpenGL渲染描述表吗?
	{
		if (!wglMakeCurrent(NULL,NULL))					// 我们能否释放DC和RC描述表?
		{
			MessageBox(NULL,L"释放DC或RC失败。",L"关闭错误",MB_OK | MB_ICONINFORMATION);
		}
		if (!wglDeleteContext(hrc_))					// 我们能否删除RC?
		{
			MessageBox(NULL,L"释放RC失败。",L"关闭错误",MB_OK | MB_ICONINFORMATION);
		}
		hrc_=NULL;							// 将RC设为 NULL
	}
	if (hdc_ && !ReleaseDC(hwnd_,hdc_))					// 我们能否释放 DC?
	{
		MessageBox(NULL,L"释放DC失败。",L"关闭错误",MB_OK | MB_ICONINFORMATION);
		hdc_=NULL;							// 将 DC 设为 NULL
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

bool GLView::SetupPixelFormat(HDC hdc)
{
	static	PIXELFORMATDESCRIPTOR pfd=			// /pfd 告诉窗口我们所希望的东东，即窗口使用的像素格式
	{
		sizeof(PIXELFORMATDESCRIPTOR),	// 上述格式描述符的大小
		1,								// 版本号
		PFD_DRAW_TO_WINDOW |			// 格式支持窗口
		PFD_SUPPORT_OPENGL |			// 格式必须支持OpenGL
		PFD_DOUBLEBUFFER,				// 必须支持双缓冲
		PFD_TYPE_RGBA,					// 申请 RGBA 格式
		32,								// 选定色彩深度
		0, 0, 0, 0, 0, 0,				// 忽略的色彩位
		0,								// 无Alpha缓存
		0,								// 忽略Shift Bit
		0,								// 无累加缓存
		0, 0, 0, 0,						// 忽略聚集位
		24,								// 16位 Z-缓存 (深度缓存)
		8,								// 无蒙板缓存
		0,								// 无辅助缓存
		PFD_MAIN_PLANE,					// 主绘图层
		0,								// Reserved
		0, 0, 0							// 忽略层遮罩
	};

	GLuint	pixel_format = ChoosePixelFormat(hdc_, &pfd);	// 保存查找匹配的结果
	if (pixel_format != 0 && SetPixelFormat(hdc_, pixel_format, &pfd) == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

GLView* GLView::Create(wstring windows_name, int height, int width)
{
	GLView *object = new GLView();
	if(object != NULL && object->Init(windows_name, height, width) == true)
	{
		return object;
	}

	SAFRelease(object);
	return NULL;
}

inline
bool GLView::Init(wstring windows_name, int height, int width)
{

	// 获取桌面的分辨率
	desktop_size_.width = GetSystemMetrics(SM_CXSCREEN);
	desktop_size_.height = GetSystemMetrics(SM_CYSCREEN);
	view_size_.height = 400;
	view_size_.width = 800;

	this->CreateView(windows_name, height, width);

	return true;
}

inline
void GLView::SetViewName(wstring view_name)
{
	SetWindowText(hwnd_, view_name.c_str());
}
