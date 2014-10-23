#ifndef __MODEL_H__
#define __MODEL_H__

#include "at_prefix.h"
#include "cocoa/Object.h"
#include "Render/material.h"
#include "Texture/TextureLoader.h"
#include "cocoa/GLState.h"
#include "schedule/schedule.h"
#include "at_type/AABB.h"

enum FVF_Fomat{
	FVF_XYZ		= 0x00000001,
	FVF_XYZW	= 0x00000002,
	FVF_NORMAL	= 0x00000010,
	FVF_RGB		= 0x00000100,
	FVF_RGBA	= 0x00000200,
	FVF_TEX		= 0x00001000,
	FVF_TEX1	= 0x00002000,
	FVF_TEX2	= 0x00004000,
	FVF_TEX3	= 0x00008000,
};

// 坐标 > 法线 > 顶点颜色 > 纹理坐标
#define BUFFER_OFFSET( offset )   ((GLvoid*) (offset))

namespace AttemptSpace
{
	typedef int VertexFomat;

	struct  VertexFormat_XYZW_RGBA
	{
		vec4 position;
		Color4f color;
	};
	const VertexFomat FVF_XYZW_RGBA = FVF_XYZW | FVF_RGBA;

	struct  VertexFormat_XYZ_TEX
	{
		vec3 position;
		vec2 tex_coord;
	};
	const VertexFomat FVF_XYZ_TEX = FVF_XYZ | FVF_TEX;

	struct  VertexFormat_XYZ_NORMAL_TEX
	{
		vec3 position;
		vec3 normal;
		vec2 tex_coord;
	};
	const VertexFomat FVF_XYZ_NORMAL_TEX = FVF_XYZ | FVF_NORMAL | FVF_TEX;

	class Model : public Object
	{
	public:
		~Model();

		static Model* Create() 
		{ 
			Model *obj = new Model();
			if (obj && obj->Init() == true)
			{
				obj->AutoRelease();
				return obj;
			}
			SAFDelete(obj);
			return NULL; 
		};

		static int GetVertexFomatSize(VertexFomat fomat);

		//  设置顶点数据
		// 参数：
		//		data -- 顶点数据的起始地址
		//		data_size -- 数据的大小
		//		count -- 顶点的数目
		void SetVertexData(void *data, int data_size, int count);

		// 设置顶点格式
		void SetVertexFomat(VertexFomat vertex_fomat);
		VertexFomat GetVertexFomat() { return vertex_fomat_; }

		//  设置纹理
		int SetTexture(Texture2D *tex);

		// 获取纹理
		Texture2D* GetTexture() {return texture_;}

		// 设置对象的材质
		void SetMaterial(Material *material);

		// 获取材质信息
		Material* GetMaterial() { return material_; };

		// 绑定数据到当前的渲染环境
		virtual AttemptERR BindData();

		// 绑定数据并且渲染
		virtual AttemptERR Draw(float f_time);

		// 获取动作的总时间长度
		float GetTimeLong() { return time_long_; }

		// 设置索引数组
		void SetIndex(void *index, int index_count);

		virtual AABB GetAABB(float f_time) {return aabb; };

		virtual void SetAABB(AABB box) { aabb = box; }

		int GetNowFrame(float f_time) {return 0;} 


	protected:

		Model();

	protected:
		ShaderProgram	*shader_;					// 当前使用的shader		
		GLuint			vao_;						// 顶点数组
		GLuint			vertex_attribute_buffer_;	// 顶点缓冲区
		GLuint			index_buffer_;				// 索引数组缓存
		int				index_size_;				// 索引数组大小
		Texture2D		*texture_;					// 纹理资源索引
		Material		*material_;					// 物体材质
		VertexFomat		vertex_fomat_;				// 顶点的数据格式
		int				vertex_size_;				// 顶点的大小
		int				vertex_num_;				// 需要绘制的图元数量
		float			time_long_;					// 动画的时长
		AABB			aabb;						// 碰撞体
	private:
	};

}	// end namespace AttemptSpace

#endif
