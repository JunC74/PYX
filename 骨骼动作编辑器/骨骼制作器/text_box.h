#pragma once
#include "ui_object.h"
class TextBox :
    public UIObject
{
    char* string_;  //需要显示的信息
public:
    TextBox(void) {string_ = NULL;}

    // 参数：
    //     source_DC——父对象的DC格式
    //     pt_name——button的字符串内容
    //     t_rect——坐标矩阵
    //     _text_id —— 控件的id
    TextBox ( HDC source_DC, char *string, 
        const RECT &t_rect, int _text_id);
    TextBox(TextBox &textbox);
    ~TextBox(void);

    // 函数： 设置显示的文本信息
    void SetString(const char* string);

    // 函数：鼠标的按键响应(继承于UIObject类)    
    // 参数：
    //     x，y——该控件下的坐标，左上为原点坐标
    //     msg——windows的宏定义，WM_LBUTTONDOWN， WM_RBUTTONDOWN等
    void MouseKeyEvent ( int x, int y, UINT msg );

    // 函数：绘制Button对象，虚拟函数（继承于UIObject）
    // 参数：
    //     target_hdc——绘制的最终目标DC
    void Draw ( HDC target_hdc );

    const char* GetString() {return string_;}
};

