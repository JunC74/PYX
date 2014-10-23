#version 140

uniform float k;

uniform mat4 ModelViewMatrix;	// 模视矩阵
uniform mat4 ProjectionMatrix;	// 投影矩阵
uniform mat4 MVPMatrix;			// 模视投影矩阵

in vec3 vPosition3;

const vec4 color_in = vec4(1.0, 1.0, 1.0, 1.0);

out vec4 color;

void main()
{
	gl_Position = MVPMatrix * vec4(vPosition3, 1.0);
	color = color_in;
}