#include "input.h"
#include "cocoa//ResourceManager.h"

namespace AttemptSpace
{
	Input* Input::instance_ = NULL;

	Input* Input::GetInstance()
	{
		if(instance_ == NULL)
		{
			instance_ = new Input();
			assert(instance_->Init() == AT_FAIL);
		}
		return instance_;
	}

	Input::Input() : Object()
	{
		memset(input_state_, 0, sizeof(input_state_));
		keyboard_ = NULL;
		mind_control_ = NULL;
	}

	Input::~Input()
	{
		SAFRelease(keyboard_);
		SAFRelease(mind_control_);
	}

	KeyBoard* Input::GetKeyBoard()
	{
		if (keyboard_ == NULL)
		{
			keyboard_ = KeyBoard::Create();
			SAFRetain(keyboard_);
		}
		return keyboard_;
	}

	MindControl* Input::GetMindControl()
	{
		if (mind_control_ == NULL)
		{
			mind_control_ = MindControl::Create();
			SAFRetain(mind_control_);
		}
		return mind_control_;
	}

	// 定制输入的类型
	void Input::SetInputState(InputType type, bool state)
	{
		if (type < 0 || type >= INPUT_NUM)
		{
			return;
		}

		input_state_[type] = state;
	}

	//  检查某个输入类型的状态
	bool Input::GetInputState(InputType type)
	{
		if (type < 0 || type >= INPUT_NUM)
		{
			return false;
		}
		else
		{
			return input_state_[type];
		}
	}

	// 读取输入信息
	void Input::Read()
	{
		if (input_state_[INPUT_KeyBoard] == true)
		{
			this->GetKeyBoard()->Read();
		}
		if (input_state_[INPUT_MindControl] == true)
		{
			this->GetMindControl()->Read();
		}
	}
}	// end namespace AttemptSpace