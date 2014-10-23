#include <stdio.h>
#include "NumButton.h"

NumButton::NumButton(HDC source_DC, TCHAR *name,
	const RECT &t_rect, int ui_id)
    :UIObject(source_DC, t_rect, ui_id)
{
		LineLong = 50.0;
		strncpy(ButtonName, name, strlen(name));
		ButtonName[strlen(name)]='\0';
		is_activation =false;
}
NumButton::~NumButton(){

}

void NumButton::upLine(){
	
}

int NumButton::GetNumber()
{
    return LineLong;
}
void NumButton::downLine(){
	
}
int ex,ey;
void NumButton::MouseMove ( int x, int y ){


}

void NumButton::Event(MSG msg){
	int x = LOWORD(msg.lParam);
	int y = HIWORD(msg.lParam);
	short zDelta   =   (short) HIWORD(msg.wParam);         //   wheel   rotation
	UINT fwKeys   =   HIWORD(msg.wParam);
	UINT message = msg.message;

	

	switch (message)
	{
	case WM_MOUSEWHEEL:
		if(fwKeys!=0){
			if(zDelta==120)LineLong++;
			if(zDelta==-120)LineLong--;
		}
	case WM_MOUSEMOVE:
		if(is_activation){
			if(x>ex||y<ey)
				LineLong++;
			if(x<ex||y>ey)
				LineLong--;
		}
		ex = x;ey = y;
		break;
	case MK_MBUTTON:
		LineLong++;
	case WM_LBUTTONDOWN:
		is_activation =true;
		break;
	case WM_RBUTTONDOWN:
		is_activation = true;
		break;
	case WM_LBUTTONUP:
		is_activation = false;
		break;
	case WM_RBUTTONUP:
		is_activation = false;
		break;
	default:
		break;
	}
}

void NumButton::MouseKeyEvent ( int x, int y, UINT msg ){
	;
}

void NumButton::Draw ( HDC target_hdc ){

    SetBkMode(hdc_, TRANSPARENT);
    RECT rect = {0, 0, 
        position_rect_.right - position_rect_.left,
        position_rect_.bottom - position_rect_.top};
	FillRect(hdc_, 
        &rect, 
        (HBRUSH)GetStockObject(BLACK_BRUSH));

    Bitmap* bm =Bitmap::CreateBitmap(hdc_, "Res/sd.bmp");
    if (bm != NULL)
    {
        bm->Draw(hdc_, 0, 0);
        delete bm;
        bm = NULL;
    }
	COLORREF oldTextColor = GetTextColor(target_hdc);
	
	
	char buffer[40];
	sprintf(buffer,"%s%d",ButtonName,LineLong);
	TextOut(hdc_, 0,16, buffer, strlen(buffer));

	BitBlt(target_hdc, position_rect_.left, position_rect_.top, 
		position_rect_.right - position_rect_.left, 
		position_rect_.bottom - position_rect_.top, 
		hdc_, 0, 0, 
		SRCCOPY);

}