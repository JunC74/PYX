#include "vds_model.h"
#include "cocoa/FileTool.h"

namespace AttemptSpace
{
	// 读取动作文件，如果原来存在则替换掉
	bool VDSFile::ReadVDS(const char *action_file_name)
	{
		int i, j;
		vector<vec3> position, vn;
		vector<vec2> vt;
		std::vector <VertexFormat_XYZ_NORMAL_TEX> vertex_attribute;  //顶点的属性数组
		vector <UINT> vector_index;
		vector <UINT> vertices_num;
		bool err = false;     
		const int MAXN_FSTR = 3000;
		char fstr[MAXN_FSTR];

		// 读取文件数据
		FILE *action_file = fopen(action_file_name, "r");
		if (action_file == NULL) return 1;
		// 获取路径的长度
		int path_len = strlen(action_file_name);
		while(path_len && action_file_name[path_len - 1] != '/') path_len--;
		char temp_picture_name[500];
		if (path_len)
		{
			strncpy(temp_picture_name, action_file_name, path_len);
		}

		//读取图片名称
		fgets(fstr, MAXN_FSTR, action_file);
		sscanf(fstr, "ImagesName %s", &temp_picture_name[path_len]);
		picture_name = temp_picture_name;

		// 读取纹理坐标的数目
		int vt_number;
		fgets(fstr, MAXN_FSTR, action_file);
		sscanf(fstr, "vtNumber %d", &vt_number);
		vt = vector<vec2>(vt_number);
		// 读取每个纹理坐标
		for (i = 0; i < vt_number; i++)
		{
			vec2 temp_vt;
			fgets(fstr, MAXN_FSTR, action_file);
			sscanf(fstr, "%f %f", &temp_vt.x ,&temp_vt.y);
			vt[i] = temp_vt;
		}
		// 读取法线数目
		int vn_number;
		fgets(fstr, MAXN_FSTR, action_file);
		sscanf(fstr, "vnNumber %d", &vn_number);
		vn = vector<vec3>(vn_number);
		// 读取每一个法线
		for (i = 0; i < vn_number; i++)
		{
			vec3 temp_vn;
			fgets(fstr, MAXN_FSTR, action_file);
			sscanf(fstr, "%f %f %f", &temp_vn.x ,&temp_vn.y, &temp_vn.z);
			vn[i] = temp_vn;
		}
		// 读取顶点的数目
		int vectex_number;
		fgets(fstr, MAXN_FSTR, action_file);
		sscanf(fstr, "VertexNumber %d", &vectex_number);
		vertex_attribute = vector <VertexFormat_XYZ_NORMAL_TEX>(vectex_number);
		// 读取每一个顶点的属性
		for (i = 0; i < vectex_number; i++)
		{
			VertexFormat_XYZ_NORMAL_TEX temp_vectex;
			int vt_id, vn_id;
			fgets(fstr, MAXN_FSTR, action_file);
			sscanf(fstr, "%f %f %f %d %d", 
				&temp_vectex.position.x, &temp_vectex.position.y, &temp_vectex.position.z,
				&vt_id, &vn_id);
			temp_vectex.tex_coord = vt[vt_id];
			temp_vectex.normal = vn[vn_id];
			vertex_attribute[i] = temp_vectex;
		}
		// 读取帧的数目
		int frame_number; 
		fgets(fstr, MAXN_FSTR, action_file);
		sscanf(fstr, "FramesNumber %d", &frame_number);
		vertices_num = vector<UINT>(frame_number);
		// 读取每一帧
		for (i = 0;i < frame_number; i++)
		{
			// 读取当前帧的面数
			int face_number;
			fgets(fstr, MAXN_FSTR, action_file);
			sscanf(fstr, "FaceNumber %d", &face_number);
			vertices_num[i] = face_number * 3;
			vector <GLuint> index(vertices_num[i]);
			//读取所有的面
			for (j = 0; j < index.size(); j += 3)
			{
				fgets(fstr, MAXN_FSTR, action_file);
				sscanf(fstr, "%d %d %d", &index[j], &index[j + 1], &index[j + 2]);
			}

			vector_index.insert(vector_index.end(), index.begin(), index.end());
		}

		// 数据读取结束
		fclose(action_file);

		vertex_index_ = vector_index;
		vertices_num_ = vertices_num;
		vertex_attribute_ = vertex_attribute;
		return true;
	}

	VDSModel::VDSModel() : Model()
	{
		vds = NULL;
	}

	VDSModel::~VDSModel()
	{
		SAFRelease(vds);
	}
	VDSModel* VDSModel::Create(const char* file_name_)
	{
		VDSModel *obj = new VDSModel();
		if (obj && obj->Init(file_name_) == true)
		{
			obj->AutoRelease();
			return obj;
		}
		else
		{
			SAFDelete(obj);
			return NULL;
		}
	}

	bool VDSModel::Init(const char* action_file_name)
	{
		char* complete_path = FileTool::GetInstance()->GetCompletePath(action_file_name);
		vds = VDSFile::Create(complete_path);
		SAFDelete(complete_path);
		if (vds)
		{
			SAFRetain(vds);
			texture_ = TextureLoader::GetInstance()->LoadTexture2D(vds->picture_name.c_str());
			SAFRetain(texture_);
			file_name_ = action_file_name;
			this->SetVertexData(&vds->vertex_attribute_[0], 
				vds->vertex_attribute_.size() * sizeof(VertexFormat_XYZ_NORMAL_TEX), 
				vds->vertex_attribute_.size());
			this->SetVertexFomat(FVF_XYZ_NORMAL_TEX);
			frame_vertex_num_ = vds->vertices_num_;
			
			frame_time_ = 1.0 / 30.0 ;		// 每秒30帧
			time_long_ = frame_time_ * frame_vertex_num_.size();
			int offset = 0;
			aabb_.clear();
			for (int i = 0; i < frame_vertex_num_.size(); i++)
			{
				frame_index_offset_.push_back(offset);

				// 获取碰撞盒
				AABB box;
				for (int j = 0; j < frame_vertex_num_[i]; j++)
				{
					int index = vds->vertex_index_[offset + j];
					vec3 pos = vds->vertex_attribute_[index].position;
					box.Add(pos.x, pos.y, pos.z);
				}
				vec3 box_min = box.GetMin();
				vec3 box_max = box.GetMax();
				box.SetMax(box_max.x, box_max.y, 0);
				box.SetMin(box_min.x, box_min.y, 0);
				aabb_.push_back(box);
				offset += frame_vertex_num_[i];
			}
			return true;
		}
		else
		{
			return false;
		}
	}

	// 获取当前前时间是第几帧
	int VDSModel::GetNowFrame(float f_time)
	{
		GLuint   now_frame = 0;  //当前在第几帧
		if (frame_time_ - f_time  < 0.0001)
		{
			int k = f_time / frame_time_;
			k %=  frame_vertex_num_.size();
			now_frame += k;
			if (now_frame >= frame_vertex_num_.size())
			{
				now_frame -= frame_vertex_num_.size();
			}
		}
		return now_frame;
	}

	AABB VDSModel::GetAABB(float f_time)
	{
		int now_frame = GetNowFrame(f_time);
		return aabb_.at(now_frame);
	}

	AttemptERR VDSModel::Draw(float f_time)
	{
		GLuint   now_frame = GetNowFrame(f_time);  //当前在第几帧

		BindData();

		// 深度偏移
		
		// [bug] 为什么使用顶点缓冲区绘制的时候会发生错误的.......
		glDrawElementsBaseVertex(
			GL_TRIANGLES,
			frame_vertex_num_[now_frame],
			GL_UNSIGNED_INT,
			&vds->vertex_index_[frame_index_offset_[now_frame]],
			0);
		return AT_OK;
	}
}