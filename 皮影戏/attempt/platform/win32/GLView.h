#ifndef __GLView_h__
#define __GLView_h__

#include "cocoa/Object.h"
#include "cocoa/GLViewInterface.h"
#include "platform/win32/win32_prefix.h"

// 初始化OpenGL环境，windows窗口的生命历程管理，
typedef GLuint FrameBuffer;

class GLView : public Object, public GLViewInterface
{
private:
	HWND hwnd_;
	HINSTANCE hinstance_;
	HDC  hdc_;
	HGLRC hrc_;

	FrameBuffer back_frame_buffer;
	FrameBuffer now_frame_buffer;

	WNDPROC window_sun_proc_; // 回调函数的函数指针

	Size2D view_size_;
	Size2D desktop_size_;

	bool CreateView(wstring windows_name, int height, int width);

	void KillView();

	// 设置像素格式
	bool SetupPixelFormat(HDC hdc);

public:

	static LRESULT CALLBACK WinProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);

	GLView();

	static GLView* Create(wstring windows_name, int height, int width);

	bool Init(wstring windows_name, int height, int width);

	virtual ~GLView();

	HWND GetHWND() {return hwnd_; }

	//////////////////////////////////////////////////////////////////////////
	// GLViewInterface
	//////////////////////////////////////////////////////////////////////////

	virtual void SwapRenderBuffer();

	virtual Size2D GetViewSize();

	virtual void SetViewSize(Size2D size);

	virtual void SetViewName(wstring view_name);
	
};
#endif