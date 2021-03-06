#include "Attempt/Render/lighting.h"
#include "Attempt/Render/render.h"

namespace AttemptSpace
{
	Lighting::Lighting()
	{}

	Lighting::~Lighting()
	{}

	void Lighting::Bind(RenderClass *render_device, int location)
	{
		char str[200];
		sprintf(str, "lighting[%d].", location);
		std::string str_lighting = str;

		Shader* shader = render_device->GetShader();
		glUniform1i(shader->GetUniformLocation(str_lighting + "light_type"),
			light_type);
		glUniform4fv(shader->GetUniformLocation(str_lighting + "ambient"),
			1, ambient);
		glUniform4fv(shader->GetUniformLocation(str_lighting + "diffuse"),
			1, diffuse);
		glUniform4fv(shader->GetUniformLocation(str_lighting + "position"),
			1, position);
		glUniform4fv(shader->GetUniformLocation(str_lighting + "direction"),
			1, direction);
		glUniform1f(shader->GetUniformLocation(str_lighting + "range"),
			range);
		glUniform1f(shader->GetUniformLocation(str_lighting + "phi"),
			phi);
		glUniform1i(shader->GetUniformLocation(str_lighting + "power"),
			power);
	}

} // end namespace AttemptSpace