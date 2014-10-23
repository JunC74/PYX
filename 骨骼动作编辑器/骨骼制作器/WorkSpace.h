#ifndef _WORK_SPACE_H_
#define _WORK_SPACE_H_

#include <vector>
#include <map>
#include <windows.h>
#include "frames_data_compute.h"
#include "ui_object.h"
#include <time.h>
using namespace std;

#define MAX_LENGTH 200  //�����ڵ����ӽڵ����󳤶�
#define MIN_LENGTH 10   //�����ڵ����ӽڵ����С����

enum WorkState
{
    WORK_STATE_NULL,			// NULL
    WORK_STATE_MOVE_FIND,		// �ƶ�����_ʰȡ��Ҫ�ƶ��Ķ���
    WORK_STATE_MOVE_VERTEX,	    // �ƶ�����_�ƶ����λ��
    WORK_STATE_ADD_FIND,		// ��ӵ�״̬_ʰȡ���ڵ�
    WORK_STATE_ADD_VERTEX,		// ��ӵ�״̬_ȷ���ӽڵ��λ��
    WORK_STATE_PLAY_ACTION,		// ��ʾ״̬
    WORK_STATE_DRAW_RECTANGLE   // ���ƾ���
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

    Frame temp_frame_; //��ʱ֡
	Frame *frames_string_; // ��ʾ��֡��
	int frame_index_;//��ʾ֡��������
    WorkState work_state_;	//�ؼ�״̬
	int father_;		//���׶���ı��
	int leng_;			//����
	Node focus_;		//���㶥��
	int focus_id_;		// ���㶥����
	int point_radius_;	// ��İ뾶
	int line_width_;		// �ߵĿ��
	int num_frames_;	//���Ĕ�Ŀ
    vector<vector<VERTEX>> vertex;

    Bitmap *previous_frame_bmp; //ǰһ֡����Ϣ

	clock_t start_time_;
	clock_t finish_time_;

    // ��ʼ����ر���
	void Init();

    // �������ͷ���ر��� 
    void Free();
public:
   
	WorkSpace() {};
	WorkSpace(
		HDC hdc, 
		const RECT &prect
		);	//�豸�� �����С������
	WorkSpace(
		WorkSpace &t_workSpace
		);

	~WorkSpace(void);

	// ����������ƶ����̳���UIObject�ࣩ 
	// ������
	//     x��y������UI�ؼ����µ����꣬���ϵ�Ϊԭ��
	void MouseMove(int x, int y);		

	// ���������İ�����Ӧ���̳���UIObject�ࣩ 
	// ������
	//     x��y�����ÿؼ��µ����꣬����Ϊԭ������
	//     msg����windows�ĺ궨�壬WM_LBUTTONDOWN�� WM_RBUTTONDOWN��
	void MouseKeyEvent (int x, int y, UINT msg);	

	// ���������ƶ��󣨼̳���UIObject�ࣩ 
	// ������
	//	   target_hdc����Ϊ���������������Ļ����豸
    void Draw(HDC target_hdc);

    // �������õ���ʱ֡����Ϣ
    // ����ֵ��
    //      �õ���ʱ֡����
    Frame GetTempFrame() {return temp_frame_;}

    // ������������ʱ֡����Ϣ
    void SetTempFrameData(Frame &frame_data);
    
    // ���������ò���֡���Ĳ���
    // ������frame_number ���� ֡����Ŀ
    //      frame_string ���� ֡���ݴ�
    void SetPlay(int frame_number, Frame * frame_string);

    // ����������״̬�����ؼ����ڲ��ɸı�״̬ʱ���޷�����״̬ת����
	// ������x��y����������꣬
    // ����ֵ�� true ���� ���óɹ�
    //         false ���� ����ʧ��
    bool SetState(WorkState state);

	void StateManager(int x, int y, int mouse_event_);

    // �����������µĽڵ�ľ���
    bool SetLength(int leng);

    // ����������ǰһ֡����Ϣ�����ڵ���Ϣ������λͼ�У���ʾΪ������
    // ������frame ���� ǰһ֡�Ľڵ���Ϣ
    void SetPreviousFrameBmp(const Frame &frame);

	string GetState();

    void SetVertex(vector<vector<VERTEX>> v) {vertex = v; };

	void Draw_State_Edit();

	void Draw_State_Play();

    void DraeStateRectangle();
};

#endif