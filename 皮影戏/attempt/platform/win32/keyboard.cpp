#include "input/keyboard.h"
#include "win32_prefix.h"

namespace AttemptSpace
{
	
	KeyBoard::KeyBoard() :Object()
	{
		memset(key_state_, 0, sizeof(key_state_));
	}

	KeyBoard::~KeyBoard()
	{

	}

	KeyBoard* KeyBoard::Create()
	{
		KeyBoard *object = new KeyBoard();
		if (object != NULL && object->Init())
		{
			object->AutoRelease();
			return object;
		}
		SAFDelete(object);
		return NULL;
	}

	int KeyBoard::Read()
	{
		// 读取键盘的所有状态
		return GetKeyboardState(key_state_);
	}

	// 获取相应的按键状态
	byte KeyBoard::GetKeyState(KeySymbol key)
	{
		if (key < 0 || key > KeySymbol_NUM)
		{
			return 0;
		}
		return key_state_[key];
	}

	// 获取键盘状态数组
	const byte* KeyBoard::GetKeyStateArray()
	{
		return key_state_;
	}

	// 按键是否被按下
	bool KeyBoard::KeyDown(KeySymbol key)
	{
		if (key < 0 || key > KeySymbol_NUM)
		{
			return 0;
		}
		return key_state_[key] & 0xF0;
	}

	// 按键时候被激发
	bool KeyBoard::KeyAction(KeySymbol key)
	{
		if (key < 0 || key > KeySymbol_NUM)
		{
			return 0;
		}
		return key_state_[key] & 0x0F;
	}
}	