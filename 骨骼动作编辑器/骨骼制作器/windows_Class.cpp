#include "windows_class.h"
#include <time.h>
#include <windows.h>   // include all the windows headers
#include <windowsx.h>  // include useful macros
#include <cstring>
#include "resource.h"

WindowsClass::WindowsClass(HDC source_dc, RECT rect)
    :UIObject(source_dc, rect, NULL)
{
    bk_bitmap = Bitmap::CreateBitmap(hdc_, "Res/bk.bmp");
    focus_ui_object = NULL;
    b_add_point = NULL;
    b_delete = NULL;
    b_file_out = NULL;
    b_insert = NULL;
    b_next_frame  = NULL;
    b_new_file = NULL;
    b_open_file = NULL;
    b_play = NULL;
    b_previous_frame = NULL;
    b_save_key = NULL;
    focus_ui_object = NULL;
    compute_info = NULL;
    sb_direction = NULL;
    workspace_info = NULL;
    frames_compute.SetFramesDataStringObject(&frame_string);
    frames_compute.SetOutSize(500);
    frames_compute.SetStep(10);
}


WindowsClass::~WindowsClass(void)
{
    focus_ui_object = NULL;
    Delete(b_add_point);
    Delete(b_delete);
    Delete(b_file_out);
    Delete(b_insert);
    Delete(b_next_frame);
    Delete(b_new_file);
    Delete(b_open_file);
    Delete(b_play);
    Delete(b_previous_frame);
    Delete(b_save_key);
    Delete(compute_info);
    Delete(sb_direction);
    Delete(workspace_info);
    Delete(bk_bitmap);
}

void WindowsClass::OrderControl(int object_id)
{
    switch(object_id) {
    case CB_NEW_FILE:	    // 新建文件
        {
            // workspace设置状态失败
            if(work_space->SetState(WORK_STATE_MOVE_FIND) == false){
                //////////////////////////////////////////////////////////////////////////
                // 提示用户操作失败
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "workspace无法转换状态。", "错误！", NULL);
                b_new_file->SetState(0);
                break;
            }

            //获取系统时间，确定文件名
            time_t t = time(0);
            char file_name[100];
            strftime( file_name, sizeof(file_name), "%Y_%W_%a_%H_%M",localtime(&t));
            if(frames_compute.CreateNewFile(file_name) == false)
            {
                // 创建文件失败的处理
                MessageBox(hwnd_, "创建文件失败！", "错误！", NULL);
            }
            else
            {
                Frame frame, previous_frome;
                frame = frames_compute.GetFrame(frames_compute.GetFrameId());
                work_space->SetTempFrameData(frame);
                sb_direction->SetState(frame.direction);
                previous_frome = frames_compute.GetFrame(frames_compute.GetFrameId() - 1);
                work_space->SetPreviousFrameBmp(previous_frome);
                // 创建文件成功的处理
                // 设置按钮状态
                b_add_point->SetState(0);
                b_previous_frame->SetState(IS_LOCK);
                b_next_frame->SetState(IS_LOCK);
                b_delete->SetState(IS_LOCK);
                b_insert->SetState(IS_LOCK);
                b_play->SetState(IS_LOCK);
                b_play_rectangle->SetState(IS_LOCK);
                b_file_out->SetState(IS_LOCK);
            }
        }
        break;
    case CB_OPEN_FILE:		// 打开文件
        {
            // workspace设置状态失败
            if(work_space->SetState(WORK_STATE_MOVE_FIND) == false)
            {
                //////////////////////////////////////////////////////////////////////////
                // 提示用户操作失败
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "workspace无法转换状态。", "错误！", NULL);
                b_open_file->SetState(0);
                break;
            }
            // 如果帧串里面有数据
            char file_name[100];
            if (frame_string.GetFrameNum() != 0) 
            {
                strcpy(file_name, "~");
                strcat(file_name, frames_compute.GetFileName());
                frames_compute.SaveFile(file_name);
            }
            
            strcpy(file_name, "open");
            if (frames_compute.OpenFile(file_name) == false)
            {
                MessageBox(hwnd_, "open.fds无法加载。", "错误！", NULL);
                b_open_file->SetState(0);
                break;
            }
            Frame temp_frame = frames_compute.GetFrame(frames_compute.GetFrameId());
            work_space->SetTempFrameData(temp_frame);
            sb_direction->SetState(temp_frame.direction);

            Frame previous = frames_compute.GetFrame(frames_compute.GetFrameId() - 1);
            work_space->SetPreviousFrameBmp(previous);
            // 设置按钮状态
            b_add_point->SetState(IS_LOCK);
            b_previous_frame->SetState(0);
            b_next_frame->SetState(0);
            //b_alter->SetState(0);
            b_delete->SetState(0);
            b_insert->SetState(0);
            b_play->SetState(0);
            b_play_rectangle->SetState(0);
            b_file_out->SetState(0);
        }
        break;
    case CB_ADD_POINT:		// 添加顶点
        {
            // workspace状态转换失败W
            if(work_space->SetState(WORK_STATE_ADD_FIND) == false) 
            {
                //////////////////////////////////////////////////////////////////////////
                // 提示用户操作失败
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "workspace无法转换状态。", "错误！", NULL);
                b_add_point->SetState(0);
                break;
            }
            int length = nb_length->GetNumber();
            if(work_space->SetLength(length) == false)
            {
                //////////////////////////////////////////////////////////////////////////
                // 提示用户长度不符合要求，并提示范围
                //////////////////////////////////////////////////////////////////////////
                char message[200];
                sprintf(message, "长度不符合要求[%d~%d]\n", MIN_LENGTH, MAX_LENGTH);
                MessageBox(hwnd_, message, "错误！", NULL);
                break;
            }

            // 按钮状态保存
        }
        break;
    case CB_SVAE_KEY_FRAME:	// 保存为关键帧
        {
            // workspace状态转换失败
            if(work_space->SetState(WORK_STATE_MOVE_FIND) == false){
                MessageBox(hwnd_, "workspace无法转换状态。", "错误！", NULL);
                b_save_key->SetState(0);
            }
            Frame temp_frame = work_space->GetTempFrame();
            temp_frame.direction = sb_direction->GetState();
            if (frames_compute.SaveFrame(temp_frame) == false)
            {
                MessageBox(hwnd_, "无法保存关键帧。", "错误！", NULL);
                b_save_key->SetState(0);
                break;
            }
             MessageBox(hwnd_, "保存关键帧成功。", "成功！", NULL);
            b_delete->SetState(0);
            b_insert->SetState(0);
            b_play->SetState(0);
            b_file_out->SetState(0);
            b_next_frame->SetState(0);
            b_previous_frame->SetState(0);
            b_play_rectangle->SetState(0);
            work_space->SetPreviousFrameBmp(
                frames_compute.GetFrame(frames_compute.GetFrameId() - 1));
        }
        break;
    case CB_PREVIOUS_FRMAE:	// 上一帧
        {
            if(work_space->SetState(WORK_STATE_MOVE_FIND) == false)
            {
                //////////////////////////////////////////////////////////////////////////
                // 提示用户操作失败
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "workspace无法转换状态。", "错误！", NULL);
                b_previous_frame->SetState(0);
                break;
            }
            Frame temp_frame = frames_compute.PreviousFrame();
            if(temp_frame.number <= 0)
            {
                //////////////////////////////////////////////////////////////////////////
                // 提示用户,已经是第一张关键帧
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "已经是第一张关键帧。", "错误！", NULL);
                b_previous_frame->SetState(0);
                break;
            }
            work_space->SetTempFrameData(temp_frame);
            sb_direction->SetState(temp_frame.direction);
            work_space->SetPreviousFrameBmp(
                frames_compute.GetFrame(frames_compute.GetFrameId() - 1));

            //b_alter->SetState(0);
            b_delete->SetState(0);
            b_insert->SetState(0);
        }
        break;
    case CB_NEXT_FRAME:		// 下一帧
        {
            if(work_space->SetState(WORK_STATE_MOVE_FIND) == false)
            {
                //////////////////////////////////////////////////////////////////////////
                // 提示用户操作失败
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "workspace无法转换状态。", "错误！", NULL);
                b_next_frame->SetState(0);
                break;
            }
            Frame temp_frame = frames_compute.NextFrame();
            if(temp_frame.number <= 0)
            {
                //////////////////////////////////////////////////////////////////////////
                // 提示用户,已经是最后一关键帧
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "已经是最后一关键帧", "错误！", NULL);
                b_next_frame->SetState(IS_LOCK);
                break;
            }
            work_space->SetTempFrameData(temp_frame);
            sb_direction->SetState(temp_frame.direction);
            work_space->SetPreviousFrameBmp(
                frames_compute.GetFrame(frames_compute.GetFrameId() - 1));

           // b_alter->SetState(0);
            b_delete->SetState(0);
            b_insert->SetState(0);
        }
        break;
    case CB_DELETE:			// 删除
        {
            if (frames_compute.DeleteFrame() == false)
            {
                MessageBox(hwnd_, "删除关键帧失败！", "错误！", NULL);
            } 
            else
            {
                MessageBox(hwnd_, "删除关键帧成功！", "操作成功！", NULL);
               // b_alter->SetState(IS_LOCK);
                Frame temp_frame = frames_compute.GetFrame(frames_compute.GetFrameId());
                work_space->SetTempFrameData(temp_frame);
                sb_direction->SetState(temp_frame.direction);
                work_space->SetPreviousFrameBmp(frames_compute.GetFrame(frames_compute.GetFrameId() - 1));
            }
            b_delete->SetState(0);
            if (frames_compute.GetFramesNumber() == 1)
            {
                b_play->SetState(IS_LOCK);
                b_play_rectangle->SetState(IS_LOCK);
            }
        }
        break;
    case CB_INSERT:			// 插入
        {
            Frame temp_frame, previous_frame;
            temp_frame = work_space->GetTempFrame();
            temp_frame.direction = sb_direction->GetState();
            if (frames_compute.InsertFrame(temp_frame) == false)
            {
                MessageBox(hwnd_, "插入关键帧失败！", "错误！", NULL);
            } 
            else
            {
                 MessageBox(hwnd_, "插入关键帧成功！", "操作成功！", NULL);
            }
            // 设置按钮状态
            b_add_point->SetState(IS_LOCK);
            b_next_frame->SetState(0);
            b_delete->SetState(0);
            b_insert->SetState(0);
            b_play->SetState(0);
            b_play_rectangle->SetState(0);
            b_file_out->SetState(0);
        }
        break;
    case CB_PLAY:			// 演示
        {
            int frame_number = 0;

            Frame* temp_frames_string = frames_compute.GetInterpolationFrames(&frame_number);
            if (temp_frames_string == NULL)
            {
                //////////////////////////////////////////////////////////////////////////
                // 提示用户获取帧序列操作失败
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "取帧序列操作失败", "错误！", NULL);
                b_play->SetState(0);
                break;
            }
            work_space->SetPlay(frame_number, temp_frames_string);
            if(work_space->SetState(WORK_STATE_PLAY_ACTION) == false)
            {
                //////////////////////////////////////////////////////////////////////////
                // 提示用户操作失败
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "workspace无法转换状态。", "错误！", NULL);
                b_play->SetState(0);
                break;
            }
        }
        break;
    case CB_PALY_RECTANGLE:     // 矩阵演示
        {
            vector< vector<VERTEX> > v = frames_compute.GetRectangleString();

            if (v.empty())
            {
                //////////////////////////////////////////////////////////////////////////
                // 提示用户获取帧序列操作失败
                ///////////////////////////////s///////////////////////////////////////////
                MessageBox(hwnd_, "取帧序列操作失败", "错误！", NULL);
                b_play->SetState(WORK_STATE_MOVE_FIND);
                break;
            }
            work_space->SetVertex(v);

            if(work_space->SetState(WORK_STATE_DRAW_RECTANGLE) == false)
            {
                //////////////////////////////////////////////////////////////////////////
                // 提示用户操作失败
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "workspace无法转换状态。", "错误！", NULL);
                b_play->SetState(0);
                break;
            }
        }
        break;
    case CB_FILE_OUT:		// 输出
        {
            if (frames_compute.SaveFile() == false)
            {
                //////////////////////////////////////////////////////////////////////////
                // 提示用户保存失败
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "文件保存失败", "错误！", NULL);
                break;
            }
             MessageBox(hwnd_, "文件输出成功", "成功！", NULL);
        }
        break;
    default:
        break;
    }
}

void WindowsClass::Event(MSG msg)
{
	int x = LOWORD(msg.lParam);
	int y = HIWORD(msg.lParam);
	UINT message = msg.message;
	short zDelta   =   (short) HIWORD(msg.wParam);         //   wheel   rotation
	LPARAM lparam;

	UIObject * ui_object = NULL;
	// 寻找鼠标下的控件
	ui_object = CheckObjectWhenMouseAction(x, y);

	// 处理
	switch(message)
	{
	case WM_KEYDOWN:
		switch (WM_CHAR)
		{
		default:
			break;
		}
		work_space->SetState(WORK_STATE_MOVE_FIND);
		break;
	case WM_LBUTTONDOWN: case WM_RBUTTONDOWN:
		{
			if(ui_object != NULL)
			{
				focus_ui_object = ui_object;
				lparam = MAKELONG(x - focus_ui_object->GetPostionRect().left, y - focus_ui_object->GetPostionRect().top);
				MSG t_msg = msg;
				t_msg.lParam = lparam;
				focus_ui_object->Event(t_msg);
				{
					// 对于按钮的响应处理
					int object_id = focus_ui_object->GetUIID();
					CJButton *p = (CJButton*)focus_ui_object;
					if(object_id != 0 && object_id != CB_LENGHT &&
						p->GetState() == true)
					{
						OrderControl(object_id);
					}
				}

			}
		}

		break;
	case WM_LBUTTONUP: case WM_RBUTTONUP:
		if (focus_ui_object != NULL)
		{
			lparam = MAKELONG(x - focus_ui_object->GetPostionRect().left, y - focus_ui_object->GetPostionRect().top);
			MSG t_msg = msg;
			t_msg.lParam = lparam;
			focus_ui_object->Event(t_msg);
			focus_ui_object = NULL;
		}
		break;
	default:
		// 如果存在焦点控件，则把信息传递给焦点控件
		
		if (focus_ui_object != NULL)
		{
			lparam = MAKELONG(x - focus_ui_object->GetPostionRect().left, y - focus_ui_object->GetPostionRect().top);
			MSG t_msg = msg;
			t_msg.lParam = lparam;
			focus_ui_object->Event(t_msg);
		} else if(ui_object != NULL){
			lparam = MAKELONG(x - ui_object->GetPostionRect().left, y - ui_object->GetPostionRect().top);
			MSG t_msg = msg;
			t_msg.lParam = lparam;
			ui_object->Event(t_msg);
		}
		break;
	}
}
void WindowsClass::MouseKeyEvent (int x, int y, UINT message){
    UIObject * ui_object = NULL;
    // 寻找鼠标下的控件
    ui_object = CheckObjectWhenMouseAction(x, y);

    // 处理
    switch(message)
    {
    case WM_KEYDOWN:
        switch (WM_CHAR)
        {
        default:
            break;
        }
        work_space->SetState(WORK_STATE_MOVE_FIND);
        break;
	case WM_LBUTTONDOWN: case WM_RBUTTONDOWN:
        {
            if(ui_object != NULL)
            {
                focus_ui_object = ui_object;
                focus_ui_object->MouseKeyEvent(x - focus_ui_object->GetPostionRect().left,
                    y - focus_ui_object->GetPostionRect().top, message);
                {
                    // 对于按钮的响应处理
                    int object_id = focus_ui_object->GetUIID();
                    CJButton *p = (CJButton*)focus_ui_object;
                    if(object_id != 0 && object_id != CB_LENGHT &&
                        p->GetState() == true)
                    {
                        OrderControl(object_id);
                    }
                }

            }
        }
       
        break;
	case WM_LBUTTONUP: case WM_RBUTTONUP:
        if (focus_ui_object != NULL)
        {
            focus_ui_object->MouseKeyEvent(x - focus_ui_object->GetPostionRect().left,
                y - focus_ui_object->GetPostionRect().top,
                message);
            focus_ui_object = NULL;
        }
        break;
    default:
        // 如果存在焦点控件，则把信息传递给焦点控件
        if (focus_ui_object != NULL)
        {
            focus_ui_object->MouseKeyEvent(x - focus_ui_object->GetPostionRect().left,
                y - focus_ui_object->GetPostionRect().top,
                message);
        } else if(ui_object != NULL){ 
            ui_object->MouseKeyEvent(x - ui_object->GetPostionRect().left,
                y - ui_object->GetPostionRect().top,
                message);
        }
        break;
    }
}

void WindowsClass::Draw ( HDC target_hdc ){

    //清屏（使用背景图片或用一个灰色刷子重新刷一下窗口）
    RECT rect = {0, 0, position_rect_.right, position_rect_.bottom};
    
    if (bk_bitmap != NULL)
    {
        FillRect(hdc_, &position_rect_, (HBRUSH)GetStockObject(GRAY_BRUSH));
        bk_bitmap->Draw(hdc_, 0, 0);
    }
    else 
    {
        FillRect(hdc_, &position_rect_, (HBRUSH)GetStockObject(GRAY_BRUSH));
    }

    // 更新workspace的状态信息
    char str[1000]; 
    sprintf(str, "WorkSpace状态：%s\n", work_space->GetState().c_str());
    workspace_info->SetString(str);

    // 更新compute的信息
    sprintf(str, 
        "Compute信息：\n文件名：%s\n关键帧的总数：%d     当前的帧序号：%d\n",
        frames_compute.GetFileName(), frames_compute.GetFramesNumber(),
        frames_compute.GetFrameId() + 1);
    compute_info->SetString(str);
    //绘制对象在离屏
    DrawObject(hdc_);
    //复制到目标设备
    
    BitBlt(target_hdc, 0, 0, 
        rect.right,
        rect.bottom, 
        hdc_, 0, 0, 
        SRCCOPY);
    return ;
}

void  WindowsClass::Initialization ( HDC source_dc , HINSTANCE hInstance, HWND hwnd)
{
    hInstance_ = hInstance;
    hwnd_ = hwnd;

    char str[100];
    RECT rectPointButton1 = {600, 20, 690, 70};
    LoadString(hInstance, IDS_STR_NEW_FILE, str, 100);
    b_new_file = new CJButton (source_dc, str, rectPointButton1, CB_NEW_FILE);
    AddUIObject(b_new_file);

    RECT rectPointButton2 = {700, 20, 790, 70};
    LoadString(hInstance, IDS_STR_OPEN_FILE, str, 100);
    b_open_file = new CJButton (source_dc, str, rectPointButton2, CB_OPEN_FILE);
    AddUIObject(b_open_file);

    RECT rectPointButton3 = {600, 90, 690, 140};
    LoadString(hInstance, IDS_STR_ADD_POINT, str, 100);
    b_add_point = new CJButton (source_dc, str, rectPointButton3, CB_ADD_POINT);
    AddUIObject(b_add_point);

    RECT rectPointButton14 = {700, 90, 790, 140};
    LoadString(hInstance, IDS_STR_SVAE_KEY_FRAME, str, 100);
    b_save_key = new CJButton (source_dc, str, rectPointButton14, CB_SVAE_KEY_FRAME);
    AddUIObject(b_save_key);

    RECT rectPointButton4 = {600, 160, 790, 210};
    LoadString(hInstance, IDS_STR_LENGTH, str, 100);
    nb_length = new NumButton (source_dc, str,rectPointButton4, CB_LENGHT);
    AddUIObject(nb_length);

    RECT rectPointButton7 = {600, 230, 690, 280};
    LoadString(hInstance, IDS_STR_PREVIOUS_FRMAE, str, 100);
    b_previous_frame = new CJButton (source_dc, str, rectPointButton7, CB_PREVIOUS_FRMAE);
    AddUIObject(b_previous_frame);

    RECT rectPointButton8 = {700, 230, 790, 280};
    LoadString(hInstance, IDS_STR_NEXT_FRAME, str, 100);
    b_next_frame = new CJButton (source_dc, str, rectPointButton8, CB_NEXT_FRAME);
    AddUIObject(b_next_frame);


    RECT rectPointButton9 = {600, 300, 650, 350};
    vector<string> v_str;
    LoadString(hInstance, IDS_STR_DIRECTION_lEFT, str, 100);
    v_str.push_back(str);
    LoadString(hInstance, IDS_STR_DIRECTION_RIGHT, str, 100);
    v_str.push_back(str);
    sb_direction = new JStateButton (source_dc, rectPointButton9, SB_DIRECTION);
    sb_direction->InitState(v_str);
    AddUIObject(sb_direction);


    RECT rectPointButton10 = {660, 300, 720, 350};
    LoadString(hInstance, IDS_STR_DELETE, str, 100);
    b_delete = new CJButton (source_dc, str, rectPointButton10, CB_DELETE);
    AddUIObject(b_delete);

    RECT rectPointButton11 = {730, 300, 790, 350};
    LoadString(hInstance, IDS_STR_INSERT, str, 100);
    b_insert = new CJButton (source_dc, str, rectPointButton11, CB_INSERT);
    AddUIObject(b_insert);

    RECT rectPointButton12 = {600, 370, 790, 420};
    LoadString(hInstance, IDS_STR_PLAY, str, 100);
    b_play= new CJButton (source_dc, str, rectPointButton12, CB_PLAY);
    AddUIObject(b_play);

    RECT rectPointButton13 = {600, 440, 790, 490};
    LoadString(hInstance, IDS_STR_FILE_OUT, str, 100);
    b_file_out= new CJButton (source_dc, str, rectPointButton13, CB_FILE_OUT);
    AddUIObject(b_file_out);

    RECT play_rectangle_rect = {600, 510, 790, 560};
    LoadString(hInstance, IDS_STR_PALY_RECTANGLE, str, 100);
    b_play_rectangle = new CJButton(source_dc, str, play_rectangle_rect, CB_PALY_RECTANGLE);
    AddUIObject(b_play_rectangle);

    RECT work_rect = {50,50,550,550};
    work_space = new WorkSpace(source_dc, work_rect);
    Frame temp_frome = frames_compute.GetFrame(frames_compute.GetFrameId());
    work_space->SetTempFrameData(temp_frome);
    sb_direction->SetState(temp_frome.direction);
    
    AddUIObject(work_space);
    work_space->SetTempFrameData(frames_compute.GetFrame(frames_compute.GetFrameId()));

    RECT workspace_info_rect = {0, 0, 300, 50};
    workspace_info = new TextBox(source_dc, NULL, workspace_info_rect, 0);
    AddUIObject(workspace_info);

    RECT compute_info_rect = {0, 550, 550, 600};
    compute_info = new TextBox(source_dc, NULL, compute_info_rect, 0);
    AddUIObject(compute_info);

    b_previous_frame->SetState(IS_LOCK);
    b_next_frame->SetState(IS_LOCK);
    b_delete->SetState(IS_LOCK);
    b_insert->SetState(IS_LOCK);
    b_play->SetState(IS_LOCK);
    b_play_rectangle->SetState(IS_LOCK);
    b_file_out->SetState(IS_LOCK);

}
