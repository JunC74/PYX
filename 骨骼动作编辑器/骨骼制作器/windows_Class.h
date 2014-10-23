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
    CB_NEW_FILE = 1,	// �½��ļ�
    CB_OPEN_FILE,		// ���ļ�
    CB_ADD_POINT,		// ��Ӷ���
    CB_SVAE_KEY_FRAME,	// ����Ϊ�ؼ�֡
    CB_LENGHT,			// ����
    CB_PREVIOUS_FRMAE,	// ��һ֡
    CB_NEXT_FRAME,		// ��һ֡
    CB_PALY_RECTANGLE,	// ��ʾ(����)
    CB_DELETE,			// ɾ��
    CB_INSERT,			// ����
    CB_PLAY,			// ��ʾ
    CB_FILE_OUT,		// ���
    SB_DIRECTION,       // �ı�����ķ���ť
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
    UIObject* focus_ui_object; //����UI�ؼ�
    FramesDataString frame_string;
    FramesDataCompute frames_compute;
    TextBox* workspace_info, *compute_info;
    Bitmap* bk_bitmap;

    // �������԰�����ָ����п���
    // ������object_id ���� ������ID
    void OrderControl(int object_id);

    HWND hwnd_;
    HINSTANCE hInstance_;
    WindowsClass(void) {}
public:
    
    WindowsClass(HDC source_dc, RECT rect);
    ~WindowsClass(void);


    // ����������ƶ����̳���UIObject��
    // ������
    //     x��y������UI�ؼ����µ����꣬���ϵ�Ϊԭ��
    void MouseMove(int x, int y);

    // ��������ʼ������
    // ������source_dc������Ļ�豸
    void Initialization ( HDC source_dc, HINSTANCE hInstance, HWND hwnd);


    // ���������İ�����Ӧ���̳���UIObject��
    // ������
    //     x��y�����ÿؼ��µ����꣬����Ϊԭ������
    //     msg����windows�ĺ궨�壬WM_LBUTTONDOWN�� WM_RBUTTONDOWN��
    void MouseKeyEvent (int x, int y, UINT msg);

	void Event(MSG msg);

    // ���������ƶ��󣨼̳���UIObject��
    // ������
    //	   target_hdc����Ϊ���������������Ļ����豸
    void Draw(HDC target_hdc);
};