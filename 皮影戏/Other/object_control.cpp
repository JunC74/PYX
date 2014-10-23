#include "attempt/render/object_control.h"
#include "attempt/Render/render.h"

namespace AttemptSpace
{
	ObjectControl::ObjectControl()
	{
		ClearObject();
	}

	ObjectControl::~ObjectControl()
	{
		ClearObject();
	}

	void ObjectControl::ClearObject()
	{
		objects_.clear();
	}

	void ObjectControl::AddObject(boost::shared_ptr<RenderObject> object)
	{
		objects_.push_back(object);
	}

	void ObjectControl::DeleteObject(boost::shared_ptr<RenderObject> object)
	{
		for(int i = 0; i < objects_.size();)
		{
			if(objects_.at(i).get() == object.get())
			{
				objects_.erase(objects_.begin() + i);
			}
			else
			{
				i++;
			}
		}
	}

	boost::shared_ptr<RenderObject> ObjectControl::DeleteObject(int index)
	{
		if(index < 0 || index >= objects_.size())
		{
			boost::shared_ptr<RenderObject> object;
			return object;
		}
	}


	void ObjectControl::ObjectSort(RenderClass* render_device, mat4 transformation)
	{
		
		for(int i = 0; i < objects_.size(); i++)
		{
			 objects_.at(i)->ComputeZOffset(render_device, transformation);
		}
		std::sort(objects_.begin(), objects_.end());
	}

	int ObjectControl::GetSize()
	{
		return objects_.size();
	}

	boost::shared_ptr<RenderObject> ObjectControl::At(int index)
	{
		if(index < 0 || index >= objects_.size())
		{
			return boost::shared_ptr<RenderObject>();
		}
		return objects_.at(index);
	}

} // end namespace AttemptSpace