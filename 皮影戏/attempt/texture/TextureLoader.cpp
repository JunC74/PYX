
#include "TextureLoader.h"
#include <atlimage.h>
#include "cocoa/FileTool.h"
#include "..\external_support\CImage\CImage.h"
#include "..\external_support\TinyXML\tinyxml2.h"

using namespace tinyxml2;
using namespace std;

//�����ļ�·����ȡ����ͼƬ
Texture2D* TextureLoader::CreateTexture2D(const char* fileName)
{	

	GLuint texture;
	glGenTextures(1, &texture);
	glBindTexture( GL_TEXTURE_2D, texture);
    CImage *img = new CImage;		// �½�CImage����
	char *complete_path = FileTool::GetInstance()->GetCompletePath(fileName);
	if (complete_path == NULL)
	{
		SAFDelete(img);
		return NULL;
	}
	wchar_t *wchat_file_name = ATC2W(complete_path);
	img->Load(wchat_file_name);			// ����ͼ���ļ�
	SAFDelete(wchat_file_name);
	SAFDelete(complete_path);
    int width = img->GetWidth();	// ��ȡͼ����
    int height = img->GetHeight();	// ��ȡͼ��߶�
    int n = img->GetBPP() / 8;
    int test = img->GetPitch();//ͼƬ�����Ļ��Ƿ���
    GLubyte *image = new GLubyte[width * height * n];	// ���ڱ���ͼ�����ݵ�����
    // ��ͼ�����ݶ���image����
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

    delete img;		// CImage���������ã������Ѷ���image����
    // ����image�е������������ڴ��д�������
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);	// ÿ��ͼ�����ݽ�������
    if(n==4)
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
    else
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);

	
	glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT );
	glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT );
	glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR );
	glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR );

    delete image;	// �������������Կ������ڴ����ˣ������ڴ��е�image������

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
	// �������Ƿ��Ѿ�������
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