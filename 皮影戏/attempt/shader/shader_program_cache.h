#ifndef __SHADER_PROGRAM_CACHE_H__
#define __SHADER_PROGRAM_CACHE_H__

#include "shader_program.h"

namespace AttemptSpace
{
	enum ShaderType
	{
		ShaderType_Position,		// 只提供点坐标 
		ShaderType_Position_Color,	// 提供点坐标和点的颜色
		ShaderType_Position_Tex,	// 提供点坐标和纹理
		ShaderType_Phone,			// 提供一个点光源和一个聚光灯, 材质, 纹理, 坐标, 法线

		ShaderType_Num,
	};

	static const char DefShader[ShaderType_Num][100] = {
		"position",
		"position_color",
		"position_tex",
		"phone",
	};

	// ShaderProgram的对象管理类
	// (ShaderProgram对象添加进来之后我就不打算在游戏结束之前释放了- -)
	class ShaderProgramCache : public Object
	{
	public:
		static ShaderProgramCache* GetInstance();

		// 创建一个新的ShaderProgram对象
		// file_name - shader文件在"Resources/Shader/"目录下的文件名,不需后缀
		// 顶点shader的后缀规定为".vert"
		// 片元shader的后缀规定为".frag"
		ShaderProgram* LoadShaderProgram(const char* file_name);

		// 创建一个新的ShaderProgram对象
		// @param shader_name 着色器的名称
		// @param vertex_shader_file_nanme 顶点着色器的文件名
		// @param face_shader_file_name 片元着色器额的文件名
		// @return NULL 表示创建失败，否则放回所创建的着色器对象
		ShaderProgram* LoadShaderProgram(const char* shader_name, 
			const char *vertex_shader_file_nanme,
			const char *face_shader_file_name);

		// 加载系统默认的做着色器
		void LoadDefineShader();

		// 根据着色器名称获取做色漆对象
		ShaderProgram* GetShaderForKey(const char *key);

		// 添加着色器对象进行管理
		void AddShader(ShaderProgram* shader);

		~ShaderProgramCache();
	protected:
		ShaderProgramCache();
		//  加载shader文件
		int LoadShader(const char *vertex_shader, const char *face_shader);

		//  返回从文件中读取的字符串(以NULL结尾)
		char* ReadShaderSource(const char* shaderFile);
	protected:
		typedef map<string, ShaderProgram*, StringCompareClass> ShaderMap;
		static ShaderProgramCache *instance_;				// 单例对象
		ShaderMap shader_program_data_;	// ShaderProgram对象的管理
	private:
	};
}	// end namespace AttemptSpace
#endif	// end __SHADER_PROGRAM_CACHE_H__
