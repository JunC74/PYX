#pragma once
#include "ui_object.h"
#include "ui_object_manange.h"
#include "Bitmap.h"
#include "JButton.h"
#include "WorkSpace.h"
#include "NumButton.h"
#include "JStateButton.h"
#include "text_box.h"
#include "tool.h"


enum 
{
    CB_NEW_FILE = 1,	// 新建文件
    CB_OPEN_FILE,		// 打开文件
    CB_ADD_POINT,		// 添加顶点
    CB_SVAE_KEY_FRAME,	// 保存为关键帧
    CB_LENGHT,			// 长度
    CB_PREVIOUS_FRMAE,	// 上一帧
    CB_NEXT_FRAME,		// 下一帧
    CB_PALY_RECTANGLE,	// 演示(矩形)
    CB_DELETE,			// 删除
    CB_INSERT,			// 插入
    CB_PLAY,			// 演示
    CB_FILE_OUT,		// 输出
    SB_DIRECTION,       // 改变人物的方向按钮
};

class WindowsClass :
    public UIObject,
    public UIObjectManangeClass
{
private:
    CJButton *b_new_file;
    CJButton *b_open_file;
    CJButton *b_add_point;
    CJButton *b_previous_frame;
    CJButton *b_next_frame;
    CJButton *b_play_rectangle;
    CJButton *b_delete;
    CJButton *b_insert;
    CJButton *b_play;
    CJButton *b_file_out;
    CJButton *b_save_key;
    JStateButton *sb_direction;
    NumButton *nb_length;
    WorkSpace *work_space;
    UIObject* focus_ui_object; //焦点UI控件
    FramesDataString frame_string;
    FramesDataCompute frames_compute;
    TextBox* workspace_info, *compute_info;
    Bitmap* bk_bitmap;

    // 函数：对按键的指令进行控制
    // 参数：object_id —— 按键的ID
    void OrderControl(int object_id);

    HWND hwnd_;
    HINSTANCE hInstance_;
    WindowsClass(void) {}
public:
    
    WindowsClass(HDC source_dc, RECT rect);
    ~WindowsClass(void);


    // 函数：鼠标移动（继承于UIObject）
    // 参数：
    //     x，y——该UI控件的下的坐标，左上点为原点
    void MouseMove(int x, int y);

    // 函数：初始化窗口
    // 参数：source_dc——屏幕设备
    void Initialization ( HDC source_dc, HINSTANCE hInstance, HWND hwnd);


    // 函数：鼠标的按键响应（继承于UIObject）
    // 参数：
    //     x，y——该控件下的坐标，左上为原点坐标
    //     msg——windows的宏定义，WM_LBUTTONDOWN， WM_RBUTTONDOWN等
    void MouseKeyEvent (int x, int y, UINT msg);

	void Event(MSG msg);

    // 函数：绘制对象（继承于UIObject）
    // 参数：
    //	   target_hdc——为父窗口所传过来的画布设备
    void Draw(HDC target_hdc);
};