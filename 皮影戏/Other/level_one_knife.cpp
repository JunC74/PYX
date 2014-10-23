#include "level_one_knife.h"
#include "vds_object.h"
#include "operate.h"

bool mouseLkeyDown = false;
mat4 mat_projection;

void InitScreen()
{
    
    vec3 position[4] = {
        vec3(0, 540, 0),
        vec3(960, 540, 0),
        vec3(960, 0, 0),
        vec3(0, 0, 0),
    };
    vec2 tex_crood[4] = 
    {
        vec2(0, 1),
        vec2(1, 1),
        vec2(1, 0),
        vec2(0, 0),
    };

    GLushort index[6] = 
    {
        0, 1, 2,
        0, 3, 2,
    };
    glGenVertexArrays(1,&vao_screen);
    glBindVertexArray(vao_screen);

    GLuint bufferBOX;
    glGenBuffers(1,&bufferBOX);
    glBindBuffer(GL_ARRAY_BUFFER,bufferBOX);
    glBufferData(GL_ARRAY_BUFFER,
        sizeof(tex_crood) + sizeof(position),
        NULL,
        GL_STATIC_DRAW
        );
    glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(position), position);
    glBufferSubData(GL_ARRAY_BUFFER, sizeof(position), sizeof(tex_crood), tex_crood);

    GLuint index_buffer;
    glGenBuffers(1,&index_buffer);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER,index_buffer);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER,
        sizeof(index),
        index,
        GL_STATIC_DRAW
        );

    glEnableVertexAttribArray(shader->vPosition);
    glVertexAttribPointer(shader->vPosition, 3, GL_FLOAT,
        GL_FALSE, 0, BUFFER_OFFSET(0));

    glEnableVertexAttribArray(shader->vTexCoord);
    glVertexAttribPointer(
        shader->vTexCoord,
        2,
        GL_FLOAT,
        GL_FALSE,
        0,
        BUFFER_OFFSET(sizeof(position))
        );
}

void UpdateCamera()
{

    if (KeyDown[UP])
    {

        RmatCamera *= Translate(0.0,0.0,-5);
        matCamera = Translate(0.0,0.0,5)*matCamera;

    }

    if (KeyDown[DOWN])
    {
        RmatCamera *= Translate(0.0,0.0,5);
        matCamera = Translate(0.0,0.0,-5)*matCamera;

    }
    if (KeyDown[LEFT])
    {

        RmatCamera *= Translate(-1,0.0,0.);
        matCamera = Translate(1,0.0,0.0)*matCamera;

    }
    if (KeyDown[RIGHT])
    {
        RmatCamera *= Translate(1,0.0,0.0);
        matCamera = Translate(-1,0.0,0.0)*matCamera;
    }
}

void Init () 
{
    shader = ShaderClass::GetShader(0);
    shader->shader_program = InitShader("Res\\Shader\\vPhone.glsl", "Res\\Shader\\fPhone.glsl");
    GLuint program = shader->shader_program; 
    glUseProgram(program);
    shader->vPosition = glGetAttribLocation(program, "vPosition");
    shader->vNormal = glGetAttribLocation(program, "vNormal");
    shader->AmbientProduct = glGetUniformLocation(program, "AmbientProduct");
    shader->DiffuseProduct = glGetUniformLocation(program, "DiffuseProduct");
    shader->SpecularProduct = glGetUniformLocation(program, "SpecularProduct");
    shader->ModelView = glGetUniformLocation(program, "ModelView");
    shader->Projection = glGetUniformLocation(program, "Projection");
    shader->LightPosition = glGetUniformLocation(program, "LightPosition");
    shader->Shininess = glGetUniformLocation(program, "Shininess");
    shader->Emission = glGetUniformLocation(program, "Emission");
    shader->SpotDirection = glGetUniformLocation(program, "SpotDirection");
    shader->SpotCutOff = glGetUniformLocation(program, "SpotCutOff");
    shader->SpotExponent = glGetUniformLocation(program, "SpotExponent");
    shader->LightOn = glGetUniformLocation(program, "LightOn");
    shader->vTexCoord = glGetAttribLocation(program, "vTexCoord");
    shader->tex = glGetUniformLocation(program, "tex");
    shader->OnlyTex = glGetUniformLocation(program,"OnlyTex");          
    shader->pColor = glGetAttribLocation(program,"color");			    // 颜色索引
    shader->OnlyColor = glGetUniformLocation(program,"onlyColor");		// 由顶点颜色决定平面颜色

    glAlphaFunc(GL_GREATER, 0.1f);
    glEnable(GL_ALPHA_TEST);

    glGenTextures(1, &tex_screen);
    glBindTexture(GL_TEXTURE_2D, tex_screen);
    LoadTexture("Res\\Tex\\longgong.png");
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

    InitScreen();

    level_state = LEVEL_STATE_INDUCING;

    glClearColor(0.6, 0.4, 0.7, 1.0);

    // 开启深度检测
    glEnable(GL_DEPTH_TEST);
    //开启混合
    glEnable(GL_BLEND);
    //设置混合模式
    glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
    //质量最佳
    glPolygonMode(GL_FRONT, GL_NICEST);
}

int Logic ( int attention, int meditation,int blink_strength ) 
{
    UpdateCamera();
    return level_state;
}

void MyDisplay () 
{
    glUniformMatrix4fv(shader->Projection, 1, GL_TRUE, mat_projection);
    mat4 matModelView = matCamera;

    switch(gameState){
    case G_MENU:
    case G_GAMEING_1:
    case G_GAMESET:
    case G_GAMEHELP:
       
        glEnable(GL_DEPTH_TEST);
        glUniform1i(shader->OnlyTex, true);
        mvStack.push(matModelView);
        glBindVertexArray(vao_screen);
        glBindTexture(GL_TEXTURE_2D, tex_screen);  //绘制屏幕
        matModelView *= Translate(0, 0, 0);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, NULL);
        matModelView = mvStack.pop();
        break;
    default:
        break;
    }

}

void ChangeSize ( int w, int h ) {
    // 防止除0
    if(h == 0)
        h = 1;

    glViewport(0, 0, w, h);		// 视口占满整个窗口

    GLfloat fAspect = (GLfloat)w / (GLfloat)h;	// 计算窗口宽高比

    // 设置正视投影视域体
    mat_projection = Ortho(-10, 970, -10, 550, 200, -200);
    windowsWidth = w;
    windowsHigh = h;
}

void TimerFunction (int value ) {
    glutPostRedisplay();
    glutTimerFunc(1000 / 60, TimerFunction, value );
}

void MouseMove ( int x, int y ) {
    lastPoint.x = x;
    lastPoint.y = y;

}

void MouseKey(int botton,int state,int x,int y)
{
    if(state == GLUT_DOWN)
    {
        switch (botton)
        {
        case GLUT_LEFT_BUTTON:mouseLkeyDown =true;break;

        }
    }
    if(state == GLUT_UP)
    {
        switch (botton)
        {
            //case GLUT_LEFT_BUTTON:mouseLkeyDown=false;break;

        }
    }
}

void MyKeyUp ( unsigned char Key, int x, int y ) {
    if(Key=='w'||Key=='W')
    {
        KeyDown[UP]=false;
    }
    if(Key=='s'||Key=='S')
    {
        KeyDown[DOWN]=false;
    }
    if(Key=='a'||Key=='A')
    {
        KeyDown[LEFT]=false;
    }
    if(Key=='d'||Key=='D')
    {
        KeyDown[RIGHT]=false;
    }
}

void MyKeyDown ( unsigned char Key, int x, int y ) 
{
    if(Key=='w'||Key=='W')
    {
        KeyDown[UP]=true;
    }
    if(Key=='s'||Key=='S')
    {
        KeyDown[DOWN]=true;
    }
    if(Key=='a'||Key=='A')
    {
        KeyDown[LEFT]=true;
    }
    if(Key=='d'||Key=='D')
    {
        KeyDown[RIGHT]=true;
    }
}

void FreeResources () {
    glDeleteTextures ( 1, &tex_screen );
    glDeleteVertexArrays ( 1, &vao_screen );
}

