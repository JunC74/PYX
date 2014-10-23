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

		// 获取相应的按键状态 ( 高位为1时按键按下, 为0时则处于弹起状态, 低位为触发状态)
		byte GetKeyState(KeySymbol key);

		// 按键是否被按下
		bool KeyDown(KeySymbol key);

		// 按键时候被激发
		bool KeyAction(KeySymbol key);

		// 获取键盘状态数组
		const byte* GetKeyStateArray();

	protected:
		byte key_state_[KeySymbol_NUM];
	private:
	};
}	// end AttemptSpace

#endif	// end define __KEYBOARD_H__