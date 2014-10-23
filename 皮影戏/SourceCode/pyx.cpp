#include "pyx.h"
#include "attempt.h"
#include "input/thinkgear.h"
#include <time.h>

PYX::PYX(wstring game_name, int height, int width) 
	: Application(game_name, height, width)
{
}

PYX::~PYX()
{
}

void test()
{
	Node *bar = Node::Create();
	
	GeometryModel * bar_mode = GeometryModel::CreateSquare(40, 5, 0, 0, 
		TextureLoader::GetInstance()->LoadTexture2D("Tex/yellow.jpg"));
	Sprite *bar_sprite = Sprite::CreateWithModel(bar_mode);

	GeometryModel * bg_mode = GeometryModel::CreateSquare(40, 5, 0, 0, 
		TextureLoader::GetInstance()->LoadTexture2D("Tex/white.jpg"));
	Sprite *bg_sprite = Sprite::CreateWithModel(bg_mode);
	bg_sprite->SetTranslationZ(-0.1);

	bar->AddChild(bg_sprite);
	bar->AddChild(bar_sprite);
	bar_sprite->SetScaleX(0.5);
	Root::GetInstance()->GetNode()->AddChild(bar);
}

//  游戏的初始化函数
int PYX::Initialize()
{
	Application::Initialize();
	FileTool::GetInstance()->AddDirectory("../Resources/");
	FileTool::GetInstance()->AddDirectory("../Resources/Shader/");
	FileTool::GetInstance()->AddDirectory("../Resources/script/");

	// 初始化输入模块

	LuaManager *lua_manager = LuaManager::GetInstance();
	lua_manager->RunningFile("hello.lua");
	
	//test();
	return AT_OK;
}

int PYX::End()
{
	return Application::End();
}