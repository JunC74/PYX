#include "shader.h"

namespace Angel
{

    ShaderClass* ShaderClass::shader = NULL;
    int ShaderClass::shader_count = 0;

    ShaderClass* ShaderClass::GetShader() 
    {
        if (shader == NULL)
        {
            shader = new ShaderClass();
            shader_count = 1;
        }
        else
        {
            shader_count++;
        }
        return shader;
    }

    ShaderClass::~ShaderClass() 
    {
        delete shader;
        shader = NULL;
    };

    void ShaderClass::Release()
    {
        shader_count--;
        if (shader_count == 0)
        {
            delete shader;
            shader = NULL;
        }
    }

}