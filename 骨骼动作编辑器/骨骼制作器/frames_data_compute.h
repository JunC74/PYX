#ifndef _FRAMES_DATA_COMPUTE_H_
#define _FRAMES_DATA_COMPUTE_H_

//************************************************************//
//    FrameDataCompute类负责对FramesDataString的数据进行处理  //
// 得到是FramesDataString的算法模块。                         //
//************************************************************//

#include <fstream>
#include "frames_data_string.h"
#include "fds.h"
using namespace std;

class FramesDataCompute{
protected:
     int step_;                 // 两个关键帧之间所需插入的帧数
     int frames_size_;          // 输出的帧的大小
     FramesDataString *fds_;    //所有处理的帧序列对象
     int frame_id_;             //当前所处在的关键帧序号
     ImagesINI bmp_ini_;           //节点的信息数组

     //在两帧之间获取插值
     //frameIndex指帧索引
     //frameNum指两帧之间要插入的帧数
     vector<Frame> InsertionBetweenTwoFrames(int frameIndex, int frameNum);

     // 函数：在序号为num的地方插入一帧（需要计算旋转的角度）
     // 参数：num —— 指定的帧序号(当num为0时插入最后)
     //      frame_data —— 需要插入的帧数据
     void Insert(int num, const Node* frame_data);

     // 函数：删除指定序号的帧
     void Delete(int num);

public:
     FramesDataCompute();
     FramesDataCompute(FramesDataString *fds_object);
     ~FramesDataCompute();

     // 函数：新建文件
     // 参数：file_name —— 新建的文件名
     // 返回值：
     //      true —— 创建文件成功。
     //      false —— 创建文件失败。
     bool CreateNewFile(const char* file_name);

     // 函数：打开文件
     // 参数：file_name —— 需要打开的文件
     // 返回值：
     //      true —— 打开文件成功 
     //      false —— 打开文件失败
     bool OpenFile(const char* file_name);

     // 保存文件
     // 返回值：
     //      true —— 保存文件成功 
     //      false —— 保存文件失败
     bool SaveFile();
     bool SaveFile(const char *file_name);

     // 函数：设置帧数据串对象
     // 参数：
     //    fds_object —— 需要设置的目标对象
     void SetFramesDataStringObject(FramesDataString *fds_object);

     // 函数：得到当前的帧序号
     int GetFrameId();

     // 函数：得到当前的帧总数
     int GetFramesNumber() {return fds_->GetFrameNum();}

     const char* GetFileName() {return fds_->GetFileName();}

     // 函数：设置插插入的帧数
     // 参数：
     //     num —— 帧数
     void SetStep(int num);

     // 设置输出帧的规格大小
     void SetOutSize(int length);

     // 函数：得到所有插值后的帧
     // 参数：（输出）frames_number —— 输出帧的帧数
     // 返回值：
     //      NULL —— 该文件输出了所有的关键帧
     //      非NULL —— 帧的坐标数据
     Frame* GetInterpolationFrames(int* frames_number);

     // 函数：得到指定序号的关键帧
     // 参数：
     //    num —— 需要输出的关键帧序号
     // 返回值：非NULL —— 计算出坐标的帧数据
     //        NULL —— 没有该帧
     Frame GetFrame(int num);

     // 函数：得到下一帧，并修改当前所处在的关键帧序号（+1）
     // 返回值：
     //      非NULL —— 下一帧数据
     //      NULL —— 不存在下一帧
     Frame NextFrame();

     // 函数：得到前一帧，并修改当前所处在的关键帧序号（-1）
     // 返回值：
     //      非NULL —— 上一帧数据
     //      NULL —— 不存在上一帧
     // 函数：得到前一帧
     Frame PreviousFrame();

     // 函数：保存关键帧
     // 参数：frame_data —— 需要保存的关键帧数据
     // 返回值： 
     //      true —— 保存成功。 
     //      false —— 保存失败。
     bool SaveFrame(const Frame& frame_data);

     // 函数： 得到矩形的顶点数组
     vector<vector<VERTEX>> GetRectangleString();

     // 函数：删除帧
     bool DeleteFrame();

     // 函数：插入帧
     // 参数： frame -- 需要插入的关键帧
     bool InsertFrame(Frame frame);

	 void SetFrameScale(float scale, Frame& frame_data);

	 double RadianToAngle(double radian);

	 double AngleToRadian(double angle);

	 int ComputeDeltaAngle(double radian, double previous_radian_);

     // 函数：根据两个点和图片的大小确定4个顶点的坐标
     // 参数：
     //     father —— 父节点
     //     child —— 子节点
     //     width —— 图像的宽
     //     hight —— 图像的高
     //     （输出）p —— 保存4个顶点的数组
     void CreateRectangle(const vec2 &father, const vec2 &child, 
         int width, int hight,vec2 *p);

     // 函数：读取配置文件
     // 参数： 
     //     file_name —— 读取的配置的文件名
     //     int num —— 需要读取的点数
     //     bmp_node（输出） —— 各节点的信息
     // 返回值： 成功读取的节点数目
     int ReadINI(char *file_name, int num, ImagesINI *bmp_ini);

     // 把顶点数据写入.vfds文件里
     int WriteVertex(const char *file_name, bool is_reversal);
};

#endif
