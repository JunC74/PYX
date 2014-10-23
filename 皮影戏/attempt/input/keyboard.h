#ifndef __KEYBOARD_H__
#define __KEYBOARD_H__

#include "cocoa/Object.h"
#include "keyboard_conf.h"

namespace AttemptSpace
{

	class KeyBoard : public Object
	{
	public:
		KeyBoard();
		
		~KeyBoard();

		static KeyBoard* Create();

		int Read();

		// ��ȡ��Ӧ�İ���״̬ ( ��λΪ1ʱ��������, Ϊ0ʱ���ڵ���״̬, ��λΪ����״̬)
		byte GetKeyState(KeySymbol key);

		// �����Ƿ񱻰���
		bool KeyDown(KeySymbol key);

		// ����ʱ�򱻼���
		bool KeyAction(KeySymbol key);

		// ��ȡ����״̬����
		const byte* GetKeyStateArray();

	protected:
		byte key_state_[KeySymbol_NUM];
	private:
	};
}	// end AttemptSpace

#endif	// end define __KEYBOARD_H__