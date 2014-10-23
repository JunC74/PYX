#include "JStateButton.h"


JStateButton::JStateButton(HDC source_DC_, 
                           const RECT &rect, 
                           int object_id,
                           std::vector<std::string> str_state)
    :UIObject(source_DC_, rect, object_id)
{
    state_str_ = str_state;
    state_ = 0;
}
JStateButton::JStateButton(HDC source_DC_, 
                           const RECT &rect, 
                           int object_id)
                           :UIObject(source_DC_, rect, object_id)
{
    state_ = 0;
}

void JStateButton::InitState(std::vector<std::string> str_state)
{
    state_str_ = str_state;
    state_ = 0;
}

void JStateButton::SetState(int state_id, std::string str)
{
    if(state_id >= state_str_.size() || state_id < 0)
    {
        return ;
    }
    else
    {
        state_str_[state_id] = str;
    }
}

void JStateButton::SetState(int state_id)
{
    if(state_id >= state_str_.size() || state_id < 0)
    {
        return ;
    }
    else
    {
        state_ = state_id;
    }
}

int JStateButton::GetState()
{
    return state_;
}

std::string JStateButton::GetStateStr()
{
    return state_str_[state_];
}

void JStateButton::Draw(HDC target_hdc)
{
    RECT rect = {0, 0, 
        position_rect_.right - position_rect_.left,
        position_rect_.bottom - position_rect_.top};
    FillRect(hdc_, &rect, (HBRUSH)GetStockObject(BLACK_BRUSH));

    Rectangle(hdc_, 
        0, 
        0, 
        position_rect_.right - position_rect_.left, 
        position_rect_.bottom - position_rect_.top
        );


    TextOut(hdc_, 14,16, GetStateStr().c_str(), strlen(GetStateStr().c_str()));



    BitBlt(target_hdc, position_rect_.left, position_rect_.top, 
        position_rect_.right - position_rect_.left, 
        position_rect_.bottom - position_rect_.top, 
        hdc_, 0, 0, 
        SRCCOPY);
}

void JStateButton::Event(MSG msg)
{
    switch (msg.message)
    {
    case WM_LBUTTONDOWN:
        state_++;
        if (state_ >= state_str_.size())
        {
            state_ = 0;
        }
        break;
    default:
        break;
    }
}