#ifndef __VBS_MODEL_H__
#define __VDS_MODEL_H__

#include "model.h"

namespace AttemptSpace{

	// vds�ļ��Ĵ�����
	class VDSFile : public Object
	{
	public:
		string picture_name;		// ͼƬ���ļ���
		std::vector <unsigned int> vertex_index_;        // ����ͼ�ε�����
		std::vector <unsigned int> vertices_num_;       // ÿһ֡�Ķ�����Ŀ
		std::vector <VertexFormat_XYZ_NORMAL_TEX> vertex_attribute_;  //�������������

	public:
		VDSFile() : Object() {};
		~VDSFile() {};
		static VDSFile* Create(const char* file_name)
		{
			VDSFile *obj = new VDSFile();
			if (obj && obj->ReadVDS(file_name) == true)
			{
				obj->AutoRelease();
				return obj;
			}
			SAFDelete(obj);
			return NULL;
		}
		bool ReadVDS(const char* file_name);
	};

	class VDSModel : public Model
	{
	public:

		~VDSModel();

		static VDSModel* Create(const char* file_name);

		// ����ʱ����������Ӧ֡
		AttemptERR Draw(float f_time);

		const char* GetName() {return file_name_.c_str();}

		virtual AABB GetAABB(float f_time);

		// ��ȡ��ǰǰʱ���ǵڼ�֡
		int GetNowFrame(float f_time);

	protected:
		VDSModel();

		bool Init(const char* file_name);


	private:

		string file_name_;	// �ļ���

		VDSFile *vds;
		
		float frame_time_;	// ÿһ֡��ʱ��
		std::vector<int> frame_index_offset_;
		std::vector<unsigned int>	frame_vertex_num_;	// ÿһ֡�������ĵĶ�����Ŀ
		std::vector<AABB> aabb_;				// ��ײ������
	};
}
#endif