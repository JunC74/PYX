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

		// ע��ʱ���
		// tag - Ŀ�����
		// FUNC_Schedule - ���õĺ���
		// delay - ��һ�ε��õ���ʱ
		// interval - ���ü��
		// count - ���ô���
		// is_pause - �Ƿ���ͣ
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

		// @brief ����TimeingID��ע�������
		// @param ע��Timeing��ID
		void UnRegisterForTimeing(int id);

		// Lua Support
		// @brief ע��ű�����
		// return Timeing��ID���ṩ��
		int RegisterScriptFunc(unsigned int nHandler, float fInterval, bool bPaused);

		// @brief ����Timeing�����ȼ�
		// @param ��Ҫ���õ�Timeing��ID�����ȼ�
		void SetTimeingPriority(int Timeing_id, int priority);
		int GetTimeingPriority(int Timeing_id);


		// @brief ����ĵ����Ƿ�����ͣ״̬
		// @param ��ѯ�Ķ���
		bool IsTargetPause(int id);

		// @brief ��ͣ����ĵ���
		void PauseTimeing(int id);

		// @brief �ָ�����ĵ���
		void ResumeTimeing(int id);

		// @brief ��ͣ�������ĵ���
		void PauseAllTarget();

		// @brief �ָ��������ĵ���
		void ResumeAllTarget();

		// @brief ���õ�������ʱ���ٶ�
		void SetTimeScale(float time_scale) { time_scale_ = time_scale; }
		
		// @brief ��ȡ��������ʱ���ٶ�
		float GetTimeScale(void) { return time_scale_; }

		void Update(float dt);
		
		~Schedule();

	private:
		Timeing* GetTimeingByID(int id);

		// ����Timeing��������ȼ���ӵ���Ӧ���б���
		void AddToTimeingList(Timeing * tag);

		// ��Timeing������б����Ƴ�
		void RemoveToTimeingList(Timeing *tag);
	private:

		typedef map<int, Timeing*> TimeingIDMap;
		typedef list<Timeing*> TimeingList;

		static Schedule *instance_;
		
		Schedule();

		float time_scale_;	// ʱ������ֵ,������ʱ��ļ��ٺͼ���
		bool make_update_locked_;	// update������schedule,��ֹɾ������

		// interval == 0
		TimeingList priority_neg_;	// priority < 0
		TimeingList priority_zero_;	// priority == 0
		TimeingList priority_pos_;	// priority > 0

		TimeingIDMap id_map_;	// ����Timeing������

		bool pause_;
	};
}	// end namespace AttemptSpace

#endif // end #define __SCHEDULE_H__