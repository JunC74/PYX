#ifndef _FDS_H_
#define _FDS_H_

#include "Angel.h"
#include "Bitmap.h"
#include <cstring>
#include <vector>

namespace FDS{
    //////////////////////Forward Declarations//////////////////////
    //每根骨骼的信息
    struct ImagesNode 
    {
        int father, child;
        int id;
        float z;
		bool operator<(const ImagesNode &node) const
		{
			return z < node.z;
		}
    };

    //每个素材的信息
    struct ResourceSP
    {
        double x, y, width, hight;
        vec2 vt[4];
    };

    struct ImagesINI 
    {
        char picture_name[256];
        double width, hight;
        std::vector<ResourceSP> resource_sp;
        std::vector<ImagesNode> bmp_node;
    };

    struct VERTEX
    {
        vec3 v;	    //几何体顶点
        int vt_id;	//贴图坐标点编号
        int vn_id;	//顶点法线编号
    };
    
    struct VERT
    {
    };
    struct Node {
        int father;
        double angle;
        float distance;
        float x, y;
        double direct_x, direct_y;
        bool rotate;
    };

    struct NodeCollection{
        int father;
        int position;
        bool rotate;
    };

    struct Frame 
    {
        int number;     // 顶点的数目
        bool direction; // 人物的方向
        Node *node;
        Frame() {
            number = 0;
            node = NULL;
            direction = 0;
        }

        Frame(const Frame &frame)
        {
            this->number = frame.number;
            this->direction = frame.direction;
            if (frame.number > 0)
            {
                this->node = new Node[this->number];
                for(int i =0; i < this->number; i++) {
                    this->node[i] = frame.node[i];
                }
            }
        }
        Frame& operator=(const Frame& frame)
        {
            this->number = frame.number;
            this->direction = frame.direction;
            if (frame.number > 0)
            {
                this->node = new Node[this->number];
                for(int i =0; i < this->number; i++) {
                    this->node[i] = frame.node[i];
                }
            }
            return *this;
        }
        ~Frame() {
            if(node != NULL){
                delete [] node;
                node = NULL;
            }
        }
    };

    // 得到两点间的距离
    float GetDistance(float father_x, float father_y, float son_x, float son_y);

    /*
     * 两个向量之间的旋转角
     * 首先明确几个数学概念：
     * 1. 极轴沿逆时针转动的方向是正方向
     * 2. 两个向量之间的夹角theta， 是指(A^B)/(|A|*|B|) = cos(theta)，0<=theta<=180 度， 而且没有方向之分
     * 3. 两个向量的旋转角，是指从向量p1开始，逆时针旋转，转到向量p2时，所转过的角度， 范围是 0 ~ 360度
     * 计算向量p1到p2的旋转角，算法如下：
     * 首先通过点乘和arccosine的得到两个向量之间的夹角
     * 然后判断通过差乘来判断两个向量之间的位置关系
     * 如果p2在p1的顺时针方向, 返回arccose的角度值, 范围0 ~ 180.0(根据右手定理,可以构成正的面积)
     * 否则返回 360.0 - arecose的值, 返回180到360(根据右手定理,面积为负)
     */ 
     double GetRotateAngle(double x1, double y1, double x2, double y2);
     
     float GetAngle(int father_x_, int father_y_, int son_x_, int son_y_);
}

using namespace FDS;
#endif // !_FDS_H_
