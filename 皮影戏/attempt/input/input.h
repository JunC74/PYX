#ifndef __INPUT_H__
#define __INPUT_H__

#include "cocoa/Object.h"
#include "mind_control.h"
#include "keyboard.h"

namespace AttemptSpace
{
	enum InputType
	{
		INPUT_KeyBoard,		// ��������
		INPUT_MindControl,	// �Ե粨����
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
		
		// �������������
		void SetInputState(InputType type, bool state);

		//  ���ĳ���������͵�״̬
		bool GetInputState(InputType type);

		// ��ȡ������Ϣ
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