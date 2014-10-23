#version 140
in vec2 texCoord;	// ����ƬԪ��������

const int LightNum = 1; // ��Դ����
in vec3 fN;	// ����(�۲�����ϵ)
in vec3 fE;	// �۲�����(�۲�����ϵ)
in vec3 fL[LightNum];	// ��������(�۲�����ϵ)


uniform bool LightOn[LightNum];	// ��Դ����
uniform sampler2D tex;	 // 2D���������


// ����������ʵķ���ϵ���Ͷ�Ӧ���շ����ĳ˻�
uniform vec4 AmbientProduct[LightNum];
uniform vec4 DiffuseProduct[LightNum]; 
uniform vec4 SpecularProduct[LightNum];
uniform vec4 Emission;		// �����
uniform float Shininess;	// �߹�ϵ��

out vec4 fragColor;		 // ���ƬԪ��ɫ

void main()
{
	// ��һ�����������
	vec3 N = normalize(fN);
	vec3 E = normalize(fE);
	fragColor = vec4(0.0, 0.0, 0.0, 0.0); // ��ʼΪ0�����ATI�Կ�
	vec4 specular = vec4(0.0, 0.0, 0.0, 0.0); // ��������
	for(int i = 0; i < LightNum; i++){	
		if(!LightOn[i]) continue; // ��Դ�رգ��򲻼���ù�Դ�Ĺ���
		
		vec3 L = normalize(fL[i]); // ��Դ��������(�Ӷ���ָ���Դ)
		
		float KSpot = 1.0;	// �ܾ۹��Ӱ���˥��ϵ��(1.0����˥��)
	
		
		vec3 H = normalize( L + E );	// �������

		// �����������
		vec4 ambient = AmbientProduct[i];

		// ���������
		float Kd = max( dot(L, N), 0.0 );
		vec4 diffuse = KSpot * Kd * DiffuseProduct[i];

		
		
		// ���淴�����
		if( Kd != 0 ) {  // ��dot(L, N) > 0
			float Ks = pow( max(dot(N, H), 0.0), Shininess );
			specular += KSpot * Ks * SpecularProduct[i]; // ������������ۼ�
		} 

		// �õ�������ɫ(�����������)
		fragColor += ambient + diffuse; 
	}
	specular.a = 0; //���ı�͸����
	fragColor += Emission;	// ������������ķ����

	fragColor = fragColor * texture2D(tex, texCoord) + specular; // �õ�����ƬԪ��ɫ
	// ����͸����
	//fragColor.a = (AmbientProduct[0].a + DiffuseProduct[0].a + SpecularProduct[0].a) / 3;
	
}