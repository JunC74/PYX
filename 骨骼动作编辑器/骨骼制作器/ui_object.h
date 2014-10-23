#ifndef UI_OBJECT_H_

#define UI_OBJECT_H_

#include "Bitmap.h"

class UIObject
{
protected:
	RECT position_rect_;	//��������Ĵ�С��λ��
	HDC hdc_;
	int ui_id_;		// �ռ�Ķ�id
public:
	UIObject(void) {};
    UIObject(const UIObject& ui_object);
	UIObject(HDC hdc, RECT position_rect, int ui_id);
	~UIObject(void) {
		DeleteDC(hdc_);
	};

	// ����������λ�þ���
	// ����������λ�þ���
	//     parametric_postion_rect����λ�þ���
	void SetPostionRect ( RECT parametric_position_rect );

	// �������õ������λ�þ���
	// ����ֵ��λ�þ���
	RECT GetPostionRect ();

	// ���������ö����DC
	// ������
	//     need_set_hdc���������ĸ�ʽ
	void SetDC ( HDC need_set_hdc );
		
	// ���������İ�����Ӧ  
	// ������
	//     x��y�����ÿؼ��µ����꣬����Ϊԭ������
	//     msg����windows�ĺ궨�壬WM_LBUTTONDOWN�� WM_RBUTTONDOWN��
    virtual void MouseKeyEvent (int x, int y, UINT msg) {};
	
	// ���������ƶ���
	// ������
	//	   target_hdc����Ϊ���������������Ļ����豸
	virtual void Draw(HDC target_hdc) = 0;		

    // ��������ȡ�ؼ���ID
    // ����ֵ���ؼ�ID
    int GetUIID();

	virtual void Event(MSG msg);


};

#endif