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

// ���� > ���� > ������ɫ > ��������
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

		//  ���ö�������
		// ������
		//		data -- �������ݵ���ʼ��ַ
		//		data_size -- ���ݵĴ�С
		//		count -- �������Ŀ
		void SetVertexData(void *data, int data_size, int count);

		// ���ö����ʽ
		void SetVertexFomat(VertexFomat vertex_fomat);
		VertexFomat GetVertexFomat() { return vertex_fomat_; }

		//  ��������
		int SetTexture(Texture2D *tex);

		// ��ȡ����
		Texture2D* GetTexture() {return texture_;}

		// ���ö���Ĳ���
		void SetMaterial(Material *material);

		// ��ȡ������Ϣ
		Material* GetMaterial() { return material_; };

		// �����ݵ���ǰ����Ⱦ����
		virtual AttemptERR BindData();

		// �����ݲ�����Ⱦ
		virtual AttemptERR Draw(float f_time);

		// ��ȡ��������ʱ�䳤��
		float GetTimeLong() { return time_long_; }

		// ������������
		void SetIndex(void *index, int index_count);

		virtual AABB GetAABB(float f_time) {return aabb; };

		virtual void SetAABB(AABB box) { aabb = box; }

		int GetNowFrame(float f_time) {return 0;} 


	protected:

		Model();

	protected:
		ShaderProgram	*shader_;					// ��ǰʹ�õ�shader		
		GLuint			vao_;						// ��������
		GLuint			vertex_attribute_buffer_;	// ���㻺����
		GLuint			index_buffer_;				// �������黺��
		int				index_size_;				// ���������С
		Texture2D		*texture_;					// ������Դ����
		Material		*material_;					// �������
		VertexFomat		vertex_fomat_;				// ��������ݸ�ʽ
		int				vertex_size_;				// ����Ĵ�С
		int				vertex_num_;				// ��Ҫ���Ƶ�ͼԪ����
		float			time_long_;					// ������ʱ��
		AABB			aabb;						// ��ײ��
	private:
	};

}	// end namespace AttemptSpace

#endif
