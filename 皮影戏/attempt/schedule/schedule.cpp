#include "schedule.h"
#include "lua/lua_support.h"

namespace AttemptSpace
{

	//////////////////////////////////////////////////////////////////////////
	// Schedule
	//////////////////////////////////////////////////////////////////////////

	Schedule *Schedule::instance_ = NULL;
	Schedule* Schedule::GetInstance()
	{
		if(instance_ == NULL)
		{
			instance_ = new Schedule();
		}
		return instance_;
	}

	Schedule::Schedule() 
		:Object()
	{
		pause_ = false;
		time_scale_ = 0.0;
		make_update_locked_ = false;
	}

	Schedule::~Schedule()
	{
		Log::GetInstance()->Info("Schedule - ~Schedule()");
		for (TimeingIDMap::iterator it = id_map_.begin();
			it != id_map_.end();
			it++)
		{
			SAFRelease(it->second);
		}
	}

	int Schedule::RegisterForTimeing(ScheduleEvent *pevent, 
		float interval,
		float delay,
		int count,
		int priority,
		bool is_pause)
	{
		Timeing *time_obj = Timeing::Create(pevent, delay, interval, priority, count, is_pause);
		if (time_obj == NULL)
		{
			return 0;
		}
		else
		{
			id_map_[time_obj->id] = time_obj;
			SAFRetain(time_obj);
		}

		AddToTimeingList(time_obj);
		return time_obj->id;
	}

	int Schedule::RegisterForTimeing(Object *tag, 
		FUNC_Schedule func, 
		float interval,
		float delay,
		int count,
		int priority,
		bool is_pause)
	{
		// 查找是否已经注册了Timeing
		ObjScheduleEvent *pevent = ObjScheduleEvent::Create(tag, func);
		return RegisterForTimeing(pevent, interval, delay, count, priority, is_pause);
	}

	int Schedule::RegisterForTimeing(Object *tag, 
		FUNC_Schedule func, 
		float interval)
	{
		return RegisterForTimeing(tag, func, interval, 0, 0, 0, false);
	}

	int Schedule::RegisterForTimeing(Object *tag,
		FUNC_Schedule func)
	{
		return RegisterForTimeing(tag, func, 0, 0, 0, 0, false);
	}

	int Schedule::RegisterForTimeingOne(Object *tag,
		FUNC_Schedule func,
		float delay)
	{
		return RegisterForTimeing(tag, func, 0.0f, delay, 1, 0, false);
	}

	int Schedule::RegisterForTimeing(Object *tag, 
		FUNC_Schedule func, 
		float interval,
		float delay,
		int count)
	{
		return RegisterForTimeing(tag, func, interval, delay, count, 0, false);
	}

	// Lua Support
	// @brief 注册脚本函数
	// return Timeing的ID，提供给
	int Schedule::RegisterScriptFunc(unsigned int nHandler, float fInterval, bool bPaused)
	{
		LuaScheduleEvent* pevent = LuaScheduleEvent::Create(nHandler);
		return RegisterForTimeing(pevent, fInterval, 0, 0, 0, bPaused);
	}

	Timeing* Schedule::GetTimeingByID(int id)
	{
		TimeingIDMap::iterator it = id_map_.find(id);
		if (it != id_map_.end())
		{
			return it->second;
		}
		return NULL;
	}

	void Schedule::AddToTimeingList(Timeing * tag)
	{
		if (tag != NULL)
		{
			TimeingList *current_list = NULL;
			int priority = tag->GetPriority();
			if (priority < 0)
			{
				current_list = &priority_neg_;
			}
			else if (priority == 0)
			{
				current_list = &priority_zero_;
			}
			else
			{
				current_list = &priority_pos_;
			}

			TimeingList::iterator list_it = current_list->begin();
			while(list_it != current_list->end())
			{
				if ((*list_it)->GetPriority() < priority)
				{
					current_list->insert(list_it, tag);
					break;
				}
				list_it++;
			} // end for (TimeingList::iterator it = current_list->begin();
			if (list_it == current_list->end())
			{
				current_list->push_back(tag);
			}
		} // end if(tag != NULL)
	}

	void Schedule::RemoveToTimeingList(Timeing *tag)
	{
		if (tag != NULL)
		{
			TimeingList *current_list = NULL;
			int priority = tag->GetPriority();
			if (priority < 0)
			{
				current_list = &priority_neg_;
			}
			else if (priority == 0)
			{
				current_list = &priority_zero_;
			}
			else
			{
				current_list = &priority_pos_;
			}

			TimeingList::iterator list_it = current_list->begin();
			while(list_it != current_list->end())
			{
				if ((*list_it)->GetID() == tag->GetID())
				{
					current_list->erase(list_it);
					return ;
				}
				list_it++;
			} // end for (TimeingList::iterator it = current_list->begin();
		}
	}

	// @brief 设置Timeing的优先级
	// @param 需要设置的Timeing的ID和优先级
	void Schedule::SetTimeingPriority(int Timeing_id, int priority)
	{
		Timeing *tag = GetTimeingByID(Timeing_id);
		if (tag != NULL && tag->GetPriority() != priority)
		{
			RemoveToTimeingList(tag);
			AddToTimeingList(tag);
		}
	}

	int Schedule::GetTimeingPriority(int Timeing_id)
	{
		
		Timeing *tag = GetTimeingByID(Timeing_id);
		if (tag != NULL)
		{
			return tag->GetPriority();
		}
		Log::GetInstance()->Warn("Schedule::GetTimeingPriority: timeing_id(%d) is error!", 
			Timeing_id);
		return 0;
	}

	void Schedule::UnRegisterForTimeing(int id)
	{
		Timeing* timeing = NULL;
		TimeingIDMap::iterator map_it = id_map_.find(id);
		if (map_it == id_map_.end())
		{
			return ;
		}
		timeing = map_it->second;

		if (make_update_locked_ == true)
		{
			timeing->MarkDestroy();
			return ;
		}

		id_map_.erase(map_it);
		TimeingList *current_list = NULL;
		if(timeing->GetPriority() == 0)
		{
			current_list = &priority_zero_;
		}
		else if (timeing->GetPriority() < 0)
		{
			current_list = &priority_neg_;
		}
		else if(timeing->GetPriority() > 0)
		{
			current_list = &priority_pos_;
		}
		assert(current_list);

		for (TimeingList::iterator it = current_list->begin();
			it != current_list->end();
			it++)
		{
			if (*it == timeing)
			{
				current_list->erase(it);
				break;
			}
		} // end for

		SAFRelease(timeing);
	}


	bool Schedule::IsTargetPause(int id)
	{
		TimeingIDMap::iterator it = id_map_.find(id);
		if(it == id_map_.end())
		{
			return false;
		}
		else
		{
			return it->second->IsPause();
		}
	}

	void Schedule::PauseTimeing(int id)
	{
		TimeingIDMap::iterator it = id_map_.find(id);
		if(it == id_map_.end())
		{
			return ;
		}
		it->second->Pause();
	}

	void Schedule::ResumeTimeing(int id)
	{
		TimeingIDMap::iterator it = id_map_.find(id);
		if(it == id_map_.end())
		{
			return ;
		}
		it->second->Resume();
	}

	void Schedule::PauseAllTarget()
	{
		pause_ = true;
	}

	void Schedule::ResumeAllTarget()
	{
		pause_ = false;
	}

	void Schedule::Update(float dt)
	{
		if (pause_)
		{
			return ;
		}

		make_update_locked_ = true;

		if (time_scale_ != 0.0)
		{
			dt *= time_scale_;
		}

		// update priority > 0
		for (TimeingList::iterator pos_it = priority_pos_.begin(); 
			pos_it != priority_pos_.end(); 
			pos_it++)
		{
			if ((*pos_it)->IsPause() || (*pos_it)->IsMarkDestroy())
			{
				(*pos_it)->Update(dt);
			}
		}

		// update priority == 0
		for (TimeingList::iterator zero_it = priority_zero_.begin(); 
			zero_it != priority_zero_.end(); 
			zero_it++)
		{
			if ((*zero_it)->IsPause() == false && 
				(*zero_it)->IsMarkDestroy() == false)
			{
				(*zero_it)->Update(dt);
			}
		}

		// update priority < 0
		for (TimeingList::iterator neg_it = priority_neg_.begin(); 
			neg_it != priority_neg_.end(); 
			neg_it++)
		{
			if ((*neg_it)->IsPause() || (*neg_it)->IsMarkDestroy())
			{
				(*neg_it)->Update(dt);
			}
		}

		make_update_locked_ = false;

		// Remove destroy == true
		for (TimeingIDMap::iterator map_it = id_map_.begin();
			map_it != id_map_.end();)
		{
			if (map_it->second->IsMarkDestroy() == true)
			{
				TimeingIDMap::iterator temp_it = map_it;
				map_it++;
				UnRegisterForTimeing(temp_it->second->id);
			}
			else
			{
				map_it++;
			}
		}
	}

} // end namespace AttemptSpace