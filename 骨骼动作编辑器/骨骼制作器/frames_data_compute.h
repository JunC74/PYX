#ifndef _FRAMES_DATA_COMPUTE_H_
#define _FRAMES_DATA_COMPUTE_H_

//************************************************************//
//    FrameDataCompute�ฺ���FramesDataString�����ݽ��д���  //
// �õ���FramesDataString���㷨ģ�顣                         //
//************************************************************//

#include <fstream>
#include "frames_data_string.h"
#include "fds.h"
using namespace std;

class FramesDataCompute{
protected:
     int step_;                 // �����ؼ�֮֡����������֡��
     int frames_size_;          // �����֡�Ĵ�С
     FramesDataString *fds_;    //���д����֡���ж���
     int frame_id_;             //��ǰ�����ڵĹؼ�֡���
     ImagesINI bmp_ini_;           //�ڵ����Ϣ����

     //����֮֡���ȡ��ֵ
     //frameIndexָ֡����
     //frameNumָ��֮֡��Ҫ�����֡��
     vector<Frame> InsertionBetweenTwoFrames(int frameIndex, int frameNum);

     // �����������Ϊnum�ĵط�����һ֡����Ҫ������ת�ĽǶȣ�
     // ������num ���� ָ����֡���(��numΪ0ʱ�������)
     //      frame_data ���� ��Ҫ�����֡����
     void Insert(int num, const Node* frame_data);

     // ������ɾ��ָ����ŵ�֡
     void Delete(int num);

public:
     FramesDataCompute();
     FramesDataCompute(FramesDataString *fds_object);
     ~FramesDataCompute();

     // �������½��ļ�
     // ������file_name ���� �½����ļ���
     // ����ֵ��
     //      true ���� �����ļ��ɹ���
     //      false ���� �����ļ�ʧ�ܡ�
     bool CreateNewFile(const char* file_name);

     // ���������ļ�
     // ������file_name ���� ��Ҫ�򿪵��ļ�
     // ����ֵ��
     //      true ���� ���ļ��ɹ� 
     //      false ���� ���ļ�ʧ��
     bool OpenFile(const char* file_name);

     // �����ļ�
     // ����ֵ��
     //      true ���� �����ļ��ɹ� 
     //      false ���� �����ļ�ʧ��
     bool SaveFile();
     bool SaveFile(const char *file_name);

     // ����������֡���ݴ�����
     // ������
     //    fds_object ���� ��Ҫ���õ�Ŀ�����
     void SetFramesDataStringObject(FramesDataString *fds_object);

     // �������õ���ǰ��֡���
     int GetFrameId();

     // �������õ���ǰ��֡����
     int GetFramesNumber() {return fds_->GetFrameNum();}

     const char* GetFileName() {return fds_->GetFileName();}

     // ���������ò�����֡��
     // ������
     //     num ���� ֡��
     void SetStep(int num);

     // �������֡�Ĺ���С
     void SetOutSize(int length);

     // �������õ����в�ֵ���֡
     // �������������frames_number ���� ���֡��֡��
     // ����ֵ��
     //      NULL ���� ���ļ���������еĹؼ�֡
     //      ��NULL ���� ֡����������
     Frame* GetInterpolationFrames(int* frames_number);

     // �������õ�ָ����ŵĹؼ�֡
     // ������
     //    num ���� ��Ҫ����Ĺؼ�֡���
     // ����ֵ����NULL ���� ����������֡����
     //        NULL ���� û�и�֡
     Frame GetFrame(int num);

     // �������õ���һ֡�����޸ĵ�ǰ�����ڵĹؼ�֡��ţ�+1��
     // ����ֵ��
     //      ��NULL ���� ��һ֡����
     //      NULL ���� ��������һ֡
     Frame NextFrame();

     // �������õ�ǰһ֡�����޸ĵ�ǰ�����ڵĹؼ�֡��ţ�-1��
     // ����ֵ��
     //      ��NULL ���� ��һ֡����
     //      NULL ���� ��������һ֡
     // �������õ�ǰһ֡
     Frame PreviousFrame();

     // ����������ؼ�֡
     // ������frame_data ���� ��Ҫ����Ĺؼ�֡����
     // ����ֵ�� 
     //      true ���� ����ɹ��� 
     //      false ���� ����ʧ�ܡ�
     bool SaveFrame(const Frame& frame_data);

     // ������ �õ����εĶ�������
     vector<vector<VERTEX>> GetRectangleString();

     // ������ɾ��֡
     bool DeleteFrame();

     // ����������֡
     // ������ frame -- ��Ҫ����Ĺؼ�֡
     bool InsertFrame(Frame frame);

	 void SetFrameScale(float scale, Frame& frame_data);

	 double RadianToAngle(double radian);

	 double AngleToRadian(double angle);

	 int ComputeDeltaAngle(double radian, double previous_radian_);

     // �����������������ͼƬ�Ĵ�Сȷ��4�����������
     // ������
     //     father ���� ���ڵ�
     //     child ���� �ӽڵ�
     //     width ���� ͼ��Ŀ�
     //     hight ���� ͼ��ĸ�
     //     �������p ���� ����4�����������
     void CreateRectangle(const vec2 &father, const vec2 &child, 
         int width, int hight,vec2 *p);

     // ��������ȡ�����ļ�
     // ������ 
     //     file_name ���� ��ȡ�����õ��ļ���
     //     int num ���� ��Ҫ��ȡ�ĵ���
     //     bmp_node������� ���� ���ڵ����Ϣ
     // ����ֵ�� �ɹ���ȡ�Ľڵ���Ŀ
     int ReadINI(char *file_name, int num, ImagesINI *bmp_ini);

     // �Ѷ�������д��.vfds�ļ���
     int WriteVertex(const char *file_name, bool is_reversal);
};

#endif
