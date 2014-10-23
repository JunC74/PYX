#include "FileTool.h"

namespace AttemptSpace
{
	FileTool::FileTool() : Object()
	{
		dir_vector.push_back("");
	}

	char* FileTool::GetDirectoryPath(FILE *file)
	{
		return GetDirectoryPath(file->_tmpfname);
	}

	char* FileTool::GetDirectoryPath(const char *file_path)
	{
		char* dir;
		char* s;

		dir = strdup(file_path);

		s = strrchr(dir, '/');
		if (s)
			s[1] = '\0';
		else
			dir[0] = '\0';

		return dir;
	}

	// 获取完整的路径
	char* FileTool::GetCompletePath(const char *file_name)
	{
		FILE *file;
		for (int i = 0; i < dir_vector.size(); ++i)
		{
			string path = dir_vector.at(i);
			path += file_name;
			file = fopen(path.c_str(), "r");
			if (file)
			{
				fclose(file);
				return strdup(path.c_str());
			}
		}
		return NULL;
	}

	FILE* FileTool::OpenFile(const char *file_name)
	{
		return this->OpenFile(file_name, "r");
	}

	FILE* FileTool::OpenFile(const char *file_name, const char *mode)
	{
		char *complete_path = this->GetCompletePath(file_name);

	    if (!complete_path) 
		{
	        Log::GetInstance()->Error("FileTool::OpenFile() can't open data file \"%s\".\n",
	            file_name);
	        return NULL;
	    }
	    else
	    {
			FILE* file;
			file = fopen(complete_path, mode);
			SAFDelete(complete_path);
	    	return file;
	    }
	}


	unsigned char* FileTool::GetFileData(const char *file_name, int &buffer_size)
	{
		FILE* file = OpenFile(file_name);
		if (!file)
		{
			buffer_size = 0;
			return NULL;
		}

		unsigned char* buffer = NULL;
		do
		{
			fseek(file,0,SEEK_END);
			buffer_size = ftell(file);
			fseek(file,0,SEEK_SET);
			buffer = new unsigned char[buffer_size];
			buffer_size = fread(buffer,sizeof(unsigned char), buffer_size,file);
			fclose(file);
		} while (0);

		if (! buffer)
		{
			Log::GetInstance()->Error("Get data from file(%s) failed!", file_name);
		}
		return buffer;

	}

	void FileTool::AddDirectory(char *dir)
	{
		string path = dir;
		for (int i = 0; i < dir_vector.size(); ++i)
		{
			if(path.compare(dir_vector.at(i)) == 0)
			{
				return ;
			}
		}
		dir_vector.push_back(path);
	}

	void FileTool::RemoveDirectory(char *dir)
	{
		string path = dir;
		for(int i = 0 ; i < dir_vector.size(); i++)
		{
			if (path.compare(dir_vector.at(i)) == 0)
			{
				dir_vector.erase(dir_vector.begin() + i);
				break;
			}
		}
	}
	FileTool *FileTool::instance_ = NULL;
}