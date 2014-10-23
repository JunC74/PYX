#version 140

uniform float k;

uniform mat4 ModelViewMatrix;	// 模视矩阵
uniform mat4 ProjectionMatrix;	// 投影矩阵
uniform mat4 MVPMatrix;			// 模视投影矩阵

in vec2 vTexCoord;
in vec4 vPosition4;

out vec2 TexCoordOut;

void main()
{
	gl_Position = MVPMatrix * vPosition4;
	TexCoordOut = vTexCoord;
}