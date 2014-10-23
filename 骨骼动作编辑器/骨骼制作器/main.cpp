#include "tool.h"
#include "windows_Class.h"

// GLOBALS ////////////////////////////////////////////////
HWND      g_hWnd = NULL;
HINSTANCE g_hInstance = NULL;

WindowsClass * main_interface;


//////////////////////////////////////////////////////////////

// ����ʼ
void PStart ( HDC hDC ); 

void HandleKeys ();

// ��Ϸѭ��
void PCycle ( HDC hDC );	

// �������
void PEnd ();

// �ƶ����
void mouseMove ( int x, int y );	

// �������
void mouseButtonDown ( int x, int y, int LR );	

// ���ڻص�����
LRESULT CALLBACK WindowProc ( HWND hwnd, 
                             UINT msg, 
                             WPARAM wparam, 
                             LPARAM lparam );

// ���Ʒ�DEMO״̬ʱ�ĺ���
void PDraw ( HDC hDC );	

// �����½��ļ��Ĵ���
void PNewFileDraw ( HDC hdc );	

//////////////////////////////////////////////////////////////
int WINAPI WinMain(	HINSTANCE hinstance,
	HINSTANCE hprevinstance,
	LPSTR lpcmdline,
	int ncmdshow)
{
	WNDCLASSEX winclass;
	winclass.cbSize         = sizeof(WNDCLASSEX);
	winclass.style			= CS_DBLCLKS | CS_OWNDC | CS_HREDRAW | CS_VREDRAW;
	winclass.lpfnWndProc	= WindowProc;
	winclass.cbClsExtra		= 0;
	winclass.cbWndExtra		= 0;
	winclass.hInstance		= hinstance;
	winclass.hIcon			= LoadIcon(NULL, IDI_APPLICATION);
	winclass.hCursor		= LoadCursor(NULL, IDC_ARROW); 
	winclass.hbrBackground	= (HBRUSH)GetStockObject(BLACK_BRUSH);
	winclass.lpszMenuName	= NULL;
	winclass.lpszClassName	= WINDOW_CLASS_NAME;
	winclass.hIconSm        = LoadIcon(NULL, IDI_APPLICATION);

	g_hInstance = hinstance;

	if (!RegisterClassEx(&winclass))
		return(0);

	HWND	   hwnd;
	if (!(hwnd = CreateWindowEx(NULL,                // extended style
		WINDOW_CLASS_NAME,   // class
		"����������", // title
		(WS_OVERLAPPEDWINDOW | WS_VISIBLE) & ~WS_THICKFRAME & ~WS_MAXIMIZEBOX,
		0,0,	  // initial x,y
		WINDOW_WIDTH, // initial width
		WINDOW_HEIGHT,// initial height
		NULL,	  // handle to parent 
		NULL,	  // handle to menu
		hinstance,// instance of this application
		NULL)))	// extra creation parms
		return(0);

	g_hWnd = hwnd;


	RECT window_rect = {0,0,WINDOW_WIDTH, WINDOW_HEIGHT};
	AdjustWindowRectEx(&window_rect,
		GetWindowStyle(hwnd),
		GetMenu(hwnd)!=NULL,
		GetWindowExStyle(hwnd));
	MoveWindow(hwnd,0,0,window_rect.right-window_rect.left,window_rect.bottom-window_rect.top,false);


	HDC hdc = GetDC(hwnd);

	PStart(hdc);

	MSG		   msg;
	while(TRUE)
	{
		DWORD start = GetTickCount();
		if (PeekMessage(&msg,NULL,0,0,PM_REMOVE))
		{ 
			if (msg.message == WM_QUIT)
				break;
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		} 

		RECT rect;
		GetClientRect(g_hWnd, &rect);


		PCycle(hdc);


		if(GetTickCount()-start < 30)
			Sleep(30- (GetTickCount()-start));		
	}

	PEnd();

	ReleaseDC(hwnd, hdc);

	return(msg.wParam);
}

LRESULT CALLBACK WindowProc(HWND hwnd,UINT message, WPARAM wparam,LPARAM lparam)
{
	MSG msg;
	msg.lParam = lparam;
	msg.hwnd = hwnd;
	msg.message = message;
	msg.wParam = wparam;
	
	switch(message)
	{
	case WM_DESTROY: 
		PostQuitMessage(0);
		break;
    default:
        break;
	}
    if(main_interface != NULL){
		main_interface->Event(msg);
    }
	return (DefWindowProc(hwnd, message, wparam, lparam));
}


void mouseButtonDown(int x,int y,int LR){
	switch (LR)
	{
	case 1://���
		break;
	case 2://�Ҽ�
		break;
	}
}

void mouseMove(int x,int y){

}

void PStart(HDC hDC)
{
	
    //SetTextColor(hDC, RGB(255, 255, 128));
	//������Ļ���豸������λͼ
	RECT rect;
    SetBkMode(hDC, TRANSPARENT);
	GetClientRect(g_hWnd, &rect);
    main_interface = new WindowsClass(hDC, rect);
	main_interface->Initialization(hDC, g_hInstance, g_hWnd);
}

void PEnd(){
    if(main_interface != NULL)
    	delete main_interface;
	main_interface = NULL;
}

void PCycle(HDC hDC)
{
	HandleKeys();
    if(main_interface != NULL)
    	main_interface->Draw(hDC);
   

}

void HandleKeys()
{

}