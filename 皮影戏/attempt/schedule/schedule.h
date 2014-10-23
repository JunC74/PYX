#ifndef __SCHEDULE_H__
#define __SCHEDULE_H__

#include "cocoa/Object.h"
#include "Timeing.h"

namespace AttemptSpace
{

	class Schedule : public Object
	{
	public:
		static Schedule* GetInstance();

		int RegisterForTimeing(ScheduleEvent *pevent, 
			float interval,
			float delay,
			int count,
			int priority,
			bool is_pause);

		// 注册时间点
		// tag - 目标对象
		// FUNC_Schedule - 调用的函数
		// delay - 第一次调用的延时
		// interval - 调用间隔
		// count - 调用次数
		// is_pause - 是否暂停
		int RegisterForTimeing(Object *tag, 
			FUNC_Schedule func, 
			float interval,
			float delay,
			int count,
			int priority,
			bool is_pause);

		int RegisterForTimeing(Object *tag, 
			FUNC_Schedule func, 
			float interval,
			float delay,
			int count);

		int RegisterForTimeing(Object *tag, 
			FUNC_Schedule func, 
			float interval);

		int RegisterForTimeing(Object *tag,
			FUNC_Schedule func);

		int RegisterForTimeingOne(Object *tag,
			FUNC_Schedule func,
			float delay);

		// @brief 根据TimeingID来注销其调度
		// @param 注销Timeing的ID
		void UnRegisterForTimeing(int id);

		// Lua Support
		// @brief 注册脚本函数
		// return Timeing的ID，提供给
		int RegisterScriptFunc(unsigned int nHandler, float fInterval, bool bPaused);

		// @brief 设置Timeing的优先级
		// @param 需要设置的Timeing的ID和优先级
		void SetTimeingPriority(int Timeing_id, int priority);
		int GetTimeingPriority(int Timeing_id);


		// @brief 对象的调度是否处于暂停状态
		// @param 查询的对象
		bool IsTargetPause(int id);

		// @brief 暂停对象的调度
		void PauseTimeing(int id);

		// @brief 恢复对象的调度
		void ResumeTimeing(int id);

		// @brief 暂停调度器的调度
		void PauseAllTarget();

		// @brief 恢复调度器的调用
		void ResumeAllTarget();

		// @brief 设置调度器的时间速度
		void SetTimeScale(float time_scale) { time_scale_ = time_scale; }
		
		// @brief 获取调度器的时间速度
		float GetTimeScale(void) { return time_scale_; }

		void Update(float dt);
		
		~Schedule();

	private:
		Timeing* GetTimeingByID(int id);

		// 根据Timeing对象的优先级添加到响应的列表中
		void AddToTimeingList(Timeing * tag);

		// 把Timeing对象从列表中移除
		void RemoveToTimeingList(Timeing *tag);
	private:

		typedef map<int, Timeing*> TimeingIDMap;
		typedef list<Timeing*> TimeingList;

		static Schedule *instance_;
		
		Schedule();

		float time_scale_;	// 时间缩放值,用来对时间的加速和减数
		bool make_update_locked_;	// update是锁定schedule,阻止删除操作

		// interval == 0
		TimeingList priority_neg_;	// priority < 0
		TimeingList priority_zero_;	// priority == 0
		TimeingList priority_pos_;	// priority > 0

		TimeingIDMap id_map_;	// 所有Timeing的索引

		bool pause_;
	};
}	// end namespace AttemptSpace

#endif // end #define __SCHEDULE_H__