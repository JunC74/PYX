#include "Attempt/Render/lighting_manage.h"
#include "Attempt/Render/render.h"

namespace AttemptSpace
{
	LightingManage::~LightingManage()
	{
		Clear();
	}

	void LightingManage::AddObject(shared_ptr<Lighting> object)
	{
		light_objects_.push_back(object);
	}

	shared_ptr<Lighting> LightingManage::At(int index)
	{
		if(index < 0 || index >= light_objects_.size())
		{
			return boost::shared_ptr<Lighting>();
		}
		return light_objects_.at(index);
	}

	shared_ptr<Lighting>* LightingManage::GetArray()
	{
		if(light_objects_.size() == 0)
		{
			return NULL;
		}

		return &light_objects_[0];
	}

	void LightingManage::Clear()
	{
		light_objects_.clear();
	}

	void LightingManage::DeleteObject(int index)
	{
		if(index < 0 || index >= light_objects_.size())
		{
			return ;
		}
		light_objects_.erase(light_objects_.begin() + index);
	}
	
	int LightingManage::DeleteObject(boost::shared_ptr<Lighting> object)
	{
		int count = 0;
		for(int i = 0; i < light_objects_.size(); )
		{
			if(light_objects_.at(i).get() == object.get())
			{
				count++;
				light_objects_.erase(light_objects_.begin() + i);
			}
			else
			{
				i++;
			}
		}
		return count;
	}

	void LightingManage::Bind(RenderClass* render_device)
	{
		for(int i = 0; i < light_objects_.size(); i++)
		{
			light_objects_[i]->Bind(render_device, i);
		}
	}
} // end namespace AttemptSpace