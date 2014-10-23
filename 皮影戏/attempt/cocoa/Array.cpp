#include "Array.h"

bool Array::Add(Object* object)
{
	if(object ==NULL || object == this || IsInArray(object) != -1)
	{
		return false;
	}

	object->Retain();
	v_data.push_back(object);
	return true;
}


void Array::Clear()
{
	vector<Object*>::iterator it = v_data.begin();
	while(it != v_data.end())
	{
		(*it)->Release();
		it++;
	}
	v_data.clear();
}

int Array::Size()
{
	return v_data.size();
}

Object* Array::At(int index)
{
	return v_data.at(index);
}

bool Array::Delete(int index)
{
	if(index < 0 || index >= v_data.size())
	{
		return false;
	}
	else
	{
		v_data.at(index)->Release();
		v_data.erase(v_data.begin() + index);
		return true;
	}
}

bool Array::Delete(Object *object)
{
	int index = this->IsInArray(object);
	if(index != -1)
	{
		return this->Delete(index);
	}
	return false;
}

Array* Array::Create()
{
	Array *object = new Array();
	if(object != NULL && object->Init() == true)
	{
		object->AutoRelease();
		return object;
	}
	else
	{
		SAFRelease(object);
	}
	return NULL;
}

bool Array::Init()
{
	return true;
}

Array::Array()
	:Object()
{
}


Array::~Array()
{
	Clear();
}

int Array::IsInArray(Object *object)
{
	for (int i = 0; i < v_data.size(); i++)
	{
		if(v_data.at(i) == object)
		{
			return i;
		}
	}
	return -1;
}