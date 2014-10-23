#ifndef __AABB_H__
#define __AABB_H__
#include "vec.h"
#include "mat.h"

namespace AttemptSpace
{
	class AABB
	{
	public:

		AABB();
		~AABB();
		
		void SetMin(float x, float y, float z);
		vec3 GetMin();
		
		void SetMax(float x, float y, float z);
		vec3 GetMax();
		
		// 添加顶点
		void Add(float x, float y, float z);
		
		// 判断是否为空
		bool Empty();
		
		// 检测点是否在包围盒内
		bool IsContains(float x, float y, float z);
		
		// 获取中心点
		vec3 GetCenter();
		
		// 碰撞检测
		static bool IntersectAABBs(AABB &a, AABB &b);
		
		// 设置当期包围盒的变换矩阵
		void SetToTransformedBox(mat4 t);
		
		// 重置包围盒
		void Reset();
		
	private:
		// 包围盒圆形
		vec3 min_;
		vec3 max_;

		// 当前的包围盒
		vec3 current_min_;
		vec3 current_max_;
	};
}
#endif // __AABB_H__