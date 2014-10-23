#version 140

uniform float k;

in vec4 color_in;
in vec4 vPosition4;

out vec4 color;

void main()
{
	gl_Position = vPosition4;
	color = color_in;
}