#version 140
const int LightNum = 3; // ��Դ����

in vec2 texCoord;	// ����ƬԪ��������

uniform sampler2D tex;	 // 2D���������

out vec4 fragColor;		 // ���ƬԪ��ɫ

void main()
{
	fragColor = vec4(0.0, 0.0, 0.0, 1.0); // ��ʼΪ0�����ATI�Կ�
	fragColor = texture2D( tex, texCoord );
	
}