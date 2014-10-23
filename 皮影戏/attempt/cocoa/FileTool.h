#ifndef __FILE_TOOL_H__
#define __FILE_TOOL_H__

#include "Object.h"

namespace AttemptSpace
{

	class FileTool : public Object
	{
	public:

		static FileTool* GetInstance() 
		{ 
			if (instance_ == NULL)
			{
				instance_ = new FileTool();
			}
			return instance_;
		};

		// 根据文件获取文件的当前目录
		static char* GetDirectoryPath(FILE *file);

		// 根据路径获取文件夹的当前目录
		static char* GetDirectoryPath(const char *file_path);

		// 获取完整的路径
		char* GetCompletePath(const char *file_name);

		// 根据文件名获取文件的字符串数据
		// buffer_size -- 返回字符数组的大小
		unsigned char* GetFileData(const char *file_name, int &buffer_size);

		// 添加文件的搜索路径
		void AddDirectory(char *dir);
		// 根据文件名打开文件
		// 优先打开当前目录的文件,如果没有找到文件就根据已经保存的路劲依次寻找
		FILE* OpenFile(const char *file_name, const char *mode);
		FILE* OpenFile(const char *file_name);

		void RemoveDirectory(char *dir);


		~FileTool() {};

	private:

		static FileTool *instance_;
		FileTool();

		vector<string> dir_vector;
	};
}

#endif // __FILE_TOOL_H__