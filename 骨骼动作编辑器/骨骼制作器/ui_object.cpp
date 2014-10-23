#include <windows.h>   // include all the windows headers
#include <windowsx.h>  // include useful macros
#include "ui_object.h"


void UIObject::Event(MSG msg)
{
	int x = LOWORD(msg.lParam);
	int y = HIWORD(msg.lParam);
	UINT message = msg.message;
	MouseKeyEvent(x, y, message);
}


UIObject::UIObject(const UIObject& ui_object)
{
    // 删除原hdc的相关资源
    HGDIOBJ obj = SelectObject(hdc_, (HBITMAP)NULL);
    DeleteObject(obj);
    DeleteDC(hdc_);
    // 拷贝
    this->hdc_ = CreateCompatibleDC(ui_object.hdc_);
    this->position_rect_ = ui_object.position_rect_;
    HBITMAP offscreenBitmap = CreateCompatibleBitmap(hdc_, 
        position_rect_.right - position_rect_.left, 
        position_rect_.bottom - position_rect_.top);
    obj = SelectObject(hdc_, offscreenBitmap);
    DeleteObject(obj);
    this->ui_id_ = ui_object.ui_id_;
}

void UIObject::SetPostionRect ( RECT parametric_position_rect ){
	position_rect_ = parametric_position_rect;
	HBITMAP offscreenBitmap = CreateCompatibleBitmap(hdc_, 
		position_rect_.right - position_rect_.left, 
		position_rect_.bottom - position_rect_.top);

	HGDIOBJ obj = SelectObject(hdc_, offscreenBitmap);
	DeleteObject(obj);
}

void UIObject::SetDC (HDC need_set_hdc ) {
	HGDIOBJ obj = SelectObject(hdc_, (HBITMAP)NULL);
	DeleteObject(obj);
	DeleteDC(hdc_);

	hdc_ = CreateCompatibleDC(need_set_hdc);

	HBITMAP offscreenBitmap = CreateCompatibleBitmap(hdc_, 
		position_rect_.right - position_rect_.left, 
		position_rect_.bottom - position_rect_.top);

	//返回旧的对象
	obj = SelectObject(hdc_, offscreenBitmap);
}

RECT UIObject::GetPostionRect (){return position_rect_;}

int UIObject::GetUIID(){return ui_id_;}

UIObject::UIObject(HDC hdc, RECT rect, int id)
    :position_rect_(rect),ui_id_(id)
{
    hdc_ = CreateCompatibleDC(hdc);
    HBITMAP offscreenBitmap = CreateCompatibleBitmap(hdc, 
        position_rect_.right - position_rect_.left, 
        position_rect_.bottom - position_rect_.top);
    SelectObject(hdc_, offscreenBitmap);
}