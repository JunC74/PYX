#pragma once
#include <string>
#include "JButton.h"

class NumButton :public UIObject
{
private:
	int LineLong;    //新建点与父节点的距离
	TCHAR ButtonName[40];
	bool is_activation;	//是否激活
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
