#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include "OBJ3D.h"

OBJ3D::OBJ3D(const char* fname)
{

    FILE *fin;
    fin = fopen(fname, "rb");
    int vnum, fnum;
    if (fin == NULL)
    {
        printf("文件读取错误！");
        exit(0);
    }
    char keystr[10];
    fnum = vnum = 0;
    while (fscanf (fin, "%s", keystr) != EOF)
    {
        if (strcmp(keystr, "v") == 0)
        {
            vec3 coord;
            fscanf(fin, "%f %f %f", &coord.x, &coord.y, &coord.z);
            vv.push_back(coord);
            continue;
        }	
		if (strcmp(keystr, "vt") == 0)
		{
			vec3 tcoord;
			fscanf(fin, "%f %f %f", &tcoord.x, &tcoord.y, &tcoord.z);
			vt.push_back(vec2(tcoord.x, tcoord.y));
			continue;
		}
		if (strcmp(keystr, "vn") == 0)
		{
			vec3 ncoord;
			fscanf(fin, "%f %f %f", &ncoord.x, &ncoord.y, &ncoord.z);
			vn.push_back(ncoord);
			continue;
		}
        if (strcmp(keystr, "f") == 0)
        {
            for (int i = 0; i < 3; i++)
            {
				int tv, tvt, tvn;
				fscanf(fin, "%d/%d/%d", &tv, &tvt, &tvn);
				tv--;
				VERTEX av;
				av.v = vv[tv];
				av.vt = vt[tvt - 1];
				av.vn = vn[tvn - 1];

				tv = vertexAttribute.size();
				vertexAttribute.push_back(av);
                index.push_back(tv);
            }
            continue;
        }
		if (strcmp(keystr, "mtllib") == 0)
		{
			//材质文件名
			fscanf (fin, "%s", mtlname);
			continue;
		}
		if (strcmp(keystr, "g") == 0)
		{
			//组名
		}
		if (strcmp(keystr, "usemtl") == 0)
		{
			//所用的材质明
		}
		if (strcmp(keystr, "s") == 0)
		{
			//是否开启光滑
		}
        char str[1000];
        fscanf(fin, "%[^\n]*c", str);
    }
    fclose(fin);
}

int OBJ3D::GetIndexSize()
{
    return sizeof(unsigned int) * index.size();
}

const unsigned int* OBJ3D::GetIndexp()
{
    return &index[0];
}

int OBJ3D::GetVertexAttributeSize()
{
    return sizeof(VERTEX) * vertexAttribute.size();
}

const VERTEX* OBJ3D::GetVertexAttributep()
{
    return &vertexAttribute[0];
}

int OBJ3D::GetTrianglesNum()
{
    return index.size() / 3;
}

int OBJ3D::GetVertexNum()
{
    return vertexAttribute.size();
}
