#include "WorkSpace.h"

int xx,yy;
float father_angle_ = 0;
void Add_Node(Node focus_, int father_, Frame *temp_frame_, int x, int y, int leng_);
void Move_Vertex(Frame* temp_frame_, int focus_id_, int x, int y);
void Move_Vertex_Recursion(Frame &temp_frame_, int focus_id_, Node focus_);
void Update_Sub_Vertex_Recursion(Frame &temp_frame_, int focus_id_, Node focus_);
Node Move_Sub_Vertex(Node grand_father_, Node father, Node son, float father_angle_, Frame temp_frame_);

WorkSpace::WorkSpace(HDC source_dc, const RECT& prect)
    :UIObject(source_dc, prect, 0)
{
    Init();
    work_state_ = WORK_STATE_MOVE_FIND;
	frame_index_ = 0;
	frames_string_ = NULL;
    previous_frame_bmp = NULL;

    previous_frame_bmp = Bitmap::CreateBitmap(source_dc, 
        position_rect_.right - position_rect_.left,
        position_rect_.bottom - position_rect_.top,
        RGB(255, 255, 255));
    point_radius_ = 5;
	start_time_ = clock();
	finish_time_ = clock();
}

WorkSpace::WorkSpace( WorkSpace &t_workSpace )
{
	work_state_ = t_workSpace.work_state_;
	temp_frame_ = t_workSpace.temp_frame_;
}

void WorkSpace::SetPreviousFrameBmp(const Frame &frame)
{
    HGDIOBJ old_bitmap = SelectObject(hdc_, previous_frame_bmp->GetHBITMAP());
    HGDIOBJ old_pen = SelectObject(hdc_, gray_pen);
    HGDIOBJ old_brush = SelectObject(hdc_,white_brush);
    RECT rect = {0,0,
        position_rect_.right - position_rect_.left,
        position_rect_.bottom - position_rect_.top};
    FillRect(hdc_, &rect, (HBRUSH)GetStockObject(WHITE_BRUSH));
    
    for (int i = 0; i<frame.number;i++)
    {
        if (i==focus_id_)
        {
            SelectObject(hdc_,red_pen);
            SelectObject(hdc_,red_brush);
        }
        else
        {
            SelectObject(hdc_,gray_pen);
            SelectObject(hdc_,white_brush);
        }
        char buffer[3];
        sprintf(buffer,"%d",i);//绘制节点编号
        //TextOut(hdc_,frame.node[i].x,frame.node[i].y,buffer,strlen(buffer));
        Ellipse(hdc_,frame.node[i].x-5,frame.node[i].y-5,frame.node[i].x+5,frame.node[i].y+5);
        MoveToEx(hdc_,frame.node[frame.node[i].father].x,frame.node[frame.node[i].father].y, NULL );
        LineTo(hdc_ , frame.node[i].x ,frame.node[i].y);									//画这个点和到父点的连线
    }
    
    SelectObject(hdc_, old_bitmap);
    SelectObject(hdc_, old_brush);
    SelectObject(hdc_, old_pen);
}

void WorkSpace::Init()
{
    white_pen = CreatePen(PS_SOLID, 3, RGB(255,255,255));
    black_pen3 = CreatePen(PS_SOLID, 3, RGB(0,0,0));
    black_pen1 = CreatePen(PS_SOLID, 1, RGB(0,0,0));
    red_pen = CreatePen(PS_SOLID, 3, RGB(255,0,0));
    gray_pen = CreatePen(PS_SOLID, 3, RGB(128, 128, 128));
    red_brush = CreateSolidBrush(RGB(255,0,0));
    white_brush = CreateSolidBrush(RGB(255,255,255));
}

void WorkSpace::Free()
{
    DeleteObject(white_pen);
    DeleteObject(black_pen3);
    DeleteObject(black_pen1);
    DeleteObject(red_pen);
    DeleteObject(gray_pen);
    DeleteObject(red_brush);
    DeleteObject(white_brush);
}

void WorkSpace::Draw_State_Edit()
{
    char buffer[20];
    sprintf(buffer,"x:%d y:%d",xx,yy);
    TextOut(hdc_,0,0,buffer,strlen(buffer));

	//绘制鼠标当前坐标
	for (int i =0;i<temp_frame_.number;i++)
	{
		if (i==focus_id_)
        {
            HGDIOBJ hb = GetStockObject(NULL_BRUSH);
            HGDIOBJ old_hb = SelectObject(hdc_, hb);
			Ellipse(hdc_,temp_frame_.node[temp_frame_.node[i].father].x-temp_frame_.node[i].distance,
				temp_frame_.node[temp_frame_.node[i].father].y-temp_frame_.node[i].distance,
				temp_frame_.node[temp_frame_.node[i].father].x+temp_frame_.node[i].distance,
				temp_frame_.node[temp_frame_.node[i].father].y+temp_frame_.node[i].distance);
            SelectObject(hdc_, old_hb);
        }
	}

	for (int i = 0; i<temp_frame_.number;i++)
	{
		if (i==focus_id_)
		{
			SelectObject(hdc_,red_pen);
			SelectObject(hdc_,red_brush);
		}
		else
		{
			SelectObject(hdc_,black_pen1);
			SelectObject(hdc_,white_brush);
		}
		char buffer[3];
		sprintf(buffer,"%d",i);//绘制节点编号
		TextOut(hdc_,temp_frame_.node[i].x,temp_frame_.node[i].y,buffer,strlen(buffer));
		Ellipse(hdc_,temp_frame_.node[i].x-5,temp_frame_.node[i].y-5,temp_frame_.node[i].x+5,temp_frame_.node[i].y+5);
		SelectObject(hdc_,black_pen3);
		MoveToEx(hdc_,temp_frame_.node[temp_frame_.node[i].father].x,temp_frame_.node[temp_frame_.node[i].father].y, NULL );
		LineTo(hdc_ , temp_frame_.node[i].x ,temp_frame_.node[i].y);									//画这个点和到父点的连线
        //绘制焦点的角度
        if (focus_id_ > -1)
        {
            char buffer[20];
            sprintf(buffer, "Angle:%f", temp_frame_.node[focus_id_].angle / M_PI * 180);
            TextOut(hdc_, temp_frame_.node[focus_id_].x, temp_frame_.node[focus_id_].y + 10, buffer, strlen(buffer));
            SelectObject(hdc_,black_pen1);
            SelectObject(hdc_,white_brush);
        }
	}
}

void WorkSpace::Draw_State_Play()
{
	finish_time_ = clock();
    Frame * frame = &frames_string_[frame_index_];
	for (int i = 0; i<frame->number;i++)
	{
		SelectObject(hdc_,black_pen1);
		SelectObject(hdc_,white_brush);
// 		char buffer[3];
// 		sprintf(buffer,"%d",i);//绘制节点编号
// 		TextOut(hdc_,frame->node[i].x,frame->node[i].y,buffer,strlen(buffer));
		Ellipse(hdc_,frame->node[i].x-5,frame->node[i].y-5,frame->node[i].x+5,frame->node[i].y+5);
		SelectObject(hdc_,black_pen3);
		MoveToEx(hdc_,frame->node[frame->node[i].father].x,frame->node[frame->node[i].father].y, NULL );
		LineTo(hdc_ , frame->node[i].x ,frame->node[i].y);									//画这个点和到父点的连线
	}
	//if (/*condition*/)
	//{
	//	frame_index_++;
	//}

	//如果刷新時間超過33.3毫秒
	if (finish_time_ - start_time_ > 33.3)
	{
		start_time_ = clock();

		frame_index_++;
		if (frame_index_ > num_frames_ - 1)
		{
			frame_index_ = 0;
            delete [] frames_string_;
            frames_string_ = NULL;
			work_state_ = WORK_STATE_MOVE_FIND;
		}
	}
	
}

void WorkSpace::DraeStateRectangle()
{
    static int step = 0;
    int i = 0;
    for (i = 0; i + 3 < vertex[0].size(); i += 4)
    {
        MoveToEx(hdc_,vertex[0][i].v.x, vertex[0][i].v.y, NULL );
        LineTo(hdc_ , vertex[0][i + 1].v.x ,vertex[0][i + 1].v.y);

        MoveToEx(hdc_,vertex[0][i + 1].v.x, vertex[0][i + 1].v.y, NULL );
        LineTo(hdc_ , vertex[0][i + 2].v.x ,vertex[0][i + 2].v.y);

        MoveToEx(hdc_,vertex[0][i + 2].v.x, vertex[0][i + 2].v.y, NULL );
        LineTo(hdc_ , vertex[0][i + 3].v.x ,vertex[0][i + 3].v.y);

        MoveToEx(hdc_,vertex[0][i + 3].v.x, vertex[0][i + 3].v.y, NULL );
        LineTo(hdc_ , vertex[0][i].v.x ,vertex[0][i].v.y);

        MoveToEx(hdc_,vertex[0][i].v.x, vertex[0][i].v.y, NULL );
        LineTo(hdc_ , vertex[0][i + 2].v.x ,vertex[0][i + 2].v.y);
    }
    step++;
    if (step == 3)
    {
        step = 0;
        vertex.erase(vertex.begin());
    }
}

//绘制内容到设备上
void WorkSpace::Draw(HDC target_hdc) {

	//清屏（用一个黑刷子重新刷一下窗口）
	RECT a = {0,0,500,500};
	FillRect(hdc_, &a, (HBRUSH)GetStockObject(WHITE_BRUSH));

	switch (work_state_)
	{
	case WORK_STATE_PLAY_ACTION:
		Draw_State_Play();
		break;
    case WORK_STATE_DRAW_RECTANGLE:
        {
            HGDIOBJ old_pen = SelectObject(hdc_,black_pen1);
            HGDIOBJ old_brush = SelectObject(hdc_,white_brush);
            DraeStateRectangle();
            SelectObject(hdc_,old_pen);
            SelectObject(hdc_,old_brush);
            if (vertex.empty()) work_state_ = WORK_STATE_MOVE_FIND;
        }
        break;
	default:
        {
            previous_frame_bmp->Draw(hdc_, 0, 0);
            HGDIOBJ old_pen = SelectObject(hdc_,black_pen1);
            HGDIOBJ old_brush = SelectObject(hdc_,white_brush);
            Draw_State_Edit();
            SelectObject(hdc_,old_pen);
            SelectObject(hdc_,old_brush);
        }
	}

	//复制到目标设备
	BitBlt(target_hdc, position_rect_.left, position_rect_.top, 
		position_rect_.right - position_rect_.left,
		position_rect_.bottom - position_rect_.top, 
		hdc_, 0, 0, 
		SRCCOPY);
	return ;
};	

WorkSpace::~WorkSpace(void) {
    Free();
}

void WorkSpace::MouseMove(int x, int y){
	xx = x;
	yy = y;
	switch (work_state_)
	{
	case WORK_STATE_MOVE_VERTEX:
        if (focus_id_ == -1) break;
		Move_Vertex(&temp_frame_, focus_id_, x, y);
		focus_ = temp_frame_.node[focus_id_];
		if (focus_.father > -1)
			Move_Vertex_Recursion(temp_frame_, focus_id_, focus_);
		
		break;
	default:
		for (int i = 0; i < temp_frame_.number; i++)
		{
			//鼠标坐标在节点的圆周范围内
            float r = pow((temp_frame_.node[i].x - x), 2.0f) +
                    pow((temp_frame_.node[i].y - y), 2.0f);
			if ( r <= (point_radius_ * point_radius_))
			{
				focus_id_ = i;
				break;
			}
			else
				focus_id_ = -1;
		}
		break;
	}
}

void WorkSpace::MouseKeyEvent (int x, int y, UINT msg){
	switch(msg)
	{
	case WM_DESTROY: 
		PostQuitMessage(0);
		break;
	case WM_MOUSEMOVE:
		MouseMove(x, y);
		break;
	case WM_RBUTTONDOWN:
		StateManager(x, y, 0);
		break;
	case WM_LBUTTONDOWN:
		break;
	case WM_RBUTTONUP:
		StateManager(x, y, 1);
		break;
		// 		//Esc键按下时的状态转换
		// 					if (work_state_ != WORK_STATE_MOVE_FIND && work_state_ != WORK_STATE_NULL)
		// 						work_state_ = WORK_STATE_MOVE_FIND;
		// 						break;
	case WM_LBUTTONUP:
		break;

	}
}

void WorkSpace::SetTempFrameData(Frame &frame_data)
{
	temp_frame_ = frame_data;
}


void WorkSpace::StateManager(int x, int y, int mouse_event_)
{
	switch (mouse_event_)
	{
	case 0:
		switch (this->work_state_)
		{
		case WORK_STATE_NULL:
			break;
		case WORK_STATE_ADD_FIND:
            {
                int i;
                for (i = 0; i < temp_frame_.number; i++)
                {
                    //鼠标坐标在节点的圆周范围内
                    if ((temp_frame_.node[i].x - x) * (temp_frame_.node[i].x - x)
                        + (temp_frame_.node[i].y - y) * (temp_frame_.node[i].y - y) <= (point_radius_ * point_radius_))
                    {
                        father_ = i;
                        SetState(WORK_STATE_ADD_VERTEX);
                        //work_state_ = WORK_STATE_ADD_VERTEX;
                        break;
                    }
                }
                if (i == temp_frame_.number)
                {
                    focus_.x = x;
                    focus_.y = y;
                    focus_.angle = temp_frame_.node[0].angle;
                    focus_.father = temp_frame_.number;
                    Add_Node(focus_, temp_frame_.number, &temp_frame_, x, y, leng_);
                    SetState(WORK_STATE_MOVE_FIND);
                }
            }
			break;
		case WORK_STATE_ADD_VERTEX:
			Add_Node(focus_, father_, &temp_frame_, x, y, leng_);
			SetState(WORK_STATE_MOVE_FIND);
			break;
		case WORK_STATE_MOVE_FIND:
				focus_ = temp_frame_.node[focus_id_];
				father_angle_ = focus_.angle;
				SetState(WORK_STATE_MOVE_VERTEX);
			break;
		case WORK_STATE_MOVE_VERTEX:
			Update_Sub_Vertex_Recursion(temp_frame_, focus_id_, focus_);
			SetState(WORK_STATE_MOVE_FIND);
			break;
		case WORK_STATE_PLAY_ACTION:
			temp_frame_ = frames_string_[frame_index_];
			
			break;
		}
	case 1:
		break;
	}
}

string WorkSpace::GetState()
{
	switch (work_state_)
	{
	case WORK_STATE_MOVE_FIND:
		return "WORK_STATE_MOVE_FIND";
	case WORK_STATE_MOVE_VERTEX:
		return "WORK_STATE_MOVE_VERTEX";
	case WORK_STATE_ADD_FIND:
		return "WORK_STATE_ADD_FIND";
	case WORK_STATE_ADD_VERTEX:
		return "WORK_STATE_ADD_VERTEX";
	case WORK_STATE_NULL:
		return "WORK_STATE_NULL";
	case WORK_STATE_PLAY_ACTION:
		return "WORK_STATE_PLAY_ACTION";
    case WORK_STATE_DRAW_RECTANGLE:
        return "WORK_STATE_DRAW_RECTANGLE";
	default:
		return "ERROR_STATE";
	}
}

bool WorkSpace::SetState(WorkState state)
{
    if (state == WORK_STATE_MOVE_FIND)
    {
        work_state_ = state;
        return true;
    }

	switch (work_state_)
	{
	case WORK_STATE_MOVE_FIND:
		if (state == WORK_STATE_ADD_VERTEX ||
            (state == WORK_STATE_DRAW_RECTANGLE && vertex.empty()) ||
            (state == WORK_STATE_PLAY_ACTION && frames_string_ == NULL))
			return false;
		break;
	case WORK_STATE_MOVE_VERTEX:
		if (state != WORK_STATE_MOVE_FIND)
			return false;
		break;
	case WORK_STATE_PLAY_ACTION:
		if ((state == WORK_STATE_MOVE_FIND
            && state == WORK_STATE_PLAY_ACTION))
			return false;
		break;
    case WORK_STATE_DRAW_RECTANGLE:
        if (state == WORK_STATE_MOVE_FIND
            && state == WORK_STATE_DRAW_RECTANGLE)
            return false;
        break;
	case WORK_STATE_NULL:
		if (state != WORK_STATE_MOVE_FIND)
			return false;
		break;
	case WORK_STATE_ADD_FIND:
		if (state != WORK_STATE_ADD_VERTEX)
			return false;
		break;
	case WORK_STATE_ADD_VERTEX:
		if (state != WORK_STATE_MOVE_FIND)
			return false;
		break;
	default:
		break;
	}
	
    this->work_state_ = state;

	return true;
}

void WorkSpace::SetPlay(int frame_number, Frame * frame_string)
{
	if (frames_string_)
		delete []frames_string_;
    frames_string_ = frame_string;
    num_frames_ = frame_number;
    frame_index_ = 0;
}

bool WorkSpace::SetLength(int leng)
{
    if(leng > MAX_LENGTH || leng < MIN_LENGTH)
    {
        return false;
    }

    leng_ = leng;
    return true;
}

void Move_Vertex(Frame* temp_frame_, int focus_id_, int x, int y)
{
    if (temp_frame_->node[focus_id_].father == focus_id_)
    {
        temp_frame_->node[focus_id_].x = x;
        temp_frame_->node[focus_id_].y = y;
    }
    else 
    {
        Node son = temp_frame_->node[focus_id_];
        Node father = temp_frame_->node[son.father];
        

        float angle = GetAngle(father.x, father.y, x, y);

        son.x = father.x + son.distance * sin(angle);
        son.y = father.y + son.distance * cos(angle);
        son.angle = angle;

        temp_frame_->node[focus_id_] = son;
    }
    
}

Node Move_Sub_Vertex(Node grand_father_, Node father, Node son, float father_angle_, Frame temp_frame_)
{
    float angle;
    angle = GetAngle(grand_father_.x, grand_father_.y, father.x, father.y) - father_angle_ + son.angle;
    //if (son.father == grand_father_.father) angle = son.angle;
    son.x = temp_frame_.node[son.father].x + son.distance * sin(angle);
    son.y = temp_frame_.node[son.father].y + son.distance * cos(angle);

    return son;
}

void Add_Node(Node focus_, int father_, Frame* temp_frame_, int x, int y, int leng_)
{

     float angle;
     Node temp_node_;
    if (father_ == temp_frame_->number)
    {
        temp_node_ = focus_;
        temp_node_.distance = leng_;
        temp_node_.direct_x = 0.0;
        temp_node_.direct_y = -1.0;
        temp_node_.rotate = false;
    }
    else
    {
        Node father = temp_frame_->node[father_];
        angle = GetAngle(father.x, father.y, x, y);
        Node tn = {father_, //父节点
            angle, //角度
            leng_, //到父节点的距离
            father.x + leng_ * sin(angle), 
            father.y + leng_ * cos(angle), 
            father.x + leng_ * sin(angle), 
            father.y + leng_ * cos(angle),
            false};
        temp_node_ = tn;
    }


    Node* node_result_ = new Node[temp_frame_->number + 1];
    for (int i = 0; i < temp_frame_->number; i++)
        node_result_[i] = temp_frame_->node[i];
    node_result_[temp_frame_->number] = temp_node_;

    delete []temp_frame_->node;
    temp_frame_->node = node_result_;
    temp_frame_->number++;
}

void Move_Vertex_Recursion(Frame &temp_frame_, int focus_id_, Node focus_)
{
    for (int i = 0; i < temp_frame_.number; i++)
    {
        if (temp_frame_.node[i].father == focus_id_ && i != temp_frame_.node[i].father)
        {
            temp_frame_.node[i] = Move_Sub_Vertex(
                temp_frame_.node[focus_.father], 
                focus_, 
                temp_frame_.node[i], 
                father_angle_,
                temp_frame_);

            Move_Vertex_Recursion(temp_frame_, i, focus_);
        }			
    }
}

void Update_Sub_Vertex_Recursion(Frame &temp_frame_, int focus_id_, Node focus_)
{
    for (int i = 0; i < temp_frame_.number; i++)
    {
        if (temp_frame_.node[i].father == focus_id_ && i != focus_id_)
        {
            temp_frame_.node[i].angle = GetAngle(focus_.x, focus_.y, temp_frame_.node[i].x, temp_frame_.node[i].y);

            Update_Sub_Vertex_Recursion(temp_frame_, i, temp_frame_.node[i]);
        }
    }
}