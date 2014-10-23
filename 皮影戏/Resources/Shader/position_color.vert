#version 140

in vec4 vColor;
in vec4 vPosition4;

out vec4 color;

void main()
{
	gl_Position = vPosition4;
	color = vColor;
}