#pragma once

#include <vector>
#include "shader.h"

class VDSObject
{
    UINT   now_frame_;  //��ǰ�ڵڼ�֡
    UINT   now_index_;
    UINT action_id_;    // ����ID
    mat4 model_view_;   // ģʽ����
    // ��ȡ�����ļ��� ����vector_index_�� vertices_num_�� vertex_attribute_
    int ReadVDS(const char *action_file_name);
public:
    GLuint vao_;    // ���㻺��������
    GLuint tex_;    // ��������
    GLuint vbo_;
    std::vector <UINT> vertex_index_;        // ����ͼ�ε�����
    std::vector <UINT> vertices_num_;       // ÿһ֡�Ķ�����Ŀ
    std::vector <VERTEX> vertex_attribute_;  //�������������
     char picture_name[256];  //ͼƬ������

    VDSObject(void);
    VDSObject(const char* action_file_name, UINT action_id);
    ~VDSObject(void);

    // ����Ϊ�µĶ���
    int UpDateBuffer(const char* action_file_name);

    // ���ö���ID
    void SetActionID(UINT action_id) { action_id_ = action_id; }
    
    // �õ�����ID
    UINT GetActionID() { return action_id_; }
   
    // ���µ���һ֡
    void UpDate();

    // ����shader
    void UpShader();

    // ����ģʽ����
    void SetModelView(mat4 model_view) { model_view_ = model_view; }

    // ���ƶ���
    void Draw();

    //�ͷ���Դ
    void Free();

    // ��ʾ��ǰ֡����Ϣ
    void ShowFrameInfo();
    void InitVertex();
};

