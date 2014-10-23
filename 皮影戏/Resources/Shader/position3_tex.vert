#version 140

uniform float k;

uniform mat4 ModelViewMatrix;	// ģ�Ӿ���
uniform mat4 ProjectionMatrix;	// ͶӰ����
uniform mat4 MVPMatrix;		// ģ��ͶӰ����

in vec2 vTexCoord;
in vec3 vPosition3;

out vec2 TexCoordOut;

void main()
{
	gl_Position = MVPMatrix * vec4(vPosition3, 1.0);
	TexCoordOut = vTexCoord;
}