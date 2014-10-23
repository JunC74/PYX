#include "attempt.h"

namespace AttemptSpace
{

	Attempt::Attempt()
	{
	}

	void Attempt::SetGameName(const wchar_t *game_name)
	{
		if(game_name == NULL)
		{
			game_name_ = new wchar_t[wcslen(L"Attempt Game")];
			wcscpy(game_name_, L"Attempt Game");
		}
		else
		{
			game_name_ = new wchar_t[wcslen(game_name)];
			wcscpy(game_name_, game_name);
		}
	}

	Attempt::~Attempt()
	{

	}

	int Attempt::Initialize()
	{
		game_end_ = false;
		return 0;
	}

	int Attempt::Logic()
	{
		return 0;
	}

	void Attempt::Render()
	{

	}

	int Attempt::End()
	{
		render_device_.KillGLWindow();

		game_end_ = true;
		return 0;
	}

	int Attempt::Run(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
	{
		render_device_.SetFullWindow(false);
		render_device_.ChangeWindowSize(1280, 720);
		render_device_.CreaterRender(game_name_);

		MSG msg;

		Initialize();

		while (!game_end_)
		{
			if (PeekMessage(&msg,NULL,0,0,PM_REMOVE))			// 有消息在等待吗?
			{

				TranslateMessage(&msg);				// 翻译消息
				DispatchMessage(&msg);				// 发送消息
			}

			Logic();
			Render();				// 绘制场景
			render_device_.SwapFrameBuffer();	// 交换缓存 (双缓存)
		}

		return 0;	// 退出程序
	}

	//  设置渲染设备
	void Attempt::SetRenderDevice(RenderClass render_device)
	{
		render_device_ = render_device;
	}
}