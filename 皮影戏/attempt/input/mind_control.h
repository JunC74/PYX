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

		// 获取同的数据
		int GetData(MindControlSymbol data_type);

		// 启用或禁用眨眼的检测
		// 参数为 眨眼的阈值
		void EnableBlinkDetection(int enable);

		int GetConnectionID() { return connectionId; }

	protected:
		MindControl();
		bool Init();
		
		int   connectionId;	// 连接ID
		int	blink_strength;	// 当前的眨眼力度
	private:
	};
}	// end AttemptSpace`

#endif	// end define __MIND_CONTROL_H__