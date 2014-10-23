/*
* 版本：1.01
*
* 作者: 陈俊
*
* 说明：
*	请看“OBJ3D—简单说明.wps"文件
*/
#ifndef OBJ3D_H
#define OBJ3D_H

#include <vector>
#include "Angel.h"

using namespace std;

class OBJ3D
{
private:
	vector <unsigned int> index; //顶点的索引
	vector <VERTEX> vertexAttribute;  //顶点的属性数组
	vector <vec3> vn;   //顶点的法线坐标
	vector <vec2> vt;   //顶点的位图'
	vector <vec3> vv;
	wchar_t mtlname[300];
	GLuint vao;
public:

	//根据文件名fname读取对象
	OBJ3D(const wchar_t *fname);

	//获得顶点索引数组的地址
	const unsigned int* GetIndexp();

	//获得顶点索引数组的大小
	int GetIndexSize();

	//获得顶点属性数组的地址
	const VERTEX* GetVertexAttributep();

	//获得顶点属性数组的大小
	int GetVertexAttributeSize();

	//获得三角形的数目
	int GetTrianglesNum();

	//获得顶点的数目
	int GetVertexNum();
};

#endif
