#pragma once

//**************************************************************\\
//    FramesDataString类是负责对于帧数据的保存和对于.fds_（帧数据流文件）\\
// 文件的读取。                                                   \\
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
	std::vector<Frame>	frames_string_; //帧序列
	bool LoadVersion01B(std::ifstream &frame_file);
    bool LoadVersion01(FILE *frame_file);
    char *file_name_;   //帧数据文件名

    void Init();

public: 
    FramesDataString();
	~FramesDataString(void);
 
	// 函数：加载文件.fds_文件 
	// 参数： 
	//     fds_file_name——文件名 
	bool LoadFramesDataString ( const char *fds_file_name );
 
    // 函数：修改文件名
    // 参数：file_name —— 需要检查的文件名
    // 返回值：
    //      tree —— 修改成功
    //      false —— 修改失败
    bool ChangeFileName(const char *file_name);

	// 函数：保存为.fds_文件 
	bool SaveFramesDataString ();
    bool SaveFramesDataStringB ();

	// 函数：插入关键帧进入序列理的某个位置
	// 参数：frame_data —— 需要插入序列的关键帧
	//      frame_id_ —— 序列号
	// 返回值：true —— 成功
	//       false —— 失败
	bool Insert(const Frame& frame_data, int frame_id_);

    //  函数：删除指定的帧
    //  参数：num ——  指定删除的帧的序号
    //  返回值：true —— 删除成功        
    bool DeleteFrame(int num);
    
    //  函数：得到现在的帧数
    //  返回值： 当前文件的帧数目
    int GetFrameNum();
    
    //  函数：得到指定序号的关键帧
    //  参数：
    //          num ——  指定的帧序号
    Frame GetFrameData(int num);

    const char* GetFileName() {return file_name_;}

	// 函数：创建文件
	bool CreateNewFramesString(const char* file_name);

    // 函数：修改帧
    // 参数：
    //      frame —— 新的帧数据
    //      id —— 替换的序号
    bool ReplaceFrame(const Frame& frame, int id);
}; 
 
