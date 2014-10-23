#version 140 
// 变换矩阵
uniform mat4 ModelViewMatrix;		// 模视矩阵
uniform mat4 ProjectionMatrix;	// 投影矩阵
uniform mat4 MVPMatrix;

// 顶点属性
in  vec3 vPosition3;	// 顶点位置(建模坐标系)
in  vec3 vNormal;	// 顶点法向(建模坐标系)
in  vec2 vTexCoord;	// 顶点纹理坐标

// 关照相关
const int LightNum = 1; 	// 光源数量
uniform vec4 LightPosition[LightNum];	// 光源位置(观察坐标系)


out vec2 texCoord;
out vec3 fN;	// 法向(观察坐标系)
out vec3 fE;	// 观察向量(观察坐标系)
out vec3 fL[LightNum];	// 光照向量(观察坐标系)
out vec3 onormal;


void main()
{
    // 将顶点坐标转到观察坐标系下(在观察坐标系计算光照)
    vec3 pos = (ModelViewMatrix * vec4(vPosition3, 1.0)).xyz;
	fE = -pos;		// 观察者方向向量
	// 将顶点法向转到观察坐标系下(针对模视变换不含非均匀缩放情况)
    fN = (ModelViewMatrix * vec4(vNormal, 0.0)).xyz;
	
	for(int i = 0; i < LightNum; i++)
	{	
		fL[i] = LightPosition[i].xyz - pos;
    }
	
	
	texCoord = vTexCoord;

	// 裁剪坐标系下顶点坐标
	gl_Position = ProjectionMatrix * vec4(pos, 1.0); 
	onormal = vNormal;
}