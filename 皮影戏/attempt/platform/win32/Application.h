#ifndef __application_h__
#define __application_h__

#include "attempt.h"
#include "platform/win32/win32_prefix.h"

class Application : public Object
{
protected:
private:
	HINSTANCE h_instance_;		// 实例句柄
	wstring wstr_game_name_;	// 游戏名称
	GLViewInterface *gl_win_;	// 窗口
	bool b_game_end_;
public:
	
	Application(wstring game_name, int height, int width);

	virtual ~Application();

	//  游戏的初始化函数
	virtual int Initialize();

	//  游戏的渲染
	virtual void Render(float f_delta);

	// 函数: 游戏的结束
	virtual int End();

	//  运行游戏的入口
	int Run(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);

	virtual void MessageCallBack(Message* msg);

};

#endif