#ifndef UI_OBJECT_H_

#define UI_OBJECT_H_

#include "Bitmap.h"

class UIObject
{
protected:
	RECT position_rect_;	//工作区域的大小和位置
	HDC hdc_;
	int ui_id_;		// 空间的额id
public:
	UIObject(void) {};
    UIObject(const UIObject& ui_object);
	UIObject(HDC hdc, RECT position_rect, int ui_id);
	~UIObject(void) {
		DeleteDC(hdc_);
	};

	// 函数：设置位置矩阵
	// 参数：传入位置矩阵
	//     parametric_postion_rect——位置矩阵
	void SetPostionRect ( RECT parametric_position_rect );

	// 函数：得到对象的位置矩阵
	// 返回值：位置矩阵
	RECT GetPostionRect ();

	// 函数：设置对象的DC
	// 参数：
	//     need_set_hdc——画布的格式
	void SetDC ( HDC need_set_hdc );
		
	// 函数：鼠标的按键响应  
	// 参数：
	//     x，y——该控件下的坐标，左上为原点坐标
	//     msg——windows的宏定义，WM_LBUTTONDOWN， WM_RBUTTONDOWN等
    virtual void MouseKeyEvent (int x, int y, UINT msg) {};
	
	// 函数：绘制对象
	// 参数：
	//	   target_hdc——为父窗口所传过来的画布设备
	virtual void Draw(HDC target_hdc) = 0;		

    // 函数：获取控件的ID
    // 返回值：控件ID
    int GetUIID();

	virtual void Event(MSG msg);


};

#endif