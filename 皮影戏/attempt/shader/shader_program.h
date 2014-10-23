#ifndef __SHADER_H__
#define __SHADER_H__

#include "cocoa/Object.h"   

//shader
namespace AttemptSpace
{
	enum AttributeType {
		Attribute_Position4,
		Attribute_Position3,
		Attribute_Normal,			// ����ķ���
		Attribute_Color4,			// �������ɫ
		Attribute_TexCoord2,		// �������������
		Attribute_UserDefined,		// ϵͳ����Attribute����Ŀ
	};

	enum UniformType {
		Uniform_Matirx_ModelView,	// ģ�Ӿ���
		Uniform_Matrix_Projection,	// ͶӰ����
		Uniform_Matrix_MVP,			// ͶӰ����*ģ�Ӿ���
		Uniform_vec3_Select_Color,	// ʰȡʱ����ָ����ɫ
		Uniform_Tex,				// ����
		Uniform_Tex1,  
		Uniform_Tex2,

		// Material
		Uniform_Material_Shininess, // ����ϵ��
		Uniform_Material_Emission,	// �Է���

		// Light
		Uniform_LightPosition,		// ��Դλ��
		Uniform_LightPower,			// ��Դ����
		Uniform_Attenuation,		// ˥��ϵ��
		Uniform_AmbientProduct,		// ������˻�
		Uniform_DiffuseProduct,		// ������˻�
		Uniform_SpecularProduct,	// ���淴��˻�
		Uniform_LightDirection,		// ��Դ����
		Uniform_SpotTheta,			// �۹�Ƶ���׶��С
		Uniform_SpotPhi,			// �۹�Ƶ���׶��С


		Uniform_UserDefined,		// ϵͳ����Uniform����Ŀ
	};

    class ShaderProgram : public Object
    {
	public:
		ShaderProgram();
		~ShaderProgram();
		
		static ShaderProgram* Create(GLuint shader, const char* shader_name);
		
		// ��shader����Ⱦ�豸��
		//	render_device ���� �󶨵�Ŀ���豸
		int Bind();


		// �����shader������attribute����������
		void SetAttribute(std::vector<PairIntString> attribute_vec);
		void SetAttribute(AttributeType , const char *value_name);

		// �����shader������uniform����������
		void SetUniform(std::vector<PairIntString> uniform_vec);
		void SetUniform(UniformType , const char *value_name);

		// ��ȡͳһ������λ��
		GLuint GetUniformLocation(UniformType type);

		// ��ȡ���������ֵ��λ��
		GLuint GetAttributeLocation(AttributeType type);

		GLuint GetProgram() { return shader_program_; }

		// @brief ��ȡ��Դ����
		// @param type ��Դ������
		// @return ����type���͹�Դ������
		int GetLightNum(LightType type) { return lighting_num_[type]; }

		// @biref ���ù�Դ����
		void SetLightNum(LightType type, int num) { lighting_num_[type] = num; }
		
		const char* GetShaderName() {return shader_name_.c_str();}
	private:

		GLuint shader_program_; //OpenGL ShaderProgram�ľ��
		std::string shader_name_;	// ��ɫ������

		std::map<int, GLuint> uniform_map_;		
		std::map<int, GLuint> attribute_map_;

		int lighting_num_[LIGHT_TYPE_NUM];

		typedef std::map<int, GLuint>::iterator UniformIterator;
		typedef std::map<int, GLuint>::iterator AttributeIterator;

	};
}	// end namespace AttemptSpacee

#endif