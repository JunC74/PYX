#pragma once

#include "ui_object.h"

#define IS_ACTIVATION   0x00000001
#define IS_LOCK         0x00000002


class CJButton: public UIObject
{
private:
	HFONT	hfont_;	//按钮的字体
	COLORREF text_color_;	//文本颜色
	COLORREF background_color_;	//背景颜色
	COLORREF line_color;		//线框颜色
	TCHAR	button_name_[21];	//按钮的显示名称
	int	button_state_;	    //按钮的状态(（0）低位为是否激活， 1位为是否锁定)
public:
	CJButton(void);
	
	// 函数：构造函数
	// 参数：
	//     source_DC——父对象的DC格式
	//     pt_name——button的字符串内容
	//     t_rect——坐标矩阵
	//     _button_id —— 按键的id
	CJButton ( HDC source_DC, 
		TCHAR *pt_name, 
		const RECT &t_rect, 
		int _button_id );
	
	~CJButton(void);

	// 函数：设置button的字体
	// 参数：
	//     t_Font——字体的格式
	void SetFontJ ( HFONT t_Font );	

	// 函数：设置字体的颜色
	// 参数：
	//     t_color——需要设置的目标颜色
	void SetTextColorJ ( COLORREF t_color );	

	// 函数：设置线框的颜色
	void SetLineColorJ (COLORREF t_color );

	// 函数：设置背景颜色
	void SetBackgroundColorJ(COLORREF t_color);

	// 函数：设置显示按钮的文本
	void SetJbuttonText(const TCHAR *pt_name);

	// 函数：绘制Button对象，虚拟函数（继承于UIObject）
	// 参数：
	//     target_hdc——绘制的最终目标DC
	void Draw ( HDC target_hdc );			

	// 函数：鼠标的按键响应(继承于UIObject类)    
	// 参数：
	//     x，y——该控件下的坐标，左上为原点坐标
	//     msg——windows的宏定义，WM_LBUTTONDOWN， WM_RBUTTONDOWN等
	void MouseKeyEvent (int x, int y, UINT msg);

	// 函数：得到按钮的状态
	// 返回值： true —— 激活状态
	//        false —— 未激活
	bool GetState();

	// 函数： 设置按钮的状态
	// 参数： state —— 需置成的状态
	// 返回值：前一个状态
	int SetState(int state);

};

