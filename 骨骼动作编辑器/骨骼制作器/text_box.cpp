#include "text_box.h"


TextBox::TextBox( HDC source_DC, char *string, 
         const RECT &t_rect, int _text_id)
         :UIObject(source_DC, t_rect, _text_id)
{
    string_ = NULL;
    if (string != NULL)
    {
        int len = strlen(string);
        string_ = new char[len+1];
        strcpy(string_, string);
    }
}

TextBox::TextBox(TextBox &textbox)
    :UIObject(textbox)
{
    if(this->string_ != NULL) {
        delete [] this->string_;
        this->string_ = NULL;
    }
    if (textbox.string_ != NULL)
    {
        int len = strlen(textbox.string_);
        this->string_ = new char[len+1];
        strcpy(this->string_, textbox.string_);
    }
}

TextBox::~TextBox(void)
{
    if(string_ != NULL) {
        delete [] string_;
        string_ = NULL;
    }
}

void TextBox::SetString(const char* string)
{
    if (string_ != NULL)
    {
        delete [] string_;
        string_ = NULL;
    }
    
    if(string == NULL) return ;

    int len = strlen(string);
    string_ = new char[len+1];
    strcpy(string_, string);
}

void TextBox::Draw ( HDC target_hdc )
{
    HPEN pen = CreatePen(PS_SOLID, 1, RGB(0,0,255));
    HGDIOBJ old_pen = SelectObject(hdc_, pen);
    COLORREF bk_color = RGB(128, 128, 128);
    COLORREF old_ck_color = SetBkColor(hdc_, bk_color);
    SetBkMode(hdc_, TRANSPARENT);
    RECT rect = {0, 0, 
        position_rect_.right - position_rect_.left,
        position_rect_.bottom - position_rect_.top};
    FillRect(hdc_, &rect, (HBRUSH)GetStockObject(WHITE_BRUSH));

    //TextOut(hdc_,0,0,string_,strlen(string_));
    DrawText(hdc_, string_, strlen(string_), &rect, DT_CENTER);
    BitBlt(target_hdc, position_rect_.left, position_rect_.top, 
        position_rect_.right - position_rect_.left, 
        position_rect_.bottom - position_rect_.top, 
        hdc_, 0, 0, 
        SRCAND);
    SetBkColor(hdc_, old_ck_color);
    SelectObject(hdc_, old_pen);
    DeleteObject(pen);
}

void TextBox::MouseKeyEvent ( int x, int y, UINT msg ){}