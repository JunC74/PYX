#ifndef _FDS_H_
#define _FDS_H_

#include "Angel.h"
#include "Bitmap.h"
#include <cstring>
#include <vector>

namespace FDS{
    //////////////////////Forward Declarations//////////////////////
    //ÿ����������Ϣ
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

    //ÿ���زĵ���Ϣ
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
        vec3 v;	    //�����嶥��
        int vt_id;	//��ͼ�������
        int vn_id;	//���㷨�߱��
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
        int number;     // �������Ŀ
        bool direction; // ����ķ���
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

    // �õ������ľ���
    float GetDistance(float father_x, float father_y, float son_x, float son_y);

    /*
     * ��������֮�����ת��
     * ������ȷ������ѧ���
     * 1. ��������ʱ��ת���ķ�����������
     * 2. ��������֮��ļн�theta�� ��ָ(A^B)/(|A|*|B|) = cos(theta)��0<=theta<=180 �ȣ� ����û�з���֮��
     * 3. ������������ת�ǣ���ָ������p1��ʼ����ʱ����ת��ת������p2ʱ����ת���ĽǶȣ� ��Χ�� 0 ~ 360��
     * ��������p1��p2����ת�ǣ��㷨���£�
     * ����ͨ����˺�arccosine�ĵõ���������֮��ļн�
     * Ȼ���ж�ͨ��������ж���������֮���λ�ù�ϵ
     * ���p2��p1��˳ʱ�뷽��, ����arccose�ĽǶ�ֵ, ��Χ0 ~ 180.0(�������ֶ���,���Թ����������)
     * ���򷵻� 360.0 - arecose��ֵ, ����180��360(�������ֶ���,���Ϊ��)
     */ 
     double GetRotateAngle(double x1, double y1, double x2, double y2);
     
     float GetAngle(int father_x_, int father_y_, int son_x_, int son_y_);
}

using namespace FDS;
#endif // !_FDS_H_
