#include "AutoReleasePool.h"

namespace AttemptSpace
{

	void AutoReleasePool::Add(Object* object)
	{
		if(object != this && arr_object_pool.Add(object) == true)
		{
			object->b_auto_release = true;
			object->Release();
		}
	}

	void AutoReleasePool::Remove(Object* object)
	{
		object->Retain();
		if(arr_object_pool.Delete(object) == false)
		{
			object->Release();
		}
		else
		{
			object->b_auto_release = false;
		}
	}

	void AutoReleasePool::Clear()
	{
		int array_size = arr_object_pool.Size();
		for(int i = 0; i < array_size; i++)
		{
			arr_object_pool.At(i)->b_auto_release = false;
		}
		arr_object_pool.Clear();
	}

	void AutoReleasePool::Delete(Object* object)
	{
		if( arr_object_pool.Delete(object) == true)
		{
			object->b_auto_release = false;
		}
	}

	AutoReleasePool::AutoReleasePool()
		:Object(),
		arr_object_pool()
	{
	}


	AutoReleasePool::~AutoReleasePool()
	{
		this->Clear();
	}

	bool AutoReleasePool::Init()
	{
		arr_object_pool.Init();
		return true;
	}

	AutoReleasePool* AutoReleasePool::Create()
	{
		AutoReleasePool *object = new AutoReleasePool();
		if(object != NULL && object->Init() == true)
		{
			return object;
		}
		SAFRelease(object);
		return NULL;
	}

}	// end AttemptSpace
