#include "pyx.h"

LRESULT CALLBACK WinSunProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

PYXAttempt game;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
				   LPSTR lpCmdLine, int nCmdShow)
{
	AttemptSpace::RenderClass window_render;
	window_render.SetWNDPROC(WinSunProc);
	window_render.SetHINSTANCE(hInstance);
	game.SetRenderDevice(window_render);
	return game.Run(hInstance, hPrevInstance, lpCmdLine, nCmdShow);
}

LRESULT CALLBACK WinSunProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_ACTIVATE:
		{
			switch (wParam)
			{

			case WA_CLICKACTIVE:	
				// 通过鼠标单击激活了该窗口
				{
				}
				break;
			case WA_ACTIVE:		
				// 通过鼠标以外的工具（如键盘）激活了该窗口
				{
				}
				break;
			case WA_INACTIVE:	
				// 窗口从激活状态转化为非激活状态
				{
				}
				break;
			}
		}
		break;
	case WM_PAINT:
		// 窗口的重绘
		break;

	case WM_CLOSE:
		// 关闭窗口
		{
			game.End();
		}
		break;

	}
	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}