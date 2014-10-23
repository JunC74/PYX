
#include "texture2D.h"
#include "TextureLoader.h"

Texture2D::~Texture2D()
{
	glDeleteTextures(1, &tex_res_);
	// 移除纹理对象
	TextureLoader::GetInstance()->RemoveTexture2D(this);
}

GLuint Texture2D::GetTexHandle() 
{
	return tex_res_;
}

const char* Texture2D::GetTextureName() 
{
	return texture_name_.c_str();
}

int Texture2D::GetHeight() 
{ 
	return height_; 
}

int Texture2D::GetWidth()
{ 
	return width_; 
}

void Texture2D::CreateMipmap()
{
	if (bMipmap_ == false)
	{
		glBindTexture( GL_TEXTURE_2D, tex_res_);
		glGenerateMipmap(GL_TEXTURE_2D);
		bMipmap_ = true;
	}
		
}

// 是否为多级纹理对象
bool Texture2D::IsMipmap() 
{
	return bMipmap_;
}
