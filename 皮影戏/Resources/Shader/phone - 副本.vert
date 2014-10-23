#version 140 
const int LightNum = 4; // ��Դ����

uniform mat4 ModelView;		// ģ�Ӿ���
uniform mat4 Projection;	// ͶӰ����
uniform vec4 LightPosition[LightNum];	// ��Դλ��(�۲�����ϵ)

in  vec3 vPosition;	// ����λ��(��ģ����ϵ)
in  vec3 vNormal;	// ���㷨��(��ģ����ϵ)
in  vec2 vTexCoord;	// ������������

out vec3 fN;	// ����(�۲�����ϵ)
out vec2 texCoord;
out vec3 fE;	// �۲�����(�۲�����ϵ)
out vec3 fL[LightNum];	// ��������(�۲�����ϵ)
out float dist[2];	// ���㵽�ֵ�Ͳ��Դ����

in vec4 color;   //������ɫ
out vec4 fcolor;

void main()
{
    // ����������ת���۲�����ϵ��(�ڹ۲�����ϵ�������)
    vec3 pos = (ModelView * vec4(vPosition, 1.0)).xyz;
	fE = -pos;		// �۲��߷�������
	// �����㷨��ת���۲�����ϵ��(���ģ�ӱ任�����Ǿ����������)
    fN = (ModelView * vec4(vNormal, 0.0)).xyz;
	
	for(int i = 0; i < LightNum; i++){	
		if(LightPosition[i].w != 0) // �������Դ
			fL[i] = LightPosition[i].xyz - pos;
		else					 	// Զ�����Դ
			fL[i] = LightPosition[i].xyz; 
    }
	
	dist[0] = distance(pos, LightPosition[2].xyz);
	dist[1] = distance(pos, LightPosition[3].xyz);
	
	texCoord = vTexCoord;

	// �ü�����ϵ�¶�������
	gl_Position = Projection * vec4(pos, 1.0); 
	fcolor =color;
}