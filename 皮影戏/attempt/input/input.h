#ifndef __INPUT_H__
#define __INPUT_H__

#include "cocoa/Object.h"
#include "mind_control.h"
#include "keyboard.h"

namespace AttemptSpace
{
	enum InputType
	{
		INPUT_KeyBoard,		// 键盘输入
		INPUT_MindControl,	// 脑电波输入
		INPUT_NUM,			
	};
	class Input : public Object
	{
	public:

		Input();

		~Input();

		static Input* GetInstance();
		
		KeyBoard* GetKeyBoard();

		MindControl* GetMindControl();
		
		// 定制输入的类型
		void SetInputState(InputType type, bool state);

		//  检查某个输入类型的状态
		bool GetInputState(InputType type);

		// 读取输入信息
		void Read();

	protected:
	private:
		KeyBoard* keyboard_;
		MindControl * mind_control_;
		bool input_state_[INPUT_NUM];
		static Input *instance_;
	};

}	// end namespace AttemptSpace


#endif	// end define __INPUT_H__