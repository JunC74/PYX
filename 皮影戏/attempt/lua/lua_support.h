#ifndef __LUA_SUPPORT_H__
#define __LUA_SUPPORT_H__

#include "LuaManager.h"
#include "schedule/Timeing.h"
#include "message_system/MessageEvent.h"

namespace AttemptSpace
{
	class LuaScheduleEvent : public ScheduleEvent
	{
	public:
		static LuaScheduleEvent* Create(int handel)
		{
			LuaScheduleEvent* obj = new LuaScheduleEvent();
			if (obj && obj->Init(handel) == true)
			{
				obj->AutoRelease();
				return obj;
			}
			SAFDelete(obj);
			return NULL;
		}

		bool Init(int handler)
		{
			func_handler_ = handler;
			return true;
		}

		// 执行函数，如果返回false则销毁调度事件
		void Execute(float f_delta) 
		{
			LuaManager::GetInstance()->PushFloat(f_delta);
			LuaManager::GetInstance()->ExecuteFunction(func_handler_, 1);
		};


		~LuaScheduleEvent() {};

		const char* GetEventType() { return NULL; };


	protected:
		LuaScheduleEvent() : ScheduleEvent() {} 
	protected:
		int func_handler_;	// Lua函数的句柄
	private:
	};
} // namespace AttemptSpace



class LuaMessageEvent : public MessageEvent
{
public:
	static LuaMessageEvent* Create(int type,  int handel)
	{
		LuaMessageEvent *obj = new LuaMessageEvent(type);
		if (obj && obj->Init(handel) == true)
		{
			obj->AutoRelease();
			return obj;
		}
		SAFDelete(obj);
		return NULL;
	}

	bool Init(int handler)
	{
		if (handler != 0)
		{
			handler_ = handler;
			return true;
		}
		return false;
	}

	int Execute(Message *msg)
	{
		LuaManager::GetInstance()->PushObject((Object*)msg, "Message");
		return LuaManager::GetInstance()->ExecuteFunction(handler_, 1);
	}

private:
	LuaMessageEvent(int type) : MessageEvent(type)
	{
		handler_ = NULL;
	}

private:
	int handler_;
};
#endif // __LUA_SUPPORT_H__