#ifndef __MIND_CONTROL_H__
#define __MIND_CONTROL_H__

#include "cocoa/Object.h"
#include "mind_control_conf.h"

namespace AttemptSpace
{

	class MindControl : public Object
	{
	public:
		
		~MindControl();

		static MindControl* Create();

		int Read();

		// ��ȡͬ������
		int GetData(MindControlSymbol data_type);

		// ���û����գ�۵ļ��
		// ����Ϊ գ�۵���ֵ
		void EnableBlinkDetection(int enable);

		int GetConnectionID() { return connectionId; }

	protected:
		MindControl();
		bool Init();
		
		int   connectionId;	// ����ID
		int	blink_strength;	// ��ǰ��գ������
	private:
	};
}	// end AttemptSpace`

#endif	// end define __MIND_CONTROL_H__