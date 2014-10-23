#version 140

uniform float k;

uniform mat4 ModelViewMatrix;	// ģ�Ӿ���
uniform mat4 ProjectionMatrix;	// ͶӰ����
uniform mat4 MVPMatrix;			// ģ��ͶӰ����

in vec3 vPosition3;

const vec4 color_in = vec4(1.0, 1.0, 1.0, 1.0);

out vec4 color;

void main()
{
	gl_Position = MVPMatrix * vec4(vPosition3, 1.0);
	color = color_in;
}