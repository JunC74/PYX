#ifndef __application_h__
#define __application_h__

#include "attempt.h"
#include "platform/win32/win32_prefix.h"

class Application : public Object
{
protected:
private:
	HINSTANCE h_instance_;		// ʵ�����
	wstring wstr_game_name_;	// ��Ϸ����
	GLViewInterface *gl_win_;	// ����
	bool b_game_end_;
public:
	
	Application(wstring game_name, int height, int width);

	virtual ~Application();

	//  ��Ϸ�ĳ�ʼ������
	virtual int Initialize();

	//  ��Ϸ����Ⱦ
	virtual void Render(float f_delta);

	// ����: ��Ϸ�Ľ���
	virtual int End();

	//  ������Ϸ�����
	int Run(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);

	virtual void MessageCallBack(Message* msg);

};

#endif