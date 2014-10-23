#include "Object.h"
#include "at_prefix.h"
#include "AutoReleasePool.h"
#include "ResourceManager.h" 
#include "lua/LuaManager.h"
#include "Log.h"

namespace AttemptSpace
{
	int Object::now_count = 0; 
	Object::Object() 
		:i_count(1), 
		lua_id(0), 
		b_auto_release(false) 
	{ 
		id = ++now_count; 
	} 


	Object::~Object() 
	{ 
		if(b_auto_release == true) 
		{ 
			// ���Զ��ͷŹ��������Ƴ��ö��� 
			ResourceManager::GetInstance()->GetAuoReleasePool()->Remove(this); 
		} 
		if(i_count > 0)
		{
			// ��ʾ����
			Log::GetInstance()->Warn(L"Object(ID:%d) �ͷ��ˣ�count > 0", id);
		} 
		if (lua_id != 0)
		{
			// �ͷ�lua����Դ
			LuaManager::GetInstance()->RemoveScriptObjectByObject(this);
		}
	} 

	Object* Object::Create() 
	{ 
		Object *pobject = new Object(); 
		if(pobject != NULL && pobject->Init()) 
		{ 
			return pobject; 
		} 

		SAFRelease(pobject); 
		return NULL; 
	} 

	bool Object::Init() 
	{ 
		return true; 
	} 

	void Object::AutoRelease() 
	{ 
		ResourceManager::GetInstance()->GetAuoReleasePool()->Add(this); 
	} 

	void Object::Retain() 
	{ 
		i_count++; 
	} 

	void Object::Release() 
	{ 
		i_count--; 
		if(i_count == 0) 
		{ 
			delete this; 
		} 
	} 

	int Object::GetCount() 
	{ 
		return i_count; 
	} 

	void Object::Copy(Object* object) 
	{ 
	} 

	void Object::Update(float f_delta)
	{

	}
	int Object::GetObjectNumber() 
	{ 
		return now_count; 
	}

}	// end namespace AttemptSpace

