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

		// 播放控制
		bool IsPause() {return pause_; }
		// 暂停播放
		void Pause() { pause_ = true;};
		// 恢复播放
		void Recover() { pause_ = false; current_time_ = 0;};
		// 设置每一轮的播放时间
		void SetPlayTime(float time);
		// 获取每一轮的播放时间
		float GetPlayTime() { return play_time_; };

		// 设置播放次数
		// @param count 为0时表示循环播放，>0时播放结束后精灵自动暂停
		void SetPlayCount(int count);
		// 获取播放次数
		int GetPlayCount() { return play_count_;}
	private:
	

		// 动画相关
		float current_time_;	// 当前的时间
		bool pause_;		// 是否暂停
		float play_time_;	// 设定的播放时间
		float play_speed_;	// 播放书读的缩放值

		int play_count_;	 // 设定的播放次数
		int curr_play_count_;	// 当前的播放次数
	protected:
		Model *geomety_model_;
	};
}	// end namespace AttemptSpace

#endif // end define __SPRITE_H__