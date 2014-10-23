#include <atlimage.h>
#include "angel.h"
#include "CImage.h"

namespace Angel {

    // ���ش��ļ��ж�ȡ���ַ���(��NULL��β)
    static char*   // static����ʹ�ô˺������ڴ��ļ��ɼ�
        readShaderSource(const char* shaderFile)
    {
        FILE* fp = fopen(shaderFile, "r"); // ��ֻ����ʽ���ļ�

        if ( fp == NULL ) { return NULL; } 

        fseek(fp, 0L, SEEK_END); // ���ļ�ָ���Ƶ��ļ�β
        long size = ftell(fp);   // ���ص�ǰ�ļ�ָ��λ�ã���ʱ��Ӧ�ļ�����

        fseek(fp, 0L, SEEK_SET); // ���ļ�ָ���Ƶ��ļ�ͷ
        char* buf = new char[size + 1]; // ����size����buffer��+1��Ϊ����λ�ø�'\0'
        memset(buf, 0, size+1);	 // ���buf
        fread(buf, 1, size, fp); // ���ļ�����һ��ȫ������

        buf[size] = '\0'; // ���Ϊ���ַ�
        fclose(fp);		  // �ر��ļ�

        return buf;		  // ���ض�ȡ�����ַ���
    }


    // ���ݸ����Ķ����ƬԪshader�ļ�����GLSL�������
    GLuint
        InitShader(const char* vShaderFile, const char* fShaderFile)
    {
        struct Shader {
            const char*  filename; // shader�ļ���
            GLenum       type;     // shader����
            GLchar*      source;   // shader�����ַ���
        } shaders[2] = {
            { vShaderFile, GL_VERTEX_SHADER, NULL },
            { fShaderFile, GL_FRAGMENT_SHADER, NULL }
        }; // ����Shader�ṹ������shaders

        GLuint program = glCreateProgram(); // ����shader������󣬷�����ID

        for ( int i = 0; i < 2; ++i ) { // �ֱ�Զ���shader��ƬԪshader���̴���
            Shader& s = shaders[i];		// s��shader[i]������
            s.source = readShaderSource( s.filename ); // ���ļ���ȡ��������(�ַ���)
            if ( shaders[i].source == NULL ) { // ��ȡʧ�ܣ�
                std::cerr << "Failed to read " << s.filename << std::endl;
                system("pause");
                exit( EXIT_FAILURE );
            }

            // ����shader���󣬲���Ϊshader����(GL_VERTEX_SHADER��GL_FRAGMENT_SHADER)������shader����ID
            GLuint shader = glCreateShader( s.type ); 
            // Ϊshader����ָ��shaderԴ��
            glShaderSource( shader,	// shader����ID 
                1,		// ����3�к��е��ַ�������
                (const GLchar**) &s.source, // ����Դ����ַ�������
                NULL	// �ַ�����������(��ԱΪ����3�и��ַ�������)��ΪNULL��ʾ���ַ�������NULL����)
                );
            glCompileShader( shader ); // ����shader����

            GLint  compiled;
            // ��ȡ����״̬��Ϣ
            glGetShaderiv( shader,	// shader����ID
                GL_COMPILE_STATUS,  // ������ȡ���Ǳ���״̬��Ϣ
                &compiled			// ������������ڴ洢��Ϣ(������ܷ���GL_TRUE��GL_FALSE)
                );
            if ( !compiled ) {		// �������ʧ��
                std::cerr << s.filename << " failed to compile:" << std::endl; // ���������Ϣ
                GLint  logSize;
                glGetShaderiv( shader, GL_INFO_LOG_LENGTH, &logSize ); // ��ȡ������Ϣ�ĳ���
                char* logMsg = new char[logSize];  // ������Ϣ���ȴ���buffer
                // ��ȡ������Ϣ
                glGetShaderInfoLog( shader, // shader����ID
                    logSize,	// ���ڴ洢��Ϣ��buffer(���ＴlogMsg)�Ĵ�С
                    NULL,       // ����������洢��ȡ������Ϣ���ȵı���ָ��
                    logMsg      // ���ڱ�����Ϣ���ַ�buffer
                    ); 
                std::cerr << logMsg << std::endl;	// ���������Ϣ
                delete [] logMsg;
                system("pause");
                exit( EXIT_FAILURE );	// �˳�����
            }

            delete [] s.source;

            glAttachShader( program, shader ); // ��shader������program�����������
        }

        /* ���Ӳ���������Ϣ */
        glLinkProgram(program);	// ����shader����

        GLint  linked;
        glGetProgramiv( program, GL_LINK_STATUS, &linked ); // ��ȡ������Ϣ�����������glGetShaderiv����
        if ( !linked ) {	// ����ʧ�ܣ�
            std::cerr << "Shader program failed to link" << std::endl;
            GLint  logSize;
            glGetProgramiv( program, GL_INFO_LOG_LENGTH, &logSize);	// ��ȡ������Ϣ�ĳ���
            char* logMsg = new char[logSize];
            glGetProgramInfoLog( program, logSize, NULL, logMsg );	// ��ȡ������Ϣ
            std::cerr << logMsg << std::endl;
            delete [] logMsg;
            system("pause");
            exit( EXIT_FAILURE );
        }

        return program;
    }

    void LoadTexture(const char* fileName, bool bMipmap)
    {	
        CImage *img = new CImage;		// �½�CImage����
        img->Load(fileName);			// ����ͼ���ļ�
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

            if(bMipmap)		// �����༶��������
                glGenerateMipmap(GL_TEXTURE_2D);

            delete image;	// �������������Կ������ڴ����ˣ������ڴ��е�image������
    }

//     // ��������ͼ���������ڴ��д�������(֧�ִ�͸���ȵ�ͼ��)
//     // �ڵ��øú���֮ǰ�봴�������������
//     int LoadTexture (const char *szPathName/*����ͼ��·����*/)
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
//         glGetIntegerv(GL_MAX_TEXTURE_SIZE, &glMaxTexDim);	// ��ȡ��֧�ֵ��������ߴ�
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
//         // ������ͼ�����ݷ��͵�GPU
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
}  // ���������ռ�ΪAngel�Ĵ����
