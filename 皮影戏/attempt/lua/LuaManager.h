#pragma once
extern "C" {
#include "external_support/lua/lua.h"
#include "external_support/lua/lualib.h"
#include "external_support/lua/lauxlib.h"

}
#include "external_support/lua/tolua++.h"
#include <iostream>
#include "cocoa/Log.h"
#include "cocoa/Object.h"

TOLUA_API int tolua_Test_open (lua_State* tolua_S);

class LuaManager
{	
public:


	// 加载Lua文件并运行 
	void RunningFile(const char* fileName);

	// 获取lua的栈结构
	lua_State* GetLuaState() { return luaState;};

	// 加载相关的库
	void LuaOpenLibName();

	// 设置Lua的加载文件的函数
	void SetLuaLoaderFunc(lua_CFunction loader_func);

	// @brief lua执行函数
	// @param handler - Lua函数的句柄
	// @param num_args - lua函数的参数
	// return 脚本函数的返回值
	int ExecuteFunction(int handler, int num_args);


	bool PushFunctionByHandler(int handler);
	void Clean(void);
	void PushInt(int intValue);
	void PushFloat(float floatValue);
	void PushBoolean(bool boolValue);
	void PushString(const char* stringValue);
	void PushString(const char* stringValue, int length);
	void PushNil(void);
	void PushObject(Object* objectValue, const char* typeName);

	/*
     @brief Remove CCObject from lua state
     @param object to remove
     */
    void RemoveScriptObjectByObject(Object* pObj);
    
    /**
     @brief Remove Lua function reference
     */
    void RemoveScriptHandler(int nHandler);

	~LuaManager(void);

	static LuaManager* GetInstance();

private:
	
	// 初始化lua脚本引擎
	void Init();
	
	LuaManager(void);

	// @brief 执行函数
	int ExecuteFunction(int num_args);

private:
	static LuaManager *instance_;

	lua_State* luaState;
};

