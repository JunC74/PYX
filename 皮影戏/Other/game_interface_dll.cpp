#define GAME_DLL_API extern "C" _declspec(dllexport)

#include "game_interface_dll.h"
#include "vds_object.h"
#include "operate.h"

bool mouseLkeyDown = false;
VDSObject* SWK_Frame[7];


void SetMaterial(int lightNum, const materialStruect &material, lightingStruct const *light)
{
    for (int i = 0; i < lightNum; i++)
    {
        glUniform4fv(shader->AmbientProduct + i, 1, material.ambient * light[i].ambient);
        glUniform4fv(shader->DiffuseProduct + i, 1, material.diffuse * light[i].diffuse);
        glUniform4fv(shader->SpecularProduct + i, 1, material.specular * light[i].specular);
    }
    glUniform1f(shader->Shininess, material.shininess);
    glUniform4fv(shader->Emission, 1, material.emission);
}

void initFrame()
{
    for (int i=0;i<SWK_number;i++)
    {
        SWK_Frame[i] = new VDSObject(SWK_Nmae[i],i);	
    }
}

void initPower()
{
    power.ptPower = new point3[6];
    power.colorPower = new vec3[6];
    power.percent = 100.0;
    power.ptPower[0] = point3(0.0,0.0,0.0);power.colorPower[0] = vec3(1.0,1.0,0.0);
    power.ptPower[1] = point3(0.0,-1.0,0.0);power.colorPower[1] = vec3(1.0,1.0,0.0);
    power.ptPower[2] = point3(power.percent,-1.0,0.0);power.colorPower[2] = vec3(1.0,1-power.percent/100.0,0.0);
    power.ptPower[3] = point3(power.percent,-1.0,0.0);power.colorPower[3] = vec3(1.0,1-power.percent/100.0,0.0);
    power.ptPower[4] = point3(power.percent,0.0,0.0);power.colorPower[4] = vec3(1.0,1-power.percent/100.0,0.0);
    power.ptPower[5] = point3(0.0,0.0,0.0);power.colorPower[5] = vec3(1.0,1.0,0.0);

    power.t = vec3(-200,110,-150.0);
    power.s = vec3(2,15.0,1.0);
    power.d = false;

    glGenVertexArrays(1,&power.vaoPower);
    glBindVertexArray(power.vaoPower);

    glGenBuffers(1,&power.BufferPower);
    glBindBuffer(GL_ARRAY_BUFFER,power.BufferPower);
    glBufferData(GL_ARRAY_BUFFER,2*sizeof(point3)*6,NULL,GL_DYNAMIC_DRAW);
    glBufferSubData(GL_ARRAY_BUFFER,0,sizeof(point3)*6,power.ptPower);
    glBufferSubData(GL_ARRAY_BUFFER,sizeof(point3)*6,sizeof(vec3)*6,power.colorPower);

    glEnableVertexAttribArray(shader->vPosition);
    glVertexAttribPointer(shader->vPosition,3,GL_FLOAT,GL_FALSE,0,BUFFER_OFFSET(0));
    glEnableVertexAttribArray(shader->pColor);
    glVertexAttribPointer(shader->pColor,3,GL_FLOAT,GL_FALSE,0,BUFFER_OFFSET(sizeof(point3)*6));
}
void updataPower(){
    power.ptPower[2] = point3(power.percent,-1.0,0.0);power.colorPower[2] = vec3(1.0,1-power.percent/100.0,0.0);
    power.ptPower[3] = point3(power.percent,-1.0,0.0);power.colorPower[3] = vec3(1.0,1-power.percent/100.0,0.0);
    power.ptPower[4] = point3(power.percent,0.0,0.0);power.colorPower[4] = vec3(1.0,1-power.percent/100.0,0.0);

    glBindBuffer(GL_ARRAY_BUFFER,power.BufferPower);
    glBufferSubData(GL_ARRAY_BUFFER,0,sizeof(point3)*6,power.ptPower);
    glBufferSubData(GL_ARRAY_BUFFER,sizeof(point3)*6,sizeof(vec3)*6,power.colorPower);
}

void BOXFace(point3 a,point3 b,point3 c,point3 d,vec3 n)
{
    static int kk =0;
    nBOX[kk]=n;texBOX[kk]=vec2(0.0,1.0);ptBOX[kk++]=a;
    nBOX[kk]=n;texBOX[kk]=vec2(0.0,0.0);ptBOX[kk++]=b;
    nBOX[kk]=n;texBOX[kk]=vec2(1.0,0.0);ptBOX[kk++]=c;
    nBOX[kk]=n;texBOX[kk]=vec2(0.0,1.0);ptBOX[kk++]=a;
    nBOX[kk]=n;texBOX[kk]=vec2(1.0,0.0);ptBOX[kk++]=c;
    nBOX[kk]=n;texBOX[kk]=vec2(1.0,1.0);ptBOX[kk++]=d;
}

void InitBOX()
{
    NumBOX =36;
    ptBOX = new point3[NumBOX];
    nBOX = new vec3[NumBOX];
    texBOX = new vec2[NumBOX];
    point3 p[8]={ 
        vec3(-1.0,1.0,0.0),
        vec3(-1.0,-1.0,0.0),
        vec3(1.0,-1.0,0.0),
        vec3(1.0,1.0,0.0),

        vec3(-1.0,1.0,-2.0),
        vec3(-1.0,-1.0,-2.0),
        vec3(1.0,-1.0,-2.0),
        vec3(1.0,1.0,-2.0),	
    };
    BOXFace(p[0],p[1],p[2],p[3],vec3(0.0,0.0,1.0));//前面
    BOXFace(p[3],p[2],p[6],p[7],vec3(1.0,0.0,0.0));//右面
    BOXFace(p[0],p[3],p[7],p[4],vec3(0.0,1.0,0.0));//上面
    BOXFace(p[4],p[5],p[1],p[0],vec3(-1.0,0.0,0.0));//左面
    BOXFace(p[1],p[5],p[6],p[2],vec3(0.0,-1.0,0.0));//下面
    BOXFace(p[7],p[6],p[5],p[4],vec3(0.0,0.0,-1.0));//后面

    glGenVertexArrays(1,&vaoBOX);
    glBindVertexArray(vaoBOX);

    GLuint bufferBOX;
    glGenBuffers(1,&bufferBOX);
    glBindBuffer(GL_ARRAY_BUFFER,bufferBOX);
    glBufferData(GL_ARRAY_BUFFER,
        (sizeof(point3)+sizeof(point3)+sizeof(vec2))*NumBOX,
        NULL,
        GL_STATIC_DRAW);
    glBufferSubData(GL_ARRAY_BUFFER,0,sizeof(point3)*NumBOX,ptBOX);
    glBufferSubData(GL_ARRAY_BUFFER,sizeof(point3)*NumBOX,sizeof(point3)*NumBOX,nBOX);
    glBufferSubData(GL_ARRAY_BUFFER,(sizeof(point3)+sizeof(point3))*NumBOX,sizeof(vec2)*NumBOX,texBOX);
    glEnableVertexAttribArray(shader->vPosition);
    glVertexAttribPointer(shader->vPosition,3,GL_FLOAT,
        GL_FALSE,0,BUFFER_OFFSET(0));
    glEnableVertexAttribArray(shader->vNormal);
    glVertexAttribPointer(shader->vNormal,3,GL_FLOAT,
        GL_FALSE,0,BUFFER_OFFSET(sizeof(point3)*NumBOX));
    glEnableVertexAttribArray(shader->vTexCoord);
    glVertexAttribPointer(
        shader->vTexCoord,
        2,
        GL_FLOAT,
        GL_FALSE,
        0,
        BUFFER_OFFSET(2*(sizeof(point3))*NumBOX)
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

void BuildSL(GLsizei l,GLfloat r)
{
    NumSL = 3;
    int index=0;
    ptSL = new point3[NumSL];
    texSL = new vec2[NumSL];

    ptSL[0] = point3(0.0,250.0,0.0);
    texSL[0] = vec2(0.5,0.5);
    ptSL[1]=point3(-r,-120,0.0);
    ptSL[2]=point3(r,-120,0.0);
}

void initLS()
{
    BuildSL(15,60.0);
    glGenVertexArrays(1,&vaoSL);
    glBindVertexArray(vaoSL);

    glGenBuffers(1,&BufferSL);
    glBindBuffer(GL_ARRAY_BUFFER,BufferSL);
    glBufferData(GL_ARRAY_BUFFER,(sizeof(point3)+sizeof(vec2))*NumSL,NULL,GL_STATIC_DRAW);
    glBufferSubData(GL_ARRAY_BUFFER,0,sizeof(point3)*NumSL,ptSL);
    glBufferSubData(GL_ARRAY_BUFFER,sizeof(point3)*NumSL,sizeof(vec2)*NumSL,texSL);

    glEnableVertexAttribArray(shader->vPosition);
    glVertexAttribPointer(shader->vPosition,3,GL_FLOAT,GL_FALSE,0,BUFFER_OFFSET(0));
    glEnableVertexAttribArray(shader->vTexCoord);
    glVertexAttribPointer(shader->vTexCoord,2,GL_FLOAT,
        GL_FALSE,0,BUFFER_OFFSET(sizeof(point3)*NumSL));
}

//生成球
void BuildSphere(GLfloat radius, GLsizei columns, GLsizei rows)
{
    int index = 0;	// 数组索引
    point3 *vertices = new point3[(rows + 1) * (columns+1)]; // 存放不同顶点的数组


    for (int r = 0; r <= rows; r++)
    {
        float v = (float)r / (float)rows;  // [0,1]
        float theta1 = v * (float)M_PI;	   // [0,PI]

        point3 temp(0, 0, 1);
        point3 n = temp;
        GLfloat cosTheta1 = cos(theta1);
        GLfloat sinTheta1 = sin(theta1);
        n.x = temp.x * cosTheta1 + temp.z * sinTheta1;
        n.z = -temp.x * sinTheta1 + temp.z * cosTheta1;

        for (int c = 0; c <= columns; c++)
        {
            float u = (float)c / (float)columns; // [0,1]
            float theta2 = u * (float)(M_PI * 2); // [0,2PI]
            point3 pos = n;
            temp = n;
            GLfloat cosTheta2 = cos(theta2);
            GLfloat sinTheta2 = sin(theta2);

            pos.x = temp.x * cosTheta2 - temp.y * sinTheta2;
            pos.y = temp.x * sinTheta2 + temp.y * cosTheta2;

            point3 posFull = pos;
            posFull *= radius;

            vertices[index++] = posFull;
        }
    }

    /*生成最终顶点数组数据*/
    if(ptSphere)
        delete ptSphere;	// 如果sphere已经有数据，先回收
    NumVerticesSphere = rows * columns * 6; // 顶点数
    ptSphere = new point3[NumVerticesSphere];
    texSphere = new vec2[NumVerticesSphere];

    int colLength = columns + 1;
    index = 0;
    for (int r = 0; r < rows; r++)
    {
        int offset = r * colLength;

        for (int c = 0; c < columns; c++)
        {
            int ul = offset  +  c;						// 左上
            int ur = offset  +  c + 1;					// 右上
            int br = offset  +  (c + 1 + colLength);	// 右下
            int bl = offset  +  (c + 0 + colLength);	// 左下

            // 由两条经线和纬线围成的矩形
            texSphere[index]= vec2((GLfloat)c/columns,(GLfloat)r/rows);
            ptSphere[index++] = vertices[ul];
            texSphere[index]= vec2((GLfloat)c/columns,(GLfloat)(r+1)/rows);
            ptSphere[index++] = vertices[bl];
            texSphere[index]= vec2((GLfloat)(c+1)/columns,(GLfloat)(r+1)/rows);
            ptSphere[index++] = vertices[br];
            texSphere[index]= vec2((GLfloat)c/columns,(GLfloat)r/rows);
            ptSphere[index++] = vertices[ul];
            texSphere[index]= vec2((GLfloat)(c+1)/columns,(GLfloat)(r+1)/rows);
            ptSphere[index++] = vertices[br];
            texSphere[index]= vec2((GLfloat)(c+1)/columns,(GLfloat)r/rows);
            ptSphere[index++] = vertices[ur];
        }
    }

    delete []vertices;
}

void InitSphere()
{

    BuildSphere(0.5,30,30);

    //创建球对应的顶点数组对象VAO
    glGenVertexArrays(1,&vaoSphere);
    glBindVertexArray(vaoSphere);

    GLuint bufferSphere;
    glGenBuffers(1,&bufferSphere);
    glBindBuffer(GL_ARRAY_BUFFER,bufferSphere);
    glBufferData(GL_ARRAY_BUFFER,(sizeof(point3)+sizeof(vec2))*NumVerticesSphere,NULL,GL_STATIC_DRAW);
    glBufferSubData(GL_ARRAY_BUFFER,0,sizeof(point3)*NumVerticesSphere,ptSphere);
    glBufferSubData(GL_ARRAY_BUFFER,sizeof(point3)*NumVerticesSphere,sizeof(vec2)*NumVerticesSphere,texSphere);
    delete []ptSphere;
    glEnableVertexAttribArray(shader->vPosition);
    glVertexAttribPointer(shader->vPosition,3,GL_FLOAT,GL_FALSE,0,BUFFER_OFFSET(0));
    glEnableVertexAttribArray(shader->vNormal);
    glVertexAttribPointer(shader->vNormal,3,GL_FLOAT,GL_FALSE,0,BUFFER_OFFSET(0));
    glEnableVertexAttribArray(shader->vTexCoord);
    glVertexAttribPointer(shader->vTexCoord,2,GL_FLOAT,
        GL_FALSE,0,BUFFER_OFFSET(sizeof(point3)*NumVerticesSphere));

    //设置材质
    GraphMaterial.ambient = color4(0.1, 0.1, 0.1, 1.0);
    GraphMaterial.diffuse = color4(0.8, 0.8, 0.8, 1.0);
    GraphMaterial.specular = color4(0.3, 0.3, 0.3, 1.0);
    GraphMaterial.emission = color4(0.0, 0.0, 0.0, 0.0);
    GraphMaterial.shininess = 1100;	

    alphaMaterial.ambient = color4(0.1, 0.1, 0.1, 0.2);
    alphaMaterial.diffuse = color4(0.8, 0.8, 0.8, 0.2);
    alphaMaterial.specular = color4(0.3, 0.3, 0.3, 0.2);
    alphaMaterial.emission = color4(0.0, 0.0, 0.0, 0.0);
    alphaMaterial.shininess = 110;	

    lightMaterial.ambient = color4(0.1, 0.1, 0.0, 1);
    lightMaterial.diffuse = color4(0.8, 0.8, 0.0, 1);
    lightMaterial.specular = color4(0.3, 0.3, 0.0, 1);
    lightMaterial.emission = color4(0.0, 0.0, 0.0, 1);
    lightMaterial.shininess = 110;

}

GLuint bufferCurtains;

void InitCurtains(){
    //创建地面对应的顶点数组对象（VAO）
    glGenVertexArrays(1,&CurtainsVao);
    glBindVertexArray(CurtainsVao);
    //创建并初始化一个缓冲区对象（BUFFER OBJECT）
    /*GLuint bufferCurtains;*/
    glGenBuffers(1,&bufferCurtains);
    glBindBuffer(GL_ARRAY_BUFFER,bufferCurtains);
    glBufferData(GL_ARRAY_BUFFER,
        (sizeof(point3)+sizeof(point3)+sizeof(vec2))*Curtains->getNum(),
        NULL,
        GL_DYNAMIC_DRAW);
    glBufferSubData(GL_ARRAY_BUFFER,0,sizeof(point3)*Curtains->getNum(),Curtains->getP());
    glBufferSubData(GL_ARRAY_BUFFER,sizeof(point3)*Curtains->getNum(),sizeof(point3)*Curtains->getNum(),Curtains->getN());
    glBufferSubData(GL_ARRAY_BUFFER,(sizeof(point3)+sizeof(point3))*Curtains->getNum(),sizeof(vec2)*Curtains->getNum(),Curtains->getT());
    glEnableVertexAttribArray(shader->vPosition);
    glVertexAttribPointer(
        shader->vPosition,
        3,
        GL_FLOAT,
        GL_FALSE,
        0,
        BUFFER_OFFSET(0)
        );
    glEnableVertexAttribArray(shader->vNormal);
    glVertexAttribPointer(
        shader->vNormal,
        3,
        GL_FLOAT,
        GL_FALSE,
        0,
        BUFFER_OFFSET(sizeof(point3)*Curtains->getNum())
        );
    glEnableVertexAttribArray(shader->vTexCoord);
    glVertexAttribPointer(
        shader->vTexCoord,
        2,
        GL_FLOAT,
        GL_FALSE,
        0,
        BUFFER_OFFSET(2*(sizeof(point3))*Curtains->getNum())
        );
}


void initButton()
{
    StartButton.t = vec3(-150,100,-270);
    StartButton.s = vec3(40,20,1);
    StartButton.is = true;
    SetButton.t = vec3(-150,50,-270);
    SetButton.s = vec3(40,20,1);
    SetButton.is = false;
    HelpButton.t = vec3(-150,0,-270);
    HelpButton.s = vec3(40,20,1);
    HelpButton.is = false;
    ExitButton.t = vec3(-150,-50,-270);
    ExitButton.s = vec3(40,20,1);
    ExitButton.is = false;
}
bool updataButton()
{
    bool ok =false;
    StartButton.is=false;
    SetButton.is = false;
    HelpButton.is = false;
    ExitButton.is = false;
    switch(ButtonChange)
    {
    case 0:StartButton.is=true;break;
    case 1:SetButton.is = true;break;
    case 2:HelpButton.is = true;break;
    case 3:ExitButton.is = true;break;
    }

    if(StartButton.t.z<-20)StartButton.t.z+=5;
    if(SetButton.t.z<-20)SetButton.t.z+=5;
    if(HelpButton.t.z<-20)HelpButton.t.z+=5;
    if(ExitButton.t.z<-20)ExitButton.t.z+=5;
    else 
        ok= true;
    return ok;
}
void initSunWuKong()
{
    SunWuKong.t = vec3(-50,-150,-270);
    SunWuKong.s = vec3(0.5,0.5,0.5);
    SunWuKong.ID = 0;
    SunWuKong.rotateD = vec3(0.0,1.0,0.0);
    SunWuKong.angle = 0.0;
}
void updataSunWuKong(WORD state)
{
    if(state==G_MENU){
        if(SunWuKong.angle<180)SunWuKong.angle++;
        else {
            if(SunWuKong.angle<360)
            {
                SunWuKong.t.z+=3;
                SunWuKong.angle+=2;
            }
        }
    }
    if(state==G_GAMEING_1)
    {
        if(SunWuKong.t.z>-270)SunWuKong.t.z-=5;
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

    //传贴图

    glGenTextures(1, &tex_graph);
    glBindTexture(GL_TEXTURE_2D, tex_graph);
    LoadTexture("Res\\Tex\\chuanglian.jpg");
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

    glGenTextures(1, &tex_SL);
    glBindTexture(GL_TEXTURE_2D, tex_SL);
    LoadTexture("Res\\Tex\\l.png");
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

    glGenTextures(1, &tex_Ground);
    glBindTexture(GL_TEXTURE_2D, tex_Ground);
    LoadTexture("Res\\Tex\\mu.jpg");
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

    glGenTextures(1, &tex_back);
    glBindTexture(GL_TEXTURE_2D, tex_back);
    LoadTexture("Res\\Tex\\back.jpg");
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

    glGenTextures(1, &tex_longgong);
    glBindTexture(GL_TEXTURE_2D, tex_longgong);
    LoadTexture("Res\\Tex\\longgong.png");
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

    glGenTextures(8,texPeople);
    for (int i=0;i<8;i++){
        glBindTexture(GL_TEXTURE_2D,texPeople[i]);
        LoadTexture(fileName[i]);
        glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
    }

    glGenTextures(4,texButton);
    for (int i=0;i<4;i++){
        glBindTexture(GL_TEXTURE_2D,texButton[i]);
        LoadTexture(bottonName[i]);
        glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
    }

    glGenTextures(4,texTalk);
    for (int i=0;i<4;i++){
        glBindTexture(GL_TEXTURE_2D,texTalk[i]);
        LoadTexture(talkName[i]);
        glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
    }

    //传光源的控制量
    for(int i = 0; i < 4; i++)
    {
        glUniform1i(shader->LightOn + i, bLightOn[i]);
    }

    //设置手电筒
    std::cout<<glGetError()<<std::endl;
    glUniform3fv(shader->SpotDirection,1,
        vec3(0.0,-1.0,0.0));
    glUniform1f(shader->SpotCutOff,16);
    glUniform1f(shader->SpotExponent,3);

    glUniform3fv(shader->SpotDirection+1,1,
        vec3(0.0,-1.0,0.0));
    glUniform1f(shader->SpotCutOff+1,16);
    glUniform1f(shader->SpotExponent+1,3);


    Curtains = new curtains(30,20,8.0,0.5,0.02);
    InitCurtains();
    InitSphere();
    initLS();
    InitBOX();
    initButton();
    initSunWuKong();//初始化孙悟空运动属性
    initFrame();	//初始化孙悟空VDS动作
    initPower();//初始化能量槽
    whiteLight.ambient = color4(0.2, 0.2, 0.2, 1.0);
    whiteLight.diffuse = color4(1.0, 1.0, 1.0, 1.0);
    whiteLight.specular = color4(1.0, 1.0, 1.0, 1.0);

    redLight.ambient = color4(0.2, 0.0, 0.0, 1.0);
    redLight.diffuse = color4(1.0, 0.0, 0.0, 1.0);
    redLight.specular = color4(1.0, 0.0, 0.0, 1.0);

    yellowLight.ambient = color4(0.0, 0.0, 0.0, 1.0);
    yellowLight.diffuse = color4(1.0, 1.0, 0.0, 1.0);
    yellowLight.specular = color4(1.0, 1.0, 0.0, 1.0);

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
float gridSize = 8.0;//网格大小（拉伸窗帘）
float k = 0,s =0.1;//探照灯摆动的角度k和速度s~
float start;
int Logic ( int attention, int meditation,int blink_strength ) {
    UpdateCamera();

    switch(gameState)
    {
    case G_MENU:
        SWK_Frame[ButtonChange]->UpDate();
        updataSunWuKong(G_MENU);
        if(SunWuKong.angle==360)
            if(updataButton())
                lockKey=false;
        //更新窗帘
        gridSize+=0.05;
        if(gridSize>8.5)gridSize = 8.5;
        start = - Curtains->getW() / 2 * Curtains->getEdge();

        for(int j = 0; j < Curtains->getW(); j+=3){
            Curtains->setParticlePoistion(0,j,0,start + j * gridSize);
        }

        Curtains->UpdateParticle();
        glBindBuffer(GL_ARRAY_BUFFER,bufferCurtains);
        glBufferSubData(GL_ARRAY_BUFFER,0,sizeof(point3)*Curtains->getNum(),Curtains->getP());

        ptSL[1] = point3(200*tan((k-16)/180*M_PI),-120,0.0);
        ptSL[2] = point3(200*tan((k+16)/180*M_PI),-120,0.0);
        k+=s;
        if(k>45.0||k<-45.0)
            s=-s;
        glBindBuffer(GL_ARRAY_BUFFER,BufferSL);
        glBufferSubData(GL_ARRAY_BUFFER,0,sizeof(point3)*NumSL,ptSL);
        break;

    case G_GAMEING_1:
        SWK_Frame[ButtonChange]->UpDate();
        updataSunWuKong(G_GAMEING_1);
        if(SunWuKong.t.z<=-270)

            if (operation::IsMovingCemera)
            {
                if(operation::moveCamera(matCamera,RmatCamera,vec3(0.0,0.0,1.0),3,250))
                {
                    power.d =true;
                    lockKey =false;
                }
            }

            //更新窗帘
            gridSize+=0.1;
            if(gridSize>8.5)gridSize = 8.5;
            start = - Curtains->getW() / 2 * Curtains->getEdge();

            for(int j = 0; j < Curtains->getW(); j+=3){
                Curtains->setParticlePoistion(0,j,0,start + j * gridSize);
            }

            Curtains->UpdateParticle();
            glBindBuffer(GL_ARRAY_BUFFER,bufferCurtains);
            glBufferSubData(GL_ARRAY_BUFFER,0,sizeof(point3)*Curtains->getNum(),Curtains->getP());

            if(power.percent>0)power.percent-=1.0;
            updataPower();
            if(power.percent>80)
            {
                calculagraph+=1000.0/60.0;
            }
            else
                calculagraph=0;
            if(calculagraph>3000)
            {
                gameState=G_GAMEING_2;
                SWK_FRAME_ID = 4;
                power.percent=50.0f;
                power.t.z=-140;
            }
            break;
    case G_GAMEING_2:
        updataPower();
        SWK_Frame[SWK_FRAME_ID]->UpDate();
        break;

    default:
        break;

    }

    glutPostRedisplay();
    return level_state;
}

void MyDisplay () {
    
    glUniformMatrix4fv(shader->Projection, 1, GL_TRUE, mat_projection);
    //mat4 matModelView = LookAt(vec4(0.0,0.0,0.0,1.0),vec4(0.0,0.0,-50.0,1.0),vec4(0.0,1.0,0.0,0.0))*Translate(0.0,0.0,-350)*matCamera;
    mat4 matModelView = Translate(0.0,0.0,-350)*matCamera;
    lightingStruct light[] = {whiteLight, redLight, yellowLight,yellowLight};
    //glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

    //光源位置
    vec4 lightPos(0.0, 10.0, 40.0, 0.0);
    glUniform4fv(shader->LightPosition, 1, matModelView*lightPos);

    switch(gameState){
    case G_MENU:
    case G_GAMEING_1:
    case G_GAMESET:
    case G_GAMEHELP:

        //绘制包围球
        glUniform1i(shader->OnlyTex, true);
        mvStack.push(matModelView);
        glUniform1i(shader->OnlyTex, true);
        glBindVertexArray(vaoSphere);
        glBindTexture(GL_TEXTURE_2D, tex_back);
        SetMaterial(4, GraphMaterial, light);
        matModelView *=Translate(0.0,100.0,-200);
        matModelView *= RotateX(90);
        matModelView *= Scale(1500,1500,1500);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,0,NumVerticesSphere);
        glUniform1i(shader->OnlyTex, false);
        matModelView = mvStack.pop();

        //绘制窗帘
        mvStack.push(matModelView);
        glBindTexture(GL_TEXTURE_2D, tex_graph);
        glBindVertexArray(CurtainsVao);
        SetMaterial(4, GraphMaterial, light);	
        matModelView *= Translate(-100.0, 40.0, -240.0f);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,0,Curtains->getNum());
        matModelView=mvStack.pop();

        mvStack.push(matModelView);
        matModelView *= Translate(100.0, 40.0, -240.0f);
        matModelView *= RotateY(180);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        Curtains->contraryNormal();
        glBindBuffer(GL_ARRAY_BUFFER,bufferCurtains);
        glBufferSubData(GL_ARRAY_BUFFER,sizeof(point3)*Curtains->getNum(),sizeof(point3)*Curtains->getNum(),Curtains->getN());
        glDrawArrays(GL_TRIANGLES,0,Curtains->getNum());
        Curtains->contraryNormal();
        glBindBuffer(GL_ARRAY_BUFFER,bufferCurtains);
        glBufferSubData(GL_ARRAY_BUFFER,sizeof(point3)*Curtains->getNum(),sizeof(point3)*Curtains->getNum(),Curtains->getN());
        matModelView = mvStack.pop();
        
        glBindVertexArray(vaoBOX);//绘制舞台
        glBindTexture(GL_TEXTURE_2D, tex_Ground);
        mvStack.push(matModelView);
        matModelView *= Translate(0.0,-120.0,100.0);
        matModelView *= Scale(300,10.0,300.0);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,0,NumBOX);
        matModelView = mvStack.pop();

        mvStack.push(matModelView);
        matModelView *= Translate(-300.0,-120.0,100.0);
        matModelView *= Scale(20.0,50.0,300.0);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,6,12);
        matModelView = mvStack.pop();

        mvStack.push(matModelView);
        matModelView *= Translate(300.0,-120.0,100.0);
        matModelView *= Scale(20.0,50.0,300.0);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,12,12);
        matModelView = mvStack.pop();

        glEnable(GL_DEPTH_TEST);
        
        mvStack.push(matModelView);
        glBindVertexArray(vaoBOX);
        glBindTexture(GL_TEXTURE_2D, tex_longgong);  //绘制屏幕
        SetMaterial(4, alphaMaterial, light);
        matModelView *= Translate(0.0,0.0,-250);
        matModelView *= Scale(220.0,120.0,1);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,0,6);
        matModelView = mvStack.pop();
        
        mvStack.push(matModelView);
        glBindVertexArray(vaoBOX);	//绘制观众
        glBindTexture(GL_TEXTURE_2D, texPeople[7]);
        SetMaterial(4, GraphMaterial, light);
        matModelView *= Translate(-380.0,0.0,-250.0);
        matModelView *= RotateY(-45);
        matModelView *= Scale(1.0,100.0,50.0);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,6,6);
        matModelView = mvStack.pop();

        mvStack.push(matModelView);
        glBindTexture(GL_TEXTURE_2D, texPeople[3]);
        matModelView *= Translate(-380.0,0.0,-150.0);
        matModelView *= RotateY(-45);
        matModelView *= Scale(1.0,100.0,50.0);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,6,6);
        matModelView = mvStack.pop();

        mvStack.push(matModelView);
        glBindTexture(GL_TEXTURE_2D, texPeople[0]);
        matModelView *= Translate(-380.0,0.0,-50.0);
        matModelView *= RotateY(-45);
        matModelView *= Scale(1.0,100.0,50.0);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,6,6);
        matModelView = mvStack.pop();

        mvStack.push(matModelView);
        glBindTexture(GL_TEXTURE_2D, texPeople[6]);
        matModelView *= Translate(380.0,0.0,-250.0);
        matModelView *= RotateY(45);
        matModelView *= Scale(1.0,100.0,50.0);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,18,6);
        matModelView = mvStack.pop();

        mvStack.push(matModelView);
        glBindTexture(GL_TEXTURE_2D, texPeople[4]);
        matModelView *= Translate(380.0,0.0,-80.0);
        matModelView *= RotateY(45);
        matModelView *= Scale(1.0,100.0,80.0);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,18,6);
        matModelView = mvStack.pop();

        mvStack.push(matModelView);
        glBindTexture(GL_TEXTURE_2D, texPeople[1]);
        matModelView *= Translate(380.0,0.0,-50.0);
        matModelView *= RotateY(45);
        matModelView *= Scale(1.0,100.0,50.0);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,18,6);
        matModelView = mvStack.pop();
        
        if(gameState==G_MENU){
            mvStack.push(matModelView);
            glUniform1i(shader->OnlyTex, true);
            SetMaterial(4, lightMaterial, light);	
            glBindVertexArray(vaoSL);		//绘制探照灯
            glBindTexture(GL_TEXTURE_2D, tex_SL);
            SetMaterial(4, alphaMaterial, light);
            matModelView *= Translate(-200.0,0.0, -150.0f);
            glUniform4fv(shader->LightPosition+2,1,matModelView*vec4(0.0,80.0,0.0,1.0));
            glUniform4fv(shader->SpotDirection,1, matModelView * vec4(tan(k/180.0*M_PI), -1.0, 0.0, 0.0));
            glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
            glDrawArrays(GL_TRIANGLE_FAN,0,NumSL);
            matModelView = mvStack.pop();

            mvStack.push(matModelView);
            matModelView *= Translate(200.0,0.0, -150.0f);
            glUniform4fv(shader->LightPosition+3,1,matModelView*vec4(0.0,80.0,0.0,1.0));
            glUniform4fv(shader->SpotDirection+1,1, matModelView * vec4(tan(k/180.0*M_PI),-1.0,0.0, 0.0));
            glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
            glDrawArrays(GL_TRIANGLE_FAN,0,NumSL);
            glUniform1i(shader->OnlyTex, false);
            matModelView = mvStack.pop();
        }
        
        glBindVertexArray(vaoBOX);//绘制按钮
        SetMaterial(4, GraphMaterial, light);	

        mvStack.push(matModelView); 
        glBindTexture(GL_TEXTURE_2D, texButton[0]);
        matModelView *= Translate(StartButton.t);
        if(StartButton.is)matModelView *= RotateY(20);
        matModelView *= Scale(StartButton.s);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,0,6);
        matModelView = mvStack.pop();

        mvStack.push(matModelView); 
        glBindTexture(GL_TEXTURE_2D, texButton[1]);
        matModelView *= Translate(SetButton.t);
        if(SetButton.is)matModelView *= RotateY(20);
        matModelView *= Scale(SetButton.s);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,0,6);
        matModelView = mvStack.pop();

        mvStack.push(matModelView);  
        glBindTexture(GL_TEXTURE_2D, texButton[2]);
        matModelView *= Translate(HelpButton.t);
        if(HelpButton.is)matModelView *= RotateY(20);
        matModelView *= Scale(HelpButton.s);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,0,6);
        matModelView = mvStack.pop();

        mvStack.push(matModelView);  
        glBindTexture(GL_TEXTURE_2D, texButton[3]);
        matModelView *= Translate(ExitButton.t);
        if(ExitButton.is)matModelView *= RotateY(20);
        matModelView *= Scale(ExitButton.s);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,0,6);
        matModelView = mvStack.pop();


        //绘制悟空
        if (!SWK_Frame[ButtonChange]->IsEnabled())
        {
            mvStack.push(matModelView);
            glUniform1i(shader->OnlyTex, true);
            matModelView *= Rotate(SunWuKong.angle,SunWuKong.rotateD.x,SunWuKong.rotateD.y,SunWuKong.rotateD.z);
            matModelView *= Translate(SunWuKong.t);
            matModelView *= Scale(SunWuKong.s);
            SWK_Frame[ButtonChange]->SetModelView(matModelView);
            SWK_Frame[ButtonChange]->Draw();
            glUniform1i(shader->OnlyTex, false);
            matModelView = mvStack.pop();
        }

        glBindVertexArray(vaoBOX);
        glUniform1i(shader->OnlyTex, true);
        mvStack.push(matModelView);  
        glBindTexture(GL_TEXTURE_2D, texTalk[ButtonChange]);
        matModelView *= Translate(SunWuKong.t.x+20.0,SunWuKong.t.y+200.0,SunWuKong.t.z-50.0);
        matModelView *= Scale(80,40,0);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,0,6);
        matModelView = mvStack.pop();
        glUniform1i(shader->OnlyTex, false);

        if(power.d){
            glBindVertexArray(power.vaoPower);//绘制能量槽
            glUniform1i(shader->OnlyColor, true);
            mvStack.push(matModelView);  
            matModelView *= Translate(power.t);
            matModelView *= Scale(power.s);
            glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
            glDrawArrays(GL_TRIANGLES,0,6);
            matModelView = mvStack.pop();
            glUniform1i(shader->OnlyColor, false);
        }
        break;

    case G_GAMEING_2:
        //绘制悟空
        if (!SWK_Frame[ButtonChange]->IsEnabled())
        {
            mvStack.push(matModelView);
            glUniform1i(shader->OnlyTex, true);
            matModelView *= Rotate(SunWuKong.angle,SunWuKong.rotateD.x,SunWuKong.rotateD.y,SunWuKong.rotateD.z);
            matModelView *= Translate(SunWuKong.t);
            matModelView *= Scale(SunWuKong.s);
            SWK_Frame[SWK_FRAME_ID]->SetModelView(matModelView);
            SWK_Frame[SWK_FRAME_ID]->Draw();
            glUniform1i(shader->OnlyTex, false);
            matModelView = mvStack.pop();

            if(power.d){
                glBindVertexArray(power.vaoPower);//绘制能量槽
                glUniform1i(shader->OnlyColor, true);
                mvStack.push(matModelView);  
                matModelView *= Translate(power.t);
                matModelView *= Scale(power.s);
                glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
                glDrawArrays(GL_TRIANGLES,0,6);
                matModelView = mvStack.pop();
                glUniform1i(shader->OnlyColor, false);
            }
        }

        mvStack.push(matModelView);
        glBindVertexArray(vaoBOX);
        glBindTexture(GL_TEXTURE_2D, tex_longgong);  //绘制屏幕
        SetMaterial(4, alphaMaterial, light);
        matModelView *= Translate(0.0,0.0,-150);
        matModelView *= Scale(220.0,120.0,1);
        glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, matModelView);
        glDrawArrays(GL_TRIANGLES,0,6);
        matModelView = mvStack.pop();
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

    // 设置透视投影视域体
    mat_projection = Perspective(50.0f, fAspect, 0.1f, 2000.0f);
    windowsWidth = w;
    windowsHigh = h;
}

void  TimerFunction (int value ) 
{
}
POINT  lastPoint;
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

void MyKeyDown ( unsigned char Key, int x, int y ) {


    if(Key =='Z'||Key =='z')
    {
        if(gameState==G_GAMEING_1&&lockKey==false){
            gridSize-=0.2;
            if(gridSize<0.4)
                gridSize=0.4;
            if(power.percent<100.0)power.percent+=2.0;
        }
    }
    if (Key == 'Q' || Key == 'q')
    {
        RmatCamera *= RotateY(3);
        matCamera = RotateY(-3)*matCamera;
    }
    if (Key == 'E' || Key == 'e')
    {
        RmatCamera *= RotateY(-3);
        matCamera = RotateY(3)*matCamera;
    }
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
    if(Key=='j'||Key=='J')
    {
        if(gameState==G_GAMEING_2){
            float s = SWK_Frame[SWK_FRAME_ID]->getSpeed()+0.1;
            if(s>=5.0)s=5.0;
            SWK_Frame[SWK_FRAME_ID]->setSpeed(s);

            if(power.percent>=50)power.percent+=1;
            else power.percent+=5;
            if(power.percent>100)power.percent=100;
        }
    }
    if(Key=='k'||Key=='K')
    {
        if(gameState==G_GAMEING_2){
            float s = SWK_Frame[SWK_FRAME_ID]->getSpeed()-0.1;
            if(s<=0.1)s=0.1;
            SWK_Frame[SWK_FRAME_ID]->setSpeed(s);

            if(power.percent>=50)power.percent-=1;
            else power.percent-=5;
            if(power.percent<0.1)power.percent=0.1;
        }
    }
    if(Key=='1')
    {
        if(gameState=G_GAMEING_2)
        {
            SWK_FRAME_ID = 4;
            SWK_Frame[SWK_FRAME_ID]->Come_Zero();
        }
    }
    if(Key=='2')
    {
        if(gameState=G_GAMEING_2)
        {
            SWK_FRAME_ID = 5;
            SWK_Frame[SWK_FRAME_ID]->Come_Zero();
        }
    }
    if(Key=='3')
    {
        if(gameState=G_GAMEING_2)
        {
            SWK_FRAME_ID = 6;
            SWK_Frame[SWK_FRAME_ID]->Come_Zero();
        }
    }

}

void SpecialKeys(int Key,int x,int y)
{
    if(!lockKey){
        if(Key==GLUT_KEY_UP)
        {
            if(gameState==G_MENU)
                ButtonChange=(ButtonChange+3)%4;
        }
        if(Key==GLUT_KEY_DOWN)
        {
            if(gameState==G_MENU)
                ButtonChange=(ButtonChange+1)%4;
        }
        if(Key==GLUT_KEY_RIGHT)
        {
            lockKey = true;
            switch(gameState)
            {
            case G_MENU:
                switch(ButtonChange)
                {
                case 0:gameState=G_GAMEING_1;
                    if (!operation::IsMovingCemera)
                    {
                        operation::setTargetPosition(matCamera, vec3(0.0,0.0,1.0), 250);
                        operation::IsMovingCemera = true;
                    }
                    break;
                case 2:gameState=G_GAMESET;break;
                case 3:gameState=G_GAMEHELP;break;
                case 4:exit(EXIT_SUCCESS);gameState=G_GAMEOUT;break;
                }
            }
        }
    }
}

void FreeResources () {
    glDeleteTextures ( 1, &tex_graph );
    glDeleteVertexArrays ( 1, &vaoGraph );
}

