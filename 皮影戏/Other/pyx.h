#include "attempt/attempt.h"
#include "attempt/Render/render_group.h"
#include "attempt/Render/render_object.h"

using namespace AttemptSpace;

class PYXAttempt : public Attempt
{
protected:

private:
	shared_ptr<RenderGroup> group;
public:
	PYXAttempt();

	~PYXAttempt();

	//  游戏的初始化函数
	int Initialize();

	//  游戏的逻辑函数
	int Logic();

	//  游戏的渲染
	void Render();

	// 函数: 游戏的结束
	int End();

};