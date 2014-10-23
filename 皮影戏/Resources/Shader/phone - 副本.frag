#version 140
const int LightNum = 4; // ��Դ����
const int SportNUM = 2;	// �۹������

in vec3 fN;	// ����(�۲�����ϵ)
in vec2 texCoord;	// ����ƬԪ��������
in vec3 fE;	// �۲�����(�۲�����ϵ)
in vec3 fL[LightNum];	// ��������(�۲�����ϵ)
in float dist[2];	// ƬԪ���ֵ�Ͳ��Դ����



uniform bool LightOn[LightNum];	// ��Դ����
uniform sampler2D tex;	 // 2D���������
uniform bool OnlyTex;


uniform bool onlyColor;  //ֻ����ɫ

// ���һ����Դ�ľ۹�Ʋ���(ʹ�������۹��)
uniform vec3 SpotDirection[2];   // �۹�����䷽��(�۲�����ϵ)
uniform float SpotCutOff[2];	  // �۹�ƽ�ֹ��(�Ƕ�)
uniform float SpotExponent[2];   // �۹��˥��ָ��

// ����������ʵķ���ϵ���Ͷ�Ӧ���շ����ĳ˻�
uniform vec4 AmbientProduct[LightNum];
uniform vec4 DiffuseProduct[LightNum]; 
uniform vec4 SpecularProduct[LightNum];
uniform vec4 Emission;		// �����
uniform float Shininess;	// �߹�ϵ��

out vec4 fragColor;		 // ���ƬԪ��ɫ
in vec4 fcolor;

void main()
{
	if(onlyColor)
	{
		fragColor = fcolor;
	} 
	else{
	
	// ��һ�����������
    vec3 N = normalize(fN);
    vec3 E = normalize(fE);
	fragColor = vec4(0.0, 0.0, 0.0, 0.0); // ��ʼΪ0�����ATI�Կ�
	vec4 specular = vec4(0.0, 0.0, 0.0, 0.0); // ��������
	for(int i = 0; i < LightNum; i++){	
		if(!LightOn[i]) continue; // ��Դ�رգ��򲻼���ù�Դ�Ĺ���
		
		vec3 L = normalize(fL[i]); // ��Դ��������(�Ӷ���ָ���Դ)
		
		float KSpot = 1.0;	// �ܾ۹��Ӱ���˥��ϵ��(1.0����˥��)
		if(i == 2){
			// �����䷽���һ��������(��ΪLҲ�ǴӶ���ָ���Դ)
			vec3 spotDir = -normalize(SpotDirection[0]); 
			float cutoff = radians(SpotCutOff[0]); // �Ƕ�ת����
			float c = dot(L, spotDir);	// ƫ��ǵ�cosֵ
			if( c < cos(cutoff)) // ƫ��Ƕȳ�����ֹ��
				KSpot = 0.0;	// ��ȫ˥��
			else {// ǿ��˥��������c^f
				// dΪ�����˥����ʽ�ķ�ĸ
				float d = 1.0 + 0.5 * dist[0]; 
				KSpot = 1.0;//max(pow(c, SpotExponent[0]), 0) / d;
			}
		}
		
			if(i == 3){
			// �����䷽���һ��������(��ΪLҲ�ǴӶ���ָ���Դ)
			vec3 spotDir = -normalize(SpotDirection[1]); 
			float cutoff = radians(SpotCutOff[1]); // �Ƕ�ת����
			float c = dot(L, spotDir);	// ƫ��ǵ�cosֵ
			if( c < cos(cutoff)) // ƫ��Ƕȳ�����ֹ��
				KSpot = 0.0;	// ��ȫ˥��
			else {// ǿ��˥��������c^f
				// dΪ�����˥����ʽ�ķ�ĸ
				float d = 1.0 + 0.5 * dist[1]; 
				KSpot = 1.0;//max(pow(c, SpotExponent[1]), 0) / d;
			}
		}
		
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
	
	if(OnlyTex){
		fragColor = texture2D(tex, texCoord);
		//if(fragColor.a!=0)
		//fragColor.a = (AmbientProduct[0].a + DiffuseProduct[0].a + SpecularProduct[0].a) / 3;
		}
	else{
		fragColor = fragColor * texture2D(tex, texCoord) + specular; // �õ�����ƬԪ��ɫ
		// ����͸����
		//fragColor.a = (AmbientProduct[0].a + DiffuseProduct[0].a + SpecularProduct[0].a) / 3;

		
	}
	
	}
}