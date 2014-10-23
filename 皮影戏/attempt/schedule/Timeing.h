#ifndef __TIMEING_H__
#define __TIMEING_H__

#include "cocoa/Object.h"

namespace AttemptSpace
{
	//////////////////////////////////////////////////////////////////////////
	// Schedule��ִ�ж���
	//////////////////////////////////////////////////////////////////////////
	class ScheduleEvent : public Object
	{
	public:
		// ִ�к������������false�����ٵ����¼�
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

		// ִ�к������������false�����ٵ����¼�
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
		Object *tag_;			// Ŀ�����
		FUNC_Schedule func_;	// ���õĺ���
	};

	//////////////////////////////////////////////////////////////////////////
	// Timeing
	//////////////////////////////////////////////////////////////////////////

	class Timeing : public Object
	{
	public:

		// tag - Ŀ��
		// func - Ŀ����õĺ���
		// delay - ��һ�ε��õ���ʱ
		// interval - ���ü��
		// priority - ���ȼ�
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

		// ִ���趨�õĲ���
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
		ScheduleEvent *tag_;	// �¼�����
		float interval_;		// ���ü��(��)
		int priority_;			// ���ȼ�
		bool pause_;			// �Ƿ���ͣ
		bool destroy_;			// �Ƿ�����
		int count_;				// ���õĴ���
		float current_time_;	// ��ǰʱ��
	};

	/*
	class LuaTimeing : public Timeing
	{
	public:
		// func_handler - lua�ص��������
		// delay - ��һ�ε��õ���ʱ
		// interval - ���ü��
		// priority - ���ȼ�
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

		// ִ���趨�õĲ���
		virtual void Updata(float f_dt);

		virtual bool operator == (const Timeing *b);
	};
	*/
}	// namespace AttemptSpace
#endif __TIMEING_H__