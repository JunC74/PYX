#pragma once

#include <vector>
#include "shader.h"

class VDSObject
{
    UINT   now_frame_;  //当前在第几帧
    UINT   now_index_;
    UINT action_id_;    // 动作ID
    mat4 model_view_;   // 模式矩阵
    // 读取动作文件， 更新vector_index_， vertices_num_， vertex_attribute_
    int ReadVDS(const char *action_file_name);
public:
    GLuint vao_;    // 顶点缓冲区索引
    GLuint tex_;    // 纹理索引
    GLuint vbo_;
    std::vector <UINT> vertex_index_;        // 所有图形的索引
    std::vector <UINT> vertices_num_;       // 每一帧的顶点数目
    std::vector <VERTEX> vertex_attribute_;  //顶点的属性数组
     char picture_name[256];  //图片的名字

    VDSObject(void);
    VDSObject(const char* action_file_name, UINT action_id);
    ~VDSObject(void);

    // 更新为新的动作
    int UpDateBuffer(const char* action_file_name);

    // 设置动作ID
    void SetActionID(UINT action_id) { action_id_ = action_id; }
    
    // 得到动作ID
    UINT GetActionID() { return action_id_; }
   
    // 更新到下一帧
    void UpDate();

    // 更新shader
    void UpShader();

    // 设置模式矩阵
    void SetModelView(mat4 model_view) { model_view_ = model_view; }

    // 绘制动作
    void Draw();

    //释放资源
    void Free();

    // 显示当前帧的信息
    void ShowFrameInfo();
    void InitVertex();
};

