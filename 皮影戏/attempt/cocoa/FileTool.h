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

		// �����ļ���ȡ�ļ��ĵ�ǰĿ¼
		static char* GetDirectoryPath(FILE *file);

		// ����·����ȡ�ļ��еĵ�ǰĿ¼
		static char* GetDirectoryPath(const char *file_path);

		// ��ȡ������·��
		char* GetCompletePath(const char *file_name);

		// �����ļ�����ȡ�ļ����ַ�������
		// buffer_size -- �����ַ�����Ĵ�С
		unsigned char* GetFileData(const char *file_name, int &buffer_size);

		// ����ļ�������·��
		void AddDirectory(char *dir);
		// �����ļ������ļ�
		// ���ȴ򿪵�ǰĿ¼���ļ�,���û���ҵ��ļ��͸����Ѿ������·������Ѱ��
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