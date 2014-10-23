#ifndef __SHADER_H__
#define __SHADER_H__

#include "cocoa/Object.h"   

//shader
namespace AttemptSpace
{
	enum AttributeType {
		Attribute_Position4,
		Attribute_Position3,
		Attribute_Normal,			// 顶点的法线
		Attribute_Color4,			// 顶点的颜色
		Attribute_TexCoord2,		// 顶点的纹理坐标
		Attribute_UserDefined,		// 系统定义Attribute的数目
	};

	enum UniformType {
		Uniform_Matirx_ModelView,	// 模视矩阵
		Uniform_Matrix_Projection,	// 投影矩阵
		Uniform_Matrix_MVP,			// 投影矩阵*模视矩阵
		Uniform_vec3_Select_Color,	// 拾取时用来指定颜色
		Uniform_Tex,				// 纹理
		Uniform_Tex1,  
		Uniform_Tex2,

		// Material
		Uniform_Material_Shininess, // 高亮系数
		Uniform_Material_Emission,	// 自发光

		// Light
		Uniform_LightPosition,		// 光源位置
		Uniform_LightPower,			// 光源开光
		Uniform_Attenuation,		// 衰减系数
		Uniform_AmbientProduct,		// 环境光乘积
		Uniform_DiffuseProduct,		// 漫反射乘积
		Uniform_SpecularProduct,	// 镜面反射乘积
		Uniform_LightDirection,		// 光源方向
		Uniform_SpotTheta,			// 聚光灯的内锥大小
		Uniform_SpotPhi,			// 聚光灯的外锥大小


		Uniform_UserDefined,		// 系统定义Uniform的数目
	};

    class ShaderProgram : public Object
    {
	public:
		ShaderProgram();
		~ShaderProgram();
		
		static ShaderProgram* Create(GLuint shader, const char* shader_name);
		
		// 绑定shader到渲染设备中
		//	render_device —— 绑定的目标设备
		int Bind();


		// 设添加shader包含的attribute变量的名称
		void SetAttribute(std::vector<PairIntString> attribute_vec);
		void SetAttribute(AttributeType , const char *value_name);

		// 设添加shader包含的uniform变量的名称
		void SetUniform(std::vector<PairIntString> uniform_vec);
		void SetUniform(UniformType , const char *value_name);

		// 获取统一变量的位置
		GLuint GetUniformLocation(UniformType type);

		// 获取顶点的属性值得位置
		GLuint GetAttributeLocation(AttributeType type);

		GLuint GetProgram() { return shader_program_; }

		// @brief 获取光源数量
		// @param type 光源的类型
		// @return 返回type类型光源的数量
		int GetLightNum(LightType type) { return lighting_num_[type]; }

		// @biref 设置光源数量
		void SetLightNum(LightType type, int num) { lighting_num_[type] = num; }
		
		const char* GetShaderName() {return shader_name_.c_str();}
	private:

		GLuint shader_program_; //OpenGL ShaderProgram的句柄
		std::string shader_name_;	// 着色器名称

		std::map<int, GLuint> uniform_map_;		
		std::map<int, GLuint> attribute_map_;

		int lighting_num_[LIGHT_TYPE_NUM];

		typedef std::map<int, GLuint>::iterator UniformIterator;
		typedef std::map<int, GLuint>::iterator AttributeIterator;

	};
}	// end namespace AttemptSpacee

#endif