#include <tchar.h>
#include "JButton.h"

CJButton::CJButton ( HDC source_DC, 
	TCHAR *pt_name, 
	const RECT &t_rect, 
	int _button_id )
    :UIObject(source_DC, t_rect, _button_id)
{

	
	int len = strlen(pt_name);
	strncpy(button_name_, pt_name, len);
	button_name_[len] = '\0';
	button_state_ = false;
	//获取系统字体
	hfont_ = (HFONT)SelectObject(hdc_, hfont_);
	SelectObject(hdc_, hfont_);
	//获取系统字体颜色
	text_color_ = GetTextColor(hdc_);
}

CJButton::~CJButton(void) {
}

void CJButton::SetFontJ ( HFONT t_Font ){
	hfont_ = t_Font;
}

void CJButton::SetTextColorJ ( COLORREF t_color ){
	text_color_ = t_color;
}

void CJButton::SetLineColorJ (COLORREF t_color ){
	line_color = t_color;
}

void CJButton::SetBackgroundColorJ(COLORREF t_color){
	background_color_ = t_color;
}

void CJButton::SetJbuttonText(const TCHAR *pt_name){
	strcpy(button_name_, pt_name);
}

void CJButton::Draw ( HDC target_hdc ){

    RECT rect = {0, 0, 
        position_rect_.right - position_rect_.left,
        position_rect_.bottom - position_rect_.top};
    FillRect(hdc_, &rect, (HBRUSH)GetStockObject(BLACK_BRUSH));

	Rectangle(hdc_, 
		0, 
		0, 
		position_rect_.right - position_rect_.left, 
		position_rect_.bottom - position_rect_.top
		);

	if(button_state_ & IS_ACTIVATION)
		Rectangle(hdc_,0,0,10,10);
	TextOut(hdc_, 14,16, button_name_, strlen(button_name_));



	BitBlt(target_hdc, position_rect_.left, position_rect_.top, 
		position_rect_.right - position_rect_.left, 
		position_rect_.bottom - position_rect_.top, 
		hdc_, 0, 0, 
		SRCCOPY);
	
}


void CJButton::MouseKeyEvent ( int x, int y, UINT msg ){
	switch (msg)
	{
	case WM_LBUTTONDOWN:
		if (!(button_state_ & IS_LOCK))
			button_state_ |= IS_ACTIVATION;
		break;
	case WM_RBUTTONDOWN:
		break;
	case WM_LBUTTONUP:
		if (!(button_state_ & IS_LOCK))
			button_state_ = false;
		break;
	case WM_RBUTTONUP:
		break;
	default:
		break;
	}
}

bool CJButton::GetState() { 
    return button_state_ & IS_ACTIVATION; 
}

int CJButton::SetState(int state){
    int old_state = button_state_;
    button_state_ = state;
    return old_state;
}

