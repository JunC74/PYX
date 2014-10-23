#ifndef __gl_view_interface_h__
#define __gl_view_interface_h__

#include "at_prefix.h"

class GLViewInterface
{
protected:
	GLViewInterface() {};

public:

	virtual ~GLViewInterface() {};

	// 交换缓冲区
	virtual void SwapRenderBuffer() = 0;

	// 获取窗口大小
	virtual Size2D GetViewSize() = 0;

	// 设置窗口标题
	virtual void SetViewName(wstring view_name) = 0;
};

#endif