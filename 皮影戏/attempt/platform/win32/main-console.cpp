// #pragma comment(linker ,"/subsystem:windows /entry:mainCRTStartup") // 隐藏控制台窗口

#include <time.h>
#include <iostream>
#include "promise.h" //包含了“Angel.h”
#include "render/shader.h"

// 设备的api
#include "thinkgear.h"
#pragma comment (lib, "thinkgear.lib")  


using namespace std;


HANDLE g_handle_Logic;

// 意念控制的设置
bool	TGCD_mode;
int	connection_ID;
wchar_t *comPortName = L"\\\\.\\COM9";

struct RT	//信号图像位置
{
	vec3 t;  //移动
	vec3 s;	 //缩放
	bool state;
};
RT rectangle[5];

void initRT(){			//设置信号矩形位置
	for (int i=0;i<5;i++)
	{
		rectangle[i].t = vec3(0.7f + i*0.03f, 0.4f + i * 0.005f, -1.0f);
		rectangle[i].s = vec3(0.02f ,0.02f + i*0.01f, 1.0f);
		rectangle[i].state = true;
	}
}  

//shader
ShaderClass *shader;

//矩形~
GLuint vaoRectangle;
GLuint bufferRectangle;
GLuint RectangleNum = 6;
vec3* ptRectangle;
vec3* colorRectangle;

MatrixStack mvStack;

void initRectangle()
{
	ptRectangle = new vec3[RectangleNum];
	colorRectangle = new vec3 [RectangleNum];
	ptRectangle[0] = vec3(-0.5,0.5,0.0);colorRectangle[0] = vec3(1.0,1.0,1.0);
	ptRectangle[1] = vec3(-0.5,-0.5,0.0);colorRectangle[1] = vec3(1.0,1.0,1.0);
	ptRectangle[2] = vec3(0.5,-0.5,0.0);colorRectangle[2] = vec3(1.0,1.0,1.0);
	ptRectangle[3] = vec3(0.5,-0.5,0.0);colorRectangle[3] = vec3(1.0,1.0,1.0);
	ptRectangle[4] = vec3(0.5,0.5,0.0);colorRectangle[4] = vec3(1.0,1.0,1.0);
	ptRectangle[5] = vec3(-0.5,0.5,0.0);colorRectangle[5] = vec3(1.0,1.0,1.0);

	glGenVertexArrays(1,&vaoRectangle);
	glBindVertexArray(vaoRectangle);

	glGenBuffers(1,&bufferRectangle);
	glBindBuffer(GL_ARRAY_BUFFER,bufferRectangle);
	glBufferData(GL_ARRAY_BUFFER,2*sizeof(point3)*RectangleNum,NULL,GL_STATIC_DRAW);
	glBufferSubData(GL_ARRAY_BUFFER,0,sizeof(point3)*RectangleNum,ptRectangle);
	glBufferSubData(GL_ARRAY_BUFFER,sizeof(point3)*RectangleNum,sizeof(vec3)*RectangleNum,colorRectangle);

	glEnableVertexAttribArray(shader->vPosition);
	glVertexAttribPointer(shader->vPosition,3,GL_FLOAT,GL_FALSE,0,BUFFER_OFFSET(0));
	glEnableVertexAttribArray(shader->pColor);
	glVertexAttribPointer(shader->pColor,3,GL_FLOAT,GL_FALSE,0,BUFFER_OFFSET(sizeof(point3)*RectangleNum));
}



DWORD WINAPI ThreadProc ( LPVOID lp_parameter ) {

	return 0;
}

void Init() 
{
	//////////////////////////////////////////////////////////////////////////
	// TGCD的初始化
	//////////////////////////////////////////////////////////////////////////
	TGCD_mode = true;
	connection_ID = TG_GetNewConnectionId();
	if( connection_ID < 0 ) {
		fprintf( stderr, "ERROR: TG_GetNewConnectionId() returned %d.\n", 
			connection_ID );
		fprintf( stderr, "转换为模拟信号\n");
		TGCD_mode = false;  
	} else {
//         /*
// 		int errCode = TG_SetStreamLog( connection_ID, L"streamLog.txt" );
// 		if( errCode < 0 ) {
// 			fprintf( stderr, "ERROR: TG_SetStreamLog() returned %d.\n", errCode );
// 			fprintf( stderr, "转换为模拟信号\n");
// 			TGCD_mode = false;  
// 		} else {
// 			errCode = TG_SetDataLog( connection_ID, L"dataLog.txt" );
// 			if( errCode < 0 ) {
// 				fprintf( stderr, "ERROR: TG_SetDataLog() returned %d.\n", errCode);
// 				fprintf( stderr, "转换为模拟信号\n");
// 				TGCD_mode = false;  
// 			} else {
//         */
        int	errCode = TG_Connect( connection_ID, 
            comPortName, 
            TG_BAUD_9600, 
            TG_STREAM_PACKETS );
        if( errCode < 0 ) {
            fprintf( stderr, "ERROR: TG_Connect() returned %d.\n", errCode );
            fprintf( stderr, "转换为模拟信号\n");
            TGCD_mode = false;  
		}
	}
	if (TGCD_mode == true) {
		//开启后台读取
		TG_EnableAutoRead( connection_ID, 1 );
	}

	//////////////////////////////////////////////////////////////////////////
	// 初始化关卡数目
	//////////////////////////////////////////////////////////////////////////
    
    //////////////////////////////////////////////////////////////////////////
    // 初始化菜单dll
    //////////////////////////////////////////////////////////////////////////
   
   
    //////////////////////////////////////////////////////////////////////////
    // 初始化关卡的dll
    //////////////////////////////////////////////////////////////////////////
   
}

void Logic() {
	float attention, meditation,blink_strength;
	if ( TGCD_mode == true ) {
		attention = TG_GetValue(connection_ID, TG_DATA_ATTENTION );
		meditation = TG_GetValue(connection_ID, TG_DATA_MEDITATION );
		blink_strength = TG_GetValue(connection_ID, TG_DATA_BLINK_STRENGTH );
	} else {
		attention = rand() / (RAND_MAX + 0.0 ) * 100;
		meditation = rand() / (RAND_MAX + 0.0 ) * 100;
		blink_strength = rand() / (RAND_MAX + 0.0 ) * 100;
	}
//     if (LogicDll)
//     {
//         LogicDll(attention, meditation, blink_strength);
//     }
// 	if (MenuLogic)
// 	{
//         MenuLogic(attention, meditation, blink_strength);
// 	}
}

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
// 	if(MyDisplayDll != NULL) 
//     {
// 		MyDisplayDll();
// 	}
//     if (MenuRender)
//     {
//         MenuRender();
//     }
	glutSwapBuffers();
}

void SpecialKeys(int Key,int x,int y)
{
// 	if (MySpecialKeyDll != NULL)
//     {
// 		MySpecialKeyDll(Key, x, y);
// 	}
// 
//     if (MenuSpecialKey != NULL)
//     {
//         MenuSpecialKey(Key, x, y);
//     }
}

void MyKeyDown(unsigned char Key, int x, int y) {
	switch (Key){
	case 27:
		exit(EXIT_SUCCESS);
	}
// 	if (MyKeyDownDll != NULL){
// 		MyKeyDownDll(Key, x, y);
// 	}
//     if (MenuKeyDown != NULL)
//     {
//         MenuKeyDown(Key, x, y);
//     }
}

void MyKeyUp ( unsigned char Key, int x, int y ){
// 	if (MyKeyUpDll != NULL) {
// 		MyKeyUpDll(Key, x, y);
// 	}
//     if (MenuKeyUp != NULL)
//     {
//         MenuKeyUp(Key, x, y);
//     }
}

void ChangeSize ( int w, int h ){	     

//     if (ChangeSizeDll)
//     {
//         ChangeSizeDll(w, h);
//     }
//     if ( MenuChangeSize != NULL) 
//     {
//         MenuChangeSize(w, h);
//         
// 	}
}

void MouseMove ( int x, int y ){
// 	if (MouseMoveDll != NULL) {
// 		MouseMoveDll(x, y);
// 	}
}
void MouseKey(int botton,int state,int x,int y)
{
// 	if(MouseKeyDll!=NULL)
// 		MouseKeyDll(botton,state,x,y);
}

void TimerFunction ( int value ){
	Logic();
	glutPostRedisplay();
	glutTimerFunc(1000 / 60, TimerFunction, value+1);
}

void Free()
{
	Release(shader);
}

int main ( int argc, char **argv ){
	srand(time(NULL));
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH|GLUT_MULTISAMPLE);
	glutInitContextVersion(3, 1);
	glutInitContextFlags(GLUT_FORWARD_COMPATIBLE);
	glutInitWindowSize(960, 540);
	glutCreateWindow("piyingxi");
	glutSetCursor(GLUT_CURSOR_NONE);

	glewExperimental = GL_TRUE;
	GLenum err = glewInit();
	if (err != GLEW_OK)
	{
		std::cout << "glewInit 失败, 退出程序." << std::endl;
		exit(EXIT_FAILURE); // 退出程序
	}

	Init();
	glutDisplayFunc(MyDisplay);
	// 设置键盘按键的回调函数
	glutSpecialFunc(SpecialKeys);//特殊按键
	glutKeyboardFunc(MyKeyDown);
	glutKeyboardUpFunc(MyKeyUp);
	glutPassiveMotionFunc(MouseMove);
	glutMouseFunc(MouseKey);
	glutReshapeFunc(ChangeSize);
	glutTimerFunc(100, TimerFunction, 0);
	g_handle_Logic = CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
	glutMainLoop();

	Free();
	return 0;
}

