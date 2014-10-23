#include "platform/win32/Application.h"
#include "attempt.h"

using namespace std;
using namespace AttemptSpace;

class PYX : public Application
{
public:

	PYX(wstring game_name, int height, int width);

	~PYX();

	// 函数: 游戏的结束
	virtual int End();

	//  游戏的初始化函数
	virtual int Initialize();

protected:
private:
};

/* Exported function */
TOLUA_API int  tolua_Test_open (lua_State* tolua_S);

