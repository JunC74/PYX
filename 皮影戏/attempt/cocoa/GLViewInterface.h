#ifndef __gl_view_interface_h__
#define __gl_view_interface_h__

#include "at_prefix.h"

class GLViewInterface
{
protected:
	GLViewInterface() {};

public:

	virtual ~GLViewInterface() {};

	// ����������
	virtual void SwapRenderBuffer() = 0;

	// ��ȡ���ڴ�С
	virtual Size2D GetViewSize() = 0;

	// ���ô��ڱ���
	virtual void SetViewName(wstring view_name) = 0;
};

#endif