#ifndef __TIMEING_H__
#define __TIMEING_H__

#include "cocoa/Object.h"

namespace AttemptSpace
{
	//////////////////////////////////////////////////////////////////////////
	// Schedule的执行对象
	//////////////////////////////////////////////////////////////////////////
	class ScheduleEvent : public Object
	{
	public:
		// 执行函数，如果返回false则销毁调度事件
		virtual void Execute(float f_delta) { };

		virtual ~ScheduleEvent() {};

	protected:
		ScheduleEvent() : Object() {} 
	protected:
	private:
	};

	//////////////////////////////////////////////////////////////////////////
	// Object->func
	//////////////////////////////////////////////////////////////////////////
	class ObjScheduleEvent : public ScheduleEvent
	{
	public:
		static ObjScheduleEvent* Create(Object *tag, FUNC_Schedule func)
		{
			ObjScheduleEvent *obj = new ObjScheduleEvent();
			if (obj && obj->Init(tag, func) == true)
			{
				obj->AutoRelease();
				return obj;
			}
			SAFDelete(obj);
			return NULL;
		}

		// 执行函数，如果返回false则销毁调度事件
		void Execute(float f_delta) 
		{
			(tag_->*func_)(f_delta);
		}

		~ObjScheduleEvent() 
		{
		};
	protected:
		ObjScheduleEvent() : ScheduleEvent() 
		{
			tag_ = NULL;
			func_ = NULL;
		}

		bool Init(Object *tag, FUNC_Schedule func)
		{
			if (tag != NULL && func != NULL)
			{
				tag_ = tag;
				func_ = func;
				return true;
			}
			else
			{
				return false;
			}
		}

	private:
		Object *tag_;			// 目标对象
		FUNC_Schedule func_;	// 调用的函数
	};

	//////////////////////////////////////////////////////////////////////////
	// Timeing
	//////////////////////////////////////////////////////////////////////////

	class Timeing : public Object
	{
	public:

		// tag - 目标
		// func - 目标调用的函数
		// delay - 第一次调用的延时
		// interval - 调用间隔
		// priority - 优先级
		static Timeing* Create(ScheduleEvent *tag,
			float delay, 
			float interval, 
			int priority,
			int count,
			bool pause);

		bool Init(ScheduleEvent *tag,
			float delay, 
			float interval, 
			int priority,
			int count,
			bool pause);

		~Timeing();

		// 执行设定好的操作
		void Update(float f_dt);

		int GetPriority() { return priority_; }

		void SetPriority(int priority) { priority_ = priority; }

		bool IsPause() { return pause_; }

		void Pause() { pause_ = true; }

		void Resume() { pause_ = false; }

		bool IsMarkDestroy() { return destroy_; }

		void MarkDestroy() { destroy_ = true; }

		float GetInterval() { return interval_; }

	private:
		Timeing();
		ScheduleEvent *tag_;	// 事件对象
		float interval_;		// 调用间隔(秒)
		int priority_;			// 优先级
		bool pause_;			// 是否暂停
		bool destroy_;			// 是否销毁
		int count_;				// 调用的次数
		float current_time_;	// 当前时间
	};

	/*
	class LuaTimeing : public Timeing
	{
	public:
		// func_handler - lua回调函数句柄
		// delay - 第一次调用的延时
		// interval - 调用间隔
		// priority - 优先级
		static Timeing* Create(int func_handler, 
			float delay, 
			float interval, 
			int priority,
			int count);

		bool Init(int func_handler, 
			float delay, 
			float interval, 
			int priority,
			int count);

		virtual ~Timeing();

		// 执行设定好的操作
		virtual void Updata(float f_dt);

		virtual bool operator == (const Timeing *b);
	};
	*/
}	// namespace AttemptSpace
#endif __TIMEING_H__