#version 140

uniform sampler2D tex;	 // 2D���������

in vec2 TexCoordOut;

out vec4 fragColor;

void main()
{
	fragColor = texture2D( tex, TexCoordOut );
}