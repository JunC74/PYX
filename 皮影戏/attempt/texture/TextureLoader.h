#ifndef  _TEXTURE_LOADER_H_
#define _TEXTURE_LOADER_H_

#include <atlimage.h>
#include "at_prefix.h"
#include "cocoa/Object.h"
#include "cocoa/ResourceManager.h"
#include "texture2D.h"

class TextureLoader : public Object
{
public:
	// 获取纹理纹理
	Texture2D* LoadTexture2D(const char* file_name);

	static TextureLoader* GetInstance();

	// 提供给Texture2D的方法,用于从移除其索引
	void RemoveTexture2D(Texture2D *tag);

private:
	TextureLoader() : Object () {}

	// 创建一个纹理对象
	Texture2D* CreateTexture2D(const char *file_name);

private:
	typedef map<string, Texture2D*, StringCompareClass> Tex2DMap;
	static TextureLoader* textureLoader;	//单例对象
	Tex2DMap tex_data_;		// 用于储存纹理对象
	
};
#endif