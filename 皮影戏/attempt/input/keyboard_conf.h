#ifndef __KEYBOARD_CONF_H__
#define __KEYBOARD_CONF_H__

// ʹ�õ���Win32�����VK����WinUser.h���ж��塣����д���ˡ�

namespace AttemptSpace
{
	enum KeySymbol
        {
			KEY_BackSpace	= 0x08,     // Backspace��
			KEY_Tab			= 0x09,		// Tab��
			KEY_Clear		= 0x0C,		// Clear����Num Lock�ر�ʱ�����ּ���5��
            KEY_Enter		= 0x0D,		// Enter��
			KEY_Shift		= 0x10,		// Shift��
			KEY_Control		= 0x11,		// Ctrl��
			KEY_MENU		= 0x12,		// Alt��
			KEY_Pause		= 0x13,		// Pause��
			KEY_Caps_Lock	= 0x14,     // Caps lock 
			KEY_Escape		= 0x1B,		// Ese��    
			KEY_Space		= 0x20,		// Spacebar��
			KEY_Page_Up		= 0x21,		// Page Up��
			KEY_Page_Down	= 0x22,		// Page Domw��
			KEY_End			= 0x23,		// End��
			KEY_Home		= 0x24,		// Home��
			KEY_Left		= 0x25,		// Move left, left arrow 
			KEY_Up			= 0x26,		// Move up, up arrow 
			KEY_Right		= 0x27,	    // Move right, right arrow 
			KEY_Down		= 0x28,     // Move down, down arrow 
			KEY_Select		= 0x29,		// Select��
			KEY_Print		= 0x2A,
			KEY_Execute		= 0x2B,		// EXECUTE��
			KEY_Snapshot	= 0x2C,		// Print Screen����ץ����
			
			KEY_Insert		= 0x2D,		// Ins��(Num Lock�ر�ʱ�����ּ���0)
			KEY_Delete		= 0x2E,		// Del��(Num Lock�ر�ʱ�����ּ���.)
			KEY_Help		= 0x2F,		// Help��

			KEY_0	= '0',
			KEY_1	= '1',
			KEY_2	= '2',
			KEY_3	= '3',
			KEY_4	= '4',
			KEY_5	= '5',
			KEY_6	= '6',
			KEY_7	= '7',
			KEY_8	= '8',
			KEY_9	= '9',
			KEY_A	= 'A',
			KEY_B	= 'B',
			KEY_C	= 'C',
			KEY_D	= 'D',
			KEY_E	= 'E',
			KEY_F	= 'F',
			KEY_G	= 'G',
			KEY_H	= 'H',
			KEY_I	= 'I',
			KEY_J	= 'J',
			KEY_K	= 'K',
			KEY_L	= 'L',
			KEY_M	= 'M',
			KEY_N	= 'N',
			KEY_O	= 'O',
			KEY_P	= 'P',
			KEY_Q	= 'Q',
			KEY_R	= 'R',
			KEY_S	= 'S',
			KEY_T	= 'T',
			KEY_U	= 'U',
			KEY_V	= 'V',
			KEY_W	= 'W',
			KEY_X	= 'X',
			KEY_Y	= 'Y',
			KEY_Z	= 'Z',

			// С����
			KEY_KP_0 = 0x60,
			KEY_KP_1,
			KEY_KP_2,
			KEY_KP_3,
			KEY_KP_4,
			KEY_KP_5,
			KEY_KP_6,
			KEY_KP_7,
			KEY_KP_8,
			KEY_KP_9,

			KEY_KP_Multiply		= 0x6A,	// '*'
			KEY_KP_Add			= 0x6B,	// '+'
			KEY_KP_Separator	= 0x6C, // Separator��
			KEY_KP_Subtract		= 0x6D,	// '-'
			KEY_KP_Decimal		= 0x6E, // '.'
			KEY_KP_Divide		= 0x6F, // '/'

			// F1~F24
			KEY_F1 = 0x70,
			KEY_F2,
			KEY_F3,
			KEY_F4,
			KEY_F5,
			KEY_F6,
			KEY_F7,
			KEY_F8,
			KEY_F9,
			KEY_F10,
			KEY_F11,
			KEY_F12,
			KEY_F13,
			KEY_F14,
			KEY_F15,
			KEY_F16,
			KEY_F17,
			KEY_F18,
			KEY_F19,
			KEY_F20,
			KEY_F21,
			KEY_F22,
			KEY_F23,
			KEY_F24,

			KEY_Num_Lock	= 0x90,		// Num Lock ��
			KEY_Scroll_Lock	= 0x91,		// Scroll Lock��

            KEY_Shift_L		= 0xA0,		// Left shift 
            KEY_Shift_R		= 0xA1,		// Right shift 
            KEY_Control_L	= 0xA2,		// Left control 
            KEY_Control_R	= 0xA3,		// Right control 
            KEY_MENU_L		= 0xA4,		// Left alt 
            KEY_MENU_R		= 0xA5,		// Right alt 

            KEY_OEM_1       = 0xBA,		// ';:' for US
			KEY_OEM_PLUS    = 0xBB,		// '+' any country
			KEY_OEM_COMMA	= 0xBC,		// ',' any country
			KEY_OEM_MINUS   = 0xBD,		// '-' any country
			KEY_OEM_PERIOD  = 0xBE,		// '.' any country
			KEY_OEM_2       = 0xBF,		// '/?' for US
			KEY_OEM_3       = 0xC0,		// '`~' for US

			KeySymbol_NUM = 256,
        };
}	// end namespace AttemptSpace

#endif	// end define __KEYBOARD_CONF_H__