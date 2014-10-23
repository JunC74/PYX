#ifndef LEVEL_ONE_KNIFE_H_
#define LEVEL_ONE_KNIFE_H_

#ifndef GAME_DLL_API
#define GAME_DLL_API extern "C" _declspec(dllimport)
#endif

#include <olectl.h>
#include "promise.h" //包含了“Angel.h
#include <shader.h>
#include <atlimage.h>
#include "CImage.h"
#include "curtains.h"

#define  SWK_number 7

float calculagraph = 0.0;//计时器 

///////////////////////////////////////////////////////////////
typedef WORD   GAMESTATE;//游戏状态
const GAMESTATE  G_MENU   = 0,//菜单
    G_GAMEING_1   = 1,//游戏1（拉窗帘）
    G_GAMESET = 2,//设置
    G_GAMEHELP = 3,//帮助
    G_CG1 = 4,//CG1
    G_CG2 = 5,//GC2
    G_GAMEING_2 =6,//游戏2（舞刀）
    G_GAMEOVER  = 7,//游戏失败
    G_GAMEOUT = 8;//退出游戏
GAMESTATE gameState = G_MENU;
//////////////////////////////////////////////////////////////

struct gameButton
{
    vec3 t;		//显示的位置
    vec3 s;		//缩放
    bool is;	//是否被选中
};

gameButton StartButton;
gameButton SetButton;
gameButton HelpButton;
gameButton ExitButton;
int ButtonChange =0;

bool lockKey = true;

struct wukongState
{
    vec3 t;   //显示位置
    vec3 s;   //缩放
    UINT ID;  //播放那个动作
    vec3 rotateD; //绕哪个轴旋转
    float angle; //角度
};
wukongState SunWuKong;

//enum{UP,DOWN,LEFT,RIGHT,NUM_KEY};
bool KeyDown[NUM_KEY];

mat4 mat_projection;
mat4 matCamera; //摄像机变换
mat4 RmatCamera; //相机变换的逆变换

MatrixStack mvStack;


//光源,材质和纹理
lightingStruct whiteLight, redLight, yellowLight;
lightingStruct light[] = {whiteLight, redLight, yellowLight,yellowLight};
materialStruect GraphMaterial,alphaMaterial,lightMaterial;

int windowsWidth, windowsHigh;


// shader
ShaderClass *shader;
//窗帘
curtains *Curtains;
GLuint CurtainsVao;

point3 *ptSphere;//球
vec2 *texSphere;  //用于保存球纹理坐标数据的动态数组
GLuint NumVerticesSphere;
GLuint vaoSphere;

point3 *ptBOX;//矩形
vec3 *nBOX;
vec2 *texBOX;
GLuint NumBOX;
GLuint vaoBOX;

point3 *ptSL;
vec2 *texSL;
GLuint NumSL;
GLuint vaoSL;
GLuint BufferSL;

struct Power{			//专注度能量槽
    point3 *ptPower;
    vec3 *colorPower;
    GLuint vaoPower;
    GLuint BufferPower;
    vec3 t;
    vec3 s;
    float percent;
    bool d;//是否画
};

Power power;

GLuint vaoGraph, tex_graph,tex_SL,tex_Ground,tex_back,tex_longgong;
GLuint texPeople[8];//观众贴图
const char* fileName[8] = { //保存文件名的数组
    "Res\\Tex\\people1.png",
    "Res\\Tex\\people2.png",
    "Res\\Tex\\people3.png",
    "Res\\Tex\\people4.png",
    "Res\\Tex\\people5.png",
    "Res\\Tex\\people6.png",
    "Res\\Tex\\people7.png",
    "Res\\Tex\\people8.png"
};
GLuint texButton[4];//按钮贴图
const char* bottonName[4]={
    "Res\\Tex\\start_button.png",
    "Res\\Tex\\set_button.png",
    "Res\\Tex\\help_button.png",
    "Res\\Tex\\exit_button.png"
};
GLuint texTalk[4];//说话贴图
const char* talkName[4]={
    "Res\\Tex\\start.png",
    "Res\\Tex\\set.png",
    "Res\\Tex\\help.png",
    "Res\\Tex\\exit.png"
} ;
const char* SWK_Nmae[SWK_number] = { //保存文件名的数组
    "Res\\Action\\fly.vds",
    "Res\\Action\\set.vds",
    "Res\\Action\\help.vds",
    "Res\\Action\\walk.vds",
    "Res\\Action\\dao.vds",
    "Res\\Action\\qiang.vds",
    "Res\\Action\\huaji.vds"
};
int SWK_FRAME_ID;

bool bLightOn[4] = {true, false, true,true};

int level_state;	//关卡的状态

// 逻辑函数
// 参数：专注度， 放松程度， 眨眼力度
// 返回值： 关卡的当前状态（请参照promise.h里的参数设置）
GAME_DLL_API int Logic ( int attention, int meditation,int blink_strength );

// 显示函数
GAME_DLL_API void MyDisplay ();

// 窗口调整回调函数
// 参数： 窗口的宽度和高度
GAME_DLL_API void ChangeSize ( int w, int h );

// 计时器
GAME_DLL_API void TimerFunction ( int value );

// 初始化函数
GAME_DLL_API void Init ();

// 鼠标移动函数
// 参数：鼠标在窗口上的坐标，左上角为原点
GAME_DLL_API void MouseMove ( int x, int y );

// 按键弹起函数（普通的按键响应函数）
GAME_DLL_API void MyKeyUp ( unsigned char Key, int x, int y );

// 按键按下函数（普通的按键响应函数）
GAME_DLL_API void MyKeyDown ( unsigned char Key, int x, int y );

GAME_DLL_API void SpecialKeys(int Key,int x,int y);

// DLL结束函数
GAME_DLL_API void FreeResources ();

GAME_DLL_API void MouseKey(int botton,int state,int x,int y);

#endif