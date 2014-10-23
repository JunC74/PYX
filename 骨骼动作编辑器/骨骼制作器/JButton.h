#pragma once

#include "ui_object.h"

#define IS_ACTIVATION   0x00000001
#define IS_LOCK         0x00000002


class CJButton: public UIObject
{
private:
	HFONT	hfont_;	//��ť������
	COLORREF text_color_;	//�ı���ɫ
	COLORREF background_color_;	//������ɫ
	COLORREF line_color;		//�߿���ɫ
	TCHAR	button_name_[21];	//��ť����ʾ����
	int	button_state_;	    //��ť��״̬(��0����λΪ�Ƿ񼤻 1λΪ�Ƿ�����)
public:
	CJButton(void);
	
	// ���������캯��
	// ������
	//     source_DC�����������DC��ʽ
	//     pt_name����button���ַ�������
	//     t_rect�����������
	//     _button_id ���� ������id
	CJButton ( HDC source_DC, 
		TCHAR *pt_name, 
		const RECT &t_rect, 
		int _button_id );
	
	~CJButton(void);

	// ����������button������
	// ������
	//     t_Font��������ĸ�ʽ
	void SetFontJ ( HFONT t_Font );	

	// �����������������ɫ
	// ������
	//     t_color������Ҫ���õ�Ŀ����ɫ
	void SetTextColorJ ( COLORREF t_color );	

	// �����������߿����ɫ
	void SetLineColorJ (COLORREF t_color );

	// ���������ñ�����ɫ
	void SetBackgroundColorJ(COLORREF t_color);

	// ������������ʾ��ť���ı�
	void SetJbuttonText(const TCHAR *pt_name);

	// ����������Button�������⺯�����̳���UIObject��
	// ������
	//     target_hdc�������Ƶ�����Ŀ��DC
	void Draw ( HDC target_hdc );			

	// ���������İ�����Ӧ(�̳���UIObject��)    
	// ������
	//     x��y�����ÿؼ��µ����꣬����Ϊԭ������
	//     msg����windows�ĺ궨�壬WM_LBUTTONDOWN�� WM_RBUTTONDOWN��
	void MouseKeyEvent (int x, int y, UINT msg);

	// �������õ���ť��״̬
	// ����ֵ�� true ���� ����״̬
	//        false ���� δ����
	bool GetState();

	// ������ ���ð�ť��״̬
	// ������ state ���� ���óɵ�״̬
	// ����ֵ��ǰһ��״̬
	int SetState(int state);

};

