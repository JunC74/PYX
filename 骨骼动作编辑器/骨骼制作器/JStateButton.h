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

    // ������ ��ʼ��״̬�б�
    void InitState(std::vector<std::string> str_state);
   
    // ������ ����״̬Ϊstate_id���ַ���
    // ������ state_id -- ��Ҫ���õ�״ֵ̬
    //       str -- ���µ��ַ���
    void SetState(int state_id, std::string str);
    
    // ������ ���õ�ǰ״̬
    void SetState(int state_id);
    
    // ������ ��ȡ��ǰ״̬
    int GetState();

    // ��������ȡ��ǰ״̬���ַ���
    std::string GetStateStr();

    // ���������ƶ���
    // ������
    //	   target_hdc����Ϊ���������������Ļ����豸
    void Draw(HDC target_hdc);		

    // ������ �¼���Ӧ����
    void Event(MSG msg);
};

