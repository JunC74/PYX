#version 140 
// �任����
uniform mat4 ModelViewMatrix;		// ģ�Ӿ���
uniform mat4 ProjectionMatrix;	// ͶӰ����
uniform mat4 MVPMatrix;

// ��������
in  vec3 vPosition3;	// ����λ��(��ģ����ϵ)
in  vec3 vNormal;	// ���㷨��(��ģ����ϵ)
in  vec2 vTexCoord;	// ������������

// �������
const int LightNum = 1; 	// ��Դ����
uniform vec4 LightPosition[LightNum];	// ��Դλ��(�۲�����ϵ)


out vec2 texCoord;
out vec3 fN;	// ����(�۲�����ϵ)
out vec3 fE;	// �۲�����(�۲�����ϵ)
out vec3 fL[LightNum];	// ��������(�۲�����ϵ)
out vec3 onormal;


void main()
{
    // ����������ת���۲�����ϵ��(�ڹ۲�����ϵ�������)
    vec3 pos = (ModelViewMatrix * vec4(vPosition3, 1.0)).xyz;
	fE = -pos;		// �۲��߷�������
	// �����㷨��ת���۲�����ϵ��(���ģ�ӱ任�����Ǿ����������)
    fN = (ModelViewMatrix * vec4(vNormal, 0.0)).xyz;
	
	for(int i = 0; i < LightNum; i++)
	{	
		fL[i] = LightPosition[i].xyz - pos;
    }
	
	
	texCoord = vTexCoord;

	// �ü�����ϵ�¶�������
	gl_Position = ProjectionMatrix * vec4(pos, 1.0); 
	onormal = vNormal;
}