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


	// ����Lua�ļ������� 
	void RunningFile(const char* fileName);

	// ��ȡlua��ջ�ṹ
	lua_State* GetLuaState() { return luaState;};

	// ������صĿ�
	void LuaOpenLibName();

	// ����Lua�ļ����ļ��ĺ���
	void SetLuaLoaderFunc(lua_CFunction loader_func);

	// @brief luaִ�к���
	// @param handler - Lua�����ľ��
	// @param num_args - lua�����Ĳ���
	// return �ű������ķ���ֵ
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
	
	// ��ʼ��lua�ű�����
	void Init();
	
	LuaManager(void);

	// @brief ִ�к���
	int ExecuteFunction(int num_args);

private:
	static LuaManager *instance_;

	lua_State* luaState;
};

