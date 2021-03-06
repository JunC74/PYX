#ifndef __RENDER_OBJECT_DATA_H__
#define __RENDER_OBJECT_DATA_H__

#include "attempt/promise.h"
#include "attempt/Render/material.h"

namespace AttemptSpace
{

	class RenderClass;
	class Texture;

	struct FrameInfoStruct
	{
		GLuint index_buffer; // 索引缓冲区
		int vertex_num;	// 需要绘制的图元数量
	}; 

	class RenderObjectData
	{
	public:
		RenderObjectData();
		~RenderObjectData();

		//  设置顶点数据
		// 参数：
		//		data -- 顶点数据的起始地址
		//		vertex_fromat -- 顶点的格式
		void SetVertexData(void *data, int data_size, VERTEXFOMAT vertex_fromat);

		//  获取顶点数组
		GLuint GetVao();

		//  设置纹理
		// 参数： texture_file_name -- 纹理图片的文件名
		// renturn: 0 - 成功, -1 - 读取纹理失败
		int SetTexData(std::wstring texture_name);

		// 获取纹理缓冲区
		GLuint GetTexBuffer();

		// 获取帧的信息
		FrameInfoStruct GetFrameInfo(DrawMode mode);

		// 添加每一帧的索引
		// 参数： 
		//		index -- 索引数据的起始地址
		//		index_size -- 索x引数据的大小
		void AddFrame(unsigned short *index, int index_size);

		// 设置对象的材质
		void SetMaterial(Material material);

		// 获取材质信息
		Material GetMaterial();

		// 绑定数据到当前的渲染环境
		AttemptERR Bind(RenderClass *render_device);

		// 释放对象的所有数据
		void Free();

	private:
		GLuint			vao_;						// 顶点数组
		GLuint			vertex_attribute_buffer_;	// 顶点缓冲区
		std::vector<FrameInfoStruct> frame_info_;	// 索引缓冲区数组
		boost::shared_ptr<Texture>		tex_;			// 纹理缓冲区
		Material		material_;					// 物体材质
		GLushort		now_frame_id_;				// 当前的帧编号
		VERTEXFOMAT		vertex_fomat_;				// 顶点的数据格式
		int				vertex_size_;				// 顶点的大小
	protected:
	};
}	// end namespace AttemptSpace

#endif
