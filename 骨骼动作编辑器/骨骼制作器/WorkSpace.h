#ifndef _WORK_SPACE_H_
#define _WORK_SPACE_H_

#include <vector>
#include <map>
#include <windows.h>
#include "frames_data_compute.h"
#include "ui_object.h"
#include <time.h>
using namespace std;

#define MAX_LENGTH 200  //允许父节点与子节点的最大长度
#define MIN_LENGTH 10   //允许父节点与子节点的最小长度

enum WorkState
{
    WORK_STATE_NULL,			// NULL
    WORK_STATE_MOVE_FIND,		// 移动顶点_拾取需要移动的顶点
    WORK_STATE_MOVE_VERTEX,	    // 移动顶点_移动点的位置
    WORK_STATE_ADD_FIND,		// 添加点状态_拾取父节点
    WORK_STATE_ADD_VERTEX,		// 添加点状态_确定子节点的位置
    WORK_STATE_PLAY_ACTION,		// 演示状态
    WORK_STATE_DRAW_RECTANGLE   // 绘制矩形
};

class WorkSpace:
	public UIObject
{
private:
    HPEN   white_pen;
    HPEN   black_pen1;
    HPEN   black_pen3;
    HPEN   red_pen;
    HPEN   gray_pen;
    HBRUSH red_brush;
    HBRUSH white_brush;

    Frame temp_frame_; //临时帧
	Frame *frames_string_; // 演示的帧串
	int frame_index_;//演示帧串的索引
    WorkState work_state_;	//控件状态
	int father_;		//父亲顶点的编号
	int leng_;			//长度
	Node focus_;		//焦点顶点
	int focus_id_;		// 焦点顶点编号
	int point_radius_;	// 点的半径
	int line_width_;		// 线的宽度
	int num_frames_;	//幀的數目
    vector<vector<VERTEX>> vertex;

    Bitmap *previous_frame_bmp; //前一帧的信息

	clock_t start_time_;
	clock_t finish_time_;

    // 初始化相关变量
	void Init();

    // 函数：释放相关变量 
    void Free();
public:
   
	WorkSpace() {};
	WorkSpace(
		HDC hdc, 
		const RECT &prect
		);	//设备， 区域大小，坐标
	WorkSpace(
		WorkSpace &t_workSpace
		);

	~WorkSpace(void);

	// 函数：鼠标移动（继承于UIObject类） 
	// 参数：
	//     x，y——该UI控件的下的坐标，左上点为原点
	void MouseMove(int x, int y);		

	// 函数：鼠标的按键响应（继承于UIObject类） 
	// 参数：
	//     x，y——该控件下的坐标，左上为原点坐标
	//     msg——windows的宏定义，WM_LBUTTONDOWN， WM_RBUTTONDOWN等
	void MouseKeyEvent (int x, int y, UINT msg);	

	// 函数：绘制对象（继承于UIObject类） 
	// 参数：
	//	   target_hdc——为父窗口所传过来的画布设备
    void Draw(HDC target_hdc);

    // 函数：得到临时帧的信息
    // 返回值：
    //      得到临时帧数据
    Frame GetTempFrame() {return temp_frame_;}

    // 函数：设置临时帧的信息
    void SetTempFrameData(Frame &frame_data);
    
    // 函数：设置播放帧串的参数
    // 参数：frame_number —— 帧的数目
    //      frame_string —— 帧数据串
    void SetPlay(int frame_number, Frame * frame_string);

    // 函数：设置状态（当控件处于不可改变状态时，无法进行状态转换）
	// 参数：x，y——鼠标坐标，
    // 返回值： true —— 设置成功
    //         false —— 设置失败
    bool SetState(WorkState state);

	void StateManager(int x, int y, int mouse_event_);

    // 函数：设置新的节点的距离
    bool SetLength(int leng);

    // 函数：设置前一帧的信息（将节点信息保存在位图中，显示为背景）
    // 参数：frame —— 前一帧的节点信息
    void SetPreviousFrameBmp(const Frame &frame);

	string GetState();

    void SetVertex(vector<vector<VERTEX>> v) {vertex = v; };

	void Draw_State_Edit();

	void Draw_State_Play();

    void DraeStateRectangle();
};

#endif