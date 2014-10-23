#version 140 
const int LightNum = 4; // 光源数量

uniform mat4 ModelView;		// 模视矩阵
uniform mat4 Projection;	// 投影矩阵
uniform vec4 LightPosition[LightNum];	// 光源位置(观察坐标系)

in  vec3 vPosition;	// 顶点位置(建模坐标系)
in  vec3 vNormal;	// 顶点法向(建模坐标系)
in  vec2 vTexCoord;	// 顶点纹理坐标

out vec3 fN;	// 法向(观察坐标系)
out vec2 texCoord;
out vec3 fE;	// 观察向量(观察坐标系)
out vec3 fL[LightNum];	// 光照向量(观察坐标系)
out float dist[2];	// 顶点到手电筒光源距离

in vec4 color;   //顶点颜色
out vec4 fcolor;

void main()
{
    // 将顶点坐标转到观察坐标系下(在观察坐标系计算光照)
    vec3 pos = (ModelView * vec4(vPosition, 1.0)).xyz;
	fE = -pos;		// 观察者方向向量
	// 将顶点法向转到观察坐标系下(针对模视变换不含非均匀缩放情况)
    fN = (ModelView * vec4(vNormal, 0.0)).xyz;
	
	for(int i = 0; i < LightNum; i++){	
		if(LightPosition[i].w != 0) // 近距离光源
			fL[i] = LightPosition[i].xyz - pos;
		else					 	// 远距离光源
			fL[i] = LightPosition[i].xyz; 
    }
	
	dist[0] = distance(pos, LightPosition[2].xyz);
	dist[1] = distance(pos, LightPosition[3].xyz);
	
	texCoord = vTexCoord;

	// 裁剪坐标系下顶点坐标
	gl_Position = Projection * vec4(pos, 1.0); 
	fcolor =color;
}