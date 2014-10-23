#include <time.h>
#include "angel.h"
#include <iostream>
#include <olectl.h>
#include "OBJ3D.h"
#include "shader.h"
#include "vds_object.h"

using namespace std;

typedef vec2 point2;
typedef vec3 point3;
typedef vec4 color4;


enum {UP, DOWN, LEFT, RIGHT, NUM_KEY};
enum {TEX_GROUND, NUM_TEXTURES};

int windowsWidth, windowsHigh;

GLuint texNameArray[NUM_TEXTURES];
const char* fileName[NUM_TEXTURES] = {
	"Res\\ground.bmp",
};

//shader
ShaderClass *shader;
//视角
MatrixStack MVStack;		// 模视矩阵栈
mat4 matCamera;
mat4 matReverse;
int mouseX = -1, mouseY = -1;
GLfloat visualXRot;
GLfloat visualSpeed = 360;

//控制
bool KeyDown[NUM_KEY];
bool bWire = false;
bool stop = false;

//自动
GLfloat yRot = 0.0f;

//地面
point3 *ptGround;
vec3 *nGround;
vec2 *texGround;
GLuint NumVerticesGround;
GLuint vaoGround;
//球
GLuint NumVerticesSphere;
GLuint vaoSphere;
//圆环
GLuint NumVerticesTorus;
GLuint vaoTorus;

//天空
GLuint NumVerticesSky;
GLuint vaoSky;

VDSObject *mode;

void BuildGround(GLfloat fExtent, GLfloat fStep)
{
	int iterations = 2 * fExtent / fStep;
	NumVerticesGround = iterations * iterations * 6;
	if (ptGround != NULL)
	{
		delete ptGround;
	}
	ptGround = new point3[NumVerticesGround];

	if (nGround != NULL)
	{
		delete nGround;
	}
	nGround = new vec3[NumVerticesGround];

	if(texGround != NULL)
	{
		delete texGround;
	}
	texGround = new vec2[NumVerticesGround];
	GLfloat fTexCoordStep = 40 / (GLfloat)iterations;

	int index = 0;
	for(GLfloat x = -fExtent, s = 0; x < fExtent; x += fStep, s += fTexCoordStep)
	{
		for(GLfloat z = fExtent, t = 0; z > -fExtent; z -= fStep, t += fTexCoordStep)
		{
			point3 ptLowerLeft = point3(x, 0, z);
			point3 ptLowerRight = point3(x + fStep, 0, z);
			point3 ptUpperLeft = point3(x, 0, z - fStep);
			point3 ptUpperRight = point3(x + fStep, 0, z - fStep);

			texGround[index]= vec2(s, t + fTexCoordStep);
			nGround[index] = vec3(0, 1, 0);
			ptGround[index++] = ptUpperLeft;

			texGround[index]= vec2(s, t);
			nGround[index] = vec3(0, 1, 0);
			ptGround[index++] = ptLowerLeft;

			texGround[index]= vec2(s + fTexCoordStep, t);
			nGround[index] = vec3(0, 1, 0);
			ptGround[index++] = ptLowerRight;

			texGround[index]= vec2(s, t + fTexCoordStep);
			nGround[index] = vec3(0, 1, 0);
			ptGround[index++] = ptUpperLeft;

			texGround[index]= vec2(s + fTexCoordStep, t);
			nGround[index] = vec3(0, 1, 0);
			ptGround[index++] = ptLowerRight;

			texGround[index]= vec2(s + fTexCoordStep, t + fTexCoordStep);
			nGround[index] = vec3(0, 1, 0);
			ptGround[index++] = ptUpperRight;
		}
	}
}

void InitVDS(VDSObject &vds)
{
    glEnableVertexAttribArray(shader->vPosition);
    PrintfGLError();
    glVertexAttribPointer(
        shader->vPosition,
        3,
        GL_FLOAT,
        GL_FALSE,
        sizeof(VERTEX),
        BUFFER_OFFSET(0)
        );
    PrintfGLError();

    glEnableVertexAttribArray(shader->vTexCoord);
    glVertexAttribPointer(
        shader->vTexCoord,
        2,
        GL_FLOAT,
        GL_FALSE,
        sizeof(VERTEX),
        BUFFER_OFFSET(sizeof(vec3))
        );
}
void IntGraph(char const *objFileName, GLuint *vao, GLuint *NumVertices) {

    OBJ3D graph = OBJ3D(objFileName);
	*NumVertices = graph.GetTrianglesNum() * 3;
	glGenVertexArrays(1, vao);
	glBindVertexArray(*vao);

	//传顶点数据
	GLuint bufferSphere;
	glGenBuffers(1, &bufferSphere);
	glBindBuffer(GL_ARRAY_BUFFER, bufferSphere);
	glBufferData(GL_ARRAY_BUFFER,
		graph.GetVertexAttributeSize(),
		graph.GetVertexAttributep(),
		GL_STATIC_DRAW);

	//传索引数组
	GLuint indexVBO;
	glGenBuffers(1, &indexVBO); 
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexVBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER,
		graph.GetIndexSize(),
		graph.GetIndexp(),
		GL_STATIC_DRAW);

	glEnableVertexAttribArray(shader->vPosition);
	glVertexAttribPointer(
		shader->vPosition,
		3,
		GL_FLOAT,
		GL_FALSE,
		sizeof(VERTEX),
		BUFFER_OFFSET(VERTEX_OFFSET_V)
		);

	glEnableVertexAttribArray(shader->vTexCoord);
	glVertexAttribPointer(
		shader->vTexCoord,
		2,
		GL_FLOAT,
		GL_FALSE,
		sizeof(VERTEX),
		BUFFER_OFFSET(VERTEX_OFFSET_VT)
		);

	//开启索引数组
	glEnable(GL_INDEX_ARRAY);
}

void InitTorus()
{
	IntGraph("trafficCircle.obj", &vaoTorus, &NumVerticesTorus);
}

void InitGround()
{
	BuildGround(20.0, 40.0);
	glGenVertexArrays(1, &vaoGround);
	glBindVertexArray(vaoGround);
	GLuint bufferGround;
	glGenBuffers(1, &bufferGround);
	glBindBuffer(GL_ARRAY_BUFFER, bufferGround);
	glBufferData(GL_ARRAY_BUFFER,
		(sizeof(point3) + sizeof(vec3) + sizeof(vec2))* NumVerticesGround,
		NULL,
		GL_STATIC_DRAW
		);

	glBufferSubData(GL_ARRAY_BUFFER,
		0,
		sizeof(point3)* NumVerticesGround,
		ptGround
		);

	glBufferSubData(GL_ARRAY_BUFFER,
		sizeof(point3)* NumVerticesGround,
		sizeof(vec3)* NumVerticesGround,
		nGround
		);

	glBufferSubData(GL_ARRAY_BUFFER,
		sizeof(point3)* NumVerticesGround + sizeof(vec3)* NumVerticesGround,
		sizeof(vec2)* NumVerticesGround,
		texGround
		);

	delete []nGround; 
	nGround = NULL;
	delete ptGround;
	ptGround = NULL;
	delete texGround;
	texGround = NULL;

	glEnableVertexAttribArray(shader->vPosition);
	glVertexAttribPointer(
		shader->vPosition,
		3,
		GL_FLOAT,
		GL_FALSE,
		0,
		BUFFER_OFFSET(0)
		);
	glEnableVertexAttribArray(shader->vTexCoord);
	glVertexAttribPointer(
		shader->vTexCoord,
		2,
		GL_FLOAT,
		GL_FALSE,
		0,
		BUFFER_OFFSET((sizeof(point3) + sizeof(point3)) * NumVerticesGround)
		);
}


void Init()
{
    shader = ShaderClass::GetShader();
	shader->shader_program = InitShader("Res/Shader/vPhone.glsl", "Res/Shader/fPhone.glsl");
	glUseProgram(shader->shader_program);
	shader->vPosition = glGetAttribLocation(shader->shader_program, "vPosition");
    shader->ModelView = glGetUniformLocation(shader->shader_program, "ModelView");
	shader->Projection = glGetUniformLocation(shader->shader_program, "Projection");
	shader->vTexCoord = glGetAttribLocation(shader->shader_program, "vTexCoord");
	shader->tex = glGetUniformLocation(shader->shader_program, "tex");
	glGenTextures(NUM_TEXTURES, texNameArray);
	for(int i = 0; i < NUM_TEXTURES; i++) {
		glBindTexture(GL_TEXTURE_2D, texNameArray[i]);
 		LoadTexture(fileName[i]);
		glGenerateMipmap(GL_TEXTURE_2D);
 		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR);
 		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
	}
	InitGround();

#ifndef ONE
    mode = new VDSObject("open.vds", 0);
#else
    mode = new VDSObject();
    mode->InitVertex();
#endif
     //InitVDS(*mode);

    glClearColor(0.6, 0.4, 0.7, 1.0);

	glEnable(GL_DEPTH_TEST);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glPolygonMode(GL_FRONT, GL_NICEST);
	glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);
}

void MyKeyDown(unsigned char Key, int x, int y)
{
	switch (Key)
	{
	case 'P': case 'p':
		stop = !stop;
        system("cls");
        mode->ShowFrameInfo();
		break;
	case 'W': case'w':
		KeyDown[UP] = true;
		break;
	case 'S': case 's':
		KeyDown[DOWN] = true;
		break;
	case 'A': case 'a':
		KeyDown[LEFT] = true;
		break;
	case 'D': case 'd':
		KeyDown[RIGHT] = true;
		break;
	case 'Q': case 'q':
		if (bWire)
		{
			glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
			bWire = false;
		}
		else
		{
			glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
			bWire = true;
		}
		break;
	case 27:
		exit(EXIT_SUCCESS);
	}
}

void MyKeyUp(unsigned char Key, int x, int y)
{
	if (Key == 'w' || Key == 'W')
	{
		KeyDown[UP] = false;
	}
	if (Key == 's' || Key == 'S')
	{
		KeyDown[DOWN] = false;
	}
	if (Key == 'a' || Key == 'A')
	{
		KeyDown[LEFT] = false;
	}
	if (Key == 'd' || Key == 'D')
	{
		KeyDown[RIGHT] = false;
	}
}

void UpdateCamera()
{
	if (KeyDown[UP])
	{
		matCamera = Translate(0.0, 0.0, 0.1) * matCamera;
		matReverse *= Translate(0.0, 0.0, 0.1);
	}
	if (KeyDown[DOWN])
	{
		matCamera = Translate(0.0, 0.0, -0.1) * matCamera;
		matReverse *= Translate(0.0, 0.0, -0.1);
	}
// 	if (KeyDown[LEFT])
// 	{
// 		matCamera = Rotate(3, 0.0, -1.0, 0.0) * matCamera;
// 		matReverse *= Translate(0.1, 0.0, 0.0);
// 	}
// 	if (KeyDown[RIGHT])
// 	{
// 		matCamera = Rotate(3, 0.0, 1.0, 0.0) * matCamera;
// 		matReverse *= Translate(-0.1, 0.0, 0.0);
// 	}
}

void MouseMove(int x, int y)
{
	if (mouseX == -1)
	{
		mouseX = x;
		mouseY = y;
		return ;
	}
	float len = x - mouseX;

	mouseX = x;
	mouseY = y;
}


void mydisplay()
{
	UpdateCamera();
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	mat4 matModelView = matCamera;
	
	
	//绘制地面
	MVStack.push(matModelView);
	glBindTexture(GL_TEXTURE_2D, texNameArray[TEX_GROUND]);
	glBindVertexArray(vaoGround);
	matModelView *= Translate(0.0, 0.0, -10.0);
    matModelView *= Rotate(90, 1.0, 0.0, 0.0);
	glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
	glDrawArrays(GL_TRIANGLES, 0, NumVerticesGround);
	matModelView = MVStack.pop();

	matModelView *= Translate(0, 0, -5.5f);
    float sc = 0.012525;
    matModelView *= Scale(sc, sc, sc);
    mode->SetModelView(matModelView);
    mode->Draw();
	glutSwapBuffers();
}

// 窗口调整回调函数
void ChangeSize(int w, int h)
{	
	// 防止除0
	if(h == 0)
		h = 1;

	glViewport(0, 0, w, h);		// 视口占满整个窗口

	GLfloat fAspect = (GLfloat)w / (GLfloat)h;	// 计算窗口宽高比

    ShaderClass *shader = ShaderClass::GetShader();
	// 设置透视投影视域体
	mat4 matProj = Perspective(50.0f, fAspect, 0.1f, 70.0f);
	glUniformMatrix4fv(shader->Projection, 1, GL_TRUE, matProj);
	windowsWidth = w;
	windowsHigh = h;
}

void TimerFunction(int value)
{
    if (!stop )
    {
        mode->UpDate();
    }
	glutPostRedisplay();
	glutTimerFunc(1000 / 30, TimerFunction, value);
}

void Free()
{
    delete mode;
    mode = NULL;
    shader->Release();
    shader = NULL;
}
int main(int argc, char**argv)
{

	srand(time(NULL));
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH|GLUT_MULTISAMPLE);
	glutInitContextVersion(3, 1);
	glutInitContextFlags(GLUT_FORWARD_COMPATIBLE);
	glutInitWindowSize(800, 800);
	glutCreateWindow("骨骼动画演示Dome");

	glewExperimental = GL_TRUE;
	GLenum err = glewInit();
	if (err != GLEW_OK)
	{
		std::cout << "glewInit 失败, 退出程序." << std::endl;
		exit(EXIT_FAILURE); // 退出程序
	}
	glutDisplayFunc(mydisplay);
	// 设置键盘按键的回调函数
	glutKeyboardFunc(MyKeyDown);
	glutKeyboardUpFunc(MyKeyUp);
	glutPassiveMotionFunc(MouseMove);
	glutReshapeFunc(ChangeSize);
	glutTimerFunc(100, TimerFunction, 0);
	Init();
	glutMainLoop();
    Free();
	return 0;
}


