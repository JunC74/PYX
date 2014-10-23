#include "Application.h"
#include "platform/win32/GLView.h"
#include "cocoa/Root.h"


Application::Application( wstring game_name, int height, int width)
	:Object(),
	wstr_game_name_(game_name)
{
#ifdef _USE_WIN32_CONSOLE_OUT_
	AllocConsole(); 
	freopen("CONIN$", "r", stdin);
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);
	HWND console_hwnd = GetConsoleWindow();
	HMENU hmenu = GetSystemMenu(console_hwnd, FALSE);
	DeleteMenu(hmenu, SC_CLOSE, MF_BYCOMMAND);
	printf("如果你不想使用控制台进行输入输出\n\t请注释掉 win32_prefix.h 中的 #define _USE_WIN32_CONSOLE_OUT_\n");
#endif // _USE_WIN32_CONSOLE_OUT_
	b_game_end_ = false;
	wstr_game_name_ = game_name;
	Log::GetInstance()->SetLeve(LogLeve::LOG_MAX);
	gl_win_ = GLView::Create(wstr_game_name_.c_str(), height, width);
	GLState::GetInstance()->SetGLWinView(gl_win_);
}

Application::~Application()
{

}

int Application::Initialize()
{
	MessagePump::GetInstance()->RegisterForMessage(MSG_ProgramExit, this, (FUNC_MESSAGE_CALLBACK)&Application::MessageCallBack);
	return AT_OK;
}


void Application::Render(float f_delta)
{
	Root::GetInstance()->Draw(f_delta);
}

int Application::End()
{
	MessagePump::GetInstance()->SendMessage(Message::Create(MSG_ProgramDestroy));
#ifdef _USE_WIN32_CONSOLE_OUT_
		FreeConsole();
#endif // _USE_WIN32_CONSOLE_OUT_
;	return 0;
}

void Application::MessageCallBack(Message* msg)
{
	if (msg->type_ID == MSG_ProgramExit)
	{
		b_game_end_ = true;
	}
}

int Application::Run(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	h_instance_ = hInstance;

	MSG msg;

	if (Initialize() != AT_OK)
	{
		Log::GetInstance()->Info("Initialize - false");
		return -1;
	}
	else
	{
		Log::GetInstance()->Info("Initialize-true");
	}
	
	float last_fram_time = 0; 
	int std_time = 1 / 30.0 * 1000; // 每秒30帧 
	while (!b_game_end_)
	{
		int start_time = GetTickCount();
		if (PeekMessage(&msg,NULL,0,0,PM_REMOVE))			// 有消息在等待吗?
		{
			TranslateMessage(&msg);				// 翻译消息
			DispatchMessage(&msg);				// 发送消息
		}

		// 读取输入的消息
		Input::GetInstance()->Read();

		Render(last_fram_time);		 // 绘制场景
		gl_win_->SwapRenderBuffer(); // 交换缓冲区

		int current_fram_time = GetTickCount() - start_time;
		if( current_fram_time < std_time)
		{
			Sleep(std_time - current_fram_time);
			current_fram_time = std_time;
		}
		last_fram_time = current_fram_time / 1000.0;
		wchar_t win_title[100];
		swprintf(win_title, L"%s|fps:%d", wstr_game_name_.c_str(), (int)(1 / last_fram_time));
		GLState::GetInstance()->SetWinName(win_title);
	}
	End();	// 退出程序
	return 0;
}