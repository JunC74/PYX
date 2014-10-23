#pragma once

//**************************************************************\\
//    FramesDataString���Ǹ������֡���ݵı���Ͷ���.fds_��֡�������ļ���\\
// �ļ��Ķ�ȡ��                                                   \\
//**************************************************************\\



#include <vector>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "fds.h"
 
#define FRAME_VERSION 1
#define FRAME_SIZE 100
class FramesDataString
{ 
protected: 
	std::vector<Frame>	frames_string_; //֡����
	bool LoadVersion01B(std::ifstream &frame_file);
    bool LoadVersion01(FILE *frame_file);
    char *file_name_;   //֡�����ļ���

    void Init();

public: 
    FramesDataString();
	~FramesDataString(void);
 
	// �����������ļ�.fds_�ļ� 
	// ������ 
	//     fds_file_name�����ļ��� 
	bool LoadFramesDataString ( const char *fds_file_name );
 
    // �������޸��ļ���
    // ������file_name ���� ��Ҫ�����ļ���
    // ����ֵ��
    //      tree ���� �޸ĳɹ�
    //      false ���� �޸�ʧ��
    bool ChangeFileName(const char *file_name);

	// ����������Ϊ.fds_�ļ� 
	bool SaveFramesDataString ();
    bool SaveFramesDataStringB ();

	// ����������ؼ�֡�����������ĳ��λ��
	// ������frame_data ���� ��Ҫ�������еĹؼ�֡
	//      frame_id_ ���� ���к�
	// ����ֵ��true ���� �ɹ�
	//       false ���� ʧ��
	bool Insert(const Frame& frame_data, int frame_id_);

    //  ������ɾ��ָ����֡
    //  ������num ����  ָ��ɾ����֡�����
    //  ����ֵ��true ���� ɾ���ɹ�        
    bool DeleteFrame(int num);
    
    //  �������õ����ڵ�֡��
    //  ����ֵ�� ��ǰ�ļ���֡��Ŀ
    int GetFrameNum();
    
    //  �������õ�ָ����ŵĹؼ�֡
    //  ������
    //          num ����  ָ����֡���
    Frame GetFrameData(int num);

    const char* GetFileName() {return file_name_;}

	// �����������ļ�
	bool CreateNewFramesString(const char* file_name);

    // �������޸�֡
    // ������
    //      frame ���� �µ�֡����
    //      id ���� �滻�����
    bool ReplaceFrame(const Frame& frame, int id);
}; 
 
