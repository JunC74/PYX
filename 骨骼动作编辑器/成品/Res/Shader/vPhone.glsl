#version 140 

uniform mat4 ModelView;		// ģ�Ӿ���
uniform mat4 Projection;	// ͶӰ����

in  vec3 vPosition;	// ����λ��(��ģ����ϵ)
in  vec2 vTexCoord;	// ������������

out vec2 texCoord;

void main()
{
    vec3 pos = (ModelView * vec4(vPosition, 1.0)).xyz;
	texCoord = vTexCoord;
	// �ü�����ϵ�¶�������
	gl_Position = Projection * vec4(pos, 1.0); 
}