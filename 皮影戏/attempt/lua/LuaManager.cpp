#include "LuaManager.h"
#include "LuaOpen.h"
#include <assert.h>
#include "tolua_fix.h"
#include "cocoa/FileTool.h"


LuaManager::LuaManager(void)
{
	Init();
}

LuaManager::~LuaManager(void)
{
	lua_close(luaState);
}

LuaManager* LuaManager::GetInstance()
{
	if (instance_ == NULL)
	{
		instance_ = new LuaManager();
		instance_->Init();
	}
	return instance_;
}

LuaManager *LuaManager::instance_ = NULL;

int l_my_print(lua_State* L) {
	int nargs = lua_gettop(L);
	string str;
	for (int i=1; i <= nargs; ++i) {
		str += lua_tostring(L, i);
		if (i != nargs)
		{
			str += "\t";
		}
	}
	PrintInfo("[Lua] %s\n", str.c_str());
	return 0;
}

int LuaLoader(lua_State *L)
{
	std::string filename(luaL_checkstring(L, 1));
	size_t pos = filename.rfind(".lua");
	if (pos != std::string::npos)
	{
		filename = filename.substr(0, pos);
	}

	pos = filename.find_first_of(".");
	while (pos != std::string::npos)
	{
		filename.replace(pos, 1, "/");
		pos = filename.find_first_of(".");
	}
	filename.append(".lua");

	int codeBufferSize = 0;
	unsigned char* codeBuffer = FileTool::GetInstance()->GetFileData(filename.c_str(), codeBufferSize);

	if (codeBuffer)
	{
		if (luaL_loadbuffer(L, (char*)codeBuffer, codeBufferSize, filename.c_str()) != 0)
		{
			luaL_error(L, "error loading module %s from file %s :\n\t%s",
				lua_tostring(L, 1), filename.c_str(), lua_tostring(L, -1));
		}
		delete []codeBuffer;
	}
	else
	{
		Log::GetInstance()->Error("can not get file data of %s", filename.c_str());
	}

	return 1;
}
void LuaManager::Init()
{
	luaState = lua_open();
	assert(luaState);

	luaopen_base (luaState);
	luaopen_table (luaState);
	luaopen_string (luaState);
	luaopen_math (luaState);
	luaopen_debug (luaState);
	luaL_openlibs(luaState);
	toluafix_open(luaState);
	tolua_attempt_open(luaState);
	SetLuaLoaderFunc(LuaLoader);
	LuaOpenLibName();
}

// 设置Lua的加载文件的函数
void LuaManager::SetLuaLoaderFunc(lua_CFunction loader_func)
{
	if (!loader_func) return;

	// stack content after the invoking of the function
	// get loader table
	lua_getglobal(luaState, "package");                                  /* L: package */
	lua_getfield(luaState, -1, "loaders");                               /* L: package, loaders */

	// insert loader into index 2
	lua_pushcfunction(luaState, loader_func);                             /* L: package, loaders, func */
	for (int i = lua_objlen(luaState, -2) + 1; i > 2; --i)
	{
		lua_rawgeti(luaState, -2, i - 1);                                /* L: package, loaders, func, function */
		// we call lua_rawgeti, so the loader table now is at -3
		lua_rawseti(luaState, -3, i);                                    /* L: package, loaders, func */
	}
	lua_rawseti(luaState, -2, 2);                                        /* L: package, loaders */

	// set loaders into package
	lua_setfield(luaState, -2, "loaders");                               /* L: package */

	lua_pop(luaState, 1);
}

void LuaManager::LuaOpenLibName()
{
	luaL_Reg printlib[] = {
		  {"print", l_my_print},
		  {NULL, NULL} /* end of array */
	};
	lua_getglobal(luaState, "_G");
	luaL_register(luaState, NULL, printlib);
	lua_pop(luaState, 1);
}

void LuaManager::RunningFile(const char* fileName)
{
	char* complete_path = FileTool::GetInstance()->GetCompletePath(fileName);
	int nRet = luaL_dofile(luaState, complete_path);
	if (nRet != 0)
	{
		Log::GetInstance()->Error("[LUA ERROR] %s", lua_tostring(luaState, -1));
		lua_pop(luaState, 1);
		assert(!"运行Lua文件出现错误！");
	}
	SAFDelete(complete_path);
	Clean();
}

// @brief lua执行函数
// @param handler - Lua函数的句柄
// @param num_args - lua函数的参数
// return 脚本函数的返回值
int LuaManager::ExecuteFunction(int handler, int num_args)
{
	int ret = 0;
	if (PushFunctionByHandler(handler))                                /* L: ... arg1 arg2 ... func */
	{
		if (num_args > 0)
		{
			lua_insert(luaState, -(num_args + 1));                        /* L: ... func arg1 arg2 ... */
		}
		ret = ExecuteFunction(num_args);
	}
	lua_settop(luaState, 0);
	return ret;
}

int LuaManager::ExecuteFunction(int num_args)
{
	int functionIndex = -(num_args + 1);
	if (!lua_isfunction(luaState, functionIndex))
	{
		Log::GetInstance()->Error("value at stack [%d] is not function", functionIndex);
		lua_pop(luaState, num_args+ 1); // remove function and arguments
		return 0;
	}

	int traceback = 0;
	lua_getglobal(luaState, "__G__TRACKBACK__");                         /* L: ... func arg1 arg2 ... G */
	if (!lua_isfunction(luaState, -1))
	{
		lua_pop(luaState, 1);                                            /* L: ... func arg1 arg2 ... */
	}
	else
	{
		lua_insert(luaState, functionIndex - 1);                         /* L: ... G func arg1 arg2 ... */
		traceback = functionIndex - 1;
	}

	int error = 0;
	error = lua_pcall(luaState, num_args, 1, traceback);          
	if (error)
	{
		if (traceback == 0)
		{
			Log::GetInstance()->Error("[LUA ERROR] %s", lua_tostring(luaState, - 1));        /* L: ... error */
			lua_pop(luaState, 1); // remove error message from stack
		}
		else                                                            /* L: ... G error */
		{
			lua_pop(luaState, 2); // remove __G__TRACKBACK__ and error message from stack
		}
		return 0;
	}

	// get return value
	int ret = 0;
	if (lua_isnumber(luaState, -1))
	{
		ret = lua_tointeger(luaState, -1);
	}
	else if (lua_isboolean(luaState, -1))
	{
		ret = lua_toboolean(luaState, -1);
	}
	// remove return value from stack
	lua_pop(luaState, 1);                                                /* L: ... [G] */

	if (traceback)
	{
		lua_pop(luaState, 1); // remove __G__TRACKBACK__ from stack      /* L: ... */
	}
	return ret;
}

bool LuaManager::PushFunctionByHandler(int nHandler)
{
	toluafix_get_function_by_refid(luaState, nHandler);                  /* L: ... func */
	if (!lua_isfunction(luaState, -1))
	{
		Log::GetInstance()->Error("[LUA ERROR] function refid '%d' does not reference a Lua function", nHandler);
		lua_pop(luaState, 1);
		return false;
	}
	return true;
}

void LuaManager::Clean(void)
{
	lua_settop(luaState, 0);
}

void LuaManager::PushInt(int intValue)
{
	lua_pushinteger(luaState, intValue);
}

void LuaManager::PushFloat(float floatValue)
{
	lua_pushnumber(luaState, floatValue);
}

void LuaManager::PushBoolean(bool boolValue)
{
	lua_pushboolean(luaState, boolValue);
}

void LuaManager::PushString(const char* stringValue)
{
	lua_pushstring(luaState, stringValue);
}

void LuaManager::PushString(const char* stringValue, int length)
{
	lua_pushlstring(luaState, stringValue, length);
}

void LuaManager::PushNil(void)
{
	lua_pushnil(luaState);
}

void LuaManager::PushObject(Object* objectValue, const char* typeName)
{
	toluafix_pushusertype_ccobject(luaState, objectValue->id, &objectValue->lua_id, objectValue, typeName);
}


// @brief Remove CCObject from lua state
// @param object to remove
void LuaManager::RemoveScriptObjectByObject(Object* pObj)
{
	toluafix_remove_ccobject_by_refid(luaState, pObj->lua_id);
}
    

// @brief Remove Lua function reference
void LuaManager::RemoveScriptHandler(int nHandler)
{
	 toluafix_remove_function_by_refid(luaState, nHandler);
}
