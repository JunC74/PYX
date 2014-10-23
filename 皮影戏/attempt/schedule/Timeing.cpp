#include "Timeing.h"

namespace AttemptSpace
{
	//////////////////////////////////////////////////////////////////////////
	// Timeing
	//////////////////////////////////////////////////////////////////////////

	// tag - 目标
	// func - 目标调用的函数
	// delay - 第一次调用的延时
	// interval - 调用间隔
	// priority - 优先级
	Timeing* Timeing::Create(ScheduleEvent *tag,
		float delay, 
		float interval, 
		int priority,
		int count,
		bool pause)
	{
		Timeing *obj = new Timeing();
		if (obj != NULL && 
			obj->Init(tag, delay, interval, priority, count, pause) == true)
		{
			obj->AutoRelease();
			return obj;
		}
		SAFDelete(obj);
		return NULL;
	}

	bool Timeing::Init(ScheduleEvent *tag,
		float delay, 
		float interval, 
		int priority,
		int count,
		bool pause)
	{
		if (tag == NULL || count < 0 || interval < 0)
		{
			return false;
		}
		tag_ = tag;
		SAFRetain(tag_);
		current_time_ = delay;
		interval_ = interval;
		priority_ = priority;
		count_ = count;
		current_time_ = 0;
		pause_ = pause;
		destroy_ = false;
		return true;
	}

	Timeing::Timeing()
		:Object(),
		tag_(NULL)
	{

	}

	Timeing::~Timeing()
	{
		SAFRelease(tag_);
	}

	// 执行设定好的操作
	void Timeing::Update(float f_dt)
	{
		// 调用间隔,第一次间隔为延时时间
		current_time_ -= f_dt;
		if (current_time_ > 0.0f) { return ;}
		current_time_ = interval_;

		// 执行预定的操作
		tag_->Execute(f_dt);

		if (count_ > 0)
		{
			count_--;
			if (count_ == 0)
			{
				MarkDestroy();
			}
		}
	}

} // namespace AttemptSpace