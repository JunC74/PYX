#include "attempt/Render/render_group.h"
#include "attempt/Render/render.h"

namespace AttemptSpace
{
	void RenderGroup::Draw(RenderClass *render_divec)
	{
		render_divec->SetShader(shader_.get());
		object_manage.ObjectSort(render_divec, transformation_);
		int object_size = object_manage.GetSize();
		for(int i = 0; i < object_size; i++)
		{
			object_manage.At(i)->Draw(render_divec, transformation_, DRAW_UPDATA);
		}
	}


} // end namespace AttemptSpace