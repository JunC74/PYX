#ifndef LEVEL_ONE_KNIFE_H_
#define LEVEL_ONE_KNIFE_H_


#include <olectl.h>
#include "promise.h" //包含了“Angel.h
#include <shader.h>
#include <atlimage.h>
#include "CImage.h"
#include "curtains.h"


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


bool lockKey = true;


//enum{UP,DOWN,LEFT,RIGHT,NUM_KEY};
bool KeyDown[NUM_KEY];

mat4 matCamera; //摄像机变换
mat4 RmatCamera; //相机变换的逆变换

MatrixStack mvStack;


int windowsWidth, windowsHigh;


// shader
ShaderClass *shader;


POINT  lastPoint;
GLuint vao_screen, tex_screen;

int level_state;	//关卡的状态

// 逻辑函数
// 参数：专注度， 放松程度， 眨眼力度
// 返回值： 关卡的当前状态（请参照promise.h里的参数设置）
int Logic ( int attention, int meditation,int blink_strength );

// 显示函数
void MyDisplay ();

// 初始化函数
void LeveInit ();

// 鼠标移动函数
// 参数：鼠标在窗口上的坐标，左上角为原点
void MouseMove ( int x, int y );

// 按键弹起函数（普通的按键响应函数）
void MyKeyUp ( unsigned char Key, int x, int y );

// 按键按下函数（普通的按键响应函数）
void MyKeyDown ( unsigned char Key, int x, int y );

void SpecialKeys(int Key,int x,int y);

// DLL结束函数
void FreeResources ();

void MouseKey(int botton,int state,int x,int y);

#endif