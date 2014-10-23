#version 140 

uniform mat4 ModelView;		// 模视矩阵
uniform mat4 Projection;	// 投影矩阵

in  vec3 vPosition;	// 顶点位置(建模坐标系)
in  vec2 vTexCoord;	// 顶点纹理坐标

out vec2 texCoord;

void main()
{
    vec3 pos = (ModelView * vec4(vPosition, 1.0)).xyz;
	texCoord = vTexCoord;
	// 裁剪坐标系下顶点坐标
	gl_Position = Projection * vec4(pos, 1.0); 
}