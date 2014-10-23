#ifndef __LUACOCOS2D_H_
#define __LUACOCOS2D_H_

#ifdef __cplusplus
extern "C" {
#endif
#include "external_support/lua/tolua++.h"
#ifdef __cplusplus
}
#endif
#include "attempt.h"

TOLUA_API int tolua_attempt_open(lua_State* tolua_S);

#endif // __LUACOCOS2D_H_
