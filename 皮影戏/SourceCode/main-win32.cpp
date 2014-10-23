#include "attempt.h"
#include "pyx.h"

#define KEYDOWN(vk_code) ((GetAsyncKeyState(vk_code) & 0x8000) ? 1 : 0)
#define KEYUP(vk_code)   ((GetAsyncKeyState(vk_code) & 0x8000) ? 0 : 1
// KEYDOWN(VK_ESCAPE)

//windows 主函数
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
				   LPSTR lpCmdLine, int nCmdShow){

	PYX *app = new PYX(L"皮影戏", 600, 800);
	KEYDOWN(VK_ESCAPE);
	return app->Run(hInstance, hPrevInstance, lpCmdLine, nCmdShow);
}
