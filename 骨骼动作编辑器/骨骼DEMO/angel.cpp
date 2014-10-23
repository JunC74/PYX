#include <atlimage.h>
#include "angel.h"
#include "CImage.h"

namespace Angel {

    // 返回从文件中读取的字符串(以NULL结尾)
    static char*   // static修饰使得此函数仅在此文件可见
        readShaderSource(const char* shaderFile)
    {
        FILE* fp = fopen(shaderFile, "r"); // 以只读方式打开文件

        if ( fp == NULL ) { return NULL; } 

        fseek(fp, 0L, SEEK_END); // 将文件指针移到文件尾
        long size = ftell(fp);   // 返回当前文件指针位置，此时对应文件长度

        fseek(fp, 0L, SEEK_SET); // 将文件指针移到文件头
        char* buf = new char[size + 1]; // 根据size创建buffer，+1是为了留位置给'\0'
        memset(buf, 0, size+1);	 // 清空buf
        fread(buf, 1, size, fp); // 将文件内容一次全部读出

        buf[size] = '\0'; // 最后为空字符
        fclose(fp);		  // 关闭文件

        return buf;		  // 返回读取到的字符串
    }


    // 根据给定的顶点和片元shader文件创建GLSL程序对象
    GLuint
        InitShader(const char* vShaderFile, const char* fShaderFile)
    {
        struct Shader {
            const char*  filename; // shader文件名
            GLenum       type;     // shader类型
            GLchar*      source;   // shader程序字符串
        } shaders[2] = {
            { vShaderFile, GL_VERTEX_SHADER, NULL },
            { fShaderFile, GL_FRAGMENT_SHADER, NULL }
        }; // 定义Shader结构体数组shaders

        GLuint program = glCreateProgram(); // 创建shader程序对象，返回其ID

        for ( int i = 0; i < 2; ++i ) { // 分别对顶点shader和片元shader进程处理
            Shader& s = shaders[i];		// s是shader[i]的引用
            s.source = readShaderSource( s.filename ); // 从文件读取程序内容(字符串)
            if ( shaders[i].source == NULL ) { // 读取失败？
                std::cerr << "Failed to read " << s.filename << std::endl;
                system("pause");
                exit( EXIT_FAILURE );
            }

            // 创建shader对象，参数为shader类型(GL_VERTEX_SHADER或GL_FRAGMENT_SHADER)，返回shader对象ID
            GLuint shader = glCreateShader( s.type ); 
            // 为shader对象指定shader源码
            glShaderSource( shader,	// shader对象ID 
                1,		// 参数3中含有的字符串个数
                (const GLchar**) &s.source, // 含有源码的字符串数组
                NULL	// 字符串长度数组(成员为参数3中各字符串长度)，为NULL表示各字符串均以NULL结束)
                );
            glCompileShader( shader ); // 编译shader程序

            GLint  compiled;
            // 获取编译状态信息
            glGetShaderiv( shader,	// shader对象ID
                GL_COMPILE_STATUS,  // 表明获取的是编译状态信息
                &compiled			// 输出参数，用于存储信息(这里可能返回GL_TRUE或GL_FALSE)
                );
            if ( !compiled ) {		// 如果编译失败
                std::cerr << s.filename << " failed to compile:" << std::endl; // 输出错误信息
                GLint  logSize;
                glGetShaderiv( shader, GL_INFO_LOG_LENGTH, &logSize ); // 获取错误信息的长度
                char* logMsg = new char[logSize];  // 根据信息长度创建buffer
                // 获取错误信息
                glGetShaderInfoLog( shader, // shader对象ID
                    logSize,	// 用于存储信息的buffer(这里即logMsg)的大小
                    NULL,       // 输出参数，存储获取到的信息长度的变量指针
                    logMsg      // 用于保存信息的字符buffer
                    ); 
                std::cerr << logMsg << std::endl;	// 输出错误信息
                delete [] logMsg;
                system("pause");
                exit( EXIT_FAILURE );	// 退出程序
            }

            delete [] s.source;

            glAttachShader( program, shader ); // 将shader对象与program对象关联起来
        }

        /* 链接并检查错误信息 */
        glLinkProgram(program);	// 链接shader程序

        GLint  linked;
        glGetProgramiv( program, GL_LINK_STATUS, &linked ); // 获取链接信息，参数含义和glGetShaderiv类似
        if ( !linked ) {	// 链接失败？
            std::cerr << "Shader program failed to link" << std::endl;
            GLint  logSize;
            glGetProgramiv( program, GL_INFO_LOG_LENGTH, &logSize);	// 获取链接信息的长度
            char* logMsg = new char[logSize];
            glGetProgramInfoLog( program, logSize, NULL, logMsg );	// 获取链接信息
            std::cerr << logMsg << std::endl;
            delete [] logMsg;
            system("pause");
            exit( EXIT_FAILURE );
        }

        return program;
    }

    void LoadTexture(const char* fileName, bool bMipmap)
    {	
        CImage *img = new CImage;		// 新建CImage对象
        img->Load(fileName);			// 读入图像文件
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

            if(bMipmap)		// 创建多级渐进纹理
                glGenerateMipmap(GL_TEXTURE_2D);

            delete image;	// 纹理数据已在显卡纹理内存中了，主机内存中的image已无用
    }

//     // 加载纹理图像并在纹理内存中创建纹理(支持带透明度的图像)
//     // 在调用该函数之前须创建并绑定纹理对象
//     int LoadTexture (const char *szPathName/*纹理图像路径名*/)
//     {
//         HDC			hdcTemp;					// The DC To Hold Our Bitmap
//         HBITMAP		hbmpTemp;				// Holds The Bitmap Temporarily
//         IPicture	*pPicture;						// IPicture Interface
//         OLECHAR		wszPath[MAX_PATH+1];	// Full Path To Picture (WCHAR)
//         char		szPath[MAX_PATH+1];				// Full Path To Picture
//         long		lWidth;							// Width In Logical Units
//         long		lHeight;							// Height In Logical Units
//         long		lWidthPixels;						// Width In Pixels
//         long		lHeightPixels;						// Height In Pixels
//         GLint		glMaxTexDim ;				// Holds Maximum Texture Size
// 
//         if (strstr(szPathName, "http://"))			// If PathName Contains http:// Then...
//         {
//             strcpy(szPath, szPathName);			// Append The PathName To szPath
//         }
//         else							// Otherwise... We Are Loading From A File
//         {
//             GetCurrentDirectory(MAX_PATH, szPath);	// Get Our Working Directory
//             strcat(szPath, "\\");			// Append "\" After The Working Directory
//             strcat(szPath, szPathName);	// Append The PathName
//         }
// 
//         MultiByteToWideChar(CP_ACP, 0, szPath, -1, wszPath, MAX_PATH);  // Convert From ASCII To Unicode
//         HRESULT hr = OleLoadPicturePath(wszPath, 0, 0, 0, IID_IPicture, (void**)&pPicture);
// 
//         if(FAILED(hr))			// If Loading Failed
//             return FALSE;			// Return False
// 
//         hdcTemp = CreateCompatibleDC(GetDC(0));  // Create The Windows Compatible Device Context
//         if(!hdcTemp)			// Did Creation Fail?
//         {
//             pPicture->Release();	// Decrements IPicture Reference Count
//             return FALSE;			// Return False (Failure)
//         }
// 
//         glGetIntegerv(GL_MAX_TEXTURE_SIZE, &glMaxTexDim);	// 获取所支持的最大纹理尺寸
// 
//         pPicture->get_Width(&lWidth);		// Get IPicture Width (Convert To Pixels)
//         lWidthPixels	= MulDiv(lWidth, GetDeviceCaps(hdcTemp, LOGPIXELSX), 2540);
//         pPicture->get_Height(&lHeight);		// Get IPicture Height (Convert To Pixels)
//         lHeightPixels	= MulDiv(lHeight, GetDeviceCaps(hdcTemp, LOGPIXELSY), 2540);
// 
//         // Resize Image To Closest Power Of Two
//         if (lWidthPixels <= glMaxTexDim) // Is Image Width Less Than Or Equal To Cards Limit
//             lWidthPixels = 1 << (int)floor((log((double)lWidthPixels)/log(2.0f)) + 0.5f); 
//         else  // Otherwise  Set Width To "Max Power Of Two" That The Card Can Handle
//             lWidthPixels = glMaxTexDim;
// 
//         if (lHeightPixels <= glMaxTexDim) // Is Image Height Greater Than Cards Limit
//             lHeightPixels = 1 << (int)floor((log((double)lHeightPixels)/log(2.0f)) + 0.5f);
//         else  // Otherwise  Set Height To "Max Power Of Two" That The Card Can Handle
//             lHeightPixels = glMaxTexDim;
// 
//         //	Create A Temporary Bitmap
//         BITMAPINFO	bi = {0};			// The Type Of Bitmap We Request
//         DWORD		*pBits = 0;		    // Pointer To The Bitmap Bits
// 
//         bi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER); // Set Structure Size
//         bi.bmiHeader.biBitCount = 32;		// 32 Bit
//         bi.bmiHeader.biWidth = lWidthPixels;		// Power Of Two Width
//         bi.bmiHeader.biHeight	= lHeightPixels;// Make Image Top Up (Positive Y-Axis)
//         bi.bmiHeader.biCompression	= BI_RGB;	// RGB Encoding
//         bi.bmiHeader.biPlanes		= 1;		    // 1 Bitplane
// 
//         //	Creating A Bitmap This Way Allows Us To Specify Color Depth And Gives Us Imediate Access To The Bits
//         hbmpTemp = CreateDIBSection(hdcTemp, &bi, DIB_RGB_COLORS, (void**)&pBits, 0, 0);
// 
//         if(!hbmpTemp)				// Did Creation Fail?
//         {
//             DeleteDC(hdcTemp);		// Delete The Device Context
//             pPicture->Release();	// Decrements IPicture Reference Count
//             return FALSE;		    // Return False (Failure)
//         }
// 
//         SelectObject(hdcTemp, hbmpTemp);	// Select Handle To Our Temp DC And Our Temp Bitmap Object
// 
//         // Render The IPicture On To The Bitmap
//         pPicture->Render(hdcTemp, 0, 0, lWidthPixels, lHeightPixels, 0, lHeight, lWidth, -lHeight, 0);
// 
//         // Convert From BGR To RGB Format And Add An Alpha Value Of 255
//         for(long i = 0; i < lWidthPixels * lHeightPixels; i++)	// Loop Through All Of The Pixels
//         {
//             BYTE* pPixel	= (BYTE*)(&pBits[i]);	 // Grab The Current Pixel
//             BYTE  temp		= pPixel[0];	// Store 1st Color In Temp Variable (Blue)
//             pPixel[0]		= pPixel[2];	// Move Red Value To Correct Position (1st)
//             pPixel[2]		= temp;	// Move Temp Value To Correct Blue Position (3rd)
// 
//             // This Will Make Any Black Pixels, Completely Transparent		(You Can Hardcode The Value If You Wish)
//             if ((pPixel[0]==0) && (pPixel[1]==0) && (pPixel[2]==0))	// Is Pixel Completely Black
//                 pPixel[3]	=   0;	// Set The Alpha Value To 0
//             else				    // Otherwise
//                 pPixel[3]	= 255;	// Set The Alpha Value To 255
//         }
// 
//         // 将纹理图像数据发送到GPU
//         glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, lWidthPixels, lHeightPixels, 0, GL_RGBA, GL_UNSIGNED_BYTE, pBits);	
// 
//         DeleteObject(hbmpTemp);		// Delete The Object
//         DeleteDC(hdcTemp);			// Delete The Device Context
// 
//         pPicture->Release();		    // Decrements IPicture Reference Count
// 
//         return TRUE;			        // Return True (All Good)
//     }

    void PrintfGLError()
    {
        switch(glGetError())
        {
        case GL_NO_ERROR:
            puts("NO ERROR");
            break;
        case GL_INVALID_ENUM:
            puts("INVALID ENUM");
            break;
        case GL_INVALID_VALUE:
            puts("INVALID VALUE");
            break;
        case GL_INVALID_OPERATION:
            puts("INVALID OPERATION");
            break;
        case GL_INVALID_FRAMEBUFFER_OPERATION:
            puts("INVALID FRAMEBUFFER OPERATION");
            break;
        case GL_OUT_OF_MEMORY:
            puts("OUT OF MEMORY");
            break;
        }
    }
}  // 结束命名空间为Angel的代码块
