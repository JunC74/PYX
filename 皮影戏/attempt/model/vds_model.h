#ifndef __VBS_MODEL_H__
#define __VDS_MODEL_H__

#include "model.h"

namespace AttemptSpace{

	// vds文件的处理类
	class VDSFile : public Object
	{
	public:
		string picture_name;		// 图片的文件名
		std::vector <unsigned int> vertex_index_;        // 所有图形的索引
		std::vector <unsigned int> vertices_num_;       // 每一帧的顶点数目
		std::vector <VertexFormat_XYZ_NORMAL_TEX> vertex_attribute_;  //顶点的属性数组

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

		// 更具时间来绘制相应帧
		AttemptERR Draw(float f_time);

		const char* GetName() {return file_name_.c_str();}

		virtual AABB GetAABB(float f_time);

		// 获取当前前时间是第几帧
		int GetNowFrame(float f_time);

	protected:
		VDSModel();

		bool Init(const char* file_name);


	private:

		string file_name_;	// 文件名

		VDSFile *vds;
		
		float frame_time_;	// 每一帧的时间
		std::vector<int> frame_index_offset_;
		std::vector<unsigned int>	frame_vertex_num_;	// 每一帧所包含的的顶点数目
		std::vector<AABB> aabb_;				// 碰撞体数组
	};
}
#endif