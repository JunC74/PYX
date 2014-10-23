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
	// ��ȡ��������
	Texture2D* LoadTexture2D(const char* file_name);

	static TextureLoader* GetInstance();

	// �ṩ��Texture2D�ķ���,���ڴ��Ƴ�������
	void RemoveTexture2D(Texture2D *tag);

private:
	TextureLoader() : Object () {}

	// ����һ���������
	Texture2D* CreateTexture2D(const char *file_name);

private:
	typedef map<string, Texture2D*, StringCompareClass> Tex2DMap;
	static TextureLoader* textureLoader;	//��������
	Tex2DMap tex_data_;		// ���ڴ����������
	
};
#endif