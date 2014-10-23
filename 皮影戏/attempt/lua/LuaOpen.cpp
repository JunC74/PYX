/*
** Lua binding: attempt
** Generated automatically by tolua++-1.0.92 on 05/14/14 14:11:57.
*/

extern "C" {
#include "tolua_fix.h"
}

#include <map>
#include <string>
typedef int LUA_FUNCTION;

/* Exported function */
TOLUA_API int  tolua_attempt_open (lua_State* tolua_S);

#include "LuaOpen.h"
#include "curtains.h "

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Color3b (lua_State* tolua_S)
{
 Color3b* self = (Color3b*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_MessagePump (lua_State* tolua_S)
{
 MessagePump* self = (MessagePump*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_vec2 (lua_State* tolua_S)
{
 vec2* self = (vec2*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_mat4 (lua_State* tolua_S)
{
 mat4* self = (mat4*) tolua_tousertype(tolua_S,1,0);
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

static int tolua_collect_mat2 (lua_State* tolua_S)
{
 mat2* self = (mat2*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Model (lua_State* tolua_S)
{
 Model* self = (Model*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ObjModel (lua_State* tolua_S)
{
 ObjModel* self = (ObjModel*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_MindControl (lua_State* tolua_S)
{
 MindControl* self = (MindControl*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Texture2D (lua_State* tolua_S)
{
 Texture2D* self = (Texture2D*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Material (lua_State* tolua_S)
{
 Material* self = (Material*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_KeyBoard (lua_State* tolua_S)
{
 KeyBoard* self = (KeyBoard*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Node (lua_State* tolua_S)
{
 Node* self = (Node*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CameraClass (lua_State* tolua_S)
{
 CameraClass* self = (CameraClass*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_vec4 (lua_State* tolua_S)
{
 vec4* self = (vec4*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Curtains (lua_State* tolua_S)
{
 Curtains* self = (Curtains*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_GLuint (lua_State* tolua_S)
{
 GLuint* self = (GLuint*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_VDSModel (lua_State* tolua_S)
{
 VDSModel* self = (VDSModel*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ShaderProgramCache (lua_State* tolua_S)
{
 ShaderProgramCache* self = (ShaderProgramCache*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Size2D (lua_State* tolua_S)
{
 Size2D* self = (Size2D*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Schedule (lua_State* tolua_S)
{
 Schedule* self = (Schedule*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_AABB (lua_State* tolua_S)
{
 AABB* self = (AABB*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Color3f (lua_State* tolua_S)
{
 Color3f* self = (Color3f*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_GLState (lua_State* tolua_S)
{
 GLState* self = (GLState*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Object (lua_State* tolua_S)
{
 Object* self = (Object*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_vec3 (lua_State* tolua_S)
{
 vec3* self = (vec3*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_byte (lua_State* tolua_S)
{
 byte* self = (byte*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Array (lua_State* tolua_S)
{
 Array* self = (Array*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_AutoReleasePool (lua_State* tolua_S)
{
 AutoReleasePool* self = (AutoReleasePool*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_mat3 (lua_State* tolua_S)
{
 mat3* self = (mat3*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Color3b");
 tolua_usertype(tolua_S,"Color4b");
 tolua_usertype(tolua_S,"MindControl");
 tolua_usertype(tolua_S,"ResourceManager");
 tolua_usertype(tolua_S,"KeyBoard");
 tolua_usertype(tolua_S,"Node");
 tolua_usertype(tolua_S,"Light");
 tolua_usertype(tolua_S,"vec4");
 tolua_usertype(tolua_S,"Curtains");
 tolua_usertype(tolua_S,"GLViewInterface");
 tolua_usertype(tolua_S,"GeometryModel");
 tolua_usertype(tolua_S,"wstring");
 tolua_usertype(tolua_S,"Texture2D");
 tolua_usertype(tolua_S,"Object");
 tolua_usertype(tolua_S,"Input");
 tolua_usertype(tolua_S,"LUA_FUNCTION");
 tolua_usertype(tolua_S,"CameraClass");
 tolua_usertype(tolua_S,"AutoReleasePool");
 tolua_usertype(tolua_S,"AABB");
 tolua_usertype(tolua_S,"Schedule");
 tolua_usertype(tolua_S,"Log");
 tolua_usertype(tolua_S,"Model");
 tolua_usertype(tolua_S,"vec2");
 tolua_usertype(tolua_S,"mat4");
 tolua_usertype(tolua_S,"Color4f");
 tolua_usertype(tolua_S,"VertexFormat_XYZ_TEX");
 tolua_usertype(tolua_S,"VertexFormat_XYZ_NORMAL_TEX");
 tolua_usertype(tolua_S,"VertexFormat_XYZW_RGBA");
 tolua_usertype(tolua_S,"TextureLoader");
 tolua_usertype(tolua_S,"Array");
 tolua_usertype(tolua_S,"Sprite");
 tolua_usertype(tolua_S,"LightManage");
 tolua_usertype(tolua_S,"Material");
 tolua_usertype(tolua_S,"GLfloat");
 tolua_usertype(tolua_S,"ShaderProgramCache");
 tolua_usertype(tolua_S,"MessagePump");
 tolua_usertype(tolua_S,"GLuint");
 tolua_usertype(tolua_S,"ShaderProgram");
 tolua_usertype(tolua_S,"VDSModel");
 tolua_usertype(tolua_S,"Root");
 tolua_usertype(tolua_S,"Size2D");
 tolua_usertype(tolua_S,"byte");
 tolua_usertype(tolua_S,"DataMessage");
 tolua_usertype(tolua_S,"Color3f");
 tolua_usertype(tolua_S,"GLState");
 tolua_usertype(tolua_S,"Message");
 tolua_usertype(tolua_S,"vec3");
 tolua_usertype(tolua_S,"mat2");
 tolua_usertype(tolua_S,"MatrixStack");
 tolua_usertype(tolua_S,"ObjModel");
 tolua_usertype(tolua_S,"mat3");
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
#ifndef TOLUA_DISABLE_tolua_attempt_Color3b_new00
static int tolua_attempt_Color3b_new00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_attempt_Color3b_new00_local
static int tolua_attempt_Color3b_new00_local(lua_State* tolua_S)
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

/* function: C3b */
#ifndef TOLUA_DISABLE_tolua_attempt_C3b00
static int tolua_attempt_C3b00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_attempt_Color3f_new00
static int tolua_attempt_Color3f_new00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_attempt_Color3f_new00_local
static int tolua_attempt_Color3f_new00_local(lua_State* tolua_S)
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

/* function: C3f */
#ifndef TOLUA_DISABLE_tolua_attempt_C3f00
static int tolua_attempt_C3f00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_attempt_Color4b_new00
static int tolua_attempt_Color4b_new00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_attempt_Color4b_new00_local
static int tolua_attempt_Color4b_new00_local(lua_State* tolua_S)
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

/* function: C4b */
#ifndef TOLUA_DISABLE_tolua_attempt_C4b00
static int tolua_attempt_C4b00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_attempt_Color4f_new00
static int tolua_attempt_Color4f_new00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_attempt_Color4f_new00_local
static int tolua_attempt_Color4f_new00_local(lua_State* tolua_S)
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

/* function: C4f */
#ifndef TOLUA_DISABLE_tolua_attempt_C4f00
static int tolua_attempt_C4f00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_attempt_Color3bTo3f00
static int tolua_attempt_Color3bTo3f00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_attempt_Color3fTo3b00
static int tolua_attempt_Color3fTo3b00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_attempt_Color4bTo4f00
static int tolua_attempt_Color4bTo4f00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_attempt_Color4fTo4b00
static int tolua_attempt_Color4fTo4b00(lua_State* tolua_S)
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

/* get function: width of class  Size2D */
#ifndef TOLUA_DISABLE_tolua_get_Size2D_width
static int tolua_get_Size2D_width(lua_State* tolua_S)
{
  Size2D* self = (Size2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'width'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->width);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: width of class  Size2D */
#ifndef TOLUA_DISABLE_tolua_set_Size2D_width
static int tolua_set_Size2D_width(lua_State* tolua_S)
{
  Size2D* self = (Size2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'width'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->width = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: height of class  Size2D */
#ifndef TOLUA_DISABLE_tolua_get_Size2D_height
static int tolua_get_Size2D_height(lua_State* tolua_S)
{
  Size2D* self = (Size2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->height);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: height of class  Size2D */
#ifndef TOLUA_DISABLE_tolua_set_Size2D_height
static int tolua_set_Size2D_height(lua_State* tolua_S)
{
  Size2D* self = (Size2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->height = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Size2D */
#ifndef TOLUA_DISABLE_tolua_attempt_Size2D_new00
static int tolua_attempt_Size2D_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Size2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Size2D* tolua_ret = (Size2D*)  Mtolua_new((Size2D)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Size2D");
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

/* method: new_local of class  Size2D */
#ifndef TOLUA_DISABLE_tolua_attempt_Size2D_new00_local
static int tolua_attempt_Size2D_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Size2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Size2D* tolua_ret = (Size2D*)  Mtolua_new((Size2D)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Size2D");
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

/* method: new of class  Size2D */
#ifndef TOLUA_DISABLE_tolua_attempt_Size2D_new01
static int tolua_attempt_Size2D_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Size2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float w = ((float)  tolua_tonumber(tolua_S,2,0));
  float h = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   Size2D* tolua_ret = (Size2D*)  Mtolua_new((Size2D)(w,h));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Size2D");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_Size2D_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Size2D */
#ifndef TOLUA_DISABLE_tolua_attempt_Size2D_new01_local
static int tolua_attempt_Size2D_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Size2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float w = ((float)  tolua_tonumber(tolua_S,2,0));
  float h = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   Size2D* tolua_ret = (Size2D*)  Mtolua_new((Size2D)(w,h));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Size2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_Size2D_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  vec2 */
#ifndef TOLUA_DISABLE_tolua_get_vec2_x
static int tolua_get_vec2_x(lua_State* tolua_S)
{
  vec2* self = (vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  vec2 */
#ifndef TOLUA_DISABLE_tolua_set_vec2_x
static int tolua_set_vec2_x(lua_State* tolua_S)
{
  vec2* self = (vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  vec2 */
#ifndef TOLUA_DISABLE_tolua_get_vec2_y
static int tolua_get_vec2_y(lua_State* tolua_S)
{
  vec2* self = (vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  vec2 */
#ifndef TOLUA_DISABLE_tolua_set_vec2_y
static int tolua_set_vec2_y(lua_State* tolua_S)
{
  vec2* self = (vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  vec2 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec2_new00
static int tolua_attempt_vec2_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   vec2* tolua_ret = (vec2*)  Mtolua_new((vec2)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec2");
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

/* method: new_local of class  vec2 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec2_new00_local
static int tolua_attempt_vec2_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   vec2* tolua_ret = (vec2*)  Mtolua_new((vec2)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec2");
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

/* method: new of class  vec2 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec2_new01
static int tolua_attempt_vec2_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   vec2* tolua_ret = (vec2*)  Mtolua_new((vec2)(s));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec2_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  vec2 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec2_new01_local
static int tolua_attempt_vec2_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   vec2* tolua_ret = (vec2*)  Mtolua_new((vec2)(s));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec2_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  vec2 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec2_new02
static int tolua_attempt_vec2_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   vec2* tolua_ret = (vec2*)  Mtolua_new((vec2)(x,y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec2_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  vec2 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec2_new02_local
static int tolua_attempt_vec2_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   vec2* tolua_ret = (vec2*)  Mtolua_new((vec2)(x,y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec2_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  vec2 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec2_new03
static int tolua_attempt_vec2_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec2* v = ((const vec2*)  tolua_tousertype(tolua_S,2,0));
  {
   vec2* tolua_ret = (vec2*)  Mtolua_new((vec2)(*v));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec2_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  vec2 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec2_new03_local
static int tolua_attempt_vec2_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec2* v = ((const vec2*)  tolua_tousertype(tolua_S,2,0));
  {
   vec2* tolua_ret = (vec2*)  Mtolua_new((vec2)(*v));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec2_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: dot */
#ifndef TOLUA_DISABLE_tolua_attempt_dot00
static int tolua_attempt_dot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const vec2* u = ((const vec2*)  tolua_tousertype(tolua_S,1,0));
  const vec2* v = ((const vec2*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  dot(*u,*v);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: length */
#ifndef TOLUA_DISABLE_tolua_attempt_length00
static int tolua_attempt_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const vec2* v = ((const vec2*)  tolua_tousertype(tolua_S,1,0));
  {
   float tolua_ret = (float)  length(*v);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'length'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: normalize */
#ifndef TOLUA_DISABLE_tolua_attempt_normalize00
static int tolua_attempt_normalize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const vec2* v = ((const vec2*)  tolua_tousertype(tolua_S,1,0));
  {
   vec2 tolua_ret = (vec2)  normalize(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'normalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  vec3 */
#ifndef TOLUA_DISABLE_tolua_get_vec3_x
static int tolua_get_vec3_x(lua_State* tolua_S)
{
  vec3* self = (vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  vec3 */
#ifndef TOLUA_DISABLE_tolua_set_vec3_x
static int tolua_set_vec3_x(lua_State* tolua_S)
{
  vec3* self = (vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  vec3 */
#ifndef TOLUA_DISABLE_tolua_get_vec3_y
static int tolua_get_vec3_y(lua_State* tolua_S)
{
  vec3* self = (vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  vec3 */
#ifndef TOLUA_DISABLE_tolua_set_vec3_y
static int tolua_set_vec3_y(lua_State* tolua_S)
{
  vec3* self = (vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: z of class  vec3 */
#ifndef TOLUA_DISABLE_tolua_get_vec3_z
static int tolua_get_vec3_z(lua_State* tolua_S)
{
  vec3* self = (vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->z);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: z of class  vec3 */
#ifndef TOLUA_DISABLE_tolua_set_vec3_z
static int tolua_set_vec3_z(lua_State* tolua_S)
{
  vec3* self = (vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->z = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  vec3 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec3_new00
static int tolua_attempt_vec3_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   vec3* tolua_ret = (vec3*)  Mtolua_new((vec3)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec3");
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

/* method: new_local of class  vec3 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec3_new00_local
static int tolua_attempt_vec3_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   vec3* tolua_ret = (vec3*)  Mtolua_new((vec3)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec3");
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

/* method: new of class  vec3 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec3_new01
static int tolua_attempt_vec3_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   vec3* tolua_ret = (vec3*)  Mtolua_new((vec3)(s));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec3_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  vec3 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec3_new01_local
static int tolua_attempt_vec3_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   vec3* tolua_ret = (vec3*)  Mtolua_new((vec3)(s));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec3_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  vec3 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec3_new02
static int tolua_attempt_vec3_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   vec3* tolua_ret = (vec3*)  Mtolua_new((vec3)(x,y,z));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec3_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  vec3 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec3_new02_local
static int tolua_attempt_vec3_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   vec3* tolua_ret = (vec3*)  Mtolua_new((vec3)(x,y,z));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec3_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  vec3 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec3_new03
static int tolua_attempt_vec3_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec3* v = ((const vec3*)  tolua_tousertype(tolua_S,2,0));
  {
   vec3* tolua_ret = (vec3*)  Mtolua_new((vec3)(*v));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec3_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  vec3 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec3_new03_local
static int tolua_attempt_vec3_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec3* v = ((const vec3*)  tolua_tousertype(tolua_S,2,0));
  {
   vec3* tolua_ret = (vec3*)  Mtolua_new((vec3)(*v));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec3_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  vec3 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec3_new04
static int tolua_attempt_vec3_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const vec2",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec2* v = ((const vec2*)  tolua_tousertype(tolua_S,2,0));
  const float f = ((const float)  tolua_tonumber(tolua_S,3,0));
  {
   vec3* tolua_ret = (vec3*)  Mtolua_new((vec3)(*v,f));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec3_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  vec3 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec3_new04_local
static int tolua_attempt_vec3_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const vec2",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec2* v = ((const vec2*)  tolua_tousertype(tolua_S,2,0));
  const float f = ((const float)  tolua_tonumber(tolua_S,3,0));
  {
   vec3* tolua_ret = (vec3*)  Mtolua_new((vec3)(*v,f));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec3_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: dot */
#ifndef TOLUA_DISABLE_tolua_attempt_dot01
static int tolua_attempt_dot01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec3* u = ((const vec3*)  tolua_tousertype(tolua_S,1,0));
  const vec3* v = ((const vec3*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  dot(*u,*v);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_dot00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: length */
#ifndef TOLUA_DISABLE_tolua_attempt_length01
static int tolua_attempt_length01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec3* v = ((const vec3*)  tolua_tousertype(tolua_S,1,0));
  {
   float tolua_ret = (float)  length(*v);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_length00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: normalize */
#ifndef TOLUA_DISABLE_tolua_attempt_normalize01
static int tolua_attempt_normalize01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec3* v = ((const vec3*)  tolua_tousertype(tolua_S,1,0));
  {
   vec3 tolua_ret = (vec3)  normalize(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_normalize00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: cross */
#ifndef TOLUA_DISABLE_tolua_attempt_cross00
static int tolua_attempt_cross00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const vec3* a = ((const vec3*)  tolua_tousertype(tolua_S,1,0));
  const vec3* b = ((const vec3*)  tolua_tousertype(tolua_S,2,0));
  {
   vec3 tolua_ret = (vec3)  cross(*a,*b);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cross'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_get_vec4_x
static int tolua_get_vec4_x(lua_State* tolua_S)
{
  vec4* self = (vec4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_set_vec4_x
static int tolua_set_vec4_x(lua_State* tolua_S)
{
  vec4* self = (vec4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_get_vec4_y
static int tolua_get_vec4_y(lua_State* tolua_S)
{
  vec4* self = (vec4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_set_vec4_y
static int tolua_set_vec4_y(lua_State* tolua_S)
{
  vec4* self = (vec4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: z of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_get_vec4_z
static int tolua_get_vec4_z(lua_State* tolua_S)
{
  vec4* self = (vec4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->z);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: z of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_set_vec4_z
static int tolua_set_vec4_z(lua_State* tolua_S)
{
  vec4* self = (vec4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->z = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: w of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_get_vec4_w
static int tolua_get_vec4_w(lua_State* tolua_S)
{
  vec4* self = (vec4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->w);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: w of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_set_vec4_w
static int tolua_set_vec4_w(lua_State* tolua_S)
{
  vec4* self = (vec4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->w = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec4_new00
static int tolua_attempt_vec4_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   vec4* tolua_ret = (vec4*)  Mtolua_new((vec4)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec4");
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

/* method: new_local of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec4_new00_local
static int tolua_attempt_vec4_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   vec4* tolua_ret = (vec4*)  Mtolua_new((vec4)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec4");
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

/* method: new of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec4_new01
static int tolua_attempt_vec4_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   vec4* tolua_ret = (vec4*)  Mtolua_new((vec4)(s));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec4_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec4_new01_local
static int tolua_attempt_vec4_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   vec4* tolua_ret = (vec4*)  Mtolua_new((vec4)(s));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec4_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec4_new02
static int tolua_attempt_vec4_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
  float w = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   vec4* tolua_ret = (vec4*)  Mtolua_new((vec4)(x,y,z,w));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec4_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec4_new02_local
static int tolua_attempt_vec4_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
  float w = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   vec4* tolua_ret = (vec4*)  Mtolua_new((vec4)(x,y,z,w));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec4_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec4_new03
static int tolua_attempt_vec4_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec4* v = ((const vec4*)  tolua_tousertype(tolua_S,2,0));
  {
   vec4* tolua_ret = (vec4*)  Mtolua_new((vec4)(*v));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec4_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec4_new03_local
static int tolua_attempt_vec4_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec4* v = ((const vec4*)  tolua_tousertype(tolua_S,2,0));
  {
   vec4* tolua_ret = (vec4*)  Mtolua_new((vec4)(*v));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec4_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec4_new04
static int tolua_attempt_vec4_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const vec3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec3* v = ((const vec3*)  tolua_tousertype(tolua_S,2,0));
  const float w = ((const float)  tolua_tonumber(tolua_S,3,1.0));
  {
   vec4* tolua_ret = (vec4*)  Mtolua_new((vec4)(*v,w));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec4_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec4_new04_local
static int tolua_attempt_vec4_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const vec3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec3* v = ((const vec3*)  tolua_tousertype(tolua_S,2,0));
  const float w = ((const float)  tolua_tonumber(tolua_S,3,1.0));
  {
   vec4* tolua_ret = (vec4*)  Mtolua_new((vec4)(*v,w));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec4_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec4_new05
static int tolua_attempt_vec4_new05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const vec2",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec2* v = ((const vec2*)  tolua_tousertype(tolua_S,2,0));
  const float z = ((const float)  tolua_tonumber(tolua_S,3,0));
  const float w = ((const float)  tolua_tonumber(tolua_S,4,0));
  {
   vec4* tolua_ret = (vec4*)  Mtolua_new((vec4)(*v,z,w));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec4_new04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  vec4 */
#ifndef TOLUA_DISABLE_tolua_attempt_vec4_new05_local
static int tolua_attempt_vec4_new05_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"vec4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const vec2",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec2* v = ((const vec2*)  tolua_tousertype(tolua_S,2,0));
  const float z = ((const float)  tolua_tonumber(tolua_S,3,0));
  const float w = ((const float)  tolua_tonumber(tolua_S,4,0));
  {
   vec4* tolua_ret = (vec4*)  Mtolua_new((vec4)(*v,z,w));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_vec4_new04_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: dot */
#ifndef TOLUA_DISABLE_tolua_attempt_dot02
static int tolua_attempt_dot02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const vec4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec4* u = ((const vec4*)  tolua_tousertype(tolua_S,1,0));
  const vec4* v = ((const vec4*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  dot(*u,*v);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_dot01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: length */
#ifndef TOLUA_DISABLE_tolua_attempt_length02
static int tolua_attempt_length02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec4* v = ((const vec4*)  tolua_tousertype(tolua_S,1,0));
  {
   float tolua_ret = (float)  length(*v);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_length01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: normalize */
#ifndef TOLUA_DISABLE_tolua_attempt_normalize02
static int tolua_attempt_normalize02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec4* v = ((const vec4*)  tolua_tousertype(tolua_S,1,0));
  {
   vec4 tolua_ret = (vec4)  normalize(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec4));
     tolua_pushusertype(tolua_S,tolua_obj,"vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_normalize01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: cross */
#ifndef TOLUA_DISABLE_tolua_attempt_cross01
static int tolua_attempt_cross01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const vec4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const vec4* a = ((const vec4*)  tolua_tousertype(tolua_S,1,0));
  const vec4* b = ((const vec4*)  tolua_tousertype(tolua_S,2,0));
  {
   vec3 tolua_ret = (vec3)  cross(*a,*b);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_cross00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Vec2Make */
#ifndef TOLUA_DISABLE_tolua_attempt_Vec2Make00
static int tolua_attempt_Vec2Make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float x = ((float)  tolua_tonumber(tolua_S,1,0));
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   vec2 tolua_ret = (vec2)  Vec2Make(x,y);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Vec2Make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Vec3Make */
#ifndef TOLUA_DISABLE_tolua_attempt_Vec3Make00
static int tolua_attempt_Vec3Make00(lua_State* tolua_S)
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
  float x = ((float)  tolua_tonumber(tolua_S,1,0));
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
  float z = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   vec3 tolua_ret = (vec3)  Vec3Make(x,y,z);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Vec3Make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Vec4Make */
#ifndef TOLUA_DISABLE_tolua_attempt_Vec4Make00
static int tolua_attempt_Vec4Make00(lua_State* tolua_S)
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
  float x = ((float)  tolua_tonumber(tolua_S,1,0));
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
  float z = ((float)  tolua_tonumber(tolua_S,3,0));
  float w = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   vec4 tolua_ret = (vec4)  Vec4Make(x,y,z,w);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec4));
     tolua_pushusertype(tolua_S,tolua_obj,"vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Vec4Make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _m of class  mat2 */
#ifndef TOLUA_DISABLE_tolua_get_attempt_mat2__m
static int tolua_get_attempt_mat2__m(lua_State* tolua_S)
{
 int tolua_index;
  mat2* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (mat2*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=2)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->_m[tolua_index],"vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _m of class  mat2 */
#ifndef TOLUA_DISABLE_tolua_set_attempt_mat2__m
static int tolua_set_attempt_mat2__m(lua_State* tolua_S)
{
 int tolua_index;
  mat2* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (mat2*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=2)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->_m[tolua_index] = *((vec2*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  mat2 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat2_new00
static int tolua_attempt_mat2_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   mat2* tolua_ret = (mat2*)  Mtolua_new((mat2)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat2");
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

/* method: new_local of class  mat2 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat2_new00_local
static int tolua_attempt_mat2_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   mat2* tolua_ret = (mat2*)  Mtolua_new((mat2)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat2");
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

/* method: new of class  mat2 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat2_new01
static int tolua_attempt_mat2_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  vec2 a = *((vec2*)  tolua_tousertype(tolua_S,2,0));
  vec2 b = *((vec2*)  tolua_tousertype(tolua_S,3,0));
  {
   mat2* tolua_ret = (mat2*)  Mtolua_new((mat2)(a,b));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat2_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  mat2 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat2_new01_local
static int tolua_attempt_mat2_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  vec2 a = *((vec2*)  tolua_tousertype(tolua_S,2,0));
  vec2 b = *((vec2*)  tolua_tousertype(tolua_S,3,0));
  {
   mat2* tolua_ret = (mat2*)  Mtolua_new((mat2)(a,b));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat2_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  mat2 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat2_new02
static int tolua_attempt_mat2_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float m00 = ((float)  tolua_tonumber(tolua_S,2,0));
  float m10 = ((float)  tolua_tonumber(tolua_S,3,0));
  float m01 = ((float)  tolua_tonumber(tolua_S,4,0));
  float m11 = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   mat2* tolua_ret = (mat2*)  Mtolua_new((mat2)(m00,m10,m01,m11));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat2_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  mat2 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat2_new02_local
static int tolua_attempt_mat2_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float m00 = ((float)  tolua_tonumber(tolua_S,2,0));
  float m10 = ((float)  tolua_tonumber(tolua_S,3,0));
  float m01 = ((float)  tolua_tonumber(tolua_S,4,0));
  float m11 = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   mat2* tolua_ret = (mat2*)  Mtolua_new((mat2)(m00,m10,m01,m11));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat2_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  mat2 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat2_new03
static int tolua_attempt_mat2_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"mat2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  mat2 m = *((mat2*)  tolua_tousertype(tolua_S,2,0));
  {
   mat2* tolua_ret = (mat2*)  Mtolua_new((mat2)(m));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat2_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  mat2 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat2_new03_local
static int tolua_attempt_mat2_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"mat2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  mat2 m = *((mat2*)  tolua_tousertype(tolua_S,2,0));
  {
   mat2* tolua_ret = (mat2*)  Mtolua_new((mat2)(m));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat2_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: MatrixCompMult */
#ifndef TOLUA_DISABLE_tolua_attempt_MatrixCompMult00
static int tolua_attempt_MatrixCompMult00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"mat2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"mat2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  mat2 A = *((mat2*)  tolua_tousertype(tolua_S,1,0));
  mat2 B = *((mat2*)  tolua_tousertype(tolua_S,2,0));
  {
   mat2 tolua_ret = (mat2)  MatrixCompMult(A,B);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat2));
     tolua_pushusertype(tolua_S,tolua_obj,"mat2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MatrixCompMult'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Transpose */
#ifndef TOLUA_DISABLE_tolua_attempt_Transpose00
static int tolua_attempt_Transpose00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"mat2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  mat2 A = *((mat2*)  tolua_tousertype(tolua_S,1,0));
  {
   mat2 tolua_ret = (mat2)  Transpose(A);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat2));
     tolua_pushusertype(tolua_S,tolua_obj,"mat2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Transpose'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _m of class  mat3 */
#ifndef TOLUA_DISABLE_tolua_get_attempt_mat3__m
static int tolua_get_attempt_mat3__m(lua_State* tolua_S)
{
 int tolua_index;
  mat3* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (mat3*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=3)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->_m[tolua_index],"vec3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _m of class  mat3 */
#ifndef TOLUA_DISABLE_tolua_set_attempt_mat3__m
static int tolua_set_attempt_mat3__m(lua_State* tolua_S)
{
 int tolua_index;
  mat3* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (mat3*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=3)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->_m[tolua_index] = *((vec3*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  mat3 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat3_new00
static int tolua_attempt_mat3_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   mat3* tolua_ret = (mat3*)  Mtolua_new((mat3)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat3");
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

/* method: new_local of class  mat3 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat3_new00_local
static int tolua_attempt_mat3_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   mat3* tolua_ret = (mat3*)  Mtolua_new((mat3)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat3");
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

/* method: new of class  mat3 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat3_new01
static int tolua_attempt_mat3_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float d = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   mat3* tolua_ret = (mat3*)  Mtolua_new((mat3)(d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat3_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  mat3 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat3_new01_local
static int tolua_attempt_mat3_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float d = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   mat3* tolua_ret = (mat3*)  Mtolua_new((mat3)(d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat3_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  mat3 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat3_new02
static int tolua_attempt_mat3_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  vec3 a = *((vec3*)  tolua_tousertype(tolua_S,2,0));
  vec3 b = *((vec3*)  tolua_tousertype(tolua_S,3,0));
  vec3 c = *((vec3*)  tolua_tousertype(tolua_S,4,0));
  {
   mat3* tolua_ret = (mat3*)  Mtolua_new((mat3)(a,b,c));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat3_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  mat3 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat3_new02_local
static int tolua_attempt_mat3_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  vec3 a = *((vec3*)  tolua_tousertype(tolua_S,2,0));
  vec3 b = *((vec3*)  tolua_tousertype(tolua_S,3,0));
  vec3 c = *((vec3*)  tolua_tousertype(tolua_S,4,0));
  {
   mat3* tolua_ret = (mat3*)  Mtolua_new((mat3)(a,b,c));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat3_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  mat3 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat3_new03
static int tolua_attempt_mat3_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,11,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float m00 = ((float)  tolua_tonumber(tolua_S,2,0));
  float m10 = ((float)  tolua_tonumber(tolua_S,3,0));
  float m20 = ((float)  tolua_tonumber(tolua_S,4,0));
  float m01 = ((float)  tolua_tonumber(tolua_S,5,0));
  float m11 = ((float)  tolua_tonumber(tolua_S,6,0));
  float m21 = ((float)  tolua_tonumber(tolua_S,7,0));
  float m02 = ((float)  tolua_tonumber(tolua_S,8,0));
  float m12 = ((float)  tolua_tonumber(tolua_S,9,0));
  float m22 = ((float)  tolua_tonumber(tolua_S,10,0));
  {
   mat3* tolua_ret = (mat3*)  Mtolua_new((mat3)(m00,m10,m20,m01,m11,m21,m02,m12,m22));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat3_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  mat3 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat3_new03_local
static int tolua_attempt_mat3_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,11,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float m00 = ((float)  tolua_tonumber(tolua_S,2,0));
  float m10 = ((float)  tolua_tonumber(tolua_S,3,0));
  float m20 = ((float)  tolua_tonumber(tolua_S,4,0));
  float m01 = ((float)  tolua_tonumber(tolua_S,5,0));
  float m11 = ((float)  tolua_tonumber(tolua_S,6,0));
  float m21 = ((float)  tolua_tonumber(tolua_S,7,0));
  float m02 = ((float)  tolua_tonumber(tolua_S,8,0));
  float m12 = ((float)  tolua_tonumber(tolua_S,9,0));
  float m22 = ((float)  tolua_tonumber(tolua_S,10,0));
  {
   mat3* tolua_ret = (mat3*)  Mtolua_new((mat3)(m00,m10,m20,m01,m11,m21,m02,m12,m22));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat3_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  mat3 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat3_new04
static int tolua_attempt_mat3_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"mat3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  mat3 m = *((mat3*)  tolua_tousertype(tolua_S,2,0));
  {
   mat3* tolua_ret = (mat3*)  Mtolua_new((mat3)(m));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat3_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  mat3 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat3_new04_local
static int tolua_attempt_mat3_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"mat3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  mat3 m = *((mat3*)  tolua_tousertype(tolua_S,2,0));
  {
   mat3* tolua_ret = (mat3*)  Mtolua_new((mat3)(m));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat3_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: MatrixCompMult */
#ifndef TOLUA_DISABLE_tolua_attempt_MatrixCompMult01
static int tolua_attempt_MatrixCompMult01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"mat3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"mat3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  mat3 A = *((mat3*)  tolua_tousertype(tolua_S,1,0));
  mat3 B = *((mat3*)  tolua_tousertype(tolua_S,2,0));
  {
   mat3 tolua_ret = (mat3)  MatrixCompMult(A,B);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat3));
     tolua_pushusertype(tolua_S,tolua_obj,"mat3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_MatrixCompMult00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Transpose */
#ifndef TOLUA_DISABLE_tolua_attempt_Transpose01
static int tolua_attempt_Transpose01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"mat3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  mat3 A = *((mat3*)  tolua_tousertype(tolua_S,1,0));
  {
   mat3 tolua_ret = (mat3)  Transpose(A);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat3));
     tolua_pushusertype(tolua_S,tolua_obj,"mat3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_Transpose00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _m of class  mat4 */
#ifndef TOLUA_DISABLE_tolua_get_attempt_mat4__m
static int tolua_get_attempt_mat4__m(lua_State* tolua_S)
{
 int tolua_index;
  mat4* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (mat4*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=4)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->_m[tolua_index],"vec4");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _m of class  mat4 */
#ifndef TOLUA_DISABLE_tolua_set_attempt_mat4__m
static int tolua_set_attempt_mat4__m(lua_State* tolua_S)
{
 int tolua_index;
  mat4* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (mat4*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=4)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->_m[tolua_index] = *((vec4*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  mat4 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat4_new00
static int tolua_attempt_mat4_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   mat4* tolua_ret = (mat4*)  Mtolua_new((mat4)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat4");
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

/* method: new_local of class  mat4 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat4_new00_local
static int tolua_attempt_mat4_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   mat4* tolua_ret = (mat4*)  Mtolua_new((mat4)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat4");
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

/* method: new of class  mat4 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat4_new01
static int tolua_attempt_mat4_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"vec4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"vec4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  vec4 a = *((vec4*)  tolua_tousertype(tolua_S,2,0));
  vec4 b = *((vec4*)  tolua_tousertype(tolua_S,3,0));
  vec4 c = *((vec4*)  tolua_tousertype(tolua_S,4,0));
  vec4 d = *((vec4*)  tolua_tousertype(tolua_S,5,0));
  {
   mat4* tolua_ret = (mat4*)  Mtolua_new((mat4)(a,b,c,d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat4_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  mat4 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat4_new01_local
static int tolua_attempt_mat4_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"vec4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"vec4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  vec4 a = *((vec4*)  tolua_tousertype(tolua_S,2,0));
  vec4 b = *((vec4*)  tolua_tousertype(tolua_S,3,0));
  vec4 c = *((vec4*)  tolua_tousertype(tolua_S,4,0));
  vec4 d = *((vec4*)  tolua_tousertype(tolua_S,5,0));
  {
   mat4* tolua_ret = (mat4*)  Mtolua_new((mat4)(a,b,c,d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat4_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  mat4 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat4_new02
static int tolua_attempt_mat4_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,12,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,13,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,14,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,15,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,16,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,17,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,18,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float m00 = ((float)  tolua_tonumber(tolua_S,2,0));
  float m10 = ((float)  tolua_tonumber(tolua_S,3,0));
  float m20 = ((float)  tolua_tonumber(tolua_S,4,0));
  float m30 = ((float)  tolua_tonumber(tolua_S,5,0));
  float m01 = ((float)  tolua_tonumber(tolua_S,6,0));
  float m11 = ((float)  tolua_tonumber(tolua_S,7,0));
  float m21 = ((float)  tolua_tonumber(tolua_S,8,0));
  float m31 = ((float)  tolua_tonumber(tolua_S,9,0));
  float m02 = ((float)  tolua_tonumber(tolua_S,10,0));
  float m12 = ((float)  tolua_tonumber(tolua_S,11,0));
  float m22 = ((float)  tolua_tonumber(tolua_S,12,0));
  float m32 = ((float)  tolua_tonumber(tolua_S,13,0));
  float m03 = ((float)  tolua_tonumber(tolua_S,14,0));
  float m13 = ((float)  tolua_tonumber(tolua_S,15,0));
  float m23 = ((float)  tolua_tonumber(tolua_S,16,0));
  float m33 = ((float)  tolua_tonumber(tolua_S,17,0));
  {
   mat4* tolua_ret = (mat4*)  Mtolua_new((mat4)(m00,m10,m20,m30,m01,m11,m21,m31,m02,m12,m22,m32,m03,m13,m23,m33));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat4_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  mat4 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat4_new02_local
static int tolua_attempt_mat4_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,12,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,13,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,14,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,15,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,16,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,17,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,18,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float m00 = ((float)  tolua_tonumber(tolua_S,2,0));
  float m10 = ((float)  tolua_tonumber(tolua_S,3,0));
  float m20 = ((float)  tolua_tonumber(tolua_S,4,0));
  float m30 = ((float)  tolua_tonumber(tolua_S,5,0));
  float m01 = ((float)  tolua_tonumber(tolua_S,6,0));
  float m11 = ((float)  tolua_tonumber(tolua_S,7,0));
  float m21 = ((float)  tolua_tonumber(tolua_S,8,0));
  float m31 = ((float)  tolua_tonumber(tolua_S,9,0));
  float m02 = ((float)  tolua_tonumber(tolua_S,10,0));
  float m12 = ((float)  tolua_tonumber(tolua_S,11,0));
  float m22 = ((float)  tolua_tonumber(tolua_S,12,0));
  float m32 = ((float)  tolua_tonumber(tolua_S,13,0));
  float m03 = ((float)  tolua_tonumber(tolua_S,14,0));
  float m13 = ((float)  tolua_tonumber(tolua_S,15,0));
  float m23 = ((float)  tolua_tonumber(tolua_S,16,0));
  float m33 = ((float)  tolua_tonumber(tolua_S,17,0));
  {
   mat4* tolua_ret = (mat4*)  Mtolua_new((mat4)(m00,m10,m20,m30,m01,m11,m21,m31,m02,m12,m22,m32,m03,m13,m23,m33));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat4_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  mat4 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat4_new03
static int tolua_attempt_mat4_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  mat4 m = *((mat4*)  tolua_tousertype(tolua_S,2,0));
  {
   mat4* tolua_ret = (mat4*)  Mtolua_new((mat4)(m));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat4_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  mat4 */
#ifndef TOLUA_DISABLE_tolua_attempt_mat4_new03_local
static int tolua_attempt_mat4_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"mat4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  mat4 m = *((mat4*)  tolua_tousertype(tolua_S,2,0));
  {
   mat4* tolua_ret = (mat4*)  Mtolua_new((mat4)(m));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_mat4_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: MatrixCompMult */
#ifndef TOLUA_DISABLE_tolua_attempt_MatrixCompMult02
static int tolua_attempt_MatrixCompMult02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"mat4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  mat4 A = *((mat4*)  tolua_tousertype(tolua_S,1,0));
  mat4 B = *((mat4*)  tolua_tousertype(tolua_S,2,0));
  {
   mat4 tolua_ret = (mat4)  MatrixCompMult(A,B);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_MatrixCompMult01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Transpose */
#ifndef TOLUA_DISABLE_tolua_attempt_Transpose02
static int tolua_attempt_Transpose02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  mat4 A = *((mat4*)  tolua_tousertype(tolua_S,1,0));
  {
   mat4 tolua_ret = (mat4)  Transpose(A);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_Transpose01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Mvmult */
#ifndef TOLUA_DISABLE_tolua_attempt_Mvmult00
static int tolua_attempt_Mvmult00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"mat4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  mat4 a = *((mat4*)  tolua_tousertype(tolua_S,1,0));
  vec4 b = *((vec4*)  tolua_tousertype(tolua_S,2,0));
  {
   vec4 tolua_ret = (vec4)  Mvmult(a,b);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec4));
     tolua_pushusertype(tolua_S,tolua_obj,"vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Mvmult'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: RotateX */
#ifndef TOLUA_DISABLE_tolua_attempt_RotateX00
static int tolua_attempt_RotateX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float theta = ((float)  tolua_tonumber(tolua_S,1,0));
  {
   mat4 tolua_ret = (mat4)  RotateX(theta);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RotateX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: RotateY */
#ifndef TOLUA_DISABLE_tolua_attempt_RotateY00
static int tolua_attempt_RotateY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float theta = ((float)  tolua_tonumber(tolua_S,1,0));
  {
   mat4 tolua_ret = (mat4)  RotateY(theta);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RotateY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: RotateZ */
#ifndef TOLUA_DISABLE_tolua_attempt_RotateZ00
static int tolua_attempt_RotateZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float theta = ((float)  tolua_tonumber(tolua_S,1,0));
  {
   mat4 tolua_ret = (mat4)  RotateZ(theta);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RotateZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Rotate */
#ifndef TOLUA_DISABLE_tolua_attempt_Rotate00
static int tolua_attempt_Rotate00(lua_State* tolua_S)
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
  float theta = ((float)  tolua_tonumber(tolua_S,1,0));
  float vx = ((float)  tolua_tonumber(tolua_S,2,0));
  float vy = ((float)  tolua_tonumber(tolua_S,3,0));
  float vz = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   mat4 tolua_ret = (mat4)  Rotate(theta,vx,vy,vz);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Rotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Translate */
#ifndef TOLUA_DISABLE_tolua_attempt_Translate00
static int tolua_attempt_Translate00(lua_State* tolua_S)
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
  float x = ((float)  tolua_tonumber(tolua_S,1,0));
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
  float z = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   mat4 tolua_ret = (mat4)  Translate(x,y,z);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Translate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Translate */
#ifndef TOLUA_DISABLE_tolua_attempt_Translate01
static int tolua_attempt_Translate01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  vec3 v = *((vec3*)  tolua_tousertype(tolua_S,1,0));
  {
   mat4 tolua_ret = (mat4)  Translate(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_Translate00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Translate */
#ifndef TOLUA_DISABLE_tolua_attempt_Translate02
static int tolua_attempt_Translate02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  vec4 v = *((vec4*)  tolua_tousertype(tolua_S,1,0));
  {
   mat4 tolua_ret = (mat4)  Translate(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_Translate01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Scale */
#ifndef TOLUA_DISABLE_tolua_attempt_Scale00
static int tolua_attempt_Scale00(lua_State* tolua_S)
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
  float x = ((float)  tolua_tonumber(tolua_S,1,0));
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
  float z = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   mat4 tolua_ret = (mat4)  Scale(x,y,z);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Scale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Scale */
#ifndef TOLUA_DISABLE_tolua_attempt_Scale01
static int tolua_attempt_Scale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  vec3 v = *((vec3*)  tolua_tousertype(tolua_S,1,0));
  {
   mat4 tolua_ret = (mat4)  Scale(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_Scale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Ortho */
#ifndef TOLUA_DISABLE_tolua_attempt_Ortho00
static int tolua_attempt_Ortho00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float left = ((float)  tolua_tonumber(tolua_S,1,0));
  float right = ((float)  tolua_tonumber(tolua_S,2,0));
  float bottom = ((float)  tolua_tonumber(tolua_S,3,0));
  float top = ((float)  tolua_tonumber(tolua_S,4,0));
  float zNear = ((float)  tolua_tonumber(tolua_S,5,0));
  float zFar = ((float)  tolua_tonumber(tolua_S,6,0));
  {
   mat4 tolua_ret = (mat4)  Ortho(left,right,bottom,top,zNear,zFar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Ortho'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Ortho2D */
#ifndef TOLUA_DISABLE_tolua_attempt_Ortho2D00
static int tolua_attempt_Ortho2D00(lua_State* tolua_S)
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
  float left = ((float)  tolua_tonumber(tolua_S,1,0));
  float right = ((float)  tolua_tonumber(tolua_S,2,0));
  float bottom = ((float)  tolua_tonumber(tolua_S,3,0));
  float top = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   mat4 tolua_ret = (mat4)  Ortho2D(left,right,bottom,top);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Ortho2D'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Frustum */
#ifndef TOLUA_DISABLE_tolua_attempt_Frustum00
static int tolua_attempt_Frustum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float left = ((float)  tolua_tonumber(tolua_S,1,0));
  float right = ((float)  tolua_tonumber(tolua_S,2,0));
  float bottom = ((float)  tolua_tonumber(tolua_S,3,0));
  float top = ((float)  tolua_tonumber(tolua_S,4,0));
  float zNear = ((float)  tolua_tonumber(tolua_S,5,0));
  float zFar = ((float)  tolua_tonumber(tolua_S,6,0));
  {
   mat4 tolua_ret = (mat4)  Frustum(left,right,bottom,top,zNear,zFar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Frustum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Perspective */
#ifndef TOLUA_DISABLE_tolua_attempt_Perspective00
static int tolua_attempt_Perspective00(lua_State* tolua_S)
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
  float fovy = ((float)  tolua_tonumber(tolua_S,1,0));
  float aspect = ((float)  tolua_tonumber(tolua_S,2,0));
  float zNear = ((float)  tolua_tonumber(tolua_S,3,0));
  float zFar = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   mat4 tolua_ret = (mat4)  Perspective(fovy,aspect,zNear,zFar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Perspective'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: LookAt */
#ifndef TOLUA_DISABLE_tolua_attempt_LookAt00
static int tolua_attempt_LookAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"vec4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  vec4 eye = *((vec4*)  tolua_tousertype(tolua_S,1,0));
  vec4 at = *((vec4*)  tolua_tousertype(tolua_S,2,0));
  vec4 up = *((vec4*)  tolua_tousertype(tolua_S,3,0));
  {
   mat4 tolua_ret = (mat4)  LookAt(eye,at,up);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LookAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Normal */
#ifndef TOLUA_DISABLE_tolua_attempt_Normal00
static int tolua_attempt_Normal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  mat4 c = *((mat4*)  tolua_tousertype(tolua_S,1,0));
  {
   mat3 tolua_ret = (mat3)  Normal(c);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat3));
     tolua_pushusertype(tolua_S,tolua_obj,"mat3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Normal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Minus */
#ifndef TOLUA_DISABLE_tolua_attempt_Minus00
static int tolua_attempt_Minus00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"vec4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  vec4 a = *((vec4*)  tolua_tousertype(tolua_S,1,0));
  vec4 b = *((vec4*)  tolua_tousertype(tolua_S,2,0));
  {
   vec4 tolua_ret = (vec4)  Minus(a,b);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec4));
     tolua_pushusertype(tolua_S,tolua_obj,"vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Minus'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Printv */
#ifndef TOLUA_DISABLE_tolua_attempt_Printv00
static int tolua_attempt_Printv00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  vec4 a = *((vec4*)  tolua_tousertype(tolua_S,1,0));
  {
   Printv(a);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Printv'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Printm */
#ifndef TOLUA_DISABLE_tolua_attempt_Printm00
static int tolua_attempt_Printm00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  mat4 a = *((mat4*)  tolua_tousertype(tolua_S,1,0));
  {
   Printm(a);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Printm'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Identity */
#ifndef TOLUA_DISABLE_tolua_attempt_Identity00
static int tolua_attempt_Identity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   mat4 tolua_ret = (mat4)  Identity();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Identity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSize of class  MatrixStack */
#ifndef TOLUA_DISABLE_tolua_attempt_MatrixStack_GetSize00
static int tolua_attempt_MatrixStack_GetSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MatrixStack",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MatrixStack* self = (MatrixStack*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSize'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Push of class  MatrixStack */
#ifndef TOLUA_DISABLE_tolua_attempt_MatrixStack_Push00
static int tolua_attempt_MatrixStack_Push00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MatrixStack",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MatrixStack* self = (MatrixStack*)  tolua_tousertype(tolua_S,1,0);
  const mat4* m = ((const mat4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Push'", NULL);
#endif
  {
   self->Push(*m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Push'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTop of class  MatrixStack */
#ifndef TOLUA_DISABLE_tolua_attempt_MatrixStack_GetTop00
static int tolua_attempt_MatrixStack_GetTop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MatrixStack",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MatrixStack* self = (MatrixStack*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTop'", NULL);
#endif
  {
   mat4& tolua_ret = (mat4&)  self->GetTop();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"mat4");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Pop of class  MatrixStack */
#ifndef TOLUA_DISABLE_tolua_attempt_MatrixStack_Pop00
static int tolua_attempt_MatrixStack_Pop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MatrixStack",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MatrixStack* self = (MatrixStack*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Pop'", NULL);
#endif
  {
   mat4 tolua_ret = (mat4)  self->Pop();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Pop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  AABB */
#ifndef TOLUA_DISABLE_tolua_attempt_AABB_new00
static int tolua_attempt_AABB_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AABB",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   AABB* tolua_ret = (AABB*)  Mtolua_new((AABB)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AABB");
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

/* method: new_local of class  AABB */
#ifndef TOLUA_DISABLE_tolua_attempt_AABB_new00_local
static int tolua_attempt_AABB_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AABB",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   AABB* tolua_ret = (AABB*)  Mtolua_new((AABB)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AABB");
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

/* method: delete of class  AABB */
#ifndef TOLUA_DISABLE_tolua_attempt_AABB_delete00
static int tolua_attempt_AABB_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AABB",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AABB* self = (AABB*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMin of class  AABB */
#ifndef TOLUA_DISABLE_tolua_attempt_AABB_SetMin00
static int tolua_attempt_AABB_SetMin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AABB",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AABB* self = (AABB*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMin'", NULL);
#endif
  {
   self->SetMin(x,y,z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMin of class  AABB */
#ifndef TOLUA_DISABLE_tolua_attempt_AABB_GetMin00
static int tolua_attempt_AABB_GetMin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AABB",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AABB* self = (AABB*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMin'", NULL);
#endif
  {
   vec3 tolua_ret = (vec3)  self->GetMin();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMax of class  AABB */
#ifndef TOLUA_DISABLE_tolua_attempt_AABB_SetMax00
static int tolua_attempt_AABB_SetMax00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AABB",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AABB* self = (AABB*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMax'", NULL);
#endif
  {
   self->SetMax(x,y,z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMax'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMax of class  AABB */
#ifndef TOLUA_DISABLE_tolua_attempt_AABB_GetMax00
static int tolua_attempt_AABB_GetMax00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AABB",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AABB* self = (AABB*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMax'", NULL);
#endif
  {
   vec3 tolua_ret = (vec3)  self->GetMax();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMax'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Add of class  AABB */
#ifndef TOLUA_DISABLE_tolua_attempt_AABB_Add00
static int tolua_attempt_AABB_Add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AABB",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AABB* self = (AABB*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Add'", NULL);
#endif
  {
   self->Add(x,y,z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Empty of class  AABB */
#ifndef TOLUA_DISABLE_tolua_attempt_AABB_Empty00
static int tolua_attempt_AABB_Empty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AABB",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AABB* self = (AABB*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Empty'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Empty();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Empty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsContains of class  AABB */
#ifndef TOLUA_DISABLE_tolua_attempt_AABB_IsContains00
static int tolua_attempt_AABB_IsContains00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AABB",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AABB* self = (AABB*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsContains'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsContains(x,y,z);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsContains'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCenter of class  AABB */
#ifndef TOLUA_DISABLE_tolua_attempt_AABB_GetCenter00
static int tolua_attempt_AABB_GetCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AABB",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AABB* self = (AABB*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCenter'", NULL);
#endif
  {
   vec3 tolua_ret = (vec3)  self->GetCenter();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IntersectAABBs of class  AABB */
#ifndef TOLUA_DISABLE_tolua_attempt_AABB_IntersectAABBs00
static int tolua_attempt_AABB_IntersectAABBs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AABB",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"AABB",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"AABB",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AABB* a = ((AABB*)  tolua_tousertype(tolua_S,2,0));
  AABB* b = ((AABB*)  tolua_tousertype(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  AABB::IntersectAABBs(*a,*b);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IntersectAABBs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetToTransformedBox of class  AABB */
#ifndef TOLUA_DISABLE_tolua_attempt_AABB_SetToTransformedBox00
static int tolua_attempt_AABB_SetToTransformedBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AABB",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AABB* self = (AABB*)  tolua_tousertype(tolua_S,1,0);
  mat4 t = *((mat4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetToTransformedBox'", NULL);
#endif
  {
   self->SetToTransformedBox(t);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetToTransformedBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Reset of class  AABB */
#ifndef TOLUA_DISABLE_tolua_attempt_AABB_Reset00
static int tolua_attempt_AABB_Reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AABB",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AABB* self = (AABB*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Reset'", NULL);
#endif
  {
   self->Reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: id of class  Object */
#ifndef TOLUA_DISABLE_tolua_get_Object_id
static int tolua_get_Object_id(lua_State* tolua_S)
{
  Object* self = (Object*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'id'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->id);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: id of class  Object */
#ifndef TOLUA_DISABLE_tolua_set_Object_id
static int tolua_set_Object_id(lua_State* tolua_S)
{
  Object* self = (Object*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'id'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->id = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  Object */
#ifndef TOLUA_DISABLE_tolua_attempt_Object_Create00
static int tolua_attempt_Object_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Object* tolua_ret = (Object*)  Object::Create();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Object");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Init of class  Object */
#ifndef TOLUA_DISABLE_tolua_attempt_Object_Init00
static int tolua_attempt_Object_Init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Object* self = (Object*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoRelease of class  Object */
#ifndef TOLUA_DISABLE_tolua_attempt_Object_AutoRelease00
static int tolua_attempt_Object_AutoRelease00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Object* self = (Object*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoRelease'", NULL);
#endif
  {
   self->AutoRelease();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoRelease'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Retain of class  Object */
#ifndef TOLUA_DISABLE_tolua_attempt_Object_Retain00
static int tolua_attempt_Object_Retain00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Object* self = (Object*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Retain'", NULL);
#endif
  {
   self->Retain();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Retain'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Release of class  Object */
#ifndef TOLUA_DISABLE_tolua_attempt_Object_Release00
static int tolua_attempt_Object_Release00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Object* self = (Object*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Release'", NULL);
#endif
  {
   self->Release();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Release'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCount of class  Object */
#ifndef TOLUA_DISABLE_tolua_attempt_Object_GetCount00
static int tolua_attempt_Object_GetCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Object* self = (Object*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Copy of class  Object */
#ifndef TOLUA_DISABLE_tolua_attempt_Object_Copy00
static int tolua_attempt_Object_Copy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Object* self = (Object*)  tolua_tousertype(tolua_S,1,0);
  Object* object = ((Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Copy'", NULL);
#endif
  {
   self->Copy(object);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Copy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Update of class  Object */
#ifndef TOLUA_DISABLE_tolua_attempt_Object_Update00
static int tolua_attempt_Object_Update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Object* self = (Object*)  tolua_tousertype(tolua_S,1,0);
  float f_delta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Update'", NULL);
#endif
  {
   self->Update(f_delta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Object */
#ifndef TOLUA_DISABLE_tolua_attempt_Object_new00
static int tolua_attempt_Object_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Object* tolua_ret = (Object*)  Mtolua_new((Object)());
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Object");
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

/* method: new_local of class  Object */
#ifndef TOLUA_DISABLE_tolua_attempt_Object_new00_local
static int tolua_attempt_Object_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Object* tolua_ret = (Object*)  Mtolua_new((Object)());
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Object");
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

/* method: GetID of class  Object */
#ifndef TOLUA_DISABLE_tolua_attempt_Object_GetID00
static int tolua_attempt_Object_GetID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Object* self = (Object*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetID'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetID();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Object */
#ifndef TOLUA_DISABLE_tolua_attempt_Object_delete00
static int tolua_attempt_Object_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Object* self = (Object*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetObjectNumber of class  Object */
#ifndef TOLUA_DISABLE_tolua_attempt_Object_GetObjectNumber00
static int tolua_attempt_Object_GetObjectNumber00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   int tolua_ret = (int)  Object::GetObjectNumber();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetObjectNumber'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Add of class  Array */
#ifndef TOLUA_DISABLE_tolua_attempt_Array_Add00
static int tolua_attempt_Array_Add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Array",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Array* self = (Array*)  tolua_tousertype(tolua_S,1,0);
  Object* object = ((Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Add'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Add(object);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  Array */
#ifndef TOLUA_DISABLE_tolua_attempt_Array_Clear00
static int tolua_attempt_Array_Clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Array",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Array* self = (Array*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'", NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Size of class  Array */
#ifndef TOLUA_DISABLE_tolua_attempt_Array_Size00
static int tolua_attempt_Array_Size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Array",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Array* self = (Array*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Size'", NULL);
#endif
  {
   int tolua_ret = (int)  self->Size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: At of class  Array */
#ifndef TOLUA_DISABLE_tolua_attempt_Array_At00
static int tolua_attempt_Array_At00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Array",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Array* self = (Array*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'At'", NULL);
#endif
  {
   Object* tolua_ret = (Object*)  self->At(index);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Object");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'At'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Delete of class  Array */
#ifndef TOLUA_DISABLE_tolua_attempt_Array_Delete00
static int tolua_attempt_Array_Delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Array",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Array* self = (Array*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Delete'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Delete(index);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Delete of class  Array */
#ifndef TOLUA_DISABLE_tolua_attempt_Array_Delete01
static int tolua_attempt_Array_Delete01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Array",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Array* self = (Array*)  tolua_tousertype(tolua_S,1,0);
  Object* object = ((Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Delete'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Delete(object);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_Array_Delete00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  Array */
#ifndef TOLUA_DISABLE_tolua_attempt_Array_Create00
static int tolua_attempt_Array_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Array",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Array* tolua_ret = (Array*)  Array::Create();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Array");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Init of class  Array */
#ifndef TOLUA_DISABLE_tolua_attempt_Array_Init00
static int tolua_attempt_Array_Init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Array",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Array* self = (Array*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Array */
#ifndef TOLUA_DISABLE_tolua_attempt_Array_new00
static int tolua_attempt_Array_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Array",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Array* tolua_ret = (Array*)  Mtolua_new((Array)());
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Array");
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

/* method: new_local of class  Array */
#ifndef TOLUA_DISABLE_tolua_attempt_Array_new00_local
static int tolua_attempt_Array_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Array",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Array* tolua_ret = (Array*)  Mtolua_new((Array)());
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Array");
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

/* method: delete of class  Array */
#ifndef TOLUA_DISABLE_tolua_attempt_Array_delete00
static int tolua_attempt_Array_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Array",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Array* self = (Array*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsInArray of class  Array */
#ifndef TOLUA_DISABLE_tolua_attempt_Array_IsInArray00
static int tolua_attempt_Array_IsInArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Array",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Array* self = (Array*)  tolua_tousertype(tolua_S,1,0);
  Object* object = ((Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsInArray'", NULL);
#endif
  {
   int tolua_ret = (int)  self->IsInArray(object);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsInArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Add of class  AutoReleasePool */
#ifndef TOLUA_DISABLE_tolua_attempt_AutoReleasePool_Add00
static int tolua_attempt_AutoReleasePool_Add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AutoReleasePool",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AutoReleasePool* self = (AutoReleasePool*)  tolua_tousertype(tolua_S,1,0);
  Object* object = ((Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Add'", NULL);
#endif
  {
   self->Add(object);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Remove of class  AutoReleasePool */
#ifndef TOLUA_DISABLE_tolua_attempt_AutoReleasePool_Remove00
static int tolua_attempt_AutoReleasePool_Remove00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AutoReleasePool",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AutoReleasePool* self = (AutoReleasePool*)  tolua_tousertype(tolua_S,1,0);
  Object* object = ((Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Remove'", NULL);
#endif
  {
   self->Remove(object);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Remove'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  AutoReleasePool */
#ifndef TOLUA_DISABLE_tolua_attempt_AutoReleasePool_Clear00
static int tolua_attempt_AutoReleasePool_Clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AutoReleasePool",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AutoReleasePool* self = (AutoReleasePool*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'", NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Delete of class  AutoReleasePool */
#ifndef TOLUA_DISABLE_tolua_attempt_AutoReleasePool_Delete00
static int tolua_attempt_AutoReleasePool_Delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AutoReleasePool",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AutoReleasePool* self = (AutoReleasePool*)  tolua_tousertype(tolua_S,1,0);
  Object* object = ((Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Delete'", NULL);
#endif
  {
   self->Delete(object);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  AutoReleasePool */
#ifndef TOLUA_DISABLE_tolua_attempt_AutoReleasePool_Create00
static int tolua_attempt_AutoReleasePool_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AutoReleasePool",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   AutoReleasePool* tolua_ret = (AutoReleasePool*)  AutoReleasePool::Create();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"AutoReleasePool");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Init of class  AutoReleasePool */
#ifndef TOLUA_DISABLE_tolua_attempt_AutoReleasePool_Init00
static int tolua_attempt_AutoReleasePool_Init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AutoReleasePool",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AutoReleasePool* self = (AutoReleasePool*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  AutoReleasePool */
#ifndef TOLUA_DISABLE_tolua_attempt_AutoReleasePool_new00
static int tolua_attempt_AutoReleasePool_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AutoReleasePool",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   AutoReleasePool* tolua_ret = (AutoReleasePool*)  Mtolua_new((AutoReleasePool)());
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"AutoReleasePool");
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

/* method: new_local of class  AutoReleasePool */
#ifndef TOLUA_DISABLE_tolua_attempt_AutoReleasePool_new00_local
static int tolua_attempt_AutoReleasePool_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AutoReleasePool",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   AutoReleasePool* tolua_ret = (AutoReleasePool*)  Mtolua_new((AutoReleasePool)());
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"AutoReleasePool");
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

/* method: delete of class  AutoReleasePool */
#ifndef TOLUA_DISABLE_tolua_attempt_AutoReleasePool_delete00
static int tolua_attempt_AutoReleasePool_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AutoReleasePool",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AutoReleasePool* self = (AutoReleasePool*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetInstance of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_GetInstance00
static int tolua_attempt_GLState_GetInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GLState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GLState* tolua_ret = (GLState*)  GLState::GetInstance();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GLState");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Init of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_Init00
static int tolua_attempt_GLState_Init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GLState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLState* self = (GLState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_delete00
static int tolua_attempt_GLState_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GLState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLState* self = (GLState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetGLWinView of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_SetGLWinView00
static int tolua_attempt_GLState_SetGLWinView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GLState",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"GLViewInterface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLState* self = (GLState*)  tolua_tousertype(tolua_S,1,0);
  GLViewInterface* gl_win = ((GLViewInterface*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetGLWinView'", NULL);
#endif
  {
   self->SetGLWinView(gl_win);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetGLWinView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetWinName of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_SetWinName00
static int tolua_attempt_GLState_SetWinName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GLState",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wstring",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLState* self = (GLState*)  tolua_tousertype(tolua_S,1,0);
  wstring win_name = *((wstring*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetWinName'", NULL);
#endif
  {
   self->SetWinName(win_name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetWinName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetViewSize of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_GetViewSize00
static int tolua_attempt_GLState_GetViewSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GLState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLState* self = (GLState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetViewSize'", NULL);
#endif
  {
   Size2D tolua_ret = (Size2D)  self->GetViewSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Size2D)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Size2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Size2D));
     tolua_pushusertype(tolua_S,tolua_obj,"Size2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetViewSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetViewSize of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_SetViewSize00
static int tolua_attempt_GLState_SetViewSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GLState",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Size2D",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLState* self = (GLState*)  tolua_tousertype(tolua_S,1,0);
  Size2D view_size = *((Size2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetViewSize'", NULL);
#endif
  {
   self->SetViewSize(view_size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetViewSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ShowOpenGLInfo of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_ShowOpenGLInfo00
static int tolua_attempt_GLState_ShowOpenGLInfo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GLState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLState* self = (GLState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ShowOpenGLInfo'", NULL);
#endif
  {
   self->ShowOpenGLInfo();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ShowOpenGLInfo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLightManage of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_GetLightManage00
static int tolua_attempt_GLState_GetLightManage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GLState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLState* self = (GLState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLightManage'", NULL);
#endif
  {
   LightManage* tolua_ret = (LightManage*)  self->GetLightManage();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LightManage");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLightManage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetProjectionStack of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_GetProjectionStack00
static int tolua_attempt_GLState_GetProjectionStack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GLState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLState* self = (GLState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetProjectionStack'", NULL);
#endif
  {
   MatrixStack* tolua_ret = (MatrixStack*)  self->GetProjectionStack();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"MatrixStack");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetProjectionStack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetModelViewStack of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_GetModelViewStack00
static int tolua_attempt_GLState_GetModelViewStack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GLState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLState* self = (GLState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetModelViewStack'", NULL);
#endif
  {
   MatrixStack* tolua_ret = (MatrixStack*)  self->GetModelViewStack();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"MatrixStack");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetModelViewStack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PushShaderProgram of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_PushShaderProgram00
static int tolua_attempt_GLState_PushShaderProgram00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GLState",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"ShaderProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLState* self = (GLState*)  tolua_tousertype(tolua_S,1,0);
  ShaderProgram* shader = ((ShaderProgram*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PushShaderProgram'", NULL);
#endif
  {
   self->PushShaderProgram(shader);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PushShaderProgram'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PopShaderProgram of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_PopShaderProgram00
static int tolua_attempt_GLState_PopShaderProgram00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GLState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLState* self = (GLState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PopShaderProgram'", NULL);
#endif
  {
   self->PopShaderProgram();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PopShaderProgram'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetShaderProgram of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_GetShaderProgram00
static int tolua_attempt_GLState_GetShaderProgram00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GLState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLState* self = (GLState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetShaderProgram'", NULL);
#endif
  {
   ShaderProgram* tolua_ret = (ShaderProgram*)  self->GetShaderProgram();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ShaderProgram");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetShaderProgram'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PushCamera of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_PushCamera00
static int tolua_attempt_GLState_PushCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GLState",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CameraClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLState* self = (GLState*)  tolua_tousertype(tolua_S,1,0);
  CameraClass* camera = ((CameraClass*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PushCamera'", NULL);
#endif
  {
   self->PushCamera(camera);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PushCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PopCamera of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_PopCamera00
static int tolua_attempt_GLState_PopCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GLState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLState* self = (GLState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PopCamera'", NULL);
#endif
  {
   self->PopCamera();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PopCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCamera of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_GetCamera00
static int tolua_attempt_GLState_GetCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GLState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLState* self = (GLState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCamera'", NULL);
#endif
  {
   CameraClass* tolua_ret = (CameraClass*)  self->GetCamera();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CameraClass");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateUniform of class  GLState */
#ifndef TOLUA_DISABLE_tolua_attempt_GLState_UpdateUniform00
static int tolua_attempt_GLState_UpdateUniform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GLState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLState* self = (GLState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UpdateUniform'", NULL);
#endif
  {
   self->UpdateUniform();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UpdateUniform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAuoReleasePool of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_attempt_ResourceManager_GetAuoReleasePool00
static int tolua_attempt_ResourceManager_GetAuoReleasePool00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ResourceManager* self = (ResourceManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAuoReleasePool'", NULL);
#endif
  {
   AutoReleasePool* tolua_ret = (AutoReleasePool*)  self->GetAuoReleasePool();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"AutoReleasePool");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetAuoReleasePool'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetInstance of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_attempt_ResourceManager_GetInstance00
static int tolua_attempt_ResourceManager_GetInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ResourceManager* tolua_ret = (ResourceManager*)  ResourceManager::GetInstance();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ResourceManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetInstance of class  Root */
#ifndef TOLUA_DISABLE_tolua_attempt_Root_GetInstance00
static int tolua_attempt_Root_GetInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Root",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Root* tolua_ret = (Root*)  Root::GetInstance();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Root");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PushNode of class  Root */
#ifndef TOLUA_DISABLE_tolua_attempt_Root_PushNode00
static int tolua_attempt_Root_PushNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Root",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Root* self = (Root*)  tolua_tousertype(tolua_S,1,0);
  Node* tag = ((Node*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PushNode'", NULL);
#endif
  {
   self->PushNode(tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PushNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PopNode of class  Root */
#ifndef TOLUA_DISABLE_tolua_attempt_Root_PopNode00
static int tolua_attempt_Root_PopNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Root",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Root* self = (Root*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PopNode'", NULL);
#endif
  {
   Node* tolua_ret = (Node*)  self->PopNode();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Node");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PopNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetNode of class  Root */
#ifndef TOLUA_DISABLE_tolua_attempt_Root_SetNode00
static int tolua_attempt_Root_SetNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Root",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Root* self = (Root*)  tolua_tousertype(tolua_S,1,0);
  Node* tag = ((Node*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetNode'", NULL);
#endif
  {
   self->SetNode(tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Draw of class  Root */
#ifndef TOLUA_DISABLE_tolua_attempt_Root_Draw00
static int tolua_attempt_Root_Draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Root",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Root* self = (Root*)  tolua_tousertype(tolua_S,1,0);
  float f_time = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Draw'", NULL);
#endif
  {
   self->Draw(f_time);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetNode of class  Root */
#ifndef TOLUA_DISABLE_tolua_attempt_Root_GetNode00
static int tolua_attempt_Root_GetNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Root",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Root* self = (Root*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNode'", NULL);
#endif
  {
   Node* tolua_ret = (Node*)  self->GetNode();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Node");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetLeve of class  Log */
#ifndef TOLUA_DISABLE_tolua_attempt_Log_SetLeve00
static int tolua_attempt_Log_SetLeve00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Log",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Log* self = (Log*)  tolua_tousertype(tolua_S,1,0);
  LogLeve leve = ((LogLeve) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetLeve'", NULL);
#endif
  {
   self->SetLeve(leve);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetLeve'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLeve of class  Log */
#ifndef TOLUA_DISABLE_tolua_attempt_Log_GetLeve00
static int tolua_attempt_Log_GetLeve00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Log",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Log* self = (Log*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLeve'", NULL);
#endif
  {
   LogLeve tolua_ret = (LogLeve)  self->GetLeve();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLeve'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Error of class  Log */
#ifndef TOLUA_DISABLE_tolua_attempt_Log_Error00
static int tolua_attempt_Log_Error00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Log",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Log* self = (Log*)  tolua_tousertype(tolua_S,1,0);
  const char* str_format = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Error'", NULL);
#endif
  {
   self->Error(str_format);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Error'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Warn of class  Log */
#ifndef TOLUA_DISABLE_tolua_attempt_Log_Warn00
static int tolua_attempt_Log_Warn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Log",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Log* self = (Log*)  tolua_tousertype(tolua_S,1,0);
  const char* str_format = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Warn'", NULL);
#endif
  {
   self->Warn(str_format);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Warn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Info of class  Log */
#ifndef TOLUA_DISABLE_tolua_attempt_Log_Info00
static int tolua_attempt_Log_Info00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Log",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Log* self = (Log*)  tolua_tousertype(tolua_S,1,0);
  const char* str_format = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Info'", NULL);
#endif
  {
   self->Info(str_format);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Info'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Debug of class  Log */
#ifndef TOLUA_DISABLE_tolua_attempt_Log_Debug00
static int tolua_attempt_Log_Debug00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Log",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Log* self = (Log*)  tolua_tousertype(tolua_S,1,0);
  const char* str_format = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Debug'", NULL);
#endif
  {
   self->Debug(str_format);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Debug'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Trace of class  Log */
#ifndef TOLUA_DISABLE_tolua_attempt_Log_Trace00
static int tolua_attempt_Log_Trace00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Log",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Log* self = (Log*)  tolua_tousertype(tolua_S,1,0);
  const char* str_format = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Trace'", NULL);
#endif
  {
   self->Trace(str_format);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Trace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetInstance of class  Log */
#ifndef TOLUA_DISABLE_tolua_attempt_Log_GetInstance00
static int tolua_attempt_Log_GetInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Log",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Log* tolua_ret = (Log*)  Log::GetInstance();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Log");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetInstance of class  Schedule */
#ifndef TOLUA_DISABLE_tolua_attempt_Schedule_GetInstance00
static int tolua_attempt_Schedule_GetInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Schedule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Schedule* tolua_ret = (Schedule*)  Schedule::GetInstance();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Schedule");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UnRegisterForTimeing of class  Schedule */
#ifndef TOLUA_DISABLE_tolua_attempt_Schedule_UnRegisterForTimeing00
static int tolua_attempt_Schedule_UnRegisterForTimeing00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Schedule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Schedule* self = (Schedule*)  tolua_tousertype(tolua_S,1,0);
  int id = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UnRegisterForTimeing'", NULL);
#endif
  {
   self->UnRegisterForTimeing(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UnRegisterForTimeing'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RegisterScriptFunc of class  Schedule */
#ifndef TOLUA_DISABLE_tolua_attempt_Schedule_RegisterScriptFunc00
static int tolua_attempt_Schedule_RegisterScriptFunc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Schedule",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Schedule* self = (Schedule*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
  float fInterval = ((float)  tolua_tonumber(tolua_S,3,0));
  bool bPaused = ((bool)  tolua_toboolean(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RegisterScriptFunc'", NULL);
#endif
  {
   int tolua_ret = (int)  self->RegisterScriptFunc(nHandler,fInterval,bPaused);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RegisterScriptFunc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTimeingPriority of class  Schedule */
#ifndef TOLUA_DISABLE_tolua_attempt_Schedule_SetTimeingPriority00
static int tolua_attempt_Schedule_SetTimeingPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Schedule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Schedule* self = (Schedule*)  tolua_tousertype(tolua_S,1,0);
  int Timeing_id = ((int)  tolua_tonumber(tolua_S,2,0));
  int priority = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTimeingPriority'", NULL);
#endif
  {
   self->SetTimeingPriority(Timeing_id,priority);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTimeingPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTimeingPriority of class  Schedule */
#ifndef TOLUA_DISABLE_tolua_attempt_Schedule_GetTimeingPriority00
static int tolua_attempt_Schedule_GetTimeingPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Schedule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Schedule* self = (Schedule*)  tolua_tousertype(tolua_S,1,0);
  int Timeing_id = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTimeingPriority'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetTimeingPriority(Timeing_id);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTimeingPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsTargetPause of class  Schedule */
#ifndef TOLUA_DISABLE_tolua_attempt_Schedule_IsTargetPause00
static int tolua_attempt_Schedule_IsTargetPause00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Schedule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Schedule* self = (Schedule*)  tolua_tousertype(tolua_S,1,0);
  int id = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsTargetPause'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsTargetPause(id);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsTargetPause'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PauseTimeing of class  Schedule */
#ifndef TOLUA_DISABLE_tolua_attempt_Schedule_PauseTimeing00
static int tolua_attempt_Schedule_PauseTimeing00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Schedule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Schedule* self = (Schedule*)  tolua_tousertype(tolua_S,1,0);
  int id = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PauseTimeing'", NULL);
#endif
  {
   self->PauseTimeing(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PauseTimeing'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ResumeTimeing of class  Schedule */
#ifndef TOLUA_DISABLE_tolua_attempt_Schedule_ResumeTimeing00
static int tolua_attempt_Schedule_ResumeTimeing00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Schedule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Schedule* self = (Schedule*)  tolua_tousertype(tolua_S,1,0);
  int id = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ResumeTimeing'", NULL);
#endif
  {
   self->ResumeTimeing(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ResumeTimeing'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PauseAllTarget of class  Schedule */
#ifndef TOLUA_DISABLE_tolua_attempt_Schedule_PauseAllTarget00
static int tolua_attempt_Schedule_PauseAllTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Schedule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Schedule* self = (Schedule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PauseAllTarget'", NULL);
#endif
  {
   self->PauseAllTarget();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PauseAllTarget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ResumeAllTarget of class  Schedule */
#ifndef TOLUA_DISABLE_tolua_attempt_Schedule_ResumeAllTarget00
static int tolua_attempt_Schedule_ResumeAllTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Schedule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Schedule* self = (Schedule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ResumeAllTarget'", NULL);
#endif
  {
   self->ResumeAllTarget();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ResumeAllTarget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTimeScale of class  Schedule */
#ifndef TOLUA_DISABLE_tolua_attempt_Schedule_SetTimeScale00
static int tolua_attempt_Schedule_SetTimeScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Schedule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Schedule* self = (Schedule*)  tolua_tousertype(tolua_S,1,0);
  float time_scale = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTimeScale'", NULL);
#endif
  {
   self->SetTimeScale(time_scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTimeScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTimeScale of class  Schedule */
#ifndef TOLUA_DISABLE_tolua_attempt_Schedule_GetTimeScale00
static int tolua_attempt_Schedule_GetTimeScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Schedule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Schedule* self = (Schedule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTimeScale'", NULL);
#endif
  {
   float tolua_ret = (float)  self->GetTimeScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTimeScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Update of class  Schedule */
#ifndef TOLUA_DISABLE_tolua_attempt_Schedule_Update00
static int tolua_attempt_Schedule_Update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Schedule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Schedule* self = (Schedule*)  tolua_tousertype(tolua_S,1,0);
  float dt = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Update'", NULL);
#endif
  {
   self->Update(dt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Schedule */
#ifndef TOLUA_DISABLE_tolua_attempt_Schedule_delete00
static int tolua_attempt_Schedule_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Schedule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Schedule* self = (Schedule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  Message */
#ifndef TOLUA_DISABLE_tolua_attempt_Message_Create00
static int tolua_attempt_Message_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Message",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Message* tolua_ret = (Message*)  Message::Create();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Message");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  Message */
#ifndef TOLUA_DISABLE_tolua_attempt_Message_Create01
static int tolua_attempt_Message_Create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Message",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int type = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   Message* tolua_ret = (Message*)  Message::Create(type);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Message");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_Message_Create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type_ID of class  Message */
#ifndef TOLUA_DISABLE_tolua_get_Message_type_ID
static int tolua_get_Message_type_ID(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type_ID'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type_ID);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type_ID of class  Message */
#ifndef TOLUA_DISABLE_tolua_set_Message_type_ID
static int tolua_set_Message_type_ID(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type_ID'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type_ID = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: f_timer_ of class  Message */
#ifndef TOLUA_DISABLE_tolua_get_Message_f_timer_
static int tolua_get_Message_f_timer_(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'f_timer_'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->f_timer_);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: f_timer_ of class  Message */
#ifndef TOLUA_DISABLE_tolua_set_Message_f_timer_
static int tolua_set_Message_f_timer_(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'f_timer_'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->f_timer_ = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: b_delivered of class  Message */
#ifndef TOLUA_DISABLE_tolua_get_Message_b_delivered
static int tolua_get_Message_b_delivered(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b_delivered'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->b_delivered);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: b_delivered of class  Message */
#ifndef TOLUA_DISABLE_tolua_set_Message_b_delivered
static int tolua_set_Message_b_delivered(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b_delivered'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->b_delivered = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: priority of class  Message */
#ifndef TOLUA_DISABLE_tolua_get_Message_priority
static int tolua_get_Message_priority(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'priority'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->priority);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: priority of class  Message */
#ifndef TOLUA_DISABLE_tolua_set_Message_priority
static int tolua_set_Message_priority(lua_State* tolua_S)
{
  Message* self = (Message*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'priority'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->priority = ((MessagePriority) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  DataMessage */
#ifndef TOLUA_DISABLE_tolua_attempt_DataMessage_Create00
static int tolua_attempt_DataMessage_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"DataMessage",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int type = ((int)  tolua_tonumber(tolua_S,2,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,3,0));
  {
   DataMessage* tolua_ret = (DataMessage*)  DataMessage::Create(type,data);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"DataMessage");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Init of class  DataMessage */
#ifndef TOLUA_DISABLE_tolua_attempt_DataMessage_Init00
static int tolua_attempt_DataMessage_Init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DataMessage",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DataMessage* self = (DataMessage*)  tolua_tousertype(tolua_S,1,0);
  int type = ((int)  tolua_tonumber(tolua_S,2,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Init(type,data);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: data_storage_ of class  DataMessage */
#ifndef TOLUA_DISABLE_tolua_get_DataMessage_data_storage_
static int tolua_get_DataMessage_data_storage_(lua_State* tolua_S)
{
  DataMessage* self = (DataMessage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data_storage_'",NULL);
#endif
  tolua_pushuserdata(tolua_S,(void*)self->data_storage_);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: data_storage_ of class  DataMessage */
#ifndef TOLUA_DISABLE_tolua_set_DataMessage_data_storage_
static int tolua_set_DataMessage_data_storage_(lua_State* tolua_S)
{
  DataMessage* self = (DataMessage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data_storage_'",NULL);
  if (!tolua_isuserdata(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->data_storage_ = ((void*)  tolua_touserdata(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetInstance of class  MessagePump */
#ifndef TOLUA_DISABLE_tolua_attempt_MessagePump_GetInstance00
static int tolua_attempt_MessagePump_GetInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"MessagePump",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   MessagePump* tolua_ret = (MessagePump*)  MessagePump::GetInstance();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"MessagePump");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  MessagePump */
#ifndef TOLUA_DISABLE_tolua_attempt_MessagePump_delete00
static int tolua_attempt_MessagePump_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MessagePump",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MessagePump* self = (MessagePump*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Update of class  MessagePump */
#ifndef TOLUA_DISABLE_tolua_attempt_MessagePump_Update00
static int tolua_attempt_MessagePump_Update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MessagePump",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MessagePump* self = (MessagePump*)  tolua_tousertype(tolua_S,1,0);
  float dt = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Update'", NULL);
#endif
  {
   self->Update(dt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddMessageToSystem of class  MessagePump */
#ifndef TOLUA_DISABLE_tolua_attempt_MessagePump_AddMessageToSystem00
static int tolua_attempt_MessagePump_AddMessageToSystem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MessagePump",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MessagePump* self = (MessagePump*)  tolua_tousertype(tolua_S,1,0);
  int type = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddMessageToSystem'", NULL);
#endif
  {
   self->AddMessageToSystem(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddMessageToSystem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RegisterScriptFunc of class  MessagePump */
#ifndef TOLUA_DISABLE_tolua_attempt_MessagePump_RegisterScriptFunc00
static int tolua_attempt_MessagePump_RegisterScriptFunc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MessagePump",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !toluafix_isfunction(tolua_S,3,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MessagePump* self = (MessagePump*)  tolua_tousertype(tolua_S,1,0);
  int type = ((int)  tolua_tonumber(tolua_S,2,0));
  LUA_FUNCTION handler = (  toluafix_ref_function(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RegisterScriptFunc'", NULL);
#endif
  {
   int tolua_ret = (int)  self->RegisterScriptFunc(type,handler);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RegisterScriptFunc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UnRegisterForMessage of class  MessagePump */
#ifndef TOLUA_DISABLE_tolua_attempt_MessagePump_UnRegisterForMessage00
static int tolua_attempt_MessagePump_UnRegisterForMessage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MessagePump",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MessagePump* self = (MessagePump*)  tolua_tousertype(tolua_S,1,0);
  int id = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UnRegisterForMessage'", NULL);
#endif
  {
   self->UnRegisterForMessage(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UnRegisterForMessage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SendMessage of class  MessagePump */
#ifndef TOLUA_DISABLE_tolua_attempt_MessagePump_SendMessage00
static int tolua_attempt_MessagePump_SendMessage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MessagePump",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Message",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MessagePump* self = (MessagePump*)  tolua_tousertype(tolua_S,1,0);
  Message* new_message = ((Message*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SendMessage'", NULL);
#endif
  {
   self->SendMessage(new_message);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SendMessage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsTypeInSystem of class  MessagePump */
#ifndef TOLUA_DISABLE_tolua_attempt_MessagePump_IsTypeInSystem00
static int tolua_attempt_MessagePump_IsTypeInSystem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MessagePump",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MessagePump* self = (MessagePump*)  tolua_tousertype(tolua_S,1,0);
  int type = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsTypeInSystem'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsTypeInSystem(type);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsTypeInSystem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetInstance of class  Input */
#ifndef TOLUA_DISABLE_tolua_attempt_Input_GetInstance00
static int tolua_attempt_Input_GetInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Input",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Input* tolua_ret = (Input*)  Input::GetInstance();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Input");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetKeyBoard of class  Input */
#ifndef TOLUA_DISABLE_tolua_attempt_Input_GetKeyBoard00
static int tolua_attempt_Input_GetKeyBoard00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Input",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Input* self = (Input*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetKeyBoard'", NULL);
#endif
  {
   KeyBoard* tolua_ret = (KeyBoard*)  self->GetKeyBoard();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"KeyBoard");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetKeyBoard'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMindControl of class  Input */
#ifndef TOLUA_DISABLE_tolua_attempt_Input_GetMindControl00
static int tolua_attempt_Input_GetMindControl00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Input",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Input* self = (Input*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMindControl'", NULL);
#endif
  {
   MindControl* tolua_ret = (MindControl*)  self->GetMindControl();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"MindControl");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMindControl'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetInputState of class  Input */
#ifndef TOLUA_DISABLE_tolua_attempt_Input_SetInputState00
static int tolua_attempt_Input_SetInputState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Input",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Input* self = (Input*)  tolua_tousertype(tolua_S,1,0);
  InputType type = ((InputType) (int)  tolua_tonumber(tolua_S,2,0));
  bool state = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetInputState'", NULL);
#endif
  {
   self->SetInputState(type,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetInputState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetInputState of class  Input */
#ifndef TOLUA_DISABLE_tolua_attempt_Input_GetInputState00
static int tolua_attempt_Input_GetInputState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Input",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Input* self = (Input*)  tolua_tousertype(tolua_S,1,0);
  InputType type = ((InputType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetInputState'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetInputState(type);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetInputState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Read of class  Input */
#ifndef TOLUA_DISABLE_tolua_attempt_Input_Read00
static int tolua_attempt_Input_Read00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Input",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Input* self = (Input*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Read'", NULL);
#endif
  {
   self->Read();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Read'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  KeyBoard */
#ifndef TOLUA_DISABLE_tolua_attempt_KeyBoard_new00
static int tolua_attempt_KeyBoard_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"KeyBoard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   KeyBoard* tolua_ret = (KeyBoard*)  Mtolua_new((KeyBoard)());
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"KeyBoard");
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

/* method: new_local of class  KeyBoard */
#ifndef TOLUA_DISABLE_tolua_attempt_KeyBoard_new00_local
static int tolua_attempt_KeyBoard_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"KeyBoard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   KeyBoard* tolua_ret = (KeyBoard*)  Mtolua_new((KeyBoard)());
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"KeyBoard");
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

/* method: delete of class  KeyBoard */
#ifndef TOLUA_DISABLE_tolua_attempt_KeyBoard_delete00
static int tolua_attempt_KeyBoard_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"KeyBoard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  KeyBoard* self = (KeyBoard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  KeyBoard */
#ifndef TOLUA_DISABLE_tolua_attempt_KeyBoard_Create00
static int tolua_attempt_KeyBoard_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"KeyBoard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   KeyBoard* tolua_ret = (KeyBoard*)  KeyBoard::Create();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"KeyBoard");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Read of class  KeyBoard */
#ifndef TOLUA_DISABLE_tolua_attempt_KeyBoard_Read00
static int tolua_attempt_KeyBoard_Read00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"KeyBoard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  KeyBoard* self = (KeyBoard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Read'", NULL);
#endif
  {
   int tolua_ret = (int)  self->Read();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Read'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetKeyState of class  KeyBoard */
#ifndef TOLUA_DISABLE_tolua_attempt_KeyBoard_GetKeyState00
static int tolua_attempt_KeyBoard_GetKeyState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"KeyBoard",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  KeyBoard* self = (KeyBoard*)  tolua_tousertype(tolua_S,1,0);
  KeySymbol key = ((KeySymbol) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetKeyState'", NULL);
#endif
  {
   byte tolua_ret = (byte)  self->GetKeyState(key);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((byte)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"byte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(byte));
     tolua_pushusertype(tolua_S,tolua_obj,"byte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetKeyState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: KeyDown of class  KeyBoard */
#ifndef TOLUA_DISABLE_tolua_attempt_KeyBoard_KeyDown00
static int tolua_attempt_KeyBoard_KeyDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"KeyBoard",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  KeyBoard* self = (KeyBoard*)  tolua_tousertype(tolua_S,1,0);
  KeySymbol key = ((KeySymbol) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'KeyDown'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->KeyDown(key);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'KeyDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: KeyAction of class  KeyBoard */
#ifndef TOLUA_DISABLE_tolua_attempt_KeyBoard_KeyAction00
static int tolua_attempt_KeyBoard_KeyAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"KeyBoard",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  KeyBoard* self = (KeyBoard*)  tolua_tousertype(tolua_S,1,0);
  KeySymbol key = ((KeySymbol) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'KeyAction'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->KeyAction(key);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'KeyAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetKeyStateArray of class  KeyBoard */
#ifndef TOLUA_DISABLE_tolua_attempt_KeyBoard_GetKeyStateArray00
static int tolua_attempt_KeyBoard_GetKeyStateArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"KeyBoard",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  KeyBoard* self = (KeyBoard*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetKeyStateArray'", NULL);
#endif
  {
   const byte* tolua_ret = (const byte*)  self->GetKeyStateArray();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const byte");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetKeyStateArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  MindControl */
#ifndef TOLUA_DISABLE_tolua_attempt_MindControl_delete00
static int tolua_attempt_MindControl_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MindControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MindControl* self = (MindControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  MindControl */
#ifndef TOLUA_DISABLE_tolua_attempt_MindControl_Create00
static int tolua_attempt_MindControl_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"MindControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   MindControl* tolua_ret = (MindControl*)  MindControl::Create();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"MindControl");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Read of class  MindControl */
#ifndef TOLUA_DISABLE_tolua_attempt_MindControl_Read00
static int tolua_attempt_MindControl_Read00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MindControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MindControl* self = (MindControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Read'", NULL);
#endif
  {
   int tolua_ret = (int)  self->Read();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Read'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetData of class  MindControl */
#ifndef TOLUA_DISABLE_tolua_attempt_MindControl_GetData00
static int tolua_attempt_MindControl_GetData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MindControl",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MindControl* self = (MindControl*)  tolua_tousertype(tolua_S,1,0);
  MindControlSymbol data_type = ((MindControlSymbol) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetData'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetData(data_type);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: EnableBlinkDetection of class  MindControl */
#ifndef TOLUA_DISABLE_tolua_attempt_MindControl_EnableBlinkDetection00
static int tolua_attempt_MindControl_EnableBlinkDetection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MindControl",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MindControl* self = (MindControl*)  tolua_tousertype(tolua_S,1,0);
  int enable = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'EnableBlinkDetection'", NULL);
#endif
  {
   self->EnableBlinkDetection(enable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'EnableBlinkDetection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  ShaderProgram */
#ifndef TOLUA_DISABLE_tolua_attempt_ShaderProgram_Create00
static int tolua_attempt_ShaderProgram_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ShaderProgram",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLuint",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GLuint shader = *((GLuint*)  tolua_tousertype(tolua_S,2,0));
  const char* shader_name = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   ShaderProgram* tolua_ret = (ShaderProgram*)  ShaderProgram::Create(shader,shader_name);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ShaderProgram");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Bind of class  ShaderProgram */
#ifndef TOLUA_DISABLE_tolua_attempt_ShaderProgram_Bind00
static int tolua_attempt_ShaderProgram_Bind00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderProgram* self = (ShaderProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Bind'", NULL);
#endif
  {
   int tolua_ret = (int)  self->Bind();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Bind'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetAttribute of class  ShaderProgram */
#ifndef TOLUA_DISABLE_tolua_attempt_ShaderProgram_SetAttribute00
static int tolua_attempt_ShaderProgram_SetAttribute00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderProgram",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderProgram* self = (ShaderProgram*)  tolua_tousertype(tolua_S,1,0);
  AttributeType tolua_var_1 = ((AttributeType) (int)  tolua_tonumber(tolua_S,2,0));
  const char* value_name = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetAttribute'", NULL);
#endif
  {
   self->SetAttribute(tolua_var_1,value_name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetAttribute'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetUniform of class  ShaderProgram */
#ifndef TOLUA_DISABLE_tolua_attempt_ShaderProgram_SetUniform00
static int tolua_attempt_ShaderProgram_SetUniform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderProgram",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderProgram* self = (ShaderProgram*)  tolua_tousertype(tolua_S,1,0);
  UniformType tolua_var_2 = ((UniformType) (int)  tolua_tonumber(tolua_S,2,0));
  const char* value_name = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetUniform'", NULL);
#endif
  {
   self->SetUniform(tolua_var_2,value_name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetUniform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetUniformLocation of class  ShaderProgram */
#ifndef TOLUA_DISABLE_tolua_attempt_ShaderProgram_GetUniformLocation00
static int tolua_attempt_ShaderProgram_GetUniformLocation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderProgram",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderProgram* self = (ShaderProgram*)  tolua_tousertype(tolua_S,1,0);
  UniformType type = ((UniformType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetUniformLocation'", NULL);
#endif
  {
   GLuint tolua_ret = (GLuint)  self->GetUniformLocation(type);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((GLuint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"GLuint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(GLuint));
     tolua_pushusertype(tolua_S,tolua_obj,"GLuint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetUniformLocation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAttributeLocation of class  ShaderProgram */
#ifndef TOLUA_DISABLE_tolua_attempt_ShaderProgram_GetAttributeLocation00
static int tolua_attempt_ShaderProgram_GetAttributeLocation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderProgram",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderProgram* self = (ShaderProgram*)  tolua_tousertype(tolua_S,1,0);
  AttributeType type = ((AttributeType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAttributeLocation'", NULL);
#endif
  {
   GLuint tolua_ret = (GLuint)  self->GetAttributeLocation(type);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((GLuint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"GLuint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(GLuint));
     tolua_pushusertype(tolua_S,tolua_obj,"GLuint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetAttributeLocation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetProgram of class  ShaderProgram */
#ifndef TOLUA_DISABLE_tolua_attempt_ShaderProgram_GetProgram00
static int tolua_attempt_ShaderProgram_GetProgram00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderProgram* self = (ShaderProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetProgram'", NULL);
#endif
  {
   GLuint tolua_ret = (GLuint)  self->GetProgram();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((GLuint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"GLuint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(GLuint));
     tolua_pushusertype(tolua_S,tolua_obj,"GLuint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetProgram'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLightNum of class  ShaderProgram */
#ifndef TOLUA_DISABLE_tolua_attempt_ShaderProgram_GetLightNum00
static int tolua_attempt_ShaderProgram_GetLightNum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderProgram",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderProgram* self = (ShaderProgram*)  tolua_tousertype(tolua_S,1,0);
  LightType type = ((LightType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLightNum'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetLightNum(type);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLightNum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetLightNum of class  ShaderProgram */
#ifndef TOLUA_DISABLE_tolua_attempt_ShaderProgram_SetLightNum00
static int tolua_attempt_ShaderProgram_SetLightNum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderProgram",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderProgram* self = (ShaderProgram*)  tolua_tousertype(tolua_S,1,0);
  LightType type = ((LightType) (int)  tolua_tonumber(tolua_S,2,0));
  int num = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetLightNum'", NULL);
#endif
  {
   self->SetLightNum(type,num);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetLightNum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetShaderName of class  ShaderProgram */
#ifndef TOLUA_DISABLE_tolua_attempt_ShaderProgram_GetShaderName00
static int tolua_attempt_ShaderProgram_GetShaderName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderProgram* self = (ShaderProgram*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetShaderName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->GetShaderName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetShaderName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: DefShader */
#ifndef TOLUA_DISABLE_tolua_get_DefShader
static int tolua_get_DefShader(lua_State* tolua_S)
{
  tolua_pushstring(tolua_S,(const char*)DefShader);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetInstance of class  ShaderProgramCache */
#ifndef TOLUA_DISABLE_tolua_attempt_ShaderProgramCache_GetInstance00
static int tolua_attempt_ShaderProgramCache_GetInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ShaderProgramCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ShaderProgramCache* tolua_ret = (ShaderProgramCache*)  ShaderProgramCache::GetInstance();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ShaderProgramCache");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LoadShaderProgram of class  ShaderProgramCache */
#ifndef TOLUA_DISABLE_tolua_attempt_ShaderProgramCache_LoadShaderProgram00
static int tolua_attempt_ShaderProgramCache_LoadShaderProgram00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderProgramCache",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderProgramCache* self = (ShaderProgramCache*)  tolua_tousertype(tolua_S,1,0);
  char* file_name = ((char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LoadShaderProgram'", NULL);
#endif
  {
   ShaderProgram* tolua_ret = (ShaderProgram*)  self->LoadShaderProgram(file_name);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ShaderProgram");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LoadShaderProgram'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LoadDefineShader of class  ShaderProgramCache */
#ifndef TOLUA_DISABLE_tolua_attempt_ShaderProgramCache_LoadDefineShader00
static int tolua_attempt_ShaderProgramCache_LoadDefineShader00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderProgramCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderProgramCache* self = (ShaderProgramCache*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LoadDefineShader'", NULL);
#endif
  {
   self->LoadDefineShader();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LoadDefineShader'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetShaderForKey of class  ShaderProgramCache */
#ifndef TOLUA_DISABLE_tolua_attempt_ShaderProgramCache_GetShaderForKey00
static int tolua_attempt_ShaderProgramCache_GetShaderForKey00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderProgramCache",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderProgramCache* self = (ShaderProgramCache*)  tolua_tousertype(tolua_S,1,0);
  char* key = ((char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetShaderForKey'", NULL);
#endif
  {
   ShaderProgram* tolua_ret = (ShaderProgram*)  self->GetShaderForKey(key);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ShaderProgram");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetShaderForKey'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddShader of class  ShaderProgramCache */
#ifndef TOLUA_DISABLE_tolua_attempt_ShaderProgramCache_AddShader00
static int tolua_attempt_ShaderProgramCache_AddShader00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderProgramCache",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"ShaderProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderProgramCache* self = (ShaderProgramCache*)  tolua_tousertype(tolua_S,1,0);
  ShaderProgram* shader = ((ShaderProgram*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddShader'", NULL);
#endif
  {
   self->AddShader(shader);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddShader'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  ShaderProgramCache */
#ifndef TOLUA_DISABLE_tolua_attempt_ShaderProgramCache_delete00
static int tolua_attempt_ShaderProgramCache_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ShaderProgramCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ShaderProgramCache* self = (ShaderProgramCache*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CameraClass */
#ifndef TOLUA_DISABLE_tolua_attempt_CameraClass_new00
static int tolua_attempt_CameraClass_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CameraClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CameraClass* tolua_ret = (CameraClass*)  Mtolua_new((CameraClass)());
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CameraClass");
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

/* method: new_local of class  CameraClass */
#ifndef TOLUA_DISABLE_tolua_attempt_CameraClass_new00_local
static int tolua_attempt_CameraClass_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CameraClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CameraClass* tolua_ret = (CameraClass*)  Mtolua_new((CameraClass)());
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CameraClass");
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

/* method: Create of class  CameraClass */
#ifndef TOLUA_DISABLE_tolua_attempt_CameraClass_Create00
static int tolua_attempt_CameraClass_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CameraClass",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"vec4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  vec4 eye = *((vec4*)  tolua_tousertype(tolua_S,2,0));
  vec4 look_at = *((vec4*)  tolua_tousertype(tolua_S,3,0));
  vec4 up = *((vec4*)  tolua_tousertype(tolua_S,4,0));
  {
   CameraClass* tolua_ret = (CameraClass*)  CameraClass::Create(eye,look_at,up);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CameraClass");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Init of class  CameraClass */
#ifndef TOLUA_DISABLE_tolua_attempt_CameraClass_Init00
static int tolua_attempt_CameraClass_Init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CameraClass",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"vec4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CameraClass* self = (CameraClass*)  tolua_tousertype(tolua_S,1,0);
  vec4 eye = *((vec4*)  tolua_tousertype(tolua_S,2,0));
  vec4 look_at = *((vec4*)  tolua_tousertype(tolua_S,3,0));
  vec4 up = *((vec4*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Init(eye,look_at,up);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetOrthographic of class  CameraClass */
#ifndef TOLUA_DISABLE_tolua_attempt_CameraClass_SetOrthographic00
static int tolua_attempt_CameraClass_SetOrthographic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CameraClass",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CameraClass* self = (CameraClass*)  tolua_tousertype(tolua_S,1,0);
  float x_min = ((float)  tolua_tonumber(tolua_S,2,0));
  float x_max = ((float)  tolua_tonumber(tolua_S,3,0));
  float y_min = ((float)  tolua_tonumber(tolua_S,4,0));
  float y_max = ((float)  tolua_tonumber(tolua_S,5,0));
  float z_min = ((float)  tolua_tonumber(tolua_S,6,0));
  float z_max = ((float)  tolua_tonumber(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetOrthographic'", NULL);
#endif
  {
   self->SetOrthographic(x_min,x_max,y_min,y_max,z_min,z_max);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetOrthographic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPrespective of class  CameraClass */
#ifndef TOLUA_DISABLE_tolua_attempt_CameraClass_SetPrespective00
static int tolua_attempt_CameraClass_SetPrespective00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CameraClass",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CameraClass* self = (CameraClass*)  tolua_tousertype(tolua_S,1,0);
  float fov = ((float)  tolua_tonumber(tolua_S,2,0));
  float aspect = ((float)  tolua_tonumber(tolua_S,3,0));
  float f_near = ((float)  tolua_tonumber(tolua_S,4,0));
  float f_far = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPrespective'", NULL);
#endif
  {
   self->SetPrespective(fov,aspect,f_near,f_far);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPrespective'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetViewMatrix of class  CameraClass */
#ifndef TOLUA_DISABLE_tolua_attempt_CameraClass_GetViewMatrix00
static int tolua_attempt_CameraClass_GetViewMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CameraClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CameraClass* self = (CameraClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetViewMatrix'", NULL);
#endif
  {
   mat4 tolua_ret = (mat4)  self->GetViewMatrix();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetViewMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetProjectionMatrix of class  CameraClass */
#ifndef TOLUA_DISABLE_tolua_attempt_CameraClass_GetProjectionMatrix00
static int tolua_attempt_CameraClass_GetProjectionMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CameraClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CameraClass* self = (CameraClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetProjectionMatrix'", NULL);
#endif
  {
   mat4 tolua_ret = (mat4)  self->GetProjectionMatrix();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetProjectionMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPosition of class  CameraClass */
#ifndef TOLUA_DISABLE_tolua_attempt_CameraClass_GetPosition00
static int tolua_attempt_CameraClass_GetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CameraClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CameraClass* self = (CameraClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPosition'", NULL);
#endif
  {
   vec3 tolua_ret = (vec3)  self->GetPosition();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Translational of class  CameraClass */
#ifndef TOLUA_DISABLE_tolua_attempt_CameraClass_Translational00
static int tolua_attempt_CameraClass_Translational00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CameraClass",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CameraClass* self = (CameraClass*)  tolua_tousertype(tolua_S,1,0);
  vec3 direction = *((vec3*)  tolua_tousertype(tolua_S,2,0));
  float distance = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Translational'", NULL);
#endif
  {
   self->Translational(direction,distance);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Translational'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LookAt of class  CameraClass */
#ifndef TOLUA_DISABLE_tolua_attempt_CameraClass_LookAt00
static int tolua_attempt_CameraClass_LookAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CameraClass",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,11,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CameraClass* self = (CameraClass*)  tolua_tousertype(tolua_S,1,0);
  float eye_x = ((float)  tolua_tonumber(tolua_S,2,0));
  float eye_y = ((float)  tolua_tonumber(tolua_S,3,0));
  float eye_z = ((float)  tolua_tonumber(tolua_S,4,0));
  float look_at_x = ((float)  tolua_tonumber(tolua_S,5,0));
  float look_at_y = ((float)  tolua_tonumber(tolua_S,6,0));
  float look_at_z = ((float)  tolua_tonumber(tolua_S,7,0));
  float up_x = ((float)  tolua_tonumber(tolua_S,8,0));
  float up_y = ((float)  tolua_tonumber(tolua_S,9,0));
  float up_z = ((float)  tolua_tonumber(tolua_S,10,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LookAt'", NULL);
#endif
  {
   self->LookAt(eye_x,eye_y,eye_z,look_at_x,look_at_y,look_at_z,up_x,up_y,up_z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LookAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Spin of class  CameraClass */
#ifndef TOLUA_DISABLE_tolua_attempt_CameraClass_Spin00
static int tolua_attempt_CameraClass_Spin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CameraClass",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CameraClass* self = (CameraClass*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
  float radian = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Spin'", NULL);
#endif
  {
   self->Spin(x,y,z,radian);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Spin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Rotate of class  CameraClass */
#ifndef TOLUA_DISABLE_tolua_attempt_CameraClass_Rotate00
static int tolua_attempt_CameraClass_Rotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CameraClass",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CameraClass* self = (CameraClass*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
  float radian = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Rotate'", NULL);
#endif
  {
   self->Rotate(x,y,z,radian);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Rotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: power of class  Light */
#ifndef TOLUA_DISABLE_tolua_get_Light_power
static int tolua_get_Light_power(lua_State* tolua_S)
{
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'power'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->power);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: power of class  Light */
#ifndef TOLUA_DISABLE_tolua_set_Light_power
static int tolua_set_Light_power(lua_State* tolua_S)
{
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'power'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->power = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: attenuation of class  Light */
#ifndef TOLUA_DISABLE_tolua_get_Light_attenuation
static int tolua_get_Light_attenuation(lua_State* tolua_S)
{
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'attenuation'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->attenuation);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: attenuation of class  Light */
#ifndef TOLUA_DISABLE_tolua_set_Light_attenuation
static int tolua_set_Light_attenuation(lua_State* tolua_S)
{
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'attenuation'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->attenuation = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ambient of class  Light */
#ifndef TOLUA_DISABLE_tolua_get_Light_ambient
static int tolua_get_Light_ambient(lua_State* tolua_S)
{
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ambient'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->ambient,"Color4f");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: ambient of class  Light */
#ifndef TOLUA_DISABLE_tolua_set_Light_ambient
static int tolua_set_Light_ambient(lua_State* tolua_S)
{
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ambient'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Color4f",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->ambient = *((Color4f*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: diffuse of class  Light */
#ifndef TOLUA_DISABLE_tolua_get_Light_diffuse
static int tolua_get_Light_diffuse(lua_State* tolua_S)
{
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'diffuse'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->diffuse,"Color4f");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: diffuse of class  Light */
#ifndef TOLUA_DISABLE_tolua_set_Light_diffuse
static int tolua_set_Light_diffuse(lua_State* tolua_S)
{
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'diffuse'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Color4f",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->diffuse = *((Color4f*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: specular of class  Light */
#ifndef TOLUA_DISABLE_tolua_get_Light_specular
static int tolua_get_Light_specular(lua_State* tolua_S)
{
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'specular'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->specular,"Color4f");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: specular of class  Light */
#ifndef TOLUA_DISABLE_tolua_set_Light_specular
static int tolua_set_Light_specular(lua_State* tolua_S)
{
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'specular'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Color4f",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->specular = *((Color4f*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: direction of class  Light */
#ifndef TOLUA_DISABLE_tolua_get_Light_direction
static int tolua_get_Light_direction(lua_State* tolua_S)
{
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'direction'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->direction,"vec3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: direction of class  Light */
#ifndef TOLUA_DISABLE_tolua_set_Light_direction
static int tolua_set_Light_direction(lua_State* tolua_S)
{
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'direction'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec3",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->direction = *((vec3*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: spot_theta of class  Light */
#ifndef TOLUA_DISABLE_tolua_get_Light_spot_theta
static int tolua_get_Light_spot_theta(lua_State* tolua_S)
{
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'spot_theta'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->spot_theta,"GLfloat");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: spot_theta of class  Light */
#ifndef TOLUA_DISABLE_tolua_set_Light_spot_theta
static int tolua_set_Light_spot_theta(lua_State* tolua_S)
{
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'spot_theta'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLfloat",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->spot_theta = *((GLfloat*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: spot_phi of class  Light */
#ifndef TOLUA_DISABLE_tolua_get_Light_spot_phi
static int tolua_get_Light_spot_phi(lua_State* tolua_S)
{
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'spot_phi'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->spot_phi,"GLfloat");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: spot_phi of class  Light */
#ifndef TOLUA_DISABLE_tolua_set_Light_spot_phi
static int tolua_set_Light_spot_phi(lua_State* tolua_S)
{
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'spot_phi'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLfloat",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->spot_phi = *((GLfloat*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  Light */
#ifndef TOLUA_DISABLE_tolua_attempt_Light_Create00
static int tolua_attempt_Light_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightType type = ((LightType) (int)  tolua_tonumber(tolua_S,2,0));
  {
   Light* tolua_ret = (Light*)  Light::Create(type);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Light");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLightType of class  Light */
#ifndef TOLUA_DISABLE_tolua_attempt_Light_GetLightType00
static int tolua_attempt_Light_GetLightType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLightType'", NULL);
#endif
  {
   LightType tolua_ret = (LightType)  self->GetLightType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLightType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Rotate of class  Light */
#ifndef TOLUA_DISABLE_tolua_attempt_Light_Rotate00
static int tolua_attempt_Light_Rotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
  vec3 v3_axle = *((vec3*)  tolua_tousertype(tolua_S,2,0));
  float f_angle = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Rotate'", NULL);
#endif
  {
   self->Rotate(v3_axle,f_angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Rotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RotateX of class  Light */
#ifndef TOLUA_DISABLE_tolua_attempt_Light_RotateX00
static int tolua_attempt_Light_RotateX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
  float f_angle = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RotateX'", NULL);
#endif
  {
   self->RotateX(f_angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RotateX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RotateY of class  Light */
#ifndef TOLUA_DISABLE_tolua_attempt_Light_RotateY00
static int tolua_attempt_Light_RotateY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
  float f_angle = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RotateY'", NULL);
#endif
  {
   self->RotateY(f_angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RotateY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RotateZ of class  Light */
#ifndef TOLUA_DISABLE_tolua_attempt_Light_RotateZ00
static int tolua_attempt_Light_RotateZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
  float f_angle = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RotateZ'", NULL);
#endif
  {
   self->RotateZ(f_angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RotateZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Spin of class  Light */
#ifndef TOLUA_DISABLE_tolua_attempt_Light_Spin00
static int tolua_attempt_Light_Spin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
  vec3 v3_axle = *((vec3*)  tolua_tousertype(tolua_S,2,0));
  float f_angle = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Spin'", NULL);
#endif
  {
   self->Spin(v3_axle,f_angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Spin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SpinX of class  Light */
#ifndef TOLUA_DISABLE_tolua_attempt_Light_SpinX00
static int tolua_attempt_Light_SpinX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
  float f_angle = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SpinX'", NULL);
#endif
  {
   self->SpinX(f_angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SpinX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SpinY of class  Light */
#ifndef TOLUA_DISABLE_tolua_attempt_Light_SpinY00
static int tolua_attempt_Light_SpinY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
  float f_angle = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SpinY'", NULL);
#endif
  {
   self->SpinY(f_angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SpinY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SpinZ of class  Light */
#ifndef TOLUA_DISABLE_tolua_attempt_Light_SpinZ00
static int tolua_attempt_Light_SpinZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
  float f_angle = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SpinZ'", NULL);
#endif
  {
   self->SpinZ(f_angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SpinZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Translation of class  Light */
#ifndef TOLUA_DISABLE_tolua_attempt_Light_Translation00
static int tolua_attempt_Light_Translation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
  vec3 v3_translation = *((vec3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Translation'", NULL);
#endif
  {
   self->Translation(v3_translation);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Translation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TranslationX of class  Light */
#ifndef TOLUA_DISABLE_tolua_attempt_Light_TranslationX00
static int tolua_attempt_Light_TranslationX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
  float f_translation_x = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TranslationX'", NULL);
#endif
  {
   self->TranslationX(f_translation_x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TranslationX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TranslationY of class  Light */
#ifndef TOLUA_DISABLE_tolua_attempt_Light_TranslationY00
static int tolua_attempt_Light_TranslationY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
  float f_translation_y = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TranslationY'", NULL);
#endif
  {
   self->TranslationY(f_translation_y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TranslationY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TranslationZ of class  Light */
#ifndef TOLUA_DISABLE_tolua_attempt_Light_TranslationZ00
static int tolua_attempt_Light_TranslationZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Light",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
  float f_translation_z = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TranslationZ'", NULL);
#endif
  {
   self->TranslationZ(f_translation_z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TranslationZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPosition of class  Light */
#ifndef TOLUA_DISABLE_tolua_attempt_Light_GetPosition00
static int tolua_attempt_Light_GetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Light* self = (Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPosition'", NULL);
#endif
  {
   vec4 tolua_ret = (vec4)  self->GetPosition();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec4));
     tolua_pushusertype(tolua_S,tolua_obj,"vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  LightManage */
#ifndef TOLUA_DISABLE_tolua_attempt_LightManage_Create00
static int tolua_attempt_LightManage_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LightManage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LightManage* tolua_ret = (LightManage*)  LightManage::Create();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LightManage");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddObject of class  LightManage */
#ifndef TOLUA_DISABLE_tolua_attempt_LightManage_AddObject00
static int tolua_attempt_LightManage_AddObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightManage",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightManage* self = (LightManage*)  tolua_tousertype(tolua_S,1,0);
  Light* object = ((Light*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddObject'", NULL);
#endif
  {
   self->AddObject(object);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CloseAll of class  LightManage */
#ifndef TOLUA_DISABLE_tolua_attempt_LightManage_CloseAll00
static int tolua_attempt_LightManage_CloseAll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightManage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightManage* self = (LightManage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CloseAll'", NULL);
#endif
  {
   self->CloseAll();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CloseAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CloseTag of class  LightManage */
#ifndef TOLUA_DISABLE_tolua_attempt_LightManage_CloseTag00
static int tolua_attempt_LightManage_CloseTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightManage",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightManage* self = (LightManage*)  tolua_tousertype(tolua_S,1,0);
  LightType type = ((LightType) (int)  tolua_tonumber(tolua_S,2,0));
  int index = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CloseTag'", NULL);
#endif
  {
   self->CloseTag(type,index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CloseTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OpeningAll of class  LightManage */
#ifndef TOLUA_DISABLE_tolua_attempt_LightManage_OpeningAll00
static int tolua_attempt_LightManage_OpeningAll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightManage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightManage* self = (LightManage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OpeningAll'", NULL);
#endif
  {
   self->OpeningAll();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OpeningAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OpeningTag of class  LightManage */
#ifndef TOLUA_DISABLE_tolua_attempt_LightManage_OpeningTag00
static int tolua_attempt_LightManage_OpeningTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightManage",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightManage* self = (LightManage*)  tolua_tousertype(tolua_S,1,0);
  LightType type = ((LightType) (int)  tolua_tonumber(tolua_S,2,0));
  int index = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OpeningTag'", NULL);
#endif
  {
   self->OpeningTag(type,index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OpeningTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  LightManage */
#ifndef TOLUA_DISABLE_tolua_attempt_LightManage_Clear00
static int tolua_attempt_LightManage_Clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightManage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightManage* self = (LightManage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'", NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DeleteTag of class  LightManage */
#ifndef TOLUA_DISABLE_tolua_attempt_LightManage_DeleteTag00
static int tolua_attempt_LightManage_DeleteTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightManage",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightManage* self = (LightManage*)  tolua_tousertype(tolua_S,1,0);
  LightType type = ((LightType) (int)  tolua_tonumber(tolua_S,2,0));
  int index = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DeleteTag'", NULL);
#endif
  {
   self->DeleteTag(type,index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DeleteTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DeleteTag of class  LightManage */
#ifndef TOLUA_DISABLE_tolua_attempt_LightManage_DeleteTag01
static int tolua_attempt_LightManage_DeleteTag01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightManage",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  LightManage* self = (LightManage*)  tolua_tousertype(tolua_S,1,0);
  Light* object = ((Light*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DeleteTag'", NULL);
#endif
  {
   self->DeleteTag(object);
  }
 }
 return 0;
tolua_lerror:
 return tolua_attempt_LightManage_DeleteTag00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetByIndex of class  LightManage */
#ifndef TOLUA_DISABLE_tolua_attempt_LightManage_GetByIndex00
static int tolua_attempt_LightManage_GetByIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightManage",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightManage* self = (LightManage*)  tolua_tousertype(tolua_S,1,0);
  LightType type = ((LightType) (int)  tolua_tonumber(tolua_S,2,0));
  int index = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetByIndex'", NULL);
#endif
  {
   Light* tolua_ret = (Light*)  self->GetByIndex(type,index);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Light");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetByIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLightNum of class  LightManage */
#ifndef TOLUA_DISABLE_tolua_attempt_LightManage_GetLightNum00
static int tolua_attempt_LightManage_GetLightNum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightManage",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightManage* self = (LightManage*)  tolua_tousertype(tolua_S,1,0);
  LightType type = ((LightType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLightNum'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetLightNum(type);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLightNum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Bind of class  LightManage */
#ifndef TOLUA_DISABLE_tolua_attempt_LightManage_Bind00
static int tolua_attempt_LightManage_Bind00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightManage",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Material",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightManage* self = (LightManage*)  tolua_tousertype(tolua_S,1,0);
  Material* material = ((Material*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Bind'", NULL);
#endif
  {
   self->Bind(material);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Bind'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Init of class  LightManage */
#ifndef TOLUA_DISABLE_tolua_attempt_LightManage_Init00
static int tolua_attempt_LightManage_Init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightManage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightManage* self = (LightManage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ambient of class  Material */
#ifndef TOLUA_DISABLE_tolua_get_Material_ambient
static int tolua_get_Material_ambient(lua_State* tolua_S)
{
  Material* self = (Material*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ambient'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->ambient,"Color4f");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: ambient of class  Material */
#ifndef TOLUA_DISABLE_tolua_set_Material_ambient
static int tolua_set_Material_ambient(lua_State* tolua_S)
{
  Material* self = (Material*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ambient'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Color4f",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->ambient = *((Color4f*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: diffuse of class  Material */
#ifndef TOLUA_DISABLE_tolua_get_Material_diffuse
static int tolua_get_Material_diffuse(lua_State* tolua_S)
{
  Material* self = (Material*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'diffuse'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->diffuse,"Color4f");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: diffuse of class  Material */
#ifndef TOLUA_DISABLE_tolua_set_Material_diffuse
static int tolua_set_Material_diffuse(lua_State* tolua_S)
{
  Material* self = (Material*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'diffuse'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Color4f",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->diffuse = *((Color4f*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: specular of class  Material */
#ifndef TOLUA_DISABLE_tolua_get_Material_specular
static int tolua_get_Material_specular(lua_State* tolua_S)
{
  Material* self = (Material*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'specular'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->specular,"Color4f");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: specular of class  Material */
#ifndef TOLUA_DISABLE_tolua_set_Material_specular
static int tolua_set_Material_specular(lua_State* tolua_S)
{
  Material* self = (Material*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'specular'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Color4f",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->specular = *((Color4f*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: emmissive of class  Material */
#ifndef TOLUA_DISABLE_tolua_get_Material_emmissive
static int tolua_get_Material_emmissive(lua_State* tolua_S)
{
  Material* self = (Material*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'emmissive'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->emmissive,"Color4f");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: emmissive of class  Material */
#ifndef TOLUA_DISABLE_tolua_set_Material_emmissive
static int tolua_set_Material_emmissive(lua_State* tolua_S)
{
  Material* self = (Material*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'emmissive'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Color4f",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->emmissive = *((Color4f*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: shininess of class  Material */
#ifndef TOLUA_DISABLE_tolua_get_Material_shininess
static int tolua_get_Material_shininess(lua_State* tolua_S)
{
  Material* self = (Material*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'shininess'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->shininess);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: shininess of class  Material */
#ifndef TOLUA_DISABLE_tolua_set_Material_shininess
static int tolua_set_Material_shininess(lua_State* tolua_S)
{
  Material* self = (Material*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'shininess'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->shininess = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Material */
#ifndef TOLUA_DISABLE_tolua_attempt_Material_new00
static int tolua_attempt_Material_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Material",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Material* tolua_ret = (Material*)  Mtolua_new((Material)());
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Material");
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

/* method: new_local of class  Material */
#ifndef TOLUA_DISABLE_tolua_attempt_Material_new00_local
static int tolua_attempt_Material_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Material",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Material* tolua_ret = (Material*)  Mtolua_new((Material)());
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Material");
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

/* method: Create of class  Material */
#ifndef TOLUA_DISABLE_tolua_attempt_Material_Create00
static int tolua_attempt_Material_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Material",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Color4f",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Color4f",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Color4f",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"Color4f",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Color4f _ambient = *((Color4f*)  tolua_tousertype(tolua_S,2,0));
  Color4f _diffuse = *((Color4f*)  tolua_tousertype(tolua_S,3,0));
  Color4f _specular = *((Color4f*)  tolua_tousertype(tolua_S,4,0));
  Color4f _emission = *((Color4f*)  tolua_tousertype(tolua_S,5,0));
  float _shininess = ((float)  tolua_tonumber(tolua_S,6,0));
  {
   Material* tolua_ret = (Material*)  Material::Create(_ambient,_diffuse,_specular,_emission,_shininess);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Material");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  Material */
#ifndef TOLUA_DISABLE_tolua_attempt_Material_Create01
static int tolua_attempt_Material_Create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Material",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
   Material* tolua_ret = (Material*)  Material::Create();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Material");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_Material_Create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Init of class  Material */
#ifndef TOLUA_DISABLE_tolua_attempt_Material_Init00
static int tolua_attempt_Material_Init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Material",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Color4f",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Color4f",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Color4f",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"Color4f",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Material* self = (Material*)  tolua_tousertype(tolua_S,1,0);
  Color4f _ambient = *((Color4f*)  tolua_tousertype(tolua_S,2,0));
  Color4f _diffuse = *((Color4f*)  tolua_tousertype(tolua_S,3,0));
  Color4f _specular = *((Color4f*)  tolua_tousertype(tolua_S,4,0));
  Color4f _emission = *((Color4f*)  tolua_tousertype(tolua_S,5,0));
  float _shininess = ((float)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Init(_ambient,_diffuse,_specular,_emission,_shininess);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_new00
static int tolua_attempt_Node_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Node* tolua_ret = (Node*)  Mtolua_new((Node)());
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Node");
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

/* method: new_local of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_new00_local
static int tolua_attempt_Node_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Node* tolua_ret = (Node*)  Mtolua_new((Node)());
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Node");
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

/* method: delete of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_delete00
static int tolua_attempt_Node_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_Create00
static int tolua_attempt_Node_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Node* tolua_ret = (Node*)  Node::Create();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Node");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Init of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_Init00
static int tolua_attempt_Node_Init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddChild of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_AddChild00
static int tolua_attempt_Node_AddChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  Node* object = ((Node*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddChild'", NULL);
#endif
  {
   self->AddChild(object);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DeleteChild of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_DeleteChild00
static int tolua_attempt_Node_DeleteChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  Node* object = ((Node*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DeleteChild'", NULL);
#endif
  {
   self->DeleteChild(object);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DeleteChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Draw of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_Draw00
static int tolua_attempt_Node_Draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_time = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Draw'", NULL);
#endif
  {
   self->Draw(f_time);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetRotate of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetRotate00
static int tolua_attempt_Node_SetRotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  vec3 v3_axle = *((vec3*)  tolua_tousertype(tolua_S,2,0));
  float f_theta = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetRotate'", NULL);
#endif
  {
   self->SetRotate(v3_axle,f_theta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetRotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetRotateX of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetRotateX00
static int tolua_attempt_Node_SetRotateX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_theta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetRotateX'", NULL);
#endif
  {
   self->SetRotateX(f_theta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetRotateX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetRotateY of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetRotateY00
static int tolua_attempt_Node_SetRotateY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_theta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetRotateY'", NULL);
#endif
  {
   self->SetRotateY(f_theta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetRotateY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetRotateZ of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetRotateZ00
static int tolua_attempt_Node_SetRotateZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_theta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetRotateZ'", NULL);
#endif
  {
   self->SetRotateZ(f_theta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetRotateZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetScale of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetScale00
static int tolua_attempt_Node_SetScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_scale = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetScale'", NULL);
#endif
  {
   self->SetScale(f_scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetScaleX of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetScaleX00
static int tolua_attempt_Node_SetScaleX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_scale_x = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetScaleX'", NULL);
#endif
  {
   self->SetScaleX(f_scale_x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetScaleX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetScaleY of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetScaleY00
static int tolua_attempt_Node_SetScaleY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_scale_y = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetScaleY'", NULL);
#endif
  {
   self->SetScaleY(f_scale_y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetScaleY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetScaleZ of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetScaleZ00
static int tolua_attempt_Node_SetScaleZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_scale_z = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetScaleZ'", NULL);
#endif
  {
   self->SetScaleZ(f_scale_z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetScaleZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Scale of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_Scale00
static int tolua_attempt_Node_Scale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_scale = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Scale'", NULL);
#endif
  {
   self->Scale(f_scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Scale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ScaleX of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_ScaleX00
static int tolua_attempt_Node_ScaleX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_scale_x = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ScaleX'", NULL);
#endif
  {
   self->ScaleX(f_scale_x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ScaleX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ScaleY of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_ScaleY00
static int tolua_attempt_Node_ScaleY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_scale_y = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ScaleY'", NULL);
#endif
  {
   self->ScaleY(f_scale_y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ScaleY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ScaleZ of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_ScaleZ00
static int tolua_attempt_Node_ScaleZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_scale_z = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ScaleZ'", NULL);
#endif
  {
   self->ScaleZ(f_scale_z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ScaleZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetScale of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_GetScale00
static int tolua_attempt_Node_GetScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetScale'", NULL);
#endif
  {
   vec3 tolua_ret = (vec3)  self->GetScale();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Spin of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_Spin00
static int tolua_attempt_Node_Spin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  vec3 v3_axle = *((vec3*)  tolua_tousertype(tolua_S,2,0));
  float f_theta = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Spin'", NULL);
#endif
  {
   self->Spin(v3_axle,f_theta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Spin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SpinX of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SpinX00
static int tolua_attempt_Node_SpinX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_theta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SpinX'", NULL);
#endif
  {
   self->SpinX(f_theta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SpinX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SpinY of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SpinY00
static int tolua_attempt_Node_SpinY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_theta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SpinY'", NULL);
#endif
  {
   self->SpinY(f_theta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SpinY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SpinZ of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SpinZ00
static int tolua_attempt_Node_SpinZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_theta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SpinZ'", NULL);
#endif
  {
   self->SpinZ(f_theta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SpinZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTranslation of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetTranslation00
static int tolua_attempt_Node_SetTranslation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  vec3 v3_translation = *((vec3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTranslation'", NULL);
#endif
  {
   self->SetTranslation(v3_translation);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTranslation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTranslationX of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetTranslationX00
static int tolua_attempt_Node_SetTranslationX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_translation_x = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTranslationX'", NULL);
#endif
  {
   self->SetTranslationX(f_translation_x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTranslationX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTranslationY of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetTranslationY00
static int tolua_attempt_Node_SetTranslationY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_translation_y = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTranslationY'", NULL);
#endif
  {
   self->SetTranslationY(f_translation_y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTranslationY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTranslationZ of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetTranslationZ00
static int tolua_attempt_Node_SetTranslationZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_translation_z = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTranslationZ'", NULL);
#endif
  {
   self->SetTranslationZ(f_translation_z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTranslationZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTransform of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_GetTransform00
static int tolua_attempt_Node_GetTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTransform'", NULL);
#endif
  {
   mat4 tolua_ret = (mat4)  self->GetTransform();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWorldTransform of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_GetWorldTransform00
static int tolua_attempt_Node_GetWorldTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWorldTransform'", NULL);
#endif
  {
   mat4 tolua_ret = (mat4)  self->GetWorldTransform();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWorldTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Visit of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_Visit00
static int tolua_attempt_Node_Visit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float f_time = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Visit'", NULL);
#endif
  {
   self->Visit(f_time);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Visit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWeight of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_GetWeight00
static int tolua_attempt_Node_GetWeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWeight'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetWeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetWeight of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetWeight00
static int tolua_attempt_Node_SetWeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  int weight = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetWeight'", NULL);
#endif
  {
   self->SetWeight(weight);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetWeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsVisible of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_IsVisible00
static int tolua_attempt_Node_IsVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsVisible'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsVisible();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetVisible of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetVisible00
static int tolua_attempt_Node_SetVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  bool visible = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetVisible'", NULL);
#endif
  {
   self->SetVisible(visible);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetShaderProgram of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetShaderProgram00
static int tolua_attempt_Node_SetShaderProgram00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"ShaderProgram",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  ShaderProgram* shader = ((ShaderProgram*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetShaderProgram'", NULL);
#endif
  {
   self->SetShaderProgram(shader);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetShaderProgram'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetShaderProgram of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_GetShaderProgram00
static int tolua_attempt_Node_GetShaderProgram00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetShaderProgram'", NULL);
#endif
  {
   ShaderProgram* tolua_ret = (ShaderProgram*)  self->GetShaderProgram();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ShaderProgram");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetShaderProgram'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Update of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_Update00
static int tolua_attempt_Node_Update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float dt = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Update'", NULL);
#endif
  {
   self->Update(dt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ScheduleUpdate of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_ScheduleUpdate00
static int tolua_attempt_Node_ScheduleUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ScheduleUpdate'", NULL);
#endif
  {
   self->ScheduleUpdate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ScheduleUpdate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UnScheduleUpdate of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_UnScheduleUpdate00
static int tolua_attempt_Node_UnScheduleUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UnScheduleUpdate'", NULL);
#endif
  {
   self->UnScheduleUpdate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UnScheduleUpdate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTag of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_GetTag00
static int tolua_attempt_Node_GetTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Node* self = (const Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTag of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetTag00
static int tolua_attempt_Node_SetTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  int nTag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTag'", NULL);
#endif
  {
   self->SetTag(nTag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetUserData of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_GetUserData00
static int tolua_attempt_Node_GetUserData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetUserData'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->GetUserData();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetUserData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetUserData of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetUserData00
static int tolua_attempt_Node_SetUserData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  void* pUserData = ((void*)  tolua_touserdata(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetUserData'", NULL);
#endif
  {
   self->SetUserData(pUserData);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetUserData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPosition of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_GetPosition00
static int tolua_attempt_Node_GetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPosition'", NULL);
#endif
  {
   vec3 tolua_ret = (vec3)  self->GetPosition();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPosition of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetPosition00
static int tolua_attempt_Node_SetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  vec3 coord = *((vec3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPosition'", NULL);
#endif
  {
   self->SetPosition(coord);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPosition of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetPosition01
static int tolua_attempt_Node_SetPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPosition'", NULL);
#endif
  {
   self->SetPosition(x,y,z);
  }
 }
 return 0;
tolua_lerror:
 return tolua_attempt_Node_SetPosition00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: ConvertToWorldSpace of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_ConvertToWorldSpace00
static int tolua_attempt_Node_ConvertToWorldSpace00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  vec3 coord = *((vec3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ConvertToWorldSpace'", NULL);
#endif
  {
   vec3 tolua_ret = (vec3)  self->ConvertToWorldSpace(coord);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ConvertToWorldSpace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAABB of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_GetAABB00
static int tolua_attempt_Node_GetAABB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAABB'", NULL);
#endif
  {
   AABB tolua_ret = (AABB)  self->GetAABB();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((AABB)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"AABB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AABB));
     tolua_pushusertype(tolua_S,tolua_obj,"AABB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetAABB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetAABB of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_SetAABB00
static int tolua_attempt_Node_SetAABB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"AABB",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  AABB box = *((AABB*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetAABB'", NULL);
#endif
  {
   self->SetAABB(box);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetAABB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Collision of class  Node */
#ifndef TOLUA_DISABLE_tolua_attempt_Node_Collision00
static int tolua_attempt_Node_Collision00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Node",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Node* self = (Node*)  tolua_tousertype(tolua_S,1,0);
  Node* b = ((Node*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Collision'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Collision(b);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Collision'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateWithModel of class  Sprite */
#ifndef TOLUA_DISABLE_tolua_attempt_Sprite_CreateWithModel00
static int tolua_attempt_Sprite_CreateWithModel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Model",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Model* model = ((Model*)  tolua_tousertype(tolua_S,2,0));
  {
   Sprite* tolua_ret = (Sprite*)  Sprite::CreateWithModel(model);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Sprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateWithModel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  Sprite */
#ifndef TOLUA_DISABLE_tolua_attempt_Sprite_Create00
static int tolua_attempt_Sprite_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sprite* tolua_ret = (Sprite*)  Sprite::Create();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Sprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Init of class  Sprite */
#ifndef TOLUA_DISABLE_tolua_attempt_Sprite_Init00
static int tolua_attempt_Sprite_Init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Model",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sprite* self = (Sprite*)  tolua_tousertype(tolua_S,1,0);
  Model* model = ((Model*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Init(model);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetModel of class  Sprite */
#ifndef TOLUA_DISABLE_tolua_attempt_Sprite_GetModel00
static int tolua_attempt_Sprite_GetModel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sprite* self = (Sprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetModel'", NULL);
#endif
  {
   Model* tolua_ret = (Model*)  self->GetModel();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Model");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetModel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetGeomentryModel of class  Sprite */
#ifndef TOLUA_DISABLE_tolua_attempt_Sprite_SetGeomentryModel00
static int tolua_attempt_Sprite_SetGeomentryModel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Model",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sprite* self = (Sprite*)  tolua_tousertype(tolua_S,1,0);
  Model* geomety_model = ((Model*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetGeomentryModel'", NULL);
#endif
  {
   self->SetGeomentryModel(geomety_model);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetGeomentryModel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Draw of class  Sprite */
#ifndef TOLUA_DISABLE_tolua_attempt_Sprite_Draw00
static int tolua_attempt_Sprite_Draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sprite* self = (Sprite*)  tolua_tousertype(tolua_S,1,0);
  float f_time = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Draw'", NULL);
#endif
  {
   self->Draw(f_time);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAABB of class  Sprite */
#ifndef TOLUA_DISABLE_tolua_attempt_Sprite_GetAABB00
static int tolua_attempt_Sprite_GetAABB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sprite* self = (Sprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAABB'", NULL);
#endif
  {
   AABB tolua_ret = (AABB)  self->GetAABB();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((AABB)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"AABB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AABB));
     tolua_pushusertype(tolua_S,tolua_obj,"AABB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetAABB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsPause of class  Sprite */
#ifndef TOLUA_DISABLE_tolua_attempt_Sprite_IsPause00
static int tolua_attempt_Sprite_IsPause00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sprite* self = (Sprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsPause'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsPause();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsPause'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Pause of class  Sprite */
#ifndef TOLUA_DISABLE_tolua_attempt_Sprite_Pause00
static int tolua_attempt_Sprite_Pause00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sprite* self = (Sprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Pause'", NULL);
#endif
  {
   self->Pause();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Pause'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Recover of class  Sprite */
#ifndef TOLUA_DISABLE_tolua_attempt_Sprite_Recover00
static int tolua_attempt_Sprite_Recover00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sprite* self = (Sprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Recover'", NULL);
#endif
  {
   self->Recover();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Recover'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPlayTime of class  Sprite */
#ifndef TOLUA_DISABLE_tolua_attempt_Sprite_SetPlayTime00
static int tolua_attempt_Sprite_SetPlayTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sprite* self = (Sprite*)  tolua_tousertype(tolua_S,1,0);
  float time = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPlayTime'", NULL);
#endif
  {
   self->SetPlayTime(time);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPlayTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPlayTime of class  Sprite */
#ifndef TOLUA_DISABLE_tolua_attempt_Sprite_GetPlayTime00
static int tolua_attempt_Sprite_GetPlayTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sprite* self = (Sprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPlayTime'", NULL);
#endif
  {
   float tolua_ret = (float)  self->GetPlayTime();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPlayTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPlayCount of class  Sprite */
#ifndef TOLUA_DISABLE_tolua_attempt_Sprite_SetPlayCount00
static int tolua_attempt_Sprite_SetPlayCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sprite* self = (Sprite*)  tolua_tousertype(tolua_S,1,0);
  int count = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPlayCount'", NULL);
#endif
  {
   self->SetPlayCount(count);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPlayCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPlayCount of class  Sprite */
#ifndef TOLUA_DISABLE_tolua_attempt_Sprite_GetPlayCount00
static int tolua_attempt_Sprite_GetPlayCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sprite* self = (Sprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPlayCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetPlayCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPlayCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Texture2D */
#ifndef TOLUA_DISABLE_tolua_attempt_Texture2D_delete00
static int tolua_attempt_Texture2D_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Texture2D* self = (Texture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTexHandle of class  Texture2D */
#ifndef TOLUA_DISABLE_tolua_attempt_Texture2D_GetTexHandle00
static int tolua_attempt_Texture2D_GetTexHandle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Texture2D* self = (Texture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTexHandle'", NULL);
#endif
  {
   GLuint tolua_ret = (GLuint)  self->GetTexHandle();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((GLuint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"GLuint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(GLuint));
     tolua_pushusertype(tolua_S,tolua_obj,"GLuint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTexHandle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTextureName of class  Texture2D */
#ifndef TOLUA_DISABLE_tolua_attempt_Texture2D_GetTextureName00
static int tolua_attempt_Texture2D_GetTextureName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Texture2D* self = (Texture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTextureName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->GetTextureName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTextureName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetHeight of class  Texture2D */
#ifndef TOLUA_DISABLE_tolua_attempt_Texture2D_GetHeight00
static int tolua_attempt_Texture2D_GetHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Texture2D* self = (Texture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetHeight'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWidth of class  Texture2D */
#ifndef TOLUA_DISABLE_tolua_attempt_Texture2D_GetWidth00
static int tolua_attempt_Texture2D_GetWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Texture2D* self = (Texture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWidth'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateMipmap of class  Texture2D */
#ifndef TOLUA_DISABLE_tolua_attempt_Texture2D_CreateMipmap00
static int tolua_attempt_Texture2D_CreateMipmap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Texture2D* self = (Texture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateMipmap'", NULL);
#endif
  {
   self->CreateMipmap();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateMipmap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsMipmap of class  Texture2D */
#ifndef TOLUA_DISABLE_tolua_attempt_Texture2D_IsMipmap00
static int tolua_attempt_Texture2D_IsMipmap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Texture2D* self = (Texture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsMipmap'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsMipmap();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsMipmap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LoadTexture2D of class  TextureLoader */
#ifndef TOLUA_DISABLE_tolua_attempt_TextureLoader_LoadTexture2D00
static int tolua_attempt_TextureLoader_LoadTexture2D00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextureLoader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextureLoader* self = (TextureLoader*)  tolua_tousertype(tolua_S,1,0);
  char* file_name = ((char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LoadTexture2D'", NULL);
#endif
  {
   Texture2D* tolua_ret = (Texture2D*)  self->LoadTexture2D(file_name);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Texture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LoadTexture2D'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetInstance of class  TextureLoader */
#ifndef TOLUA_DISABLE_tolua_attempt_TextureLoader_GetInstance00
static int tolua_attempt_TextureLoader_GetInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TextureLoader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TextureLoader* tolua_ret = (TextureLoader*)  TextureLoader::GetInstance();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"TextureLoader");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RemoveTexture2D of class  TextureLoader */
#ifndef TOLUA_DISABLE_tolua_attempt_TextureLoader_RemoveTexture2D00
static int tolua_attempt_TextureLoader_RemoveTexture2D00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextureLoader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextureLoader* self = (TextureLoader*)  tolua_tousertype(tolua_S,1,0);
  Texture2D* tag = ((Texture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RemoveTexture2D'", NULL);
#endif
  {
   self->RemoveTexture2D(tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RemoveTexture2D'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateTrilateral of class  GeometryModel */
#ifndef TOLUA_DISABLE_tolua_attempt_GeometryModel_CreateTrilateral00
static int tolua_attempt_GeometryModel_CreateTrilateral00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GeometryModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GeometryModel* tolua_ret = (GeometryModel*)  GeometryModel::CreateTrilateral();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GeometryModel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateTrilateral'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateSquareWithTexture of class  GeometryModel */
#ifndef TOLUA_DISABLE_tolua_attempt_GeometryModel_CreateSquareWithTexture00
static int tolua_attempt_GeometryModel_CreateSquareWithTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GeometryModel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Texture2D* tex = ((Texture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   GeometryModel* tolua_ret = (GeometryModel*)  GeometryModel::CreateSquareWithTexture(tex);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GeometryModel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateSquareWithTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateSquareWithTexture of class  GeometryModel */
#ifndef TOLUA_DISABLE_tolua_attempt_GeometryModel_CreateSquareWithTexture01
static int tolua_attempt_GeometryModel_CreateSquareWithTexture01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GeometryModel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float anchor_x = ((float)  tolua_tonumber(tolua_S,2,0));
  float anchor_y = ((float)  tolua_tonumber(tolua_S,3,0));
  Texture2D* tex = ((Texture2D*)  tolua_tousertype(tolua_S,4,0));
  {
   GeometryModel* tolua_ret = (GeometryModel*)  GeometryModel::CreateSquareWithTexture(anchor_x,anchor_y,tex);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GeometryModel");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_GeometryModel_CreateSquareWithTexture00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateSquare of class  GeometryModel */
#ifndef TOLUA_DISABLE_tolua_attempt_GeometryModel_CreateSquare00
static int tolua_attempt_GeometryModel_CreateSquare00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GeometryModel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float w = ((float)  tolua_tonumber(tolua_S,2,0));
  float h = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   GeometryModel* tolua_ret = (GeometryModel*)  GeometryModel::CreateSquare(w,h);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GeometryModel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateSquare'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateSquare of class  GeometryModel */
#ifndef TOLUA_DISABLE_tolua_attempt_GeometryModel_CreateSquare01
static int tolua_attempt_GeometryModel_CreateSquare01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GeometryModel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float w = ((float)  tolua_tonumber(tolua_S,2,0));
  float h = ((float)  tolua_tonumber(tolua_S,3,0));
  float anchor_x = ((float)  tolua_tonumber(tolua_S,4,0));
  float anchor_y = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   GeometryModel* tolua_ret = (GeometryModel*)  GeometryModel::CreateSquare(w,h,anchor_x,anchor_y);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GeometryModel");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_GeometryModel_CreateSquare00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateSquare of class  GeometryModel */
#ifndef TOLUA_DISABLE_tolua_attempt_GeometryModel_CreateSquare02
static int tolua_attempt_GeometryModel_CreateSquare02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GeometryModel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,6,"Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float w = ((float)  tolua_tonumber(tolua_S,2,0));
  float h = ((float)  tolua_tonumber(tolua_S,3,0));
  float anchor_x = ((float)  tolua_tonumber(tolua_S,4,0));
  float anchor_y = ((float)  tolua_tonumber(tolua_S,5,0));
  Texture2D* tex = ((Texture2D*)  tolua_tousertype(tolua_S,6,0));
  {
   GeometryModel* tolua_ret = (GeometryModel*)  GeometryModel::CreateSquare(w,h,anchor_x,anchor_y,tex);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GeometryModel");
  }
 }
 return 1;
tolua_lerror:
 return tolua_attempt_GeometryModel_CreateSquare01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  ObjModel */
#ifndef TOLUA_DISABLE_tolua_attempt_ObjModel_Create00
static int tolua_attempt_ObjModel_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ObjModel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* file_name = ((char*)  tolua_tostring(tolua_S,2,0));
  {
   ObjModel* tolua_ret = (ObjModel*)  ObjModel::Create(file_name);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ObjModel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Draw of class  ObjModel */
#ifndef TOLUA_DISABLE_tolua_attempt_ObjModel_Draw00
static int tolua_attempt_ObjModel_Draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ObjModel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ObjModel* self = (ObjModel*)  tolua_tousertype(tolua_S,1,0);
  float f_time = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Draw'", NULL);
#endif
  {
   AttemptERR tolua_ret = (AttemptERR)  self->Draw(f_time);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  ObjModel */
#ifndef TOLUA_DISABLE_tolua_attempt_ObjModel_delete00
static int tolua_attempt_ObjModel_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ObjModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ObjModel* self = (ObjModel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: position of class  VertexFormat_XYZW_RGBA */
#ifndef TOLUA_DISABLE_tolua_get_VertexFormat_XYZW_RGBA_position
static int tolua_get_VertexFormat_XYZW_RGBA_position(lua_State* tolua_S)
{
  VertexFormat_XYZW_RGBA* self = (VertexFormat_XYZW_RGBA*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'position'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->position,"vec4");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: position of class  VertexFormat_XYZW_RGBA */
#ifndef TOLUA_DISABLE_tolua_set_VertexFormat_XYZW_RGBA_position
static int tolua_set_VertexFormat_XYZW_RGBA_position(lua_State* tolua_S)
{
  VertexFormat_XYZW_RGBA* self = (VertexFormat_XYZW_RGBA*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'position'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec4",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->position = *((vec4*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: color of class  VertexFormat_XYZW_RGBA */
#ifndef TOLUA_DISABLE_tolua_get_VertexFormat_XYZW_RGBA_color
static int tolua_get_VertexFormat_XYZW_RGBA_color(lua_State* tolua_S)
{
  VertexFormat_XYZW_RGBA* self = (VertexFormat_XYZW_RGBA*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'color'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->color,"Color4f");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: color of class  VertexFormat_XYZW_RGBA */
#ifndef TOLUA_DISABLE_tolua_set_VertexFormat_XYZW_RGBA_color
static int tolua_set_VertexFormat_XYZW_RGBA_color(lua_State* tolua_S)
{
  VertexFormat_XYZW_RGBA* self = (VertexFormat_XYZW_RGBA*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'color'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Color4f",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->color = *((Color4f*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: FVF_XYZW_RGBA */
#ifndef TOLUA_DISABLE_tolua_get_FVF_XYZW_RGBA
static int tolua_get_FVF_XYZW_RGBA(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)FVF_XYZW_RGBA);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: position of class  VertexFormat_XYZ_TEX */
#ifndef TOLUA_DISABLE_tolua_get_VertexFormat_XYZ_TEX_position
static int tolua_get_VertexFormat_XYZ_TEX_position(lua_State* tolua_S)
{
  VertexFormat_XYZ_TEX* self = (VertexFormat_XYZ_TEX*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'position'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->position,"vec3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: position of class  VertexFormat_XYZ_TEX */
#ifndef TOLUA_DISABLE_tolua_set_VertexFormat_XYZ_TEX_position
static int tolua_set_VertexFormat_XYZ_TEX_position(lua_State* tolua_S)
{
  VertexFormat_XYZ_TEX* self = (VertexFormat_XYZ_TEX*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'position'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec3",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->position = *((vec3*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tex_coord of class  VertexFormat_XYZ_TEX */
#ifndef TOLUA_DISABLE_tolua_get_VertexFormat_XYZ_TEX_tex_coord
static int tolua_get_VertexFormat_XYZ_TEX_tex_coord(lua_State* tolua_S)
{
  VertexFormat_XYZ_TEX* self = (VertexFormat_XYZ_TEX*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tex_coord'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->tex_coord,"vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tex_coord of class  VertexFormat_XYZ_TEX */
#ifndef TOLUA_DISABLE_tolua_set_VertexFormat_XYZ_TEX_tex_coord
static int tolua_set_VertexFormat_XYZ_TEX_tex_coord(lua_State* tolua_S)
{
  VertexFormat_XYZ_TEX* self = (VertexFormat_XYZ_TEX*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tex_coord'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec2",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tex_coord = *((vec2*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: FVF_XYZ_TEX */
#ifndef TOLUA_DISABLE_tolua_get_FVF_XYZ_TEX
static int tolua_get_FVF_XYZ_TEX(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)FVF_XYZ_TEX);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: position of class  VertexFormat_XYZ_NORMAL_TEX */
#ifndef TOLUA_DISABLE_tolua_get_VertexFormat_XYZ_NORMAL_TEX_position
static int tolua_get_VertexFormat_XYZ_NORMAL_TEX_position(lua_State* tolua_S)
{
  VertexFormat_XYZ_NORMAL_TEX* self = (VertexFormat_XYZ_NORMAL_TEX*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'position'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->position,"vec3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: position of class  VertexFormat_XYZ_NORMAL_TEX */
#ifndef TOLUA_DISABLE_tolua_set_VertexFormat_XYZ_NORMAL_TEX_position
static int tolua_set_VertexFormat_XYZ_NORMAL_TEX_position(lua_State* tolua_S)
{
  VertexFormat_XYZ_NORMAL_TEX* self = (VertexFormat_XYZ_NORMAL_TEX*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'position'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec3",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->position = *((vec3*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: normal of class  VertexFormat_XYZ_NORMAL_TEX */
#ifndef TOLUA_DISABLE_tolua_get_VertexFormat_XYZ_NORMAL_TEX_normal
static int tolua_get_VertexFormat_XYZ_NORMAL_TEX_normal(lua_State* tolua_S)
{
  VertexFormat_XYZ_NORMAL_TEX* self = (VertexFormat_XYZ_NORMAL_TEX*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'normal'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->normal,"vec3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: normal of class  VertexFormat_XYZ_NORMAL_TEX */
#ifndef TOLUA_DISABLE_tolua_set_VertexFormat_XYZ_NORMAL_TEX_normal
static int tolua_set_VertexFormat_XYZ_NORMAL_TEX_normal(lua_State* tolua_S)
{
  VertexFormat_XYZ_NORMAL_TEX* self = (VertexFormat_XYZ_NORMAL_TEX*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'normal'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec3",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->normal = *((vec3*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tex_coord of class  VertexFormat_XYZ_NORMAL_TEX */
#ifndef TOLUA_DISABLE_tolua_get_VertexFormat_XYZ_NORMAL_TEX_tex_coord
static int tolua_get_VertexFormat_XYZ_NORMAL_TEX_tex_coord(lua_State* tolua_S)
{
  VertexFormat_XYZ_NORMAL_TEX* self = (VertexFormat_XYZ_NORMAL_TEX*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tex_coord'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->tex_coord,"vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tex_coord of class  VertexFormat_XYZ_NORMAL_TEX */
#ifndef TOLUA_DISABLE_tolua_set_VertexFormat_XYZ_NORMAL_TEX_tex_coord
static int tolua_set_VertexFormat_XYZ_NORMAL_TEX_tex_coord(lua_State* tolua_S)
{
  VertexFormat_XYZ_NORMAL_TEX* self = (VertexFormat_XYZ_NORMAL_TEX*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tex_coord'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vec2",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tex_coord = *((vec2*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: FVF_XYZ_NORMAL_TEX */
#ifndef TOLUA_DISABLE_tolua_get_FVF_XYZ_NORMAL_TEX
static int tolua_get_FVF_XYZ_NORMAL_TEX(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)FVF_XYZ_NORMAL_TEX);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Model */
#ifndef TOLUA_DISABLE_tolua_attempt_Model_delete00
static int tolua_attempt_Model_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Model",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Model* self = (Model*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  Model */
#ifndef TOLUA_DISABLE_tolua_attempt_Model_Create00
static int tolua_attempt_Model_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Model",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Model* tolua_ret = (Model*)  Model::Create();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Model");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetVertexFomatSize of class  Model */
#ifndef TOLUA_DISABLE_tolua_attempt_Model_GetVertexFomatSize00
static int tolua_attempt_Model_GetVertexFomatSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Model",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   int fomat = ((  int)  tolua_tonumber(tolua_S,2,0));
  {
   int tolua_ret = (int)  Model::GetVertexFomatSize(fomat);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetVertexFomatSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetVertexData of class  Model */
#ifndef TOLUA_DISABLE_tolua_attempt_Model_SetVertexData00
static int tolua_attempt_Model_SetVertexData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Model",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Model* self = (Model*)  tolua_tousertype(tolua_S,1,0);
  void* data = ((void*)  tolua_touserdata(tolua_S,2,0));
  int data_size = ((int)  tolua_tonumber(tolua_S,3,0));
  int count = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetVertexData'", NULL);
#endif
  {
   self->SetVertexData(data,data_size,count);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetVertexData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetVertexFomat of class  Model */
#ifndef TOLUA_DISABLE_tolua_attempt_Model_SetVertexFomat00
static int tolua_attempt_Model_SetVertexFomat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Model",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Model* self = (Model*)  tolua_tousertype(tolua_S,1,0);
   int vertex_fomat = ((  int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetVertexFomat'", NULL);
#endif
  {
   self->SetVertexFomat(vertex_fomat);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetVertexFomat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetVertexFomat of class  Model */
#ifndef TOLUA_DISABLE_tolua_attempt_Model_GetVertexFomat00
static int tolua_attempt_Model_GetVertexFomat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Model",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Model* self = (Model*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetVertexFomat'", NULL);
#endif
  {
    int tolua_ret = (  int)  self->GetVertexFomat();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetVertexFomat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTexture of class  Model */
#ifndef TOLUA_DISABLE_tolua_attempt_Model_SetTexture00
static int tolua_attempt_Model_SetTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Model",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Model* self = (Model*)  tolua_tousertype(tolua_S,1,0);
  Texture2D* tex = ((Texture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTexture'", NULL);
#endif
  {
   int tolua_ret = (int)  self->SetTexture(tex);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTexture of class  Model */
#ifndef TOLUA_DISABLE_tolua_attempt_Model_GetTexture00
static int tolua_attempt_Model_GetTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Model",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Model* self = (Model*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTexture'", NULL);
#endif
  {
   Texture2D* tolua_ret = (Texture2D*)  self->GetTexture();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Texture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMaterial of class  Model */
#ifndef TOLUA_DISABLE_tolua_attempt_Model_SetMaterial00
static int tolua_attempt_Model_SetMaterial00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Model",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Material",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Model* self = (Model*)  tolua_tousertype(tolua_S,1,0);
  Material* material = ((Material*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMaterial'", NULL);
#endif
  {
   self->SetMaterial(material);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMaterial'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMaterial of class  Model */
#ifndef TOLUA_DISABLE_tolua_attempt_Model_GetMaterial00
static int tolua_attempt_Model_GetMaterial00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Model",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Model* self = (Model*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMaterial'", NULL);
#endif
  {
   Material* tolua_ret = (Material*)  self->GetMaterial();
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Material");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMaterial'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: BindData of class  Model */
#ifndef TOLUA_DISABLE_tolua_attempt_Model_BindData00
static int tolua_attempt_Model_BindData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Model",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Model* self = (Model*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'BindData'", NULL);
#endif
  {
   AttemptERR tolua_ret = (AttemptERR)  self->BindData();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BindData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Draw of class  Model */
#ifndef TOLUA_DISABLE_tolua_attempt_Model_Draw00
static int tolua_attempt_Model_Draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Model",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Model* self = (Model*)  tolua_tousertype(tolua_S,1,0);
  float f_time = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Draw'", NULL);
#endif
  {
   AttemptERR tolua_ret = (AttemptERR)  self->Draw(f_time);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTimeLong of class  Model */
#ifndef TOLUA_DISABLE_tolua_attempt_Model_GetTimeLong00
static int tolua_attempt_Model_GetTimeLong00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Model",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Model* self = (Model*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTimeLong'", NULL);
#endif
  {
   float tolua_ret = (float)  self->GetTimeLong();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTimeLong'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetIndex of class  Model */
#ifndef TOLUA_DISABLE_tolua_attempt_Model_SetIndex00
static int tolua_attempt_Model_SetIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Model",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Model* self = (Model*)  tolua_tousertype(tolua_S,1,0);
  void* index = ((void*)  tolua_touserdata(tolua_S,2,0));
  int index_count = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetIndex'", NULL);
#endif
  {
   self->SetIndex(index,index_count);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAABB of class  Model */
#ifndef TOLUA_DISABLE_tolua_attempt_Model_GetAABB00
static int tolua_attempt_Model_GetAABB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Model",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Model* self = (Model*)  tolua_tousertype(tolua_S,1,0);
  float f_time = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAABB'", NULL);
#endif
  {
   AABB tolua_ret = (AABB)  self->GetAABB(f_time);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((AABB)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"AABB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AABB));
     tolua_pushusertype(tolua_S,tolua_obj,"AABB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetAABB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetAABB of class  Model */
#ifndef TOLUA_DISABLE_tolua_attempt_Model_SetAABB00
static int tolua_attempt_Model_SetAABB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Model",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"AABB",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Model* self = (Model*)  tolua_tousertype(tolua_S,1,0);
  AABB box = *((AABB*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetAABB'", NULL);
#endif
  {
   self->SetAABB(box);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetAABB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetNowFrame of class  Model */
#ifndef TOLUA_DISABLE_tolua_attempt_Model_GetNowFrame00
static int tolua_attempt_Model_GetNowFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Model",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Model* self = (Model*)  tolua_tousertype(tolua_S,1,0);
  float f_time = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNowFrame'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetNowFrame(f_time);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetNowFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  VDSModel */
#ifndef TOLUA_DISABLE_tolua_attempt_VDSModel_delete00
static int tolua_attempt_VDSModel_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"VDSModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  VDSModel* self = (VDSModel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  VDSModel */
#ifndef TOLUA_DISABLE_tolua_attempt_VDSModel_Create00
static int tolua_attempt_VDSModel_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"VDSModel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* file_name = ((char*)  tolua_tostring(tolua_S,2,0));
  {
   VDSModel* tolua_ret = (VDSModel*)  VDSModel::Create(file_name);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"VDSModel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Update of class  VDSModel */
#ifndef TOLUA_DISABLE_tolua_attempt_VDSModel_Update00
static int tolua_attempt_VDSModel_Update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"VDSModel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  VDSModel* self = (VDSModel*)  tolua_tousertype(tolua_S,1,0);
  float f_delta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Update'", NULL);
#endif
  {
   self->Update(f_delta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Draw of class  VDSModel */
#ifndef TOLUA_DISABLE_tolua_attempt_VDSModel_Draw00
static int tolua_attempt_VDSModel_Draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"VDSModel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  VDSModel* self = (VDSModel*)  tolua_tousertype(tolua_S,1,0);
  float f_time = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Draw'", NULL);
#endif
  {
   AttemptERR tolua_ret = (AttemptERR)  self->Draw(f_time);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetName of class  VDSModel */
#ifndef TOLUA_DISABLE_tolua_attempt_VDSModel_GetName00
static int tolua_attempt_VDSModel_GetName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"VDSModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  VDSModel* self = (VDSModel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->GetName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAABB of class  VDSModel */
#ifndef TOLUA_DISABLE_tolua_attempt_VDSModel_GetAABB00
static int tolua_attempt_VDSModel_GetAABB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"VDSModel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  VDSModel* self = (VDSModel*)  tolua_tousertype(tolua_S,1,0);
  float f_time = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAABB'", NULL);
#endif
  {
   AABB tolua_ret = (AABB)  self->GetAABB(f_time);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((AABB)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"AABB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AABB));
     tolua_pushusertype(tolua_S,tolua_obj,"AABB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetAABB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetNowFrame of class  VDSModel */
#ifndef TOLUA_DISABLE_tolua_attempt_VDSModel_GetNowFrame00
static int tolua_attempt_VDSModel_GetNowFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"VDSModel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  VDSModel* self = (VDSModel*)  tolua_tousertype(tolua_S,1,0);
  float f_time = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNowFrame'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetNowFrame(f_time);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetNowFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Curtains */
#ifndef TOLUA_DISABLE_tolua_attempt_Curtains_new00
static int tolua_attempt_Curtains_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Curtains",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Curtains* tolua_ret = (Curtains*)  Mtolua_new((Curtains)());
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Curtains");
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

/* method: new_local of class  Curtains */
#ifndef TOLUA_DISABLE_tolua_attempt_Curtains_new00_local
static int tolua_attempt_Curtains_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Curtains",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Curtains* tolua_ret = (Curtains*)  Mtolua_new((Curtains)());
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Curtains");
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

/* method: delete of class  Curtains */
#ifndef TOLUA_DISABLE_tolua_attempt_Curtains_delete00
static int tolua_attempt_Curtains_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Curtains",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Curtains* self = (Curtains*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  Curtains */
#ifndef TOLUA_DISABLE_tolua_attempt_Curtains_Create00
static int tolua_attempt_Curtains_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Curtains",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isstring(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  float edge = ((float)  tolua_tonumber(tolua_S,4,0));
  float k = ((float)  tolua_tonumber(tolua_S,5,0));
  float damp = ((float)  tolua_tonumber(tolua_S,6,0));
  const char* file_name = ((const char*)  tolua_tostring(tolua_S,7,0));
  {
   Curtains* tolua_ret = (Curtains*)  Curtains::Create(w,h,edge,k,damp,file_name);
    int nID = (tolua_ret) ? (int)tolua_ret->id : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->lua_id : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Curtains");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Init of class  Curtains */
#ifndef TOLUA_DISABLE_tolua_attempt_Curtains_Init00
static int tolua_attempt_Curtains_Init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Curtains",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isstring(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Curtains* self = (Curtains*)  tolua_tousertype(tolua_S,1,0);
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  float edge = ((float)  tolua_tonumber(tolua_S,4,0));
  float k = ((float)  tolua_tonumber(tolua_S,5,0));
  float damp = ((float)  tolua_tonumber(tolua_S,6,0));
  const char* file_name = ((const char*)  tolua_tostring(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Init(w,h,edge,k,damp,file_name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetEdge of class  Curtains */
#ifndef TOLUA_DISABLE_tolua_attempt_Curtains_SetEdge00
static int tolua_attempt_Curtains_SetEdge00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Curtains",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Curtains* self = (Curtains*)  tolua_tousertype(tolua_S,1,0);
  float edge = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetEdge'", NULL);
#endif
  {
   self->SetEdge(edge);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetEdge'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetK of class  Curtains */
#ifndef TOLUA_DISABLE_tolua_attempt_Curtains_SetK00
static int tolua_attempt_Curtains_SetK00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Curtains",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Curtains* self = (Curtains*)  tolua_tousertype(tolua_S,1,0);
  float k = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetK'", NULL);
#endif
  {
   self->SetK(k);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetK'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetDamp of class  Curtains */
#ifndef TOLUA_DISABLE_tolua_attempt_Curtains_SetDamp00
static int tolua_attempt_Curtains_SetDamp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Curtains",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Curtains* self = (Curtains*)  tolua_tousertype(tolua_S,1,0);
  float damp = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetDamp'", NULL);
#endif
  {
   self->SetDamp(damp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetDamp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getW of class  Curtains */
#ifndef TOLUA_DISABLE_tolua_attempt_Curtains_getW00
static int tolua_attempt_Curtains_getW00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Curtains",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Curtains* self = (Curtains*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getW'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getW();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getW'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getH of class  Curtains */
#ifndef TOLUA_DISABLE_tolua_attempt_Curtains_getH00
static int tolua_attempt_Curtains_getH00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Curtains",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Curtains* self = (Curtains*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getH'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getH();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getH'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEdge of class  Curtains */
#ifndef TOLUA_DISABLE_tolua_attempt_Curtains_getEdge00
static int tolua_attempt_Curtains_getEdge00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Curtains",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Curtains* self = (Curtains*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEdge'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getEdge();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEdge'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getK of class  Curtains */
#ifndef TOLUA_DISABLE_tolua_attempt_Curtains_getK00
static int tolua_attempt_Curtains_getK00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Curtains",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Curtains* self = (Curtains*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getK'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getK();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getK'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDamp of class  Curtains */
#ifndef TOLUA_DISABLE_tolua_attempt_Curtains_getDamp00
static int tolua_attempt_Curtains_getDamp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Curtains",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Curtains* self = (Curtains*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDamp'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getDamp();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDamp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Update of class  Curtains */
#ifndef TOLUA_DISABLE_tolua_attempt_Curtains_Update00
static int tolua_attempt_Curtains_Update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Curtains",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Curtains* self = (Curtains*)  tolua_tousertype(tolua_S,1,0);
  float dt = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Update'", NULL);
#endif
  {
   self->Update(dt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Draw of class  Curtains */
#ifndef TOLUA_DISABLE_tolua_attempt_Curtains_Draw00
static int tolua_attempt_Curtains_Draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Curtains",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Curtains* self = (Curtains*)  tolua_tousertype(tolua_S,1,0);
  float f_delta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Draw'", NULL);
#endif
  {
   self->Draw(f_delta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: moveCurtainsL of class  Curtains */
#ifndef TOLUA_DISABLE_tolua_attempt_Curtains_moveCurtainsL00
static int tolua_attempt_Curtains_moveCurtainsL00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Curtains",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Curtains* self = (Curtains*)  tolua_tousertype(tolua_S,1,0);
  float speed = ((float)  tolua_tonumber(tolua_S,2,0));
  int direction = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'moveCurtainsL'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->moveCurtainsL(speed,direction);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'moveCurtainsL'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: moveCurtainsR of class  Curtains */
#ifndef TOLUA_DISABLE_tolua_attempt_Curtains_moveCurtainsR00
static int tolua_attempt_Curtains_moveCurtainsR00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Curtains",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Curtains* self = (Curtains*)  tolua_tousertype(tolua_S,1,0);
  float speed = ((float)  tolua_tonumber(tolua_S,2,0));
  int direction = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'moveCurtainsR'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->moveCurtainsR(speed,direction);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'moveCurtainsR'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_attempt_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,1);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"AT_OK",AT_OK);
  tolua_constant(tolua_S,"AT_FAIL",AT_FAIL);
  tolua_constant(tolua_S,"AT_FILE_READ_FAIL",AT_FILE_READ_FAIL);
  tolua_constant(tolua_S,"AT_FILE_WRITE",AT_FILE_WRITE);
  tolua_constant(tolua_S,"AT_SHADER_NULL",AT_SHADER_NULL);
  tolua_constant(tolua_S,"AT_VERTEX_ARRAY_ERR",AT_VERTEX_ARRAY_ERR);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Color3b","Color3b","",tolua_collect_Color3b);
  #else
  tolua_cclass(tolua_S,"Color3b","Color3b","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Color3b");
   tolua_variable(tolua_S,"r",tolua_get_Color3b_r,tolua_set_Color3b_r);
   tolua_variable(tolua_S,"g",tolua_get_Color3b_g,tolua_set_Color3b_g);
   tolua_variable(tolua_S,"b",tolua_get_Color3b_b,tolua_set_Color3b_b);
   tolua_function(tolua_S,"new",tolua_attempt_Color3b_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_Color3b_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_Color3b_new00_local);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"C3b",tolua_attempt_C3b00);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Color3f","Color3f","",tolua_collect_Color3f);
  #else
  tolua_cclass(tolua_S,"Color3f","Color3f","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Color3f");
   tolua_variable(tolua_S,"r",tolua_get_Color3f_r,tolua_set_Color3f_r);
   tolua_variable(tolua_S,"g",tolua_get_Color3f_g,tolua_set_Color3f_g);
   tolua_variable(tolua_S,"b",tolua_get_Color3f_b,tolua_set_Color3f_b);
   tolua_function(tolua_S,"new",tolua_attempt_Color3f_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_Color3f_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_Color3f_new00_local);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"C3f",tolua_attempt_C3f00);
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
   tolua_function(tolua_S,"new",tolua_attempt_Color4b_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_Color4b_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_Color4b_new00_local);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"C4b",tolua_attempt_C4b00);
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
   tolua_function(tolua_S,"new",tolua_attempt_Color4f_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_Color4f_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_Color4f_new00_local);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"C4f",tolua_attempt_C4f00);
  tolua_function(tolua_S,"Color3bTo3f",tolua_attempt_Color3bTo3f00);
  tolua_function(tolua_S,"Color3fTo3b",tolua_attempt_Color3fTo3b00);
  tolua_function(tolua_S,"Color4bTo4f",tolua_attempt_Color4bTo4f00);
  tolua_function(tolua_S,"Color4fTo4b",tolua_attempt_Color4fTo4b00);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Size2D","Size2D","",tolua_collect_Size2D);
  #else
  tolua_cclass(tolua_S,"Size2D","Size2D","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Size2D");
   tolua_variable(tolua_S,"width",tolua_get_Size2D_width,tolua_set_Size2D_width);
   tolua_variable(tolua_S,"height",tolua_get_Size2D_height,tolua_set_Size2D_height);
   tolua_function(tolua_S,"new",tolua_attempt_Size2D_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_Size2D_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_Size2D_new00_local);
   tolua_function(tolua_S,"new",tolua_attempt_Size2D_new01);
   tolua_function(tolua_S,"new_local",tolua_attempt_Size2D_new01_local);
   tolua_function(tolua_S,".call",tolua_attempt_Size2D_new01_local);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"vec2","vec2","",tolua_collect_vec2);
  #else
  tolua_cclass(tolua_S,"vec2","vec2","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"vec2");
   tolua_variable(tolua_S,"x",tolua_get_vec2_x,tolua_set_vec2_x);
   tolua_variable(tolua_S,"y",tolua_get_vec2_y,tolua_set_vec2_y);
   tolua_function(tolua_S,"new",tolua_attempt_vec2_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_vec2_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_vec2_new00_local);
   tolua_function(tolua_S,"new",tolua_attempt_vec2_new01);
   tolua_function(tolua_S,"new_local",tolua_attempt_vec2_new01_local);
   tolua_function(tolua_S,".call",tolua_attempt_vec2_new01_local);
   tolua_function(tolua_S,"new",tolua_attempt_vec2_new02);
   tolua_function(tolua_S,"new_local",tolua_attempt_vec2_new02_local);
   tolua_function(tolua_S,".call",tolua_attempt_vec2_new02_local);
   tolua_function(tolua_S,"new",tolua_attempt_vec2_new03);
   tolua_function(tolua_S,"new_local",tolua_attempt_vec2_new03_local);
   tolua_function(tolua_S,".call",tolua_attempt_vec2_new03_local);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"dot",tolua_attempt_dot00);
  tolua_function(tolua_S,"length",tolua_attempt_length00);
  tolua_function(tolua_S,"normalize",tolua_attempt_normalize00);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"vec3","vec3","",tolua_collect_vec3);
  #else
  tolua_cclass(tolua_S,"vec3","vec3","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"vec3");
   tolua_variable(tolua_S,"x",tolua_get_vec3_x,tolua_set_vec3_x);
   tolua_variable(tolua_S,"y",tolua_get_vec3_y,tolua_set_vec3_y);
   tolua_variable(tolua_S,"z",tolua_get_vec3_z,tolua_set_vec3_z);
   tolua_function(tolua_S,"new",tolua_attempt_vec3_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_vec3_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_vec3_new00_local);
   tolua_function(tolua_S,"new",tolua_attempt_vec3_new01);
   tolua_function(tolua_S,"new_local",tolua_attempt_vec3_new01_local);
   tolua_function(tolua_S,".call",tolua_attempt_vec3_new01_local);
   tolua_function(tolua_S,"new",tolua_attempt_vec3_new02);
   tolua_function(tolua_S,"new_local",tolua_attempt_vec3_new02_local);
   tolua_function(tolua_S,".call",tolua_attempt_vec3_new02_local);
   tolua_function(tolua_S,"new",tolua_attempt_vec3_new03);
   tolua_function(tolua_S,"new_local",tolua_attempt_vec3_new03_local);
   tolua_function(tolua_S,".call",tolua_attempt_vec3_new03_local);
   tolua_function(tolua_S,"new",tolua_attempt_vec3_new04);
   tolua_function(tolua_S,"new_local",tolua_attempt_vec3_new04_local);
   tolua_function(tolua_S,".call",tolua_attempt_vec3_new04_local);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"dot",tolua_attempt_dot01);
  tolua_function(tolua_S,"length",tolua_attempt_length01);
  tolua_function(tolua_S,"normalize",tolua_attempt_normalize01);
  tolua_function(tolua_S,"cross",tolua_attempt_cross00);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"vec4","vec4","",tolua_collect_vec4);
  #else
  tolua_cclass(tolua_S,"vec4","vec4","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"vec4");
   tolua_variable(tolua_S,"x",tolua_get_vec4_x,tolua_set_vec4_x);
   tolua_variable(tolua_S,"y",tolua_get_vec4_y,tolua_set_vec4_y);
   tolua_variable(tolua_S,"z",tolua_get_vec4_z,tolua_set_vec4_z);
   tolua_variable(tolua_S,"w",tolua_get_vec4_w,tolua_set_vec4_w);
   tolua_function(tolua_S,"new",tolua_attempt_vec4_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_vec4_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_vec4_new00_local);
   tolua_function(tolua_S,"new",tolua_attempt_vec4_new01);
   tolua_function(tolua_S,"new_local",tolua_attempt_vec4_new01_local);
   tolua_function(tolua_S,".call",tolua_attempt_vec4_new01_local);
   tolua_function(tolua_S,"new",tolua_attempt_vec4_new02);
   tolua_function(tolua_S,"new_local",tolua_attempt_vec4_new02_local);
   tolua_function(tolua_S,".call",tolua_attempt_vec4_new02_local);
   tolua_function(tolua_S,"new",tolua_attempt_vec4_new03);
   tolua_function(tolua_S,"new_local",tolua_attempt_vec4_new03_local);
   tolua_function(tolua_S,".call",tolua_attempt_vec4_new03_local);
   tolua_function(tolua_S,"new",tolua_attempt_vec4_new04);
   tolua_function(tolua_S,"new_local",tolua_attempt_vec4_new04_local);
   tolua_function(tolua_S,".call",tolua_attempt_vec4_new04_local);
   tolua_function(tolua_S,"new",tolua_attempt_vec4_new05);
   tolua_function(tolua_S,"new_local",tolua_attempt_vec4_new05_local);
   tolua_function(tolua_S,".call",tolua_attempt_vec4_new05_local);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"dot",tolua_attempt_dot02);
  tolua_function(tolua_S,"length",tolua_attempt_length02);
  tolua_function(tolua_S,"normalize",tolua_attempt_normalize02);
  tolua_function(tolua_S,"cross",tolua_attempt_cross01);
  tolua_function(tolua_S,"Vec2Make",tolua_attempt_Vec2Make00);
  tolua_function(tolua_S,"Vec3Make",tolua_attempt_Vec3Make00);
  tolua_function(tolua_S,"Vec4Make",tolua_attempt_Vec4Make00);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"mat2","mat2","",tolua_collect_mat2);
  #else
  tolua_cclass(tolua_S,"mat2","mat2","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"mat2");
   tolua_array(tolua_S,"_m",tolua_get_attempt_mat2__m,tolua_set_attempt_mat2__m);
   tolua_function(tolua_S,"new",tolua_attempt_mat2_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_mat2_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_mat2_new00_local);
   tolua_function(tolua_S,"new",tolua_attempt_mat2_new01);
   tolua_function(tolua_S,"new_local",tolua_attempt_mat2_new01_local);
   tolua_function(tolua_S,".call",tolua_attempt_mat2_new01_local);
   tolua_function(tolua_S,"new",tolua_attempt_mat2_new02);
   tolua_function(tolua_S,"new_local",tolua_attempt_mat2_new02_local);
   tolua_function(tolua_S,".call",tolua_attempt_mat2_new02_local);
   tolua_function(tolua_S,"new",tolua_attempt_mat2_new03);
   tolua_function(tolua_S,"new_local",tolua_attempt_mat2_new03_local);
   tolua_function(tolua_S,".call",tolua_attempt_mat2_new03_local);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"MatrixCompMult",tolua_attempt_MatrixCompMult00);
  tolua_function(tolua_S,"Transpose",tolua_attempt_Transpose00);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"mat3","mat3","",tolua_collect_mat3);
  #else
  tolua_cclass(tolua_S,"mat3","mat3","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"mat3");
   tolua_array(tolua_S,"_m",tolua_get_attempt_mat3__m,tolua_set_attempt_mat3__m);
   tolua_function(tolua_S,"new",tolua_attempt_mat3_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_mat3_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_mat3_new00_local);
   tolua_function(tolua_S,"new",tolua_attempt_mat3_new01);
   tolua_function(tolua_S,"new_local",tolua_attempt_mat3_new01_local);
   tolua_function(tolua_S,".call",tolua_attempt_mat3_new01_local);
   tolua_function(tolua_S,"new",tolua_attempt_mat3_new02);
   tolua_function(tolua_S,"new_local",tolua_attempt_mat3_new02_local);
   tolua_function(tolua_S,".call",tolua_attempt_mat3_new02_local);
   tolua_function(tolua_S,"new",tolua_attempt_mat3_new03);
   tolua_function(tolua_S,"new_local",tolua_attempt_mat3_new03_local);
   tolua_function(tolua_S,".call",tolua_attempt_mat3_new03_local);
   tolua_function(tolua_S,"new",tolua_attempt_mat3_new04);
   tolua_function(tolua_S,"new_local",tolua_attempt_mat3_new04_local);
   tolua_function(tolua_S,".call",tolua_attempt_mat3_new04_local);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"MatrixCompMult",tolua_attempt_MatrixCompMult01);
  tolua_function(tolua_S,"Transpose",tolua_attempt_Transpose01);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"mat4","mat4","",tolua_collect_mat4);
  #else
  tolua_cclass(tolua_S,"mat4","mat4","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"mat4");
   tolua_array(tolua_S,"_m",tolua_get_attempt_mat4__m,tolua_set_attempt_mat4__m);
   tolua_function(tolua_S,"new",tolua_attempt_mat4_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_mat4_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_mat4_new00_local);
   tolua_function(tolua_S,"new",tolua_attempt_mat4_new01);
   tolua_function(tolua_S,"new_local",tolua_attempt_mat4_new01_local);
   tolua_function(tolua_S,".call",tolua_attempt_mat4_new01_local);
   tolua_function(tolua_S,"new",tolua_attempt_mat4_new02);
   tolua_function(tolua_S,"new_local",tolua_attempt_mat4_new02_local);
   tolua_function(tolua_S,".call",tolua_attempt_mat4_new02_local);
   tolua_function(tolua_S,"new",tolua_attempt_mat4_new03);
   tolua_function(tolua_S,"new_local",tolua_attempt_mat4_new03_local);
   tolua_function(tolua_S,".call",tolua_attempt_mat4_new03_local);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"MatrixCompMult",tolua_attempt_MatrixCompMult02);
  tolua_function(tolua_S,"Transpose",tolua_attempt_Transpose02);
  tolua_function(tolua_S,"Mvmult",tolua_attempt_Mvmult00);
  tolua_function(tolua_S,"RotateX",tolua_attempt_RotateX00);
  tolua_function(tolua_S,"RotateY",tolua_attempt_RotateY00);
  tolua_function(tolua_S,"RotateZ",tolua_attempt_RotateZ00);
  tolua_function(tolua_S,"Rotate",tolua_attempt_Rotate00);
  tolua_function(tolua_S,"Translate",tolua_attempt_Translate00);
  tolua_function(tolua_S,"Translate",tolua_attempt_Translate01);
  tolua_function(tolua_S,"Translate",tolua_attempt_Translate02);
  tolua_function(tolua_S,"Scale",tolua_attempt_Scale00);
  tolua_function(tolua_S,"Scale",tolua_attempt_Scale01);
  tolua_function(tolua_S,"Ortho",tolua_attempt_Ortho00);
  tolua_function(tolua_S,"Ortho2D",tolua_attempt_Ortho2D00);
  tolua_function(tolua_S,"Frustum",tolua_attempt_Frustum00);
  tolua_function(tolua_S,"Perspective",tolua_attempt_Perspective00);
  tolua_function(tolua_S,"LookAt",tolua_attempt_LookAt00);
  tolua_function(tolua_S,"Normal",tolua_attempt_Normal00);
  tolua_function(tolua_S,"Minus",tolua_attempt_Minus00);
  tolua_function(tolua_S,"Printv",tolua_attempt_Printv00);
  tolua_function(tolua_S,"Printm",tolua_attempt_Printm00);
  tolua_function(tolua_S,"Identity",tolua_attempt_Identity00);
  tolua_cclass(tolua_S,"MatrixStack","MatrixStack","Object",NULL);
  tolua_beginmodule(tolua_S,"MatrixStack");
   tolua_function(tolua_S,"GetSize",tolua_attempt_MatrixStack_GetSize00);
   tolua_function(tolua_S,"Push",tolua_attempt_MatrixStack_Push00);
   tolua_function(tolua_S,"GetTop",tolua_attempt_MatrixStack_GetTop00);
   tolua_function(tolua_S,"Pop",tolua_attempt_MatrixStack_Pop00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"AABB","AABB","",tolua_collect_AABB);
  #else
  tolua_cclass(tolua_S,"AABB","AABB","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"AABB");
   tolua_function(tolua_S,"new",tolua_attempt_AABB_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_AABB_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_AABB_new00_local);
   tolua_function(tolua_S,"delete",tolua_attempt_AABB_delete00);
   tolua_function(tolua_S,"SetMin",tolua_attempt_AABB_SetMin00);
   tolua_function(tolua_S,"GetMin",tolua_attempt_AABB_GetMin00);
   tolua_function(tolua_S,"SetMax",tolua_attempt_AABB_SetMax00);
   tolua_function(tolua_S,"GetMax",tolua_attempt_AABB_GetMax00);
   tolua_function(tolua_S,"Add",tolua_attempt_AABB_Add00);
   tolua_function(tolua_S,"Empty",tolua_attempt_AABB_Empty00);
   tolua_function(tolua_S,"IsContains",tolua_attempt_AABB_IsContains00);
   tolua_function(tolua_S,"GetCenter",tolua_attempt_AABB_GetCenter00);
   tolua_function(tolua_S,"IntersectAABBs",tolua_attempt_AABB_IntersectAABBs00);
   tolua_function(tolua_S,"SetToTransformedBox",tolua_attempt_AABB_SetToTransformedBox00);
   tolua_function(tolua_S,"Reset",tolua_attempt_AABB_Reset00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Object","Object","",tolua_collect_Object);
  #else
  tolua_cclass(tolua_S,"Object","Object","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Object");
   tolua_variable(tolua_S,"id",tolua_get_Object_id,tolua_set_Object_id);
   tolua_function(tolua_S,"Create",tolua_attempt_Object_Create00);
   tolua_function(tolua_S,"Init",tolua_attempt_Object_Init00);
   tolua_function(tolua_S,"AutoRelease",tolua_attempt_Object_AutoRelease00);
   tolua_function(tolua_S,"Retain",tolua_attempt_Object_Retain00);
   tolua_function(tolua_S,"Release",tolua_attempt_Object_Release00);
   tolua_function(tolua_S,"GetCount",tolua_attempt_Object_GetCount00);
   tolua_function(tolua_S,"Copy",tolua_attempt_Object_Copy00);
   tolua_function(tolua_S,"Update",tolua_attempt_Object_Update00);
   tolua_function(tolua_S,"new",tolua_attempt_Object_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_Object_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_Object_new00_local);
   tolua_function(tolua_S,"GetID",tolua_attempt_Object_GetID00);
   tolua_function(tolua_S,"delete",tolua_attempt_Object_delete00);
   tolua_function(tolua_S,"GetObjectNumber",tolua_attempt_Object_GetObjectNumber00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Array","Array","Object",tolua_collect_Array);
  #else
  tolua_cclass(tolua_S,"Array","Array","Object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Array");
   tolua_function(tolua_S,"Add",tolua_attempt_Array_Add00);
   tolua_function(tolua_S,"Clear",tolua_attempt_Array_Clear00);
   tolua_function(tolua_S,"Size",tolua_attempt_Array_Size00);
   tolua_function(tolua_S,"At",tolua_attempt_Array_At00);
   tolua_function(tolua_S,"Delete",tolua_attempt_Array_Delete00);
   tolua_function(tolua_S,"Delete",tolua_attempt_Array_Delete01);
   tolua_function(tolua_S,"Create",tolua_attempt_Array_Create00);
   tolua_function(tolua_S,"Init",tolua_attempt_Array_Init00);
   tolua_function(tolua_S,"new",tolua_attempt_Array_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_Array_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_Array_new00_local);
   tolua_function(tolua_S,"delete",tolua_attempt_Array_delete00);
   tolua_function(tolua_S,"IsInArray",tolua_attempt_Array_IsInArray00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"AutoReleasePool","AutoReleasePool","Object",tolua_collect_AutoReleasePool);
  #else
  tolua_cclass(tolua_S,"AutoReleasePool","AutoReleasePool","Object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"AutoReleasePool");
   tolua_function(tolua_S,"Add",tolua_attempt_AutoReleasePool_Add00);
   tolua_function(tolua_S,"Remove",tolua_attempt_AutoReleasePool_Remove00);
   tolua_function(tolua_S,"Clear",tolua_attempt_AutoReleasePool_Clear00);
   tolua_function(tolua_S,"Delete",tolua_attempt_AutoReleasePool_Delete00);
   tolua_function(tolua_S,"Create",tolua_attempt_AutoReleasePool_Create00);
   tolua_function(tolua_S,"Init",tolua_attempt_AutoReleasePool_Init00);
   tolua_function(tolua_S,"new",tolua_attempt_AutoReleasePool_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_AutoReleasePool_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_AutoReleasePool_new00_local);
   tolua_function(tolua_S,"delete",tolua_attempt_AutoReleasePool_delete00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"GLState","GLState","Object",tolua_collect_GLState);
  #else
  tolua_cclass(tolua_S,"GLState","GLState","Object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"GLState");
   tolua_function(tolua_S,"GetInstance",tolua_attempt_GLState_GetInstance00);
   tolua_function(tolua_S,"Init",tolua_attempt_GLState_Init00);
   tolua_function(tolua_S,"delete",tolua_attempt_GLState_delete00);
   tolua_function(tolua_S,"SetGLWinView",tolua_attempt_GLState_SetGLWinView00);
   tolua_function(tolua_S,"SetWinName",tolua_attempt_GLState_SetWinName00);
   tolua_function(tolua_S,"GetViewSize",tolua_attempt_GLState_GetViewSize00);
   tolua_function(tolua_S,"SetViewSize",tolua_attempt_GLState_SetViewSize00);
   tolua_function(tolua_S,"ShowOpenGLInfo",tolua_attempt_GLState_ShowOpenGLInfo00);
   tolua_function(tolua_S,"GetLightManage",tolua_attempt_GLState_GetLightManage00);
   tolua_function(tolua_S,"GetProjectionStack",tolua_attempt_GLState_GetProjectionStack00);
   tolua_function(tolua_S,"GetModelViewStack",tolua_attempt_GLState_GetModelViewStack00);
   tolua_function(tolua_S,"PushShaderProgram",tolua_attempt_GLState_PushShaderProgram00);
   tolua_function(tolua_S,"PopShaderProgram",tolua_attempt_GLState_PopShaderProgram00);
   tolua_function(tolua_S,"GetShaderProgram",tolua_attempt_GLState_GetShaderProgram00);
   tolua_function(tolua_S,"PushCamera",tolua_attempt_GLState_PushCamera00);
   tolua_function(tolua_S,"PopCamera",tolua_attempt_GLState_PopCamera00);
   tolua_function(tolua_S,"GetCamera",tolua_attempt_GLState_GetCamera00);
   tolua_function(tolua_S,"UpdateUniform",tolua_attempt_GLState_UpdateUniform00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ResourceManager","ResourceManager","Object",NULL);
  tolua_beginmodule(tolua_S,"ResourceManager");
   tolua_function(tolua_S,"GetAuoReleasePool",tolua_attempt_ResourceManager_GetAuoReleasePool00);
   tolua_function(tolua_S,"GetInstance",tolua_attempt_ResourceManager_GetInstance00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Root","Root","Object",NULL);
  tolua_beginmodule(tolua_S,"Root");
   tolua_function(tolua_S,"GetInstance",tolua_attempt_Root_GetInstance00);
   tolua_function(tolua_S,"PushNode",tolua_attempt_Root_PushNode00);
   tolua_function(tolua_S,"PopNode",tolua_attempt_Root_PopNode00);
   tolua_function(tolua_S,"SetNode",tolua_attempt_Root_SetNode00);
   tolua_function(tolua_S,"Draw",tolua_attempt_Root_Draw00);
   tolua_function(tolua_S,"GetNode",tolua_attempt_Root_GetNode00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"LOG_OFF",LOG_OFF);
  tolua_constant(tolua_S,"LOG_ERROR",LOG_ERROR);
  tolua_constant(tolua_S,"LOG_WARN",LOG_WARN);
  tolua_constant(tolua_S,"LOG_INFO",LOG_INFO);
  tolua_constant(tolua_S,"LOG_DEBUG",LOG_DEBUG);
  tolua_constant(tolua_S,"LOG_TRACE",LOG_TRACE);
  tolua_constant(tolua_S,"LOG_MAX",LOG_MAX);
  tolua_cclass(tolua_S,"Log","Log","",NULL);
  tolua_beginmodule(tolua_S,"Log");
   tolua_function(tolua_S,"SetLeve",tolua_attempt_Log_SetLeve00);
   tolua_function(tolua_S,"GetLeve",tolua_attempt_Log_GetLeve00);
   tolua_function(tolua_S,"Error",tolua_attempt_Log_Error00);
   tolua_function(tolua_S,"Warn",tolua_attempt_Log_Warn00);
   tolua_function(tolua_S,"Info",tolua_attempt_Log_Info00);
   tolua_function(tolua_S,"Debug",tolua_attempt_Log_Debug00);
   tolua_function(tolua_S,"Trace",tolua_attempt_Log_Trace00);
   tolua_function(tolua_S,"GetInstance",tolua_attempt_Log_GetInstance00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Schedule","Schedule","Object",tolua_collect_Schedule);
  #else
  tolua_cclass(tolua_S,"Schedule","Schedule","Object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Schedule");
   tolua_function(tolua_S,"GetInstance",tolua_attempt_Schedule_GetInstance00);
   tolua_function(tolua_S,"UnRegisterForTimeing",tolua_attempt_Schedule_UnRegisterForTimeing00);
   tolua_function(tolua_S,"RegisterScriptFunc",tolua_attempt_Schedule_RegisterScriptFunc00);
   tolua_function(tolua_S,"SetTimeingPriority",tolua_attempt_Schedule_SetTimeingPriority00);
   tolua_function(tolua_S,"GetTimeingPriority",tolua_attempt_Schedule_GetTimeingPriority00);
   tolua_function(tolua_S,"IsTargetPause",tolua_attempt_Schedule_IsTargetPause00);
   tolua_function(tolua_S,"PauseTimeing",tolua_attempt_Schedule_PauseTimeing00);
   tolua_function(tolua_S,"ResumeTimeing",tolua_attempt_Schedule_ResumeTimeing00);
   tolua_function(tolua_S,"PauseAllTarget",tolua_attempt_Schedule_PauseAllTarget00);
   tolua_function(tolua_S,"ResumeAllTarget",tolua_attempt_Schedule_ResumeAllTarget00);
   tolua_function(tolua_S,"SetTimeScale",tolua_attempt_Schedule_SetTimeScale00);
   tolua_function(tolua_S,"GetTimeScale",tolua_attempt_Schedule_GetTimeScale00);
   tolua_function(tolua_S,"Update",tolua_attempt_Schedule_Update00);
   tolua_function(tolua_S,"delete",tolua_attempt_Schedule_delete00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"MSG_PRIORITY_NextFrame",MSG_PRIORITY_NextFrame);
  tolua_constant(tolua_S,"MSG_PRIORITY_Immediately",MSG_PRIORITY_Immediately);
  tolua_constant(tolua_S,"MSG_PRIORITY_NUM",MSG_PRIORITY_NUM);
  tolua_cclass(tolua_S,"Message","Message","Object",NULL);
  tolua_beginmodule(tolua_S,"Message");
   tolua_function(tolua_S,"Create",tolua_attempt_Message_Create00);
   tolua_function(tolua_S,"Create",tolua_attempt_Message_Create01);
   tolua_variable(tolua_S,"type_ID",tolua_get_Message_type_ID,tolua_set_Message_type_ID);
   tolua_variable(tolua_S,"f_timer_",tolua_get_Message_f_timer_,tolua_set_Message_f_timer_);
   tolua_variable(tolua_S,"b_delivered",tolua_get_Message_b_delivered,tolua_set_Message_b_delivered);
   tolua_variable(tolua_S,"priority",tolua_get_Message_priority,tolua_set_Message_priority);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"DataMessage","DataMessage","Message",NULL);
  tolua_beginmodule(tolua_S,"DataMessage");
   tolua_function(tolua_S,"Create",tolua_attempt_DataMessage_Create00);
   tolua_function(tolua_S,"Init",tolua_attempt_DataMessage_Init00);
   tolua_variable(tolua_S,"data_storage_",tolua_get_DataMessage_data_storage_,tolua_set_DataMessage_data_storage_);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"MessagePump","MessagePump","Object",tolua_collect_MessagePump);
  #else
  tolua_cclass(tolua_S,"MessagePump","MessagePump","Object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"MessagePump");
   tolua_function(tolua_S,"GetInstance",tolua_attempt_MessagePump_GetInstance00);
   tolua_function(tolua_S,"delete",tolua_attempt_MessagePump_delete00);
   tolua_function(tolua_S,"Update",tolua_attempt_MessagePump_Update00);
   tolua_function(tolua_S,"AddMessageToSystem",tolua_attempt_MessagePump_AddMessageToSystem00);
   tolua_function(tolua_S,"RegisterScriptFunc",tolua_attempt_MessagePump_RegisterScriptFunc00);
   tolua_function(tolua_S,"UnRegisterForMessage",tolua_attempt_MessagePump_UnRegisterForMessage00);
   tolua_function(tolua_S,"SendMessage",tolua_attempt_MessagePump_SendMessage00);
   tolua_function(tolua_S,"IsTypeInSystem",tolua_attempt_MessagePump_IsTypeInSystem00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"INPUT_KeyBoard",INPUT_KeyBoard);
  tolua_constant(tolua_S,"INPUT_MindControl",INPUT_MindControl);
  tolua_constant(tolua_S,"INPUT_NUM",INPUT_NUM);
  tolua_cclass(tolua_S,"Input","Input","Object",NULL);
  tolua_beginmodule(tolua_S,"Input");
   tolua_function(tolua_S,"GetInstance",tolua_attempt_Input_GetInstance00);
   tolua_function(tolua_S,"GetKeyBoard",tolua_attempt_Input_GetKeyBoard00);
   tolua_function(tolua_S,"GetMindControl",tolua_attempt_Input_GetMindControl00);
   tolua_function(tolua_S,"SetInputState",tolua_attempt_Input_SetInputState00);
   tolua_function(tolua_S,"GetInputState",tolua_attempt_Input_GetInputState00);
   tolua_function(tolua_S,"Read",tolua_attempt_Input_Read00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"KEY_BackSpace",KEY_BackSpace);
  tolua_constant(tolua_S,"KEY_Tab",KEY_Tab);
  tolua_constant(tolua_S,"KEY_Clear",KEY_Clear);
  tolua_constant(tolua_S,"KEY_Enter",KEY_Enter);
  tolua_constant(tolua_S,"KEY_Shift",KEY_Shift);
  tolua_constant(tolua_S,"KEY_Control",KEY_Control);
  tolua_constant(tolua_S,"KEY_MENU",KEY_MENU);
  tolua_constant(tolua_S,"KEY_Pause",KEY_Pause);
  tolua_constant(tolua_S,"KEY_Caps_Lock",KEY_Caps_Lock);
  tolua_constant(tolua_S,"KEY_Escape",KEY_Escape);
  tolua_constant(tolua_S,"KEY_Space",KEY_Space);
  tolua_constant(tolua_S,"KEY_Page_Up",KEY_Page_Up);
  tolua_constant(tolua_S,"KEY_Page_Down",KEY_Page_Down);
  tolua_constant(tolua_S,"KEY_End",KEY_End);
  tolua_constant(tolua_S,"KEY_Home",KEY_Home);
  tolua_constant(tolua_S,"KEY_Left",KEY_Left);
  tolua_constant(tolua_S,"KEY_Up",KEY_Up);
  tolua_constant(tolua_S,"KEY_Right",KEY_Right);
  tolua_constant(tolua_S,"KEY_Down",KEY_Down);
  tolua_constant(tolua_S,"KEY_Select",KEY_Select);
  tolua_constant(tolua_S,"KEY_Print",KEY_Print);
  tolua_constant(tolua_S,"KEY_Execute",KEY_Execute);
  tolua_constant(tolua_S,"KEY_Snapshot",KEY_Snapshot);
  tolua_constant(tolua_S,"KEY_Insert",KEY_Insert);
  tolua_constant(tolua_S,"KEY_Delete",KEY_Delete);
  tolua_constant(tolua_S,"KEY_Help",KEY_Help);
  tolua_constant(tolua_S,"KEY_0",KEY_0);
  tolua_constant(tolua_S,"KEY_1",KEY_1);
  tolua_constant(tolua_S,"KEY_2",KEY_2);
  tolua_constant(tolua_S,"KEY_3",KEY_3);
  tolua_constant(tolua_S,"KEY_4",KEY_4);
  tolua_constant(tolua_S,"KEY_5",KEY_5);
  tolua_constant(tolua_S,"KEY_6",KEY_6);
  tolua_constant(tolua_S,"KEY_7",KEY_7);
  tolua_constant(tolua_S,"KEY_8",KEY_8);
  tolua_constant(tolua_S,"KEY_9",KEY_9);
  tolua_constant(tolua_S,"KEY_A",KEY_A);
  tolua_constant(tolua_S,"KEY_B",KEY_B);
  tolua_constant(tolua_S,"KEY_C",KEY_C);
  tolua_constant(tolua_S,"KEY_D",KEY_D);
  tolua_constant(tolua_S,"KEY_E",KEY_E);
  tolua_constant(tolua_S,"KEY_F",KEY_F);
  tolua_constant(tolua_S,"KEY_G",KEY_G);
  tolua_constant(tolua_S,"KEY_H",KEY_H);
  tolua_constant(tolua_S,"KEY_I",KEY_I);
  tolua_constant(tolua_S,"KEY_J",KEY_J);
  tolua_constant(tolua_S,"KEY_K",KEY_K);
  tolua_constant(tolua_S,"KEY_L",KEY_L);
  tolua_constant(tolua_S,"KEY_M",KEY_M);
  tolua_constant(tolua_S,"KEY_N",KEY_N);
  tolua_constant(tolua_S,"KEY_O",KEY_O);
  tolua_constant(tolua_S,"KEY_P",KEY_P);
  tolua_constant(tolua_S,"KEY_Q",KEY_Q);
  tolua_constant(tolua_S,"KEY_R",KEY_R);
  tolua_constant(tolua_S,"KEY_S",KEY_S);
  tolua_constant(tolua_S,"KEY_T",KEY_T);
  tolua_constant(tolua_S,"KEY_U",KEY_U);
  tolua_constant(tolua_S,"KEY_V",KEY_V);
  tolua_constant(tolua_S,"KEY_W",KEY_W);
  tolua_constant(tolua_S,"KEY_X",KEY_X);
  tolua_constant(tolua_S,"KEY_Y",KEY_Y);
  tolua_constant(tolua_S,"KEY_Z",KEY_Z);
  tolua_constant(tolua_S,"KEY_KP_0",KEY_KP_0);
  tolua_constant(tolua_S,"KEY_KP_1",KEY_KP_1);
  tolua_constant(tolua_S,"KEY_KP_2",KEY_KP_2);
  tolua_constant(tolua_S,"KEY_KP_3",KEY_KP_3);
  tolua_constant(tolua_S,"KEY_KP_4",KEY_KP_4);
  tolua_constant(tolua_S,"KEY_KP_5",KEY_KP_5);
  tolua_constant(tolua_S,"KEY_KP_6",KEY_KP_6);
  tolua_constant(tolua_S,"KEY_KP_7",KEY_KP_7);
  tolua_constant(tolua_S,"KEY_KP_8",KEY_KP_8);
  tolua_constant(tolua_S,"KEY_KP_9",KEY_KP_9);
  tolua_constant(tolua_S,"KEY_KP_Multiply",KEY_KP_Multiply);
  tolua_constant(tolua_S,"KEY_KP_Add",KEY_KP_Add);
  tolua_constant(tolua_S,"KEY_KP_Separator",KEY_KP_Separator);
  tolua_constant(tolua_S,"KEY_KP_Subtract",KEY_KP_Subtract);
  tolua_constant(tolua_S,"KEY_KP_Decimal",KEY_KP_Decimal);
  tolua_constant(tolua_S,"KEY_KP_Divide",KEY_KP_Divide);
  tolua_constant(tolua_S,"KEY_F1",KEY_F1);
  tolua_constant(tolua_S,"KEY_F2",KEY_F2);
  tolua_constant(tolua_S,"KEY_F3",KEY_F3);
  tolua_constant(tolua_S,"KEY_F4",KEY_F4);
  tolua_constant(tolua_S,"KEY_F5",KEY_F5);
  tolua_constant(tolua_S,"KEY_F6",KEY_F6);
  tolua_constant(tolua_S,"KEY_F7",KEY_F7);
  tolua_constant(tolua_S,"KEY_F8",KEY_F8);
  tolua_constant(tolua_S,"KEY_F9",KEY_F9);
  tolua_constant(tolua_S,"KEY_F10",KEY_F10);
  tolua_constant(tolua_S,"KEY_F11",KEY_F11);
  tolua_constant(tolua_S,"KEY_F12",KEY_F12);
  tolua_constant(tolua_S,"KEY_F13",KEY_F13);
  tolua_constant(tolua_S,"KEY_F14",KEY_F14);
  tolua_constant(tolua_S,"KEY_F15",KEY_F15);
  tolua_constant(tolua_S,"KEY_F16",KEY_F16);
  tolua_constant(tolua_S,"KEY_F17",KEY_F17);
  tolua_constant(tolua_S,"KEY_F18",KEY_F18);
  tolua_constant(tolua_S,"KEY_F19",KEY_F19);
  tolua_constant(tolua_S,"KEY_F20",KEY_F20);
  tolua_constant(tolua_S,"KEY_F21",KEY_F21);
  tolua_constant(tolua_S,"KEY_F22",KEY_F22);
  tolua_constant(tolua_S,"KEY_F23",KEY_F23);
  tolua_constant(tolua_S,"KEY_F24",KEY_F24);
  tolua_constant(tolua_S,"KEY_Num_Lock",KEY_Num_Lock);
  tolua_constant(tolua_S,"KEY_Scroll_Lock",KEY_Scroll_Lock);
  tolua_constant(tolua_S,"KEY_Shift_L",KEY_Shift_L);
  tolua_constant(tolua_S,"KEY_Shift_R",KEY_Shift_R);
  tolua_constant(tolua_S,"KEY_Control_L",KEY_Control_L);
  tolua_constant(tolua_S,"KEY_Control_R",KEY_Control_R);
  tolua_constant(tolua_S,"KEY_MENU_L",KEY_MENU_L);
  tolua_constant(tolua_S,"KEY_MENU_R",KEY_MENU_R);
  tolua_constant(tolua_S,"KEY_OEM_1",KEY_OEM_1);
  tolua_constant(tolua_S,"KEY_OEM_PLUS",KEY_OEM_PLUS);
  tolua_constant(tolua_S,"KEY_OEM_COMMA",KEY_OEM_COMMA);
  tolua_constant(tolua_S,"KEY_OEM_MINUS",KEY_OEM_MINUS);
  tolua_constant(tolua_S,"KEY_OEM_PERIOD",KEY_OEM_PERIOD);
  tolua_constant(tolua_S,"KEY_OEM_2",KEY_OEM_2);
  tolua_constant(tolua_S,"KEY_OEM_3",KEY_OEM_3);
  tolua_constant(tolua_S,"KeySymbol_NUM",KeySymbol_NUM);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"KeyBoard","KeyBoard","Object",tolua_collect_KeyBoard);
  #else
  tolua_cclass(tolua_S,"KeyBoard","KeyBoard","Object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"KeyBoard");
   tolua_function(tolua_S,"new",tolua_attempt_KeyBoard_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_KeyBoard_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_KeyBoard_new00_local);
   tolua_function(tolua_S,"delete",tolua_attempt_KeyBoard_delete00);
   tolua_function(tolua_S,"Create",tolua_attempt_KeyBoard_Create00);
   tolua_function(tolua_S,"Read",tolua_attempt_KeyBoard_Read00);
   tolua_function(tolua_S,"GetKeyState",tolua_attempt_KeyBoard_GetKeyState00);
   tolua_function(tolua_S,"KeyDown",tolua_attempt_KeyBoard_KeyDown00);
   tolua_function(tolua_S,"KeyAction",tolua_attempt_KeyBoard_KeyAction00);
   tolua_function(tolua_S,"GetKeyStateArray",tolua_attempt_KeyBoard_GetKeyStateArray00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"DATA_POOR_SIGNAL",DATA_POOR_SIGNAL);
  tolua_constant(tolua_S,"DATA_ATTENTION",DATA_ATTENTION);
  tolua_constant(tolua_S,"DATA_MEDITATION",DATA_MEDITATION);
  tolua_constant(tolua_S,"DATA_RAW",DATA_RAW);
  tolua_constant(tolua_S,"DATA_DELTA",DATA_DELTA);
  tolua_constant(tolua_S,"DATA_THETA",DATA_THETA);
  tolua_constant(tolua_S,"DATA_ALPHA1",DATA_ALPHA1);
  tolua_constant(tolua_S,"DATA_ALPHA2",DATA_ALPHA2);
  tolua_constant(tolua_S,"DATA_BETA1",DATA_BETA1);
  tolua_constant(tolua_S,"DATA_BETA2",DATA_BETA2);
  tolua_constant(tolua_S,"DATA_GAMMA1",DATA_GAMMA1);
  tolua_constant(tolua_S,"DATA_GAMMA2",DATA_GAMMA2);
  tolua_constant(tolua_S,"DATA_BLINK_STRENGTH",DATA_BLINK_STRENGTH);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"MindControl","MindControl","Object",tolua_collect_MindControl);
  #else
  tolua_cclass(tolua_S,"MindControl","MindControl","Object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"MindControl");
   tolua_function(tolua_S,"delete",tolua_attempt_MindControl_delete00);
   tolua_function(tolua_S,"Create",tolua_attempt_MindControl_Create00);
   tolua_function(tolua_S,"Read",tolua_attempt_MindControl_Read00);
   tolua_function(tolua_S,"GetData",tolua_attempt_MindControl_GetData00);
   tolua_function(tolua_S,"EnableBlinkDetection",tolua_attempt_MindControl_EnableBlinkDetection00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"Attribute_Position4",Attribute_Position4);
  tolua_constant(tolua_S,"Attribute_Position3",Attribute_Position3);
  tolua_constant(tolua_S,"Attribute_Normal",Attribute_Normal);
  tolua_constant(tolua_S,"Attribute_Color4",Attribute_Color4);
  tolua_constant(tolua_S,"Attribute_TexCoord2",Attribute_TexCoord2);
  tolua_constant(tolua_S,"Attribute_UserDefined",Attribute_UserDefined);
  tolua_constant(tolua_S,"Uniform_Matirx_ModelView",Uniform_Matirx_ModelView);
  tolua_constant(tolua_S,"Uniform_Matrix_Projection",Uniform_Matrix_Projection);
  tolua_constant(tolua_S,"Uniform_Matrix_MVP",Uniform_Matrix_MVP);
  tolua_constant(tolua_S,"Uniform_vec3_Select_Color",Uniform_vec3_Select_Color);
  tolua_constant(tolua_S,"Uniform_Tex",Uniform_Tex);
  tolua_constant(tolua_S,"Uniform_Tex1",Uniform_Tex1);
  tolua_constant(tolua_S,"Uniform_Tex2",Uniform_Tex2);
  tolua_constant(tolua_S,"Uniform_Material_Shininess",Uniform_Material_Shininess);
  tolua_constant(tolua_S,"Uniform_Material_Emission",Uniform_Material_Emission);
  tolua_constant(tolua_S,"Uniform_LightPosition",Uniform_LightPosition);
  tolua_constant(tolua_S,"Uniform_LightPower",Uniform_LightPower);
  tolua_constant(tolua_S,"Uniform_Attenuation",Uniform_Attenuation);
  tolua_constant(tolua_S,"Uniform_AmbientProduct",Uniform_AmbientProduct);
  tolua_constant(tolua_S,"Uniform_DiffuseProduct",Uniform_DiffuseProduct);
  tolua_constant(tolua_S,"Uniform_SpecularProduct",Uniform_SpecularProduct);
  tolua_constant(tolua_S,"Uniform_LightDirection",Uniform_LightDirection);
  tolua_constant(tolua_S,"Uniform_SpotTheta",Uniform_SpotTheta);
  tolua_constant(tolua_S,"Uniform_SpotPhi",Uniform_SpotPhi);
  tolua_constant(tolua_S,"Uniform_UserDefined",Uniform_UserDefined);
  tolua_cclass(tolua_S,"ShaderProgram","ShaderProgram","Object",NULL);
  tolua_beginmodule(tolua_S,"ShaderProgram");
   tolua_function(tolua_S,"Create",tolua_attempt_ShaderProgram_Create00);
   tolua_function(tolua_S,"Bind",tolua_attempt_ShaderProgram_Bind00);
   tolua_function(tolua_S,"SetAttribute",tolua_attempt_ShaderProgram_SetAttribute00);
   tolua_function(tolua_S,"SetUniform",tolua_attempt_ShaderProgram_SetUniform00);
   tolua_function(tolua_S,"GetUniformLocation",tolua_attempt_ShaderProgram_GetUniformLocation00);
   tolua_function(tolua_S,"GetAttributeLocation",tolua_attempt_ShaderProgram_GetAttributeLocation00);
   tolua_function(tolua_S,"GetProgram",tolua_attempt_ShaderProgram_GetProgram00);
   tolua_function(tolua_S,"GetLightNum",tolua_attempt_ShaderProgram_GetLightNum00);
   tolua_function(tolua_S,"SetLightNum",tolua_attempt_ShaderProgram_SetLightNum00);
   tolua_function(tolua_S,"GetShaderName",tolua_attempt_ShaderProgram_GetShaderName00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"ShaderType_Position",ShaderType_Position);
  tolua_constant(tolua_S,"ShaderType_Position_Color",ShaderType_Position_Color);
  tolua_constant(tolua_S,"ShaderType_Position_Tex",ShaderType_Position_Tex);
  tolua_constant(tolua_S,"ShaderType_Phone",ShaderType_Phone);
  tolua_constant(tolua_S,"ShaderType_Num",ShaderType_Num);
  tolua_variable(tolua_S,"DefShader",tolua_get_DefShader,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ShaderProgramCache","ShaderProgramCache","Object",tolua_collect_ShaderProgramCache);
  #else
  tolua_cclass(tolua_S,"ShaderProgramCache","ShaderProgramCache","Object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ShaderProgramCache");
   tolua_function(tolua_S,"GetInstance",tolua_attempt_ShaderProgramCache_GetInstance00);
   tolua_function(tolua_S,"LoadShaderProgram",tolua_attempt_ShaderProgramCache_LoadShaderProgram00);
   tolua_function(tolua_S,"LoadDefineShader",tolua_attempt_ShaderProgramCache_LoadDefineShader00);
   tolua_function(tolua_S,"GetShaderForKey",tolua_attempt_ShaderProgramCache_GetShaderForKey00);
   tolua_function(tolua_S,"AddShader",tolua_attempt_ShaderProgramCache_AddShader00);
   tolua_function(tolua_S,"delete",tolua_attempt_ShaderProgramCache_delete00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CameraClass","CameraClass","Object",tolua_collect_CameraClass);
  #else
  tolua_cclass(tolua_S,"CameraClass","CameraClass","Object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CameraClass");
   tolua_function(tolua_S,"new",tolua_attempt_CameraClass_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_CameraClass_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_CameraClass_new00_local);
   tolua_function(tolua_S,"Create",tolua_attempt_CameraClass_Create00);
   tolua_function(tolua_S,"Init",tolua_attempt_CameraClass_Init00);
   tolua_function(tolua_S,"SetOrthographic",tolua_attempt_CameraClass_SetOrthographic00);
   tolua_function(tolua_S,"SetPrespective",tolua_attempt_CameraClass_SetPrespective00);
   tolua_function(tolua_S,"GetViewMatrix",tolua_attempt_CameraClass_GetViewMatrix00);
   tolua_function(tolua_S,"GetProjectionMatrix",tolua_attempt_CameraClass_GetProjectionMatrix00);
   tolua_function(tolua_S,"GetPosition",tolua_attempt_CameraClass_GetPosition00);
   tolua_function(tolua_S,"Translational",tolua_attempt_CameraClass_Translational00);
   tolua_function(tolua_S,"LookAt",tolua_attempt_CameraClass_LookAt00);
   tolua_function(tolua_S,"Spin",tolua_attempt_CameraClass_Spin00);
   tolua_function(tolua_S,"Rotate",tolua_attempt_CameraClass_Rotate00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"LIGHT_Point",LIGHT_Point);
  tolua_constant(tolua_S,"LIGHT_Spot",LIGHT_Spot);
  tolua_constant(tolua_S,"LIGHT_Directional",LIGHT_Directional);
  tolua_constant(tolua_S,"LIGHT_TYPE_NUM",LIGHT_TYPE_NUM);
  tolua_cclass(tolua_S,"Light","Light","Object",NULL);
  tolua_beginmodule(tolua_S,"Light");
   tolua_variable(tolua_S,"power",tolua_get_Light_power,tolua_set_Light_power);
   tolua_variable(tolua_S,"attenuation",tolua_get_Light_attenuation,tolua_set_Light_attenuation);
   tolua_variable(tolua_S,"ambient",tolua_get_Light_ambient,tolua_set_Light_ambient);
   tolua_variable(tolua_S,"diffuse",tolua_get_Light_diffuse,tolua_set_Light_diffuse);
   tolua_variable(tolua_S,"specular",tolua_get_Light_specular,tolua_set_Light_specular);
   tolua_variable(tolua_S,"direction",tolua_get_Light_direction,tolua_set_Light_direction);
   tolua_variable(tolua_S,"spot_theta",tolua_get_Light_spot_theta,tolua_set_Light_spot_theta);
   tolua_variable(tolua_S,"spot_phi",tolua_get_Light_spot_phi,tolua_set_Light_spot_phi);
   tolua_function(tolua_S,"Create",tolua_attempt_Light_Create00);
   tolua_function(tolua_S,"GetLightType",tolua_attempt_Light_GetLightType00);
   tolua_function(tolua_S,"Rotate",tolua_attempt_Light_Rotate00);
   tolua_function(tolua_S,"RotateX",tolua_attempt_Light_RotateX00);
   tolua_function(tolua_S,"RotateY",tolua_attempt_Light_RotateY00);
   tolua_function(tolua_S,"RotateZ",tolua_attempt_Light_RotateZ00);
   tolua_function(tolua_S,"Spin",tolua_attempt_Light_Spin00);
   tolua_function(tolua_S,"SpinX",tolua_attempt_Light_SpinX00);
   tolua_function(tolua_S,"SpinY",tolua_attempt_Light_SpinY00);
   tolua_function(tolua_S,"SpinZ",tolua_attempt_Light_SpinZ00);
   tolua_function(tolua_S,"Translation",tolua_attempt_Light_Translation00);
   tolua_function(tolua_S,"TranslationX",tolua_attempt_Light_TranslationX00);
   tolua_function(tolua_S,"TranslationY",tolua_attempt_Light_TranslationY00);
   tolua_function(tolua_S,"TranslationZ",tolua_attempt_Light_TranslationZ00);
   tolua_function(tolua_S,"GetPosition",tolua_attempt_Light_GetPosition00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"LightManage","LightManage","Object",NULL);
  tolua_beginmodule(tolua_S,"LightManage");
   tolua_function(tolua_S,"Create",tolua_attempt_LightManage_Create00);
   tolua_function(tolua_S,"AddObject",tolua_attempt_LightManage_AddObject00);
   tolua_function(tolua_S,"CloseAll",tolua_attempt_LightManage_CloseAll00);
   tolua_function(tolua_S,"CloseTag",tolua_attempt_LightManage_CloseTag00);
   tolua_function(tolua_S,"OpeningAll",tolua_attempt_LightManage_OpeningAll00);
   tolua_function(tolua_S,"OpeningTag",tolua_attempt_LightManage_OpeningTag00);
   tolua_function(tolua_S,"Clear",tolua_attempt_LightManage_Clear00);
   tolua_function(tolua_S,"DeleteTag",tolua_attempt_LightManage_DeleteTag00);
   tolua_function(tolua_S,"DeleteTag",tolua_attempt_LightManage_DeleteTag01);
   tolua_function(tolua_S,"GetByIndex",tolua_attempt_LightManage_GetByIndex00);
   tolua_function(tolua_S,"GetLightNum",tolua_attempt_LightManage_GetLightNum00);
   tolua_function(tolua_S,"Bind",tolua_attempt_LightManage_Bind00);
   tolua_function(tolua_S,"Init",tolua_attempt_LightManage_Init00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Material","Material","Object",tolua_collect_Material);
  #else
  tolua_cclass(tolua_S,"Material","Material","Object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Material");
   tolua_variable(tolua_S,"ambient",tolua_get_Material_ambient,tolua_set_Material_ambient);
   tolua_variable(tolua_S,"diffuse",tolua_get_Material_diffuse,tolua_set_Material_diffuse);
   tolua_variable(tolua_S,"specular",tolua_get_Material_specular,tolua_set_Material_specular);
   tolua_variable(tolua_S,"emmissive",tolua_get_Material_emmissive,tolua_set_Material_emmissive);
   tolua_variable(tolua_S,"shininess",tolua_get_Material_shininess,tolua_set_Material_shininess);
   tolua_function(tolua_S,"new",tolua_attempt_Material_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_Material_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_Material_new00_local);
   tolua_function(tolua_S,"Create",tolua_attempt_Material_Create00);
   tolua_function(tolua_S,"Create",tolua_attempt_Material_Create01);
   tolua_function(tolua_S,"Init",tolua_attempt_Material_Init00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Node","Node","Object",tolua_collect_Node);
  #else
  tolua_cclass(tolua_S,"Node","Node","Object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Node");
   tolua_function(tolua_S,"new",tolua_attempt_Node_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_Node_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_Node_new00_local);
   tolua_function(tolua_S,"delete",tolua_attempt_Node_delete00);
   tolua_function(tolua_S,"Create",tolua_attempt_Node_Create00);
   tolua_function(tolua_S,"Init",tolua_attempt_Node_Init00);
   tolua_function(tolua_S,"AddChild",tolua_attempt_Node_AddChild00);
   tolua_function(tolua_S,"DeleteChild",tolua_attempt_Node_DeleteChild00);
   tolua_function(tolua_S,"Draw",tolua_attempt_Node_Draw00);
   tolua_function(tolua_S,"SetRotate",tolua_attempt_Node_SetRotate00);
   tolua_function(tolua_S,"SetRotateX",tolua_attempt_Node_SetRotateX00);
   tolua_function(tolua_S,"SetRotateY",tolua_attempt_Node_SetRotateY00);
   tolua_function(tolua_S,"SetRotateZ",tolua_attempt_Node_SetRotateZ00);
   tolua_function(tolua_S,"SetScale",tolua_attempt_Node_SetScale00);
   tolua_function(tolua_S,"SetScaleX",tolua_attempt_Node_SetScaleX00);
   tolua_function(tolua_S,"SetScaleY",tolua_attempt_Node_SetScaleY00);
   tolua_function(tolua_S,"SetScaleZ",tolua_attempt_Node_SetScaleZ00);
   tolua_function(tolua_S,"Scale",tolua_attempt_Node_Scale00);
   tolua_function(tolua_S,"ScaleX",tolua_attempt_Node_ScaleX00);
   tolua_function(tolua_S,"ScaleY",tolua_attempt_Node_ScaleY00);
   tolua_function(tolua_S,"ScaleZ",tolua_attempt_Node_ScaleZ00);
   tolua_function(tolua_S,"GetScale",tolua_attempt_Node_GetScale00);
   tolua_function(tolua_S,"Spin",tolua_attempt_Node_Spin00);
   tolua_function(tolua_S,"SpinX",tolua_attempt_Node_SpinX00);
   tolua_function(tolua_S,"SpinY",tolua_attempt_Node_SpinY00);
   tolua_function(tolua_S,"SpinZ",tolua_attempt_Node_SpinZ00);
   tolua_function(tolua_S,"SetTranslation",tolua_attempt_Node_SetTranslation00);
   tolua_function(tolua_S,"SetTranslationX",tolua_attempt_Node_SetTranslationX00);
   tolua_function(tolua_S,"SetTranslationY",tolua_attempt_Node_SetTranslationY00);
   tolua_function(tolua_S,"SetTranslationZ",tolua_attempt_Node_SetTranslationZ00);
   tolua_function(tolua_S,"GetTransform",tolua_attempt_Node_GetTransform00);
   tolua_function(tolua_S,"GetWorldTransform",tolua_attempt_Node_GetWorldTransform00);
   tolua_function(tolua_S,"Visit",tolua_attempt_Node_Visit00);
   tolua_function(tolua_S,"GetWeight",tolua_attempt_Node_GetWeight00);
   tolua_function(tolua_S,"SetWeight",tolua_attempt_Node_SetWeight00);
   tolua_function(tolua_S,"IsVisible",tolua_attempt_Node_IsVisible00);
   tolua_function(tolua_S,"SetVisible",tolua_attempt_Node_SetVisible00);
   tolua_function(tolua_S,"SetShaderProgram",tolua_attempt_Node_SetShaderProgram00);
   tolua_function(tolua_S,"GetShaderProgram",tolua_attempt_Node_GetShaderProgram00);
   tolua_function(tolua_S,"Update",tolua_attempt_Node_Update00);
   tolua_function(tolua_S,"ScheduleUpdate",tolua_attempt_Node_ScheduleUpdate00);
   tolua_function(tolua_S,"UnScheduleUpdate",tolua_attempt_Node_UnScheduleUpdate00);
   tolua_function(tolua_S,"GetTag",tolua_attempt_Node_GetTag00);
   tolua_function(tolua_S,"SetTag",tolua_attempt_Node_SetTag00);
   tolua_function(tolua_S,"GetUserData",tolua_attempt_Node_GetUserData00);
   tolua_function(tolua_S,"SetUserData",tolua_attempt_Node_SetUserData00);
   tolua_function(tolua_S,"GetPosition",tolua_attempt_Node_GetPosition00);
   tolua_function(tolua_S,"SetPosition",tolua_attempt_Node_SetPosition00);
   tolua_function(tolua_S,"SetPosition",tolua_attempt_Node_SetPosition01);
   tolua_function(tolua_S,"ConvertToWorldSpace",tolua_attempt_Node_ConvertToWorldSpace00);
   tolua_function(tolua_S,"GetAABB",tolua_attempt_Node_GetAABB00);
   tolua_function(tolua_S,"SetAABB",tolua_attempt_Node_SetAABB00);
   tolua_function(tolua_S,"Collision",tolua_attempt_Node_Collision00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Sprite","Sprite","Node",NULL);
  tolua_beginmodule(tolua_S,"Sprite");
   tolua_function(tolua_S,"CreateWithModel",tolua_attempt_Sprite_CreateWithModel00);
   tolua_function(tolua_S,"Create",tolua_attempt_Sprite_Create00);
   tolua_function(tolua_S,"Init",tolua_attempt_Sprite_Init00);
   tolua_function(tolua_S,"GetModel",tolua_attempt_Sprite_GetModel00);
   tolua_function(tolua_S,"SetGeomentryModel",tolua_attempt_Sprite_SetGeomentryModel00);
   tolua_function(tolua_S,"Draw",tolua_attempt_Sprite_Draw00);
   tolua_function(tolua_S,"GetAABB",tolua_attempt_Sprite_GetAABB00);
   tolua_function(tolua_S,"IsPause",tolua_attempt_Sprite_IsPause00);
   tolua_function(tolua_S,"Pause",tolua_attempt_Sprite_Pause00);
   tolua_function(tolua_S,"Recover",tolua_attempt_Sprite_Recover00);
   tolua_function(tolua_S,"SetPlayTime",tolua_attempt_Sprite_SetPlayTime00);
   tolua_function(tolua_S,"GetPlayTime",tolua_attempt_Sprite_GetPlayTime00);
   tolua_function(tolua_S,"SetPlayCount",tolua_attempt_Sprite_SetPlayCount00);
   tolua_function(tolua_S,"GetPlayCount",tolua_attempt_Sprite_GetPlayCount00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Texture2D","Texture2D","Object",tolua_collect_Texture2D);
  #else
  tolua_cclass(tolua_S,"Texture2D","Texture2D","Object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Texture2D");
   tolua_function(tolua_S,"delete",tolua_attempt_Texture2D_delete00);
   tolua_function(tolua_S,"GetTexHandle",tolua_attempt_Texture2D_GetTexHandle00);
   tolua_function(tolua_S,"GetTextureName",tolua_attempt_Texture2D_GetTextureName00);
   tolua_function(tolua_S,"GetHeight",tolua_attempt_Texture2D_GetHeight00);
   tolua_function(tolua_S,"GetWidth",tolua_attempt_Texture2D_GetWidth00);
   tolua_function(tolua_S,"CreateMipmap",tolua_attempt_Texture2D_CreateMipmap00);
   tolua_function(tolua_S,"IsMipmap",tolua_attempt_Texture2D_IsMipmap00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"TextureLoader","TextureLoader","Object",NULL);
  tolua_beginmodule(tolua_S,"TextureLoader");
   tolua_function(tolua_S,"LoadTexture2D",tolua_attempt_TextureLoader_LoadTexture2D00);
   tolua_function(tolua_S,"GetInstance",tolua_attempt_TextureLoader_GetInstance00);
   tolua_function(tolua_S,"RemoveTexture2D",tolua_attempt_TextureLoader_RemoveTexture2D00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"GeometryModel","GeometryModel","Model",NULL);
  tolua_beginmodule(tolua_S,"GeometryModel");
   tolua_function(tolua_S,"CreateTrilateral",tolua_attempt_GeometryModel_CreateTrilateral00);
   tolua_function(tolua_S,"CreateSquareWithTexture",tolua_attempt_GeometryModel_CreateSquareWithTexture00);
   tolua_function(tolua_S,"CreateSquareWithTexture",tolua_attempt_GeometryModel_CreateSquareWithTexture01);
   tolua_function(tolua_S,"CreateSquare",tolua_attempt_GeometryModel_CreateSquare00);
   tolua_function(tolua_S,"CreateSquare",tolua_attempt_GeometryModel_CreateSquare01);
   tolua_function(tolua_S,"CreateSquare",tolua_attempt_GeometryModel_CreateSquare02);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ObjModel","ObjModel","Model",tolua_collect_ObjModel);
  #else
  tolua_cclass(tolua_S,"ObjModel","ObjModel","Model",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ObjModel");
   tolua_function(tolua_S,"Create",tolua_attempt_ObjModel_Create00);
   tolua_function(tolua_S,"Draw",tolua_attempt_ObjModel_Draw00);
   tolua_function(tolua_S,"delete",tolua_attempt_ObjModel_delete00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"FVF_XYZ",FVF_XYZ);
  tolua_constant(tolua_S,"FVF_XYZW",FVF_XYZW);
  tolua_constant(tolua_S,"FVF_NORMAL",FVF_NORMAL);
  tolua_constant(tolua_S,"FVF_RGB",FVF_RGB);
  tolua_constant(tolua_S,"FVF_RGBA",FVF_RGBA);
  tolua_constant(tolua_S,"FVF_TEX",FVF_TEX);
  tolua_constant(tolua_S,"FVF_TEX1",FVF_TEX1);
  tolua_constant(tolua_S,"FVF_TEX2",FVF_TEX2);
  tolua_constant(tolua_S,"FVF_TEX3",FVF_TEX3);
  tolua_cclass(tolua_S,"VertexFormat_XYZW_RGBA","VertexFormat_XYZW_RGBA","",NULL);
  tolua_beginmodule(tolua_S,"VertexFormat_XYZW_RGBA");
   tolua_variable(tolua_S,"position",tolua_get_VertexFormat_XYZW_RGBA_position,tolua_set_VertexFormat_XYZW_RGBA_position);
   tolua_variable(tolua_S,"color",tolua_get_VertexFormat_XYZW_RGBA_color,tolua_set_VertexFormat_XYZW_RGBA_color);
  tolua_endmodule(tolua_S);
  tolua_variable(tolua_S,"FVF_XYZW_RGBA",tolua_get_FVF_XYZW_RGBA,NULL);
  tolua_cclass(tolua_S,"VertexFormat_XYZ_TEX","VertexFormat_XYZ_TEX","",NULL);
  tolua_beginmodule(tolua_S,"VertexFormat_XYZ_TEX");
   tolua_variable(tolua_S,"position",tolua_get_VertexFormat_XYZ_TEX_position,tolua_set_VertexFormat_XYZ_TEX_position);
   tolua_variable(tolua_S,"tex_coord",tolua_get_VertexFormat_XYZ_TEX_tex_coord,tolua_set_VertexFormat_XYZ_TEX_tex_coord);
  tolua_endmodule(tolua_S);
  tolua_variable(tolua_S,"FVF_XYZ_TEX",tolua_get_FVF_XYZ_TEX,NULL);
  tolua_cclass(tolua_S,"VertexFormat_XYZ_NORMAL_TEX","VertexFormat_XYZ_NORMAL_TEX","",NULL);
  tolua_beginmodule(tolua_S,"VertexFormat_XYZ_NORMAL_TEX");
   tolua_variable(tolua_S,"position",tolua_get_VertexFormat_XYZ_NORMAL_TEX_position,tolua_set_VertexFormat_XYZ_NORMAL_TEX_position);
   tolua_variable(tolua_S,"normal",tolua_get_VertexFormat_XYZ_NORMAL_TEX_normal,tolua_set_VertexFormat_XYZ_NORMAL_TEX_normal);
   tolua_variable(tolua_S,"tex_coord",tolua_get_VertexFormat_XYZ_NORMAL_TEX_tex_coord,tolua_set_VertexFormat_XYZ_NORMAL_TEX_tex_coord);
  tolua_endmodule(tolua_S);
  tolua_variable(tolua_S,"FVF_XYZ_NORMAL_TEX",tolua_get_FVF_XYZ_NORMAL_TEX,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Model","Model","Object",tolua_collect_Model);
  #else
  tolua_cclass(tolua_S,"Model","Model","Object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Model");
   tolua_function(tolua_S,"delete",tolua_attempt_Model_delete00);
   tolua_function(tolua_S,"Create",tolua_attempt_Model_Create00);
   tolua_function(tolua_S,"GetVertexFomatSize",tolua_attempt_Model_GetVertexFomatSize00);
   tolua_function(tolua_S,"SetVertexData",tolua_attempt_Model_SetVertexData00);
   tolua_function(tolua_S,"SetVertexFomat",tolua_attempt_Model_SetVertexFomat00);
   tolua_function(tolua_S,"GetVertexFomat",tolua_attempt_Model_GetVertexFomat00);
   tolua_function(tolua_S,"SetTexture",tolua_attempt_Model_SetTexture00);
   tolua_function(tolua_S,"GetTexture",tolua_attempt_Model_GetTexture00);
   tolua_function(tolua_S,"SetMaterial",tolua_attempt_Model_SetMaterial00);
   tolua_function(tolua_S,"GetMaterial",tolua_attempt_Model_GetMaterial00);
   tolua_function(tolua_S,"BindData",tolua_attempt_Model_BindData00);
   tolua_function(tolua_S,"Draw",tolua_attempt_Model_Draw00);
   tolua_function(tolua_S,"GetTimeLong",tolua_attempt_Model_GetTimeLong00);
   tolua_function(tolua_S,"SetIndex",tolua_attempt_Model_SetIndex00);
   tolua_function(tolua_S,"GetAABB",tolua_attempt_Model_GetAABB00);
   tolua_function(tolua_S,"SetAABB",tolua_attempt_Model_SetAABB00);
   tolua_function(tolua_S,"GetNowFrame",tolua_attempt_Model_GetNowFrame00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"VDSModel","VDSModel","GeometryModel",tolua_collect_VDSModel);
  #else
  tolua_cclass(tolua_S,"VDSModel","VDSModel","GeometryModel",NULL);
  #endif
  tolua_beginmodule(tolua_S,"VDSModel");
   tolua_function(tolua_S,"delete",tolua_attempt_VDSModel_delete00);
   tolua_function(tolua_S,"Create",tolua_attempt_VDSModel_Create00);
   tolua_function(tolua_S,"Update",tolua_attempt_VDSModel_Update00);
   tolua_function(tolua_S,"Draw",tolua_attempt_VDSModel_Draw00);
   tolua_function(tolua_S,"GetName",tolua_attempt_VDSModel_GetName00);
   tolua_function(tolua_S,"GetAABB",tolua_attempt_VDSModel_GetAABB00);
   tolua_function(tolua_S,"GetNowFrame",tolua_attempt_VDSModel_GetNowFrame00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Curtains","Curtains","Sprite",tolua_collect_Curtains);
  #else
  tolua_cclass(tolua_S,"Curtains","Curtains","Sprite",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Curtains");
   tolua_function(tolua_S,"new",tolua_attempt_Curtains_new00);
   tolua_function(tolua_S,"new_local",tolua_attempt_Curtains_new00_local);
   tolua_function(tolua_S,".call",tolua_attempt_Curtains_new00_local);
   tolua_function(tolua_S,"delete",tolua_attempt_Curtains_delete00);
   tolua_function(tolua_S,"Create",tolua_attempt_Curtains_Create00);
   tolua_function(tolua_S,"Init",tolua_attempt_Curtains_Init00);
   tolua_function(tolua_S,"SetEdge",tolua_attempt_Curtains_SetEdge00);
   tolua_function(tolua_S,"SetK",tolua_attempt_Curtains_SetK00);
   tolua_function(tolua_S,"SetDamp",tolua_attempt_Curtains_SetDamp00);
   tolua_function(tolua_S,"getW",tolua_attempt_Curtains_getW00);
   tolua_function(tolua_S,"getH",tolua_attempt_Curtains_getH00);
   tolua_function(tolua_S,"getEdge",tolua_attempt_Curtains_getEdge00);
   tolua_function(tolua_S,"getK",tolua_attempt_Curtains_getK00);
   tolua_function(tolua_S,"getDamp",tolua_attempt_Curtains_getDamp00);
   tolua_function(tolua_S,"Update",tolua_attempt_Curtains_Update00);
   tolua_function(tolua_S,"Draw",tolua_attempt_Curtains_Draw00);
   tolua_function(tolua_S,"moveCurtainsL",tolua_attempt_Curtains_moveCurtainsL00);
   tolua_function(tolua_S,"moveCurtainsR",tolua_attempt_Curtains_moveCurtainsR00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_attempt (lua_State* tolua_S) {
 return tolua_attempt_open(tolua_S);
};
#endif

