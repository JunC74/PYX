#include "Sprite.h"
# include <exception>

namespace AttemptSpace
{
	Sprite::Sprite() : Node()
	{
		geomety_model_ = NULL;
		pause_ = false;
		play_speed_ = 1.0;
		play_time_ = 0;
		play_count_ = 0;
		curr_play_count_ = 0;
		current_time_ = 0;
	}

	Sprite::~Sprite()
	{
		SAFRelease(geomety_model_);
	}

	Sprite* Sprite::CreateWithModel(Model *model)
	{
		Sprite *object = NULL;
		try
        {
                object = new Sprite();
        }
        catch (exception e)
        {
                cout << e.what() << endl;
        }
		if (object != NULL && object->Init(model) == true)
		{
			object->AutoRelease();
			return object;
		}
		SAFDelete(object);
		return NULL;
	}

	Sprite* Sprite::Create()
	{
		return CreateWithModel(NULL);
	}

	bool Sprite::Init(Model *model)
	{
		if (model == NULL)
		{
			return false;
		}
		geomety_model_ = model;
		geomety_model_->Retain();

		return true;
	}

	Model* Sprite::GetModel()
	{
		return geomety_model_;
	}

	void Sprite::SetGeomentryModel(Model *geomety_model)
	{
		SAFRelease(geomety_model_);
		SAFRetain(geomety_model);
		geomety_model_ = geomety_model;
		
		if (play_time_ > 0)
		{
			// 更新时间速度
			play_speed_ = geomety_model_->GetTimeLong() / play_time_; 
		}
		
	}

	void Sprite::Draw(float f_delta)
	{
		if (b_visible_ == true && geomety_model_ != NULL)
		{
			// 是否暂停
			if (pause_ == false && play_speed_ > 0)
			{
				current_time_ += f_delta * play_speed_;
				if (geomety_model_->GetTimeLong() != 0 &&
					current_time_ - geomety_model_->GetTimeLong() > 0.001)
				{
					int k = current_time_ / geomety_model_->GetTimeLong();
					current_time_ -= k * geomety_model_->GetTimeLong();
					if (play_count_ != 0)
					{
						// 播放次数的统计
						curr_play_count_ += k;
						if (curr_play_count_ >= play_count_)
						{
							pause_ = true;
							current_time_ = geomety_model_->GetTimeLong();
							curr_play_count_ = 0;
						}
					}
				}
			}
			geomety_model_->Draw(current_time_);
		}
	}

	AABB Sprite::GetAABB()
	{
		AABB box;
		for (int i = 0; i < child_array_->Size(); i++)
		{
			Node * node = (Node*)child_array_->At(i);
			AABB tbox = node->GetAABB();
			vec3 v = tbox.GetMax();
			box.Add(v.x, v.y, v.z);
			v = tbox.GetMin();
			box.Add(v.x, v.y, v.z);
		}
		if (geomety_model_)
		{
			vec3 v = geomety_model_->GetAABB(current_time_).GetMax();
			box.Add(v.x, v.y, v.z);
			v = geomety_model_->GetAABB(current_time_).GetMin();
			box.Add(v.x, v.y, v.z);
		}
		 
		box.SetToTransformedBox(this->GetTransform());
		return box;

	}
	void Sprite::SetPlayTime(float time) 
	{
		if (time >= 0)
		{
			play_time_ = time;
			if (geomety_model_ != NULL && play_time_ != 0)
			{
				// 计算时间的缩放值
				play_speed_ = geomety_model_->GetTimeLong() / play_time_;
			}
		}
	}

	void Sprite::SetPlayCount(int count)
	{
		if (count >= 0)
		{
			play_count_ = count;
		}
		else
		{
			Log::GetInstance()->Warn("Sprite::SetPlayCount count < 0");
		}
	}

}	// end namespace AttemptSpace