#pragma once
#include <string>
#include "JButton.h"

class NumButton :public UIObject
{
private:
	int LineLong;    //�½����븸�ڵ�ľ���
	TCHAR ButtonName[40];
	bool is_activation;	//�Ƿ񼤻�
public:
	NumButton(void);
	NumButton(HDC source_DC,TCHAR *name,
		const RECT &t_rect,
		int ui_id);
	~NumButton();

	void upLine();
	void downLine();
	void MouseMove ( int x, int y );
	void MouseKeyEvent ( int x, int y, UINT msg );
	void Draw ( HDC target_hdc );
	void Event(MSG msg);
    int GetNumber();
};
