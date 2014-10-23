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
		
		// ��Ӷ���
		void Add(float x, float y, float z);
		
		// �ж��Ƿ�Ϊ��
		bool Empty();
		
		// �����Ƿ��ڰ�Χ����
		bool IsContains(float x, float y, float z);
		
		// ��ȡ���ĵ�
		vec3 GetCenter();
		
		// ��ײ���
		static bool IntersectAABBs(AABB &a, AABB &b);
		
		// ���õ��ڰ�Χ�еı任����
		void SetToTransformedBox(mat4 t);
		
		// ���ð�Χ��
		void Reset();
		
	private:
		// ��Χ��Բ��
		vec3 min_;
		vec3 max_;

		// ��ǰ�İ�Χ��
		vec3 current_min_;
		vec3 current_max_;
	};
}
#endif // __AABB_H__