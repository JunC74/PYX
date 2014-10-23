#ifndef __TEXTURE_H__
#define __TEXTURE_H__

#include "cocoa/Object.h"
#include "texture2D.h"

class Texture2D : public Object
{
public:

	~Texture2D();
	
	GLuint GetTexHandle();

	const char* GetTextureName();

	int GetHeight();

	int GetWidth();

	void CreateMipmap();

	// 是否为多级纹理对象
	bool IsMipmap();

	friend class TextureLoader;

protected:
	Texture2D() : Object()
	{
		tex_res_ = -1;
		height_ = 0;
		width_ = 0;
		bMipmap_ = false;
	};

private:
	std::string texture_name_;
	GLuint tex_res_;
	int height_, width_;	//纹理的宽和高
	bool bMipmap_;			// 是否是多级纹理对象


};

#endif	// end __TEXTURE_H__
