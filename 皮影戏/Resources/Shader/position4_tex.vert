#version 140

uniform float k;

uniform mat4 ModelViewMatrix;	// ģ�Ӿ���
uniform mat4 ProjectionMatrix;	// ͶӰ����
uniform mat4 MVPMatrix;			// ģ��ͶӰ����

in vec2 vTexCoord;
in vec4 vPosition4;

out vec2 TexCoordOut;

void main()
{
	gl_Position = MVPMatrix * vPosition4;
	TexCoordOut = vTexCoord;
}