#ifndef __SHADER_PROGRAM_CACHE_H__
#define __SHADER_PROGRAM_CACHE_H__

#include "shader_program.h"

namespace AttemptSpace
{
	enum ShaderType
	{
		ShaderType_Position,		// ֻ�ṩ������ 
		ShaderType_Position_Color,	// �ṩ������͵����ɫ
		ShaderType_Position_Tex,	// �ṩ�����������
		ShaderType_Phone,			// �ṩһ�����Դ��һ���۹��, ����, ����, ����, ����

		ShaderType_Num,
	};

	static const char DefShader[ShaderType_Num][100] = {
		"position",
		"position_color",
		"position_tex",
		"phone",
	};

	// ShaderProgram�Ķ��������
	// (ShaderProgram������ӽ���֮���ҾͲ���������Ϸ����֮ǰ�ͷ���- -)
	class ShaderProgramCache : public Object
	{
	public:
		static ShaderProgramCache* GetInstance();

		// ����һ���µ�ShaderProgram����
		// file_name - shader�ļ���"Resources/Shader/"Ŀ¼�µ��ļ���,�����׺
		// ����shader�ĺ�׺�涨Ϊ".vert"
		// ƬԪshader�ĺ�׺�涨Ϊ".frag"
		ShaderProgram* LoadShaderProgram(const char* file_name);

		// ����һ���µ�ShaderProgram����
		// @param shader_name ��ɫ��������
		// @param vertex_shader_file_nanme ������ɫ�����ļ���
		// @param face_shader_file_name ƬԪ��ɫ������ļ���
		// @return NULL ��ʾ����ʧ�ܣ�����Ż�����������ɫ������
		ShaderProgram* LoadShaderProgram(const char* shader_name, 
			const char *vertex_shader_file_nanme,
			const char *face_shader_file_name);

		// ����ϵͳĬ�ϵ�����ɫ��
		void LoadDefineShader();

		// ������ɫ�����ƻ�ȡ��ɫ�����
		ShaderProgram* GetShaderForKey(const char *key);

		// �����ɫ��������й���
		void AddShader(ShaderProgram* shader);

		~ShaderProgramCache();
	protected:
		ShaderProgramCache();
		//  ����shader�ļ�
		int LoadShader(const char *vertex_shader, const char *face_shader);

		//  ���ش��ļ��ж�ȡ���ַ���(��NULL��β)
		char* ReadShaderSource(const char* shaderFile);
	protected:
		typedef map<string, ShaderProgram*, StringCompareClass> ShaderMap;
		static ShaderProgramCache *instance_;				// ��������
		ShaderMap shader_program_data_;	// ShaderProgram����Ĺ���
	private:
	};
}	// end namespace AttemptSpace
#endif	// end __SHADER_PROGRAM_CACHE_H__
