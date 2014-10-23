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
    case CB_NEW_FILE:	    // �½��ļ�
        {
            // workspace����״̬ʧ��
            if(work_space->SetState(WORK_STATE_MOVE_FIND) == false){
                //////////////////////////////////////////////////////////////////////////
                // ��ʾ�û�����ʧ��
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "workspace�޷�ת��״̬��", "����", NULL);
                b_new_file->SetState(0);
                break;
            }

            //��ȡϵͳʱ�䣬ȷ���ļ���
            time_t t = time(0);
            char file_name[100];
            strftime( file_name, sizeof(file_name), "%Y_%W_%a_%H_%M",localtime(&t));
            if(frames_compute.CreateNewFile(file_name) == false)
            {
                // �����ļ�ʧ�ܵĴ���
                MessageBox(hwnd_, "�����ļ�ʧ�ܣ�", "����", NULL);
            }
            else
            {
                Frame frame, previous_frome;
                frame = frames_compute.GetFrame(frames_compute.GetFrameId());
                work_space->SetTempFrameData(frame);
                sb_direction->SetState(frame.direction);
                previous_frome = frames_compute.GetFrame(frames_compute.GetFrameId() - 1);
                work_space->SetPreviousFrameBmp(previous_frome);
                // �����ļ��ɹ��Ĵ���
                // ���ð�ť״̬
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
    case CB_OPEN_FILE:		// ���ļ�
        {
            // workspace����״̬ʧ��
            if(work_space->SetState(WORK_STATE_MOVE_FIND) == false)
            {
                //////////////////////////////////////////////////////////////////////////
                // ��ʾ�û�����ʧ��
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "workspace�޷�ת��״̬��", "����", NULL);
                b_open_file->SetState(0);
                break;
            }
            // ���֡������������
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
                MessageBox(hwnd_, "open.fds�޷����ء�", "����", NULL);
                b_open_file->SetState(0);
                break;
            }
            Frame temp_frame = frames_compute.GetFrame(frames_compute.GetFrameId());
            work_space->SetTempFrameData(temp_frame);
            sb_direction->SetState(temp_frame.direction);

            Frame previous = frames_compute.GetFrame(frames_compute.GetFrameId() - 1);
            work_space->SetPreviousFrameBmp(previous);
            // ���ð�ť״̬
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
    case CB_ADD_POINT:		// ��Ӷ���
        {
            // workspace״̬ת��ʧ��W
            if(work_space->SetState(WORK_STATE_ADD_FIND) == false) 
            {
                //////////////////////////////////////////////////////////////////////////
                // ��ʾ�û�����ʧ��
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "workspace�޷�ת��״̬��", "����", NULL);
                b_add_point->SetState(0);
                break;
            }
            int length = nb_length->GetNumber();
            if(work_space->SetLength(length) == false)
            {
                //////////////////////////////////////////////////////////////////////////
                // ��ʾ�û����Ȳ�����Ҫ�󣬲���ʾ��Χ
                //////////////////////////////////////////////////////////////////////////
                char message[200];
                sprintf(message, "���Ȳ�����Ҫ��[%d~%d]\n", MIN_LENGTH, MAX_LENGTH);
                MessageBox(hwnd_, message, "����", NULL);
                break;
            }

            // ��ť״̬����
        }
        break;
    case CB_SVAE_KEY_FRAME:	// ����Ϊ�ؼ�֡
        {
            // workspace״̬ת��ʧ��
            if(work_space->SetState(WORK_STATE_MOVE_FIND) == false){
                MessageBox(hwnd_, "workspace�޷�ת��״̬��", "����", NULL);
                b_save_key->SetState(0);
            }
            Frame temp_frame = work_space->GetTempFrame();
            temp_frame.direction = sb_direction->GetState();
            if (frames_compute.SaveFrame(temp_frame) == false)
            {
                MessageBox(hwnd_, "�޷�����ؼ�֡��", "����", NULL);
                b_save_key->SetState(0);
                break;
            }
             MessageBox(hwnd_, "����ؼ�֡�ɹ���", "�ɹ���", NULL);
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
    case CB_PREVIOUS_FRMAE:	// ��һ֡
        {
            if(work_space->SetState(WORK_STATE_MOVE_FIND) == false)
            {
                //////////////////////////////////////////////////////////////////////////
                // ��ʾ�û�����ʧ��
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "workspace�޷�ת��״̬��", "����", NULL);
                b_previous_frame->SetState(0);
                break;
            }
            Frame temp_frame = frames_compute.PreviousFrame();
            if(temp_frame.number <= 0)
            {
                //////////////////////////////////////////////////////////////////////////
                // ��ʾ�û�,�Ѿ��ǵ�һ�Źؼ�֡
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "�Ѿ��ǵ�һ�Źؼ�֡��", "����", NULL);
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
    case CB_NEXT_FRAME:		// ��һ֡
        {
            if(work_space->SetState(WORK_STATE_MOVE_FIND) == false)
            {
                //////////////////////////////////////////////////////////////////////////
                // ��ʾ�û�����ʧ��
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "workspace�޷�ת��״̬��", "����", NULL);
                b_next_frame->SetState(0);
                break;
            }
            Frame temp_frame = frames_compute.NextFrame();
            if(temp_frame.number <= 0)
            {
                //////////////////////////////////////////////////////////////////////////
                // ��ʾ�û�,�Ѿ������һ�ؼ�֡
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "�Ѿ������һ�ؼ�֡", "����", NULL);
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
    case CB_DELETE:			// ɾ��
        {
            if (frames_compute.DeleteFrame() == false)
            {
                MessageBox(hwnd_, "ɾ���ؼ�֡ʧ�ܣ�", "����", NULL);
            } 
            else
            {
                MessageBox(hwnd_, "ɾ���ؼ�֡�ɹ���", "�����ɹ���", NULL);
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
    case CB_INSERT:			// ����
        {
            Frame temp_frame, previous_frame;
            temp_frame = work_space->GetTempFrame();
            temp_frame.direction = sb_direction->GetState();
            if (frames_compute.InsertFrame(temp_frame) == false)
            {
                MessageBox(hwnd_, "����ؼ�֡ʧ�ܣ�", "����", NULL);
            } 
            else
            {
                 MessageBox(hwnd_, "����ؼ�֡�ɹ���", "�����ɹ���", NULL);
            }
            // ���ð�ť״̬
            b_add_point->SetState(IS_LOCK);
            b_next_frame->SetState(0);
            b_delete->SetState(0);
            b_insert->SetState(0);
            b_play->SetState(0);
            b_play_rectangle->SetState(0);
            b_file_out->SetState(0);
        }
        break;
    case CB_PLAY:			// ��ʾ
        {
            int frame_number = 0;

            Frame* temp_frames_string = frames_compute.GetInterpolationFrames(&frame_number);
            if (temp_frames_string == NULL)
            {
                //////////////////////////////////////////////////////////////////////////
                // ��ʾ�û���ȡ֡���в���ʧ��
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "ȡ֡���в���ʧ��", "����", NULL);
                b_play->SetState(0);
                break;
            }
            work_space->SetPlay(frame_number, temp_frames_string);
            if(work_space->SetState(WORK_STATE_PLAY_ACTION) == false)
            {
                //////////////////////////////////////////////////////////////////////////
                // ��ʾ�û�����ʧ��
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "workspace�޷�ת��״̬��", "����", NULL);
                b_play->SetState(0);
                break;
            }
        }
        break;
    case CB_PALY_RECTANGLE:     // ������ʾ
        {
            vector< vector<VERTEX> > v = frames_compute.GetRectangleString();

            if (v.empty())
            {
                //////////////////////////////////////////////////////////////////////////
                // ��ʾ�û���ȡ֡���в���ʧ��
                ///////////////////////////////s///////////////////////////////////////////
                MessageBox(hwnd_, "ȡ֡���в���ʧ��", "����", NULL);
                b_play->SetState(WORK_STATE_MOVE_FIND);
                break;
            }
            work_space->SetVertex(v);

            if(work_space->SetState(WORK_STATE_DRAW_RECTANGLE) == false)
            {
                //////////////////////////////////////////////////////////////////////////
                // ��ʾ�û�����ʧ��
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "workspace�޷�ת��״̬��", "����", NULL);
                b_play->SetState(0);
                break;
            }
        }
        break;
    case CB_FILE_OUT:		// ���
        {
            if (frames_compute.SaveFile() == false)
            {
                //////////////////////////////////////////////////////////////////////////
                // ��ʾ�û�����ʧ��
                //////////////////////////////////////////////////////////////////////////
                MessageBox(hwnd_, "�ļ�����ʧ��", "����", NULL);
                break;
            }
             MessageBox(hwnd_, "�ļ�����ɹ�", "�ɹ���", NULL);
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
	// Ѱ������µĿؼ�
	ui_object = CheckObjectWhenMouseAction(x, y);

	// ����
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
					// ���ڰ�ť����Ӧ����
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
		// ������ڽ���ؼ��������Ϣ���ݸ�����ؼ�
		
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
    // Ѱ������µĿؼ�
    ui_object = CheckObjectWhenMouseAction(x, y);

    // ����
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
                    // ���ڰ�ť����Ӧ����
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
        // ������ڽ���ؼ��������Ϣ���ݸ�����ؼ�
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

    //������ʹ�ñ���ͼƬ����һ����ɫˢ������ˢһ�´��ڣ�
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

    // ����workspace��״̬��Ϣ
    char str[1000]; 
    sprintf(str, "WorkSpace״̬��%s\n", work_space->GetState().c_str());
    workspace_info->SetString(str);

    // ����compute����Ϣ
    sprintf(str, 
        "Compute��Ϣ��\n�ļ�����%s\n�ؼ�֡��������%d     ��ǰ��֡��ţ�%d\n",
        frames_compute.GetFileName(), frames_compute.GetFramesNumber(),
        frames_compute.GetFrameId() + 1);
    compute_info->SetString(str);
    //���ƶ���������
    DrawObject(hdc_);
    //���Ƶ�Ŀ���豸
    
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
