#version 140
in vec2 texCoord;	// 输入片元纹理坐标

const int LightNum = 1; // 光源数量
in vec3 fN;	// 法向(观察坐标系)
in vec3 fE;	// 观察向量(观察坐标系)
in vec3 fL[LightNum];	// 光照向量(观察坐标系)


uniform bool LightOn[LightNum];	// 光源开关
uniform sampler2D tex;	 // 2D纹理采样器


// 三种物体材质的反射系数和对应光照分量的乘积
uniform vec4 AmbientProduct[LightNum];
uniform vec4 DiffuseProduct[LightNum]; 
uniform vec4 SpecularProduct[LightNum];
uniform vec4 Emission;		// 发射光
uniform float Shininess;	// 高光系数

out vec4 fragColor;		 // 输出片元颜色

void main()
{
	// 归一化输入的向量
	vec3 N = normalize(fN);
	vec3 E = normalize(fE);
	fragColor = vec4(0.0, 0.0, 0.0, 0.0); // 初始为0，针对ATI显卡
	vec4 specular = vec4(0.0, 0.0, 0.0, 0.0); // 镜面光分量
	for(int i = 0; i < LightNum; i++){	
		if(!LightOn[i]) continue; // 光源关闭，则不计算该光源的贡献
		
		vec3 L = normalize(fL[i]); // 光源方向向量(从顶点指向光源)
		
		float KSpot = 1.0;	// 受聚光灯影响的衰减系数(1.0即不衰减)
	
		
		vec3 H = normalize( L + E );	// 半角向量

		// 环境反射分量
		vec4 ambient = AmbientProduct[i];

		// 漫反射分量
		float Kd = max( dot(L, N), 0.0 );
		vec4 diffuse = KSpot * Kd * DiffuseProduct[i];

		
		
		// 镜面反射分量
		if( Kd != 0 ) {  // 即dot(L, N) > 0
			float Ks = pow( max(dot(N, H), 0.0), Shininess );
			specular += KSpot * Ks * SpecularProduct[i]; // 镜面分量单独累加
		} 

		// 得到最终颜色(不包含镜面光)
		fragColor += ambient + diffuse; 
	}
	specular.a = 0; //不改变透明度
	fragColor += Emission;	// 加上物体自身的发射光

	fragColor = fragColor * texture2D(tex, texCoord) + specular; // 得到最终片元颜色
	// 设置透明度
	//fragColor.a = (AmbientProduct[0].a + DiffuseProduct[0].a + SpecularProduct[0].a) / 3;
	
}