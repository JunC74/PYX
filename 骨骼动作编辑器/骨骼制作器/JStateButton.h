#pragma once
#include <vector>
#include "ui_object.h"

class JStateButton :
    public UIObject
{
private:
    int state_;
    std::vector<std::string> state_str_;
    JStateButton(void){}

public:
    JStateButton(HDC source_DC_,
        const RECT &rect,
        int object_id,
        std::vector<std::string> str_state);
    JStateButton(HDC source_DC_,
        const RECT &rect,
        int object_id);

    ~JStateButton(void) {};

    // 函数： 初始化状态列表
    void InitState(std::vector<std::string> str_state);
   
    // 函数： 设置状态为state_id的字符串
    // 参数： state_id -- 需要设置的状态值
    //       str -- 更新的字符串
    void SetState(int state_id, std::string str);
    
    // 函数： 设置当前状态
    void SetState(int state_id);
    
    // 函数： 获取当前状态
    int GetState();

    // 函数：获取当前状态的字符串
    std::string GetStateStr();

    // 函数：绘制对象
    // 参数：
    //	   target_hdc——为父窗口所传过来的画布设备
    void Draw(HDC target_hdc);		

    // 函数： 事件响应函数
    void Event(MSG msg);
};

