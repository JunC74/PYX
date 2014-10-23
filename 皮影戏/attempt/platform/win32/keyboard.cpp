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
		// ��ȡ���̵�����״̬
		return GetKeyboardState(key_state_);
	}

	// ��ȡ��Ӧ�İ���״̬
	byte KeyBoard::GetKeyState(KeySymbol key)
	{
		if (key < 0 || key > KeySymbol_NUM)
		{
			return 0;
		}
		return key_state_[key];
	}

	// ��ȡ����״̬����
	const byte* KeyBoard::GetKeyStateArray()
	{
		return key_state_;
	}

	// �����Ƿ񱻰���
	bool KeyBoard::KeyDown(KeySymbol key)
	{
		if (key < 0 || key > KeySymbol_NUM)
		{
			return 0;
		}
		return key_state_[key] & 0xF0;
	}

	// ����ʱ�򱻼���
	bool KeyBoard::KeyAction(KeySymbol key)
	{
		if (key < 0 || key > KeySymbol_NUM)
		{
			return 0;
		}
		return key_state_[key] & 0x0F;
	}
}	