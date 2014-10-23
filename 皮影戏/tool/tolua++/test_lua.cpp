/*
** Lua binding: Color
** Generated automatically by tolua++-1.0.92 on 04/15/14 10:41:12.
*/

extern "C" {
#include "tolua_fix.h"
}

#include <map>
#include <string>

/* Exported function */
TOLUA_API int  tolua_Color_open (lua_State* tolua_S);


/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Color3f (lua_State* tolua_S)
{
 Color3f* self = (Color3f*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Color4f (lua_State* tolua_S)
{
 Color4f* self = (Color4f*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Color4b (lua_State* tolua_S)
{
 Color4b* self = (Color4b*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Color3b (lua_State* tolua_S)
{
 Color3b* self = (Color3b*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Color3f");
 tolua_usertype(tolua_S,"Color4f");
 tolua_usertype(tolua_S,"Color4b");
 tolua_usertype(tolua_S,"Color3b");
}

/* get function: r of class  Color3b */
#ifndef TOLUA_DISABLE_tolua_get_Color3b_r
static int tolua_get_Color3b_r(lua_State* tolua_S)
{
  Color3b* self = (Color3b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->r);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: r of class  Color3b */
#ifndef TOLUA_DISABLE_tolua_set_Color3b_r
static int tolua_set_Color3b_r(lua_State* tolua_S)
{
  Color3b* self = (Color3b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->r = ((char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: g of class  Color3b */
#ifndef TOLUA_DISABLE_tolua_get_Color3b_g
static int tolua_get_Color3b_g(lua_State* tolua_S)
{
  Color3b* self = (Color3b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->g);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: g of class  Color3b */
#ifndef TOLUA_DISABLE_tolua_set_Color3b_g
static int tolua_set_Color3b_g(lua_State* tolua_S)
{
  Color3b* self = (Color3b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->g = ((char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: b of class  Color3b */
#ifndef TOLUA_DISABLE_tolua_get_Color3b_b
static int tolua_get_Color3b_b(lua_State* tolua_S)
{
  Color3b* self = (Color3b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->b);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: b of class  Color3b */
#ifndef TOLUA_DISABLE_tolua_set_Color3b_b
static int tolua_set_Color3b_b(lua_State* tolua_S)
{
  Color3b* self = (Color3b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->b = ((char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Color3b */
#ifndef TOLUA_DISABLE_tolua_Color_Color3b_new00
static int tolua_Color_Color3b_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Color3b",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Color3b* tolua_ret = (Color3b*)  Mtolua_new((Color3b)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Color3b");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Color3b */
#ifndef TOLUA_DISABLE_tolua_Color_Color3b_new00_local
static int tolua_Color_Color3b_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Color3b",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Color3b* tolua_ret = (Color3b*)  Mtolua_new((Color3b)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Color3b");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operatorconst _cstring of class  Color3b */
#ifndef TOLUA_DISABLE_tolua_Color_Color3b__const__cstring00
static int tolua_Color_Color3b__const__cstring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Color3b",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Color3b* self = (Color3b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operatorconst _cstring'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->operator  const char*();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.const _cstring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator_cstring of class  Color3b */
#ifndef TOLUA_DISABLE_tolua_Color_Color3b___cstring00
static int tolua_Color_Color3b___cstring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Color3b",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Color3b* self = (Color3b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator_cstring'", NULL);
#endif
  {
   char* tolua_ret = (char*)  self->operator  char*();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '._cstring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: C3b */
#ifndef TOLUA_DISABLE_tolua_Color_C3b00
static int tolua_Color_C3b00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int _r = ((int)  tolua_tonumber(tolua_S,1,0));
  int _g = ((int)  tolua_tonumber(tolua_S,2,0));
  int _b = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   Color3b tolua_ret = (Color3b)  C3b(_r,_g,_b);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Color3b)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Color3b");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Color3b));
     tolua_pushusertype(tolua_S,tolua_obj,"Color3b");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'C3b'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: r of class  Color3f */
#ifndef TOLUA_DISABLE_tolua_get_Color3f_r
static int tolua_get_Color3f_r(lua_State* tolua_S)
{
  Color3f* self = (Color3f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->r);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: r of class  Color3f */
#ifndef TOLUA_DISABLE_tolua_set_Color3f_r
static int tolua_set_Color3f_r(lua_State* tolua_S)
{
  Color3f* self = (Color3f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->r = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: g of class  Color3f */
#ifndef TOLUA_DISABLE_tolua_get_Color3f_g
static int tolua_get_Color3f_g(lua_State* tolua_S)
{
  Color3f* self = (Color3f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->g);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: g of class  Color3f */
#ifndef TOLUA_DISABLE_tolua_set_Color3f_g
static int tolua_set_Color3f_g(lua_State* tolua_S)
{
  Color3f* self = (Color3f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->g = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: b of class  Color3f */
#ifndef TOLUA_DISABLE_tolua_get_Color3f_b
static int tolua_get_Color3f_b(lua_State* tolua_S)
{
  Color3f* self = (Color3f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->b);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: b of class  Color3f */
#ifndef TOLUA_DISABLE_tolua_set_Color3f_b
static int tolua_set_Color3f_b(lua_State* tolua_S)
{
  Color3f* self = (Color3f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->b = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Color3f */
#ifndef TOLUA_DISABLE_tolua_Color_Color3f_new00
static int tolua_Color_Color3f_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Color3f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Color3f* tolua_ret = (Color3f*)  Mtolua_new((Color3f)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Color3f");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Color3f */
#ifndef TOLUA_DISABLE_tolua_Color_Color3f_new00_local
static int tolua_Color_Color3f_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Color3f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Color3f* tolua_ret = (Color3f*)  Mtolua_new((Color3f)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Color3f");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operatorfloat* of class  Color3f */
#ifndef TOLUA_DISABLE_tolua_Color_Color3f__float_00
static int tolua_Color_Color3f__float_00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Color3f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Color3f* self = (Color3f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operatorfloat*'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->operator  void*();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.float*'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: C3f */
#ifndef TOLUA_DISABLE_tolua_Color_C3f00
static int tolua_Color_C3f00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float _r = ((float)  tolua_tonumber(tolua_S,1,0));
  float _g = ((float)  tolua_tonumber(tolua_S,2,0));
  float _b = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   Color3f tolua_ret = (Color3f)  C3f(_r,_g,_b);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Color3f)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Color3f");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Color3f));
     tolua_pushusertype(tolua_S,tolua_obj,"Color3f");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'C3f'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: r of class  Color4b */
#ifndef TOLUA_DISABLE_tolua_get_Color4b_r
static int tolua_get_Color4b_r(lua_State* tolua_S)
{
  Color4b* self = (Color4b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->r);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: r of class  Color4b */
#ifndef TOLUA_DISABLE_tolua_set_Color4b_r
static int tolua_set_Color4b_r(lua_State* tolua_S)
{
  Color4b* self = (Color4b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->r = ((char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: g of class  Color4b */
#ifndef TOLUA_DISABLE_tolua_get_Color4b_g
static int tolua_get_Color4b_g(lua_State* tolua_S)
{
  Color4b* self = (Color4b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->g);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: g of class  Color4b */
#ifndef TOLUA_DISABLE_tolua_set_Color4b_g
static int tolua_set_Color4b_g(lua_State* tolua_S)
{
  Color4b* self = (Color4b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->g = ((char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: b of class  Color4b */
#ifndef TOLUA_DISABLE_tolua_get_Color4b_b
static int tolua_get_Color4b_b(lua_State* tolua_S)
{
  Color4b* self = (Color4b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->b);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: b of class  Color4b */
#ifndef TOLUA_DISABLE_tolua_set_Color4b_b
static int tolua_set_Color4b_b(lua_State* tolua_S)
{
  Color4b* self = (Color4b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->b = ((char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: a of class  Color4b */
#ifndef TOLUA_DISABLE_tolua_get_Color4b_a
static int tolua_get_Color4b_a(lua_State* tolua_S)
{
  Color4b* self = (Color4b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->a);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: a of class  Color4b */
#ifndef TOLUA_DISABLE_tolua_set_Color4b_a
static int tolua_set_Color4b_a(lua_State* tolua_S)
{
  Color4b* self = (Color4b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->a = ((char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Color4b */
#ifndef TOLUA_DISABLE_tolua_Color_Color4b_new00
static int tolua_Color_Color4b_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Color4b",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Color4b* tolua_ret = (Color4b*)  Mtolua_new((Color4b)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Color4b");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Color4b */
#ifndef TOLUA_DISABLE_tolua_Color_Color4b_new00_local
static int tolua_Color_Color4b_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Color4b",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Color4b* tolua_ret = (Color4b*)  Mtolua_new((Color4b)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Color4b");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operatorconst _cstring of class  Color4b */
#ifndef TOLUA_DISABLE_tolua_Color_Color4b__const__cstring00
static int tolua_Color_Color4b__const__cstring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Color4b",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Color4b* self = (Color4b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operatorconst _cstring'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->operator  const char*();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.const _cstring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator_cstring of class  Color4b */
#ifndef TOLUA_DISABLE_tolua_Color_Color4b___cstring00
static int tolua_Color_Color4b___cstring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Color4b",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Color4b* self = (Color4b*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator_cstring'", NULL);
#endif
  {
   char* tolua_ret = (char*)  self->operator  char*();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '._cstring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: C4b */
#ifndef TOLUA_DISABLE_tolua_Color_C4b00
static int tolua_Color_C4b00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int _r = ((int)  tolua_tonumber(tolua_S,1,0));
  int _g = ((int)  tolua_tonumber(tolua_S,2,0));
  int _b = ((int)  tolua_tonumber(tolua_S,3,0));
  int _a = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   Color4b tolua_ret = (Color4b)  C4b(_r,_g,_b,_a);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Color4b)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Color4b");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Color4b));
     tolua_pushusertype(tolua_S,tolua_obj,"Color4b");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'C4b'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: r of class  Color4f */
#ifndef TOLUA_DISABLE_tolua_get_Color4f_r
static int tolua_get_Color4f_r(lua_State* tolua_S)
{
  Color4f* self = (Color4f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->r);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: r of class  Color4f */
#ifndef TOLUA_DISABLE_tolua_set_Color4f_r
static int tolua_set_Color4f_r(lua_State* tolua_S)
{
  Color4f* self = (Color4f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->r = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: g of class  Color4f */
#ifndef TOLUA_DISABLE_tolua_get_Color4f_g
static int tolua_get_Color4f_g(lua_State* tolua_S)
{
  Color4f* self = (Color4f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->g);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: g of class  Color4f */
#ifndef TOLUA_DISABLE_tolua_set_Color4f_g
static int tolua_set_Color4f_g(lua_State* tolua_S)
{
  Color4f* self = (Color4f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->g = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: b of class  Color4f */
#ifndef TOLUA_DISABLE_tolua_get_Color4f_b
static int tolua_get_Color4f_b(lua_State* tolua_S)
{
  Color4f* self = (Color4f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->b);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: b of class  Color4f */
#ifndef TOLUA_DISABLE_tolua_set_Color4f_b
static int tolua_set_Color4f_b(lua_State* tolua_S)
{
  Color4f* self = (Color4f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->b = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: a of class  Color4f */
#ifndef TOLUA_DISABLE_tolua_get_Color4f_a
static int tolua_get_Color4f_a(lua_State* tolua_S)
{
  Color4f* self = (Color4f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->a);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: a of class  Color4f */
#ifndef TOLUA_DISABLE_tolua_set_Color4f_a
static int tolua_set_Color4f_a(lua_State* tolua_S)
{
  Color4f* self = (Color4f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->a = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Color4f */
#ifndef TOLUA_DISABLE_tolua_Color_Color4f_new00
static int tolua_Color_Color4f_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Color4f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Color4f* tolua_ret = (Color4f*)  Mtolua_new((Color4f)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Color4f");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Color4f */
#ifndef TOLUA_DISABLE_tolua_Color_Color4f_new00_local
static int tolua_Color_Color4f_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Color4f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Color4f* tolua_ret = (Color4f*)  Mtolua_new((Color4f)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Color4f");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operatorconst float* of class  Color4f */
#ifndef TOLUA_DISABLE_tolua_Color_Color4f__const_float_00
static int tolua_Color_Color4f__const_float_00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Color4f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Color4f* self = (Color4f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operatorconst float*'", NULL);
#endif
  {
   const void* tolua_ret = (const void*)  self->operator  const void*();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.const float*'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operatorfloat* of class  Color4f */
#ifndef TOLUA_DISABLE_tolua_Color_Color4f__float_00
static int tolua_Color_Color4f__float_00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Color4f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Color4f* self = (Color4f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operatorfloat*'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->operator  void*();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.float*'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: C4f */
#ifndef TOLUA_DISABLE_tolua_Color_C4f00
static int tolua_Color_C4f00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float _r = ((float)  tolua_tonumber(tolua_S,1,0));
  float _g = ((float)  tolua_tonumber(tolua_S,2,0));
  float _b = ((float)  tolua_tonumber(tolua_S,3,0));
  float _a = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   Color4f tolua_ret = (Color4f)  C4f(_r,_g,_b,_a);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Color4f)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Color4f");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Color4f));
     tolua_pushusertype(tolua_S,tolua_obj,"Color4f");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'C4f'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Color3bTo3f */
#ifndef TOLUA_DISABLE_tolua_Color_Color3bTo3f00
static int tolua_Color_Color3bTo3f00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const Color3b",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Color3b* color = ((const Color3b*)  tolua_tousertype(tolua_S,1,0));
  {
   Color3f tolua_ret = (Color3f)  Color3bTo3f(*color);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Color3f)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Color3f");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Color3f));
     tolua_pushusertype(tolua_S,tolua_obj,"Color3f");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Color3bTo3f'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Color3fTo3b */
#ifndef TOLUA_DISABLE_tolua_Color_Color3fTo3b00
static int tolua_Color_Color3fTo3b00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const Color3f",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Color3f* color = ((const Color3f*)  tolua_tousertype(tolua_S,1,0));
  {
   Color3b tolua_ret = (Color3b)  Color3fTo3b(*color);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Color3b)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Color3b");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Color3b));
     tolua_pushusertype(tolua_S,tolua_obj,"Color3b");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Color3fTo3b'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Color4bTo4f */
#ifndef TOLUA_DISABLE_tolua_Color_Color4bTo4f00
static int tolua_Color_Color4bTo4f00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const Color4b",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Color4b* color = ((const Color4b*)  tolua_tousertype(tolua_S,1,0));
  {
   Color4f tolua_ret = (Color4f)  Color4bTo4f(*color);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Color4f)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Color4f");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Color4f));
     tolua_pushusertype(tolua_S,tolua_obj,"Color4f");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Color4bTo4f'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Color4fTo4b */
#ifndef TOLUA_DISABLE_tolua_Color_Color4fTo4b00
static int tolua_Color_Color4fTo4b00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const Color4f",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Color4f* color = ((const Color4f*)  tolua_tousertype(tolua_S,1,0));
  {
   Color4b tolua_ret = (Color4b)  Color4fTo4b(*color);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Color4b)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Color4b");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Color4b));
     tolua_pushusertype(tolua_S,tolua_obj,"Color4b");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Color4fTo4b'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Color_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Color3b","Color3b","",tolua_collect_Color3b);
  #else
  tolua_cclass(tolua_S,"Color3b","Color3b","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Color3b");
   tolua_variable(tolua_S,"r",tolua_get_Color3b_r,tolua_set_Color3b_r);
   tolua_variable(tolua_S,"g",tolua_get_Color3b_g,tolua_set_Color3b_g);
   tolua_variable(tolua_S,"b",tolua_get_Color3b_b,tolua_set_Color3b_b);
   tolua_function(tolua_S,"new",tolua_Color_Color3b_new00);
   tolua_function(tolua_S,"new_local",tolua_Color_Color3b_new00_local);
   tolua_function(tolua_S,".call",tolua_Color_Color3b_new00_local);
   tolua_function(tolua_S,".const _cstring",tolua_Color_Color3b__const__cstring00);
   tolua_function(tolua_S,"._cstring",tolua_Color_Color3b___cstring00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"C3b",tolua_Color_C3b00);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Color3f","Color3f","",tolua_collect_Color3f);
  #else
  tolua_cclass(tolua_S,"Color3f","Color3f","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Color3f");
   tolua_variable(tolua_S,"r",tolua_get_Color3f_r,tolua_set_Color3f_r);
   tolua_variable(tolua_S,"g",tolua_get_Color3f_g,tolua_set_Color3f_g);
   tolua_variable(tolua_S,"b",tolua_get_Color3f_b,tolua_set_Color3f_b);
   tolua_function(tolua_S,"new",tolua_Color_Color3f_new00);
   tolua_function(tolua_S,"new_local",tolua_Color_Color3f_new00_local);
   tolua_function(tolua_S,".call",tolua_Color_Color3f_new00_local);
   tolua_function(tolua_S,".float*",tolua_Color_Color3f__float_00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"C3f",tolua_Color_C3f00);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Color4b","Color4b","",tolua_collect_Color4b);
  #else
  tolua_cclass(tolua_S,"Color4b","Color4b","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Color4b");
   tolua_variable(tolua_S,"r",tolua_get_Color4b_r,tolua_set_Color4b_r);
   tolua_variable(tolua_S,"g",tolua_get_Color4b_g,tolua_set_Color4b_g);
   tolua_variable(tolua_S,"b",tolua_get_Color4b_b,tolua_set_Color4b_b);
   tolua_variable(tolua_S,"a",tolua_get_Color4b_a,tolua_set_Color4b_a);
   tolua_function(tolua_S,"new",tolua_Color_Color4b_new00);
   tolua_function(tolua_S,"new_local",tolua_Color_Color4b_new00_local);
   tolua_function(tolua_S,".call",tolua_Color_Color4b_new00_local);
   tolua_function(tolua_S,".const _cstring",tolua_Color_Color4b__const__cstring00);
   tolua_function(tolua_S,"._cstring",tolua_Color_Color4b___cstring00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"C4b",tolua_Color_C4b00);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Color4f","Color4f","",tolua_collect_Color4f);
  #else
  tolua_cclass(tolua_S,"Color4f","Color4f","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Color4f");
   tolua_variable(tolua_S,"r",tolua_get_Color4f_r,tolua_set_Color4f_r);
   tolua_variable(tolua_S,"g",tolua_get_Color4f_g,tolua_set_Color4f_g);
   tolua_variable(tolua_S,"b",tolua_get_Color4f_b,tolua_set_Color4f_b);
   tolua_variable(tolua_S,"a",tolua_get_Color4f_a,tolua_set_Color4f_a);
   tolua_function(tolua_S,"new",tolua_Color_Color4f_new00);
   tolua_function(tolua_S,"new_local",tolua_Color_Color4f_new00_local);
   tolua_function(tolua_S,".call",tolua_Color_Color4f_new00_local);
   tolua_function(tolua_S,".const float*",tolua_Color_Color4f__const_float_00);
   tolua_function(tolua_S,".float*",tolua_Color_Color4f__float_00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"C4f",tolua_Color_C4f00);
  tolua_function(tolua_S,"Color3bTo3f",tolua_Color_Color3bTo3f00);
  tolua_function(tolua_S,"Color3fTo3b",tolua_Color_Color3fTo3b00);
  tolua_function(tolua_S,"Color4bTo4f",tolua_Color_Color4bTo4f00);
  tolua_function(tolua_S,"Color4fTo4b",tolua_Color_Color4fTo4b00);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Color (lua_State* tolua_S) {
 return tolua_Color_open(tolua_S);
};
#endif

