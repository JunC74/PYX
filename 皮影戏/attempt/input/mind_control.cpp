#include "mind_control.h"
#include "thinkgear.h"

namespace AttemptSpace
{

	MindControl::MindControl() : Object()
	{
		connectionId = 0;
		blink_strength = 0;
	}
	
	MindControl::~MindControl()
	{
		if(connectionId != 0)
		{
			TG_FreeConnection( connectionId );
		}
	}
	
	MindControl* MindControl::Create()
	{
		MindControl *obj = new MindControl();
		if(obj && obj->Init() == true)
		{
			obj->AutoRelease();
			return obj;
		}
		SAFDelete(obj);
		return NULL;
	}

	bool MindControl::Init()
	{
		/* Print driver version number */
		int dllVersion = TG_GetDriverVersion();
		Log::GetInstance()->Info( "ThinkGear DLL version: %d\n", dllVersion );
		/* Get a connection ID handle to ThinkGear */
		connectionId = TG_GetNewConnectionId();

		if (connectionId < 0)
		{
			Log::GetInstance()->Error( "TG_GetNewConnectionId() returned %d.\n", 
			connectionId );
		}
		char comPortName[50];
		for (int i = 3; i < 50; i++)
		{
			//	连接COM端口
			sprintf(comPortName, "\\\\.\\COM%d", i);
			int errCode = TG_Connect( connectionId, 
				comPortName, 
				TG_BAUD_9600, 
				TG_STREAM_PACKETS );
			if( errCode >= 0 ) 
			{
				Log::GetInstance()->Info("COM Port : %s is connect Succeed!", comPortName);
				break;
			}
		}

		TG_EnableAutoRead (connectionId, 1);
		return true;
	}

	int MindControl::Read()
	{
		// 眨眼力度的特别处理
		int blink = TG_GetValue(connectionId, DATA_BLINK_STRENGTH);
		int k = blink_strength < 0 ? -blink_strength : blink_strength;
		if (k == blink)
		{
			blink_strength = -blink;
		}
		else
		{
			blink_strength = blink;
		}
		return 0;

	}

	int MindControl::GetData(MindControlSymbol data_type)
	{
		if (data_type == DATA_BLINK_STRENGTH)
		{
			return blink_strength < 0? 0 : blink_strength;
		}
		else
		{
			return TG_GetValue(connectionId, data_type);
		}
		
	}

	void MindControl::EnableBlinkDetection(int enable)
	{
		TG_EnableBlinkDetection(connectionId, enable);
	}


}	// end AttemptSpace
