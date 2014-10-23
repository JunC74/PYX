/*
* �汾��1.01
*
* ����: �¿�
*
* ˵����
*	�뿴��OBJ3D����˵��.wps"�ļ�
*/
#ifndef OBJ3D_H
#define OBJ3D_H

#include <vector>
#include "Angel.h"

using namespace std;

class OBJ3D
{
private:
	vector <unsigned int> index; //���������
	vector <VERTEX> vertexAttribute;  //�������������
    vector <vec3> vn;   //����ķ�������
    vector <vec2> vt;   //�����λͼ'
	vector <vec3> vv;
	char mtlname[300];
	GLuint vao;
public:

	//�����ļ���fname��ȡ����
	OBJ3D(const char *fname);

	//��ö�����������ĵ�ַ
	const unsigned int* GetIndexp();

	//��ö�����������Ĵ�С
	int GetIndexSize();

	//��ö�����������ĵ�ַ
	const VERTEX* GetVertexAttributep();

	//��ö�����������Ĵ�С
	int GetVertexAttributeSize();

	//��������ε���Ŀ
	int GetTrianglesNum();

	//��ö������Ŀ
	int GetVertexNum();
};

#endif
