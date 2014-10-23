#pragma once
#include "ui_object.h"
class TextBox :
    public UIObject
{
    char* string_;  //��Ҫ��ʾ����Ϣ
public:
    TextBox(void) {string_ = NULL;}

    // ������
    //     source_DC�����������DC��ʽ
    //     pt_name����button���ַ�������
    //     t_rect�����������
    //     _text_id ���� �ؼ���id
    TextBox ( HDC source_DC, char *string, 
        const RECT &t_rect, int _text_id);
    TextBox(TextBox &textbox);
    ~TextBox(void);

    // ������ ������ʾ���ı���Ϣ
    void SetString(const char* string);

    // ���������İ�����Ӧ(�̳���UIObject��)    
    // ������
    //     x��y�����ÿؼ��µ����꣬����Ϊԭ������
    //     msg����windows�ĺ궨�壬WM_LBUTTONDOWN�� WM_RBUTTONDOWN��
    void MouseKeyEvent ( int x, int y, UINT msg );

    // ����������Button�������⺯�����̳���UIObject��
    // ������
    //     target_hdc�������Ƶ�����Ŀ��DC
    void Draw ( HDC target_hdc );

    const char* GetString() {return string_;}
};

