#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include "OBJ3D.h"

OBJ3D::OBJ3D(const wchar_t* fname)
{

    FILE *fin;
    fin = _wfopen(fname, L"rb");
    int vnum, fnum;
    if (fin == NULL)
    {
        printf("%s 文件读取错误！", fname);
        exit(0);
    }
    wchar_t keystr[10];
    fnum = vnum = 0;
    while (fscanf_s (fin, "%s", keystr) != EOF)
    {
        if (wcscmp(keystr, L"v") == 0)
        {
            vec3 coord;
            fscanf_s(fin, "%f %f %f", &coord.x, &coord.y, &coord.z);
            vv.push_back(coord);
            continue;
        }	
		if (wcscmp(keystr, L"vt") == 0)
		{
			vec3 tcoord;
			fscanf_s(fin, "%f %f %f", &tcoord.x, &tcoord.y, &tcoord.z);
			vt.push_back(vec2(tcoord.x, tcoord.y));
			continue;
		}
		if (wcscmp(keystr, L"vn") == 0)
		{
			vec3 ncoord;
			fscanf_s(fin, "%f %f %f", &ncoord.x, &ncoord.y, &ncoord.z);
			vn.push_back(ncoord);
			continue;
		}
        if (wcscmp(keystr, L"f") == 0)
        {
            for (int i = 0; i < 3; i++)
            {
				int tv, tvt, tvn;
				fscanf_s(fin, "%d/%d/%d", &tv, &tvt, &tvn);
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
		if (wcscmp(keystr, L"mtllib") == 0)
		{
			//材质文件名
			fscanf_s (fin, "%s", mtlname);
			continue;
		}
		if (wcscmp(keystr, L"g") == 0)
		{
			//组名
		}
		if (wcscmp(keystr, L"usemtl") == 0)
		{
			//所用的材质明
		}
		if (wcscmp(keystr, L"s") == 0)
		{
			//是否开启光滑
		}
        wchar_t str[1000];
        fscanf_s(fin, "%[^\n]*c", str);
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
