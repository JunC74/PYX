#version 140
const int LightNum = 3; // 光源数量

in vec2 texCoord;	// 输入片元纹理坐标

uniform sampler2D tex;	 // 2D纹理采样器

out vec4 fragColor;		 // 输出片元颜色

void main()
{
	fragColor = vec4(0.0, 0.0, 0.0, 1.0); // 初始为0，针对ATI显卡
	fragColor = texture2D( tex, texCoord );
	
}