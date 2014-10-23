#ifndef __SPRITE_H__
#define __SPRITE_H__

#include "Node.h"
#include "model/model.h"

namespace AttemptSpace
{
	class Sprite : public Node
	{
	public:

		Sprite();

		~Sprite();

		static Sprite* CreateWithModel(Model *model);

		static Sprite* Create();

		bool Init(Model *model);

		Model* GetModel();

		void SetGeomentryModel(Model *geomety_model);

		virtual void Draw(float f_delta);

		AABB GetAABB();

		// ���ſ���
		bool IsPause() {return pause_; }
		// ��ͣ����
		void Pause() { pause_ = true;};
		// �ָ�����
		void Recover() { pause_ = false; current_time_ = 0;};
		// ����ÿһ�ֵĲ���ʱ��
		void SetPlayTime(float time);
		// ��ȡÿһ�ֵĲ���ʱ��
		float GetPlayTime() { return play_time_; };

		// ���ò��Ŵ���
		// @param count Ϊ0ʱ��ʾѭ�����ţ�>0ʱ���Ž��������Զ���ͣ
		void SetPlayCount(int count);
		// ��ȡ���Ŵ���
		int GetPlayCount() { return play_count_;}
	private:
	

		// �������
		float current_time_;	// ��ǰ��ʱ��
		bool pause_;		// �Ƿ���ͣ
		float play_time_;	// �趨�Ĳ���ʱ��
		float play_speed_;	// �������������ֵ

		int play_count_;	 // �趨�Ĳ��Ŵ���
		int curr_play_count_;	// ��ǰ�Ĳ��Ŵ���
	protected:
		Model *geomety_model_;
	};
}	// end namespace AttemptSpace

#endif // end define __SPRITE_H__