
#include "TextureLoader.h"
#include <atlimage.h>
#include "cocoa/FileTool.h"
#include "..\external_support\CImage\CImage.h"
#include "..\external_support\TinyXML\tinyxml2.h"

using namespace tinyxml2;
using namespace std;

//根据文件路径获取单张图片
Texture2D* TextureLoader::CreateTexture2D(const char* fileName)
{	

	GLuint texture;
	glGenTextures(1, &texture);
	glBindTexture( GL_TEXTURE_2D, texture);
    CImage *img = new CImage;		// 新建CImage对象
	char *complete_path = FileTool::GetInstance()->GetCompletePath(fileName);
	if (complete_path == NULL)
	{
		SAFDelete(img);
		return NULL;
	}
	wchar_t *wchat_file_name = ATC2W(complete_path);
	img->Load(wchat_file_name);			// 读入图像文件
	SAFDelete(wchat_file_name);
	SAFDelete(complete_path);
    int width = img->GetWidth();	// 获取图像宽度
    int height = img->GetHeight();	// 获取图像高度
    int n = img->GetBPP() / 8;
    int test = img->GetPitch();//图片是正的还是反的
    GLubyte *image = new GLubyte[width * height * n];	// 用于保存图像数据的数组
    // 将图像数据读入image数组
    if(test<0)
        for(int j = height-1,k=0; j >=0; j--,k++){
            for(int i = width-1,z=width-1; i >=0; i--,z--){
                int index = (k * width + z) * n;
                RGBQUAD rgb = GetPixelColor(img, i, j);
                image[index] = rgb.rgbRed;
                image[index+1] = rgb.rgbGreen;
                image[index+2] = rgb.rgbBlue;
                if(n==4)
                    image[index+3] = rgb.rgbReserved;
            }
        }
    else
        for(int j = 0; j < height; j++){
            for(int i = 0; i < width; i++){
                int index = (j * width + i) * n;
                RGBQUAD rgb = GetPixelColor(img, i, j);
                image[index] = rgb.rgbRed;
                image[index+1] = rgb.rgbGreen;
                image[index+2] = rgb.rgbBlue;
                if(n==4)
                    image[index+3] = rgb.rgbReserved;
            }
        }

    delete img;		// CImage对象已无用，数据已读入image数组
    // 根据image中的数据在纹理内存中创建纹理
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);	// 每行图像数据紧密排列
    if(n==4)
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
    else
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);

	
	glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT );
	glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT );
	glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR );
	glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR );

    delete image;	// 纹理数据已在显卡纹理内存中了，主机内存中的image已无用

	Texture2D *tex = new Texture2D();
	tex->texture_name_ = fileName;
	tex->height_ = height;
	tex->width_ = width;
	tex->tex_res_ = texture;
	return tex;
}


Texture2D* TextureLoader::LoadTexture2D(const char* file_name)
{
	if (file_name == NULL)
	{
		return NULL;
	}
	Tex2DMap::iterator it = tex_data_.find(file_name);
	// 该纹理是否已经创建了
	if (it != tex_data_.end())
	{
		return it->second;
	}
	else
	{
		Texture2D *tex = this->CreateTexture2D(file_name);
		tex_data_[file_name] = tex;
		return tex;
	}
}

TextureLoader* TextureLoader::GetInstance()
{
	if (!textureLoader)
	{
		textureLoader = new TextureLoader();
	}

	return textureLoader;
}

void TextureLoader::RemoveTexture2D(Texture2D *tag)
{
	if (tag == NULL)
	{
		return ;
	}
	Tex2DMap::iterator it = tex_data_.find(tag->GetTextureName());
	if (it != tex_data_.end())
	{
		tex_data_.erase(it);
	}

}
TextureLoader* TextureLoader::textureLoader = NULL;