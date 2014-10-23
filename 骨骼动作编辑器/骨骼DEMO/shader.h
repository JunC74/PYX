#ifndef __SHADER_H__
#define __SHADER_H__
#include "Angel.h"

//shader
namespace Angel{
    class ShaderClass
    {
    private:
        static ShaderClass *shader;
        static int shader_count;
        ShaderClass() :vPosition(0), ModelView(0), Projection(0), vTexCoord(0),
            tex(0), shader_program(0) {}
        ~ShaderClass();

    public:
        GLuint vPosition;
        GLuint ModelView;
        GLuint Projection;
        GLuint vTexCoord;
        GLuint tex;
        GLuint shader_program;
        GLuint program;

        static ShaderClass* GetShader();

        void Release();
    };
}
#endif