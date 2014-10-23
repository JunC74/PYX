#include "AABB.h"

namespace AttemptSpace
{
	AABB::AABB() 
	{
		min_ = vec3(0, 0, 0);
		max_ = vec3(0, 0, 0);
		current_min_ = min_;
		current_max_ = max_;
	}

	AABB::~AABB()
	{

	}

	void AABB::SetMax(float x, float y, float z)
	{
		max_.x = x;
		max_.y = y;
		max_.z = z;
		current_max_ = max_;
	}

	vec3 AABB::GetMax()
	{
		return current_max_;
	}

	void AABB::SetMin(float x, float y, float z)
	{
		min_.x = x;
		min_.y = y;
		min_.z = z;
		current_min_ = min_;
	}

	vec3 AABB::GetMin()
	{
		return current_min_;
	}

	void AABB::Add(float x, float y, float z)
	{
		if(x < min_.x) min_.x = x;
		if(y < min_.y) min_.y = y;
		if(z < min_.z) min_.z = z;

		if(x > max_.x) max_.x = x;
		if(y > max_.y) max_.y = y;
		if(z > max_.z) max_.z = z;

		current_min_ = min_;
		current_max_ = max_;
	}

	bool AABB::Empty()
	{
		return current_min_.x > current_max_.x ||
			current_min_.y > current_max_.y || 
			current_min_.z > current_max_.z;
	}

	bool AABB::IsContains(float x, float y, float z)
	{
		return current_max_.x >= x && 
			current_max_.y >= y && 
			current_max_.z >= z &&
			current_min_.x <= x && 
			current_min_.y <= y &&
			current_min_.z <= z;
	}

	vec3 AABB::GetCenter()
	{
		return (current_min_ + current_max_) * 0.5;
	}

	bool AABB::IntersectAABBs(AABB &a, AABB &b)  
	{
		if (a.Empty() || b.Empty())
		{
			return false;
		}
		vec3 a_max_ = a.GetMax();
		vec3 a_min_ = a.GetMin();
		vec3 b_max_ = b.GetMax();
		vec3 b_min_ = b.GetMin();
		if (a_max_.x < b_min_.x) return false;
		if (a_max_.y < b_min_.y) return false;
		if (a_max_.z < b_min_.z) return false;

		if (b_max_.x < a_min_.x) return false;
		if (b_max_.y < a_min_.y) return false;
		if (b_max_.z < a_min_.z) return false;
		return true;
	}

	void AABB::SetToTransformedBox(mat4 t)
	{
		if (Empty()) {                              //判断包装盒是否为空
			return;
		}
		vec3 vmin(0), vmax(0);
		vmin.x += t[0][3];                                 //x方向上平移
		vmax.x += t[0][3];                                 //x方向上平移
		vmin.y += t[1][3];                                 //y方向上平移
		vmax.y += t[1][3];                                 //y方向上平移
		vmin.z += t[2][3];                                //z方向上平移
		vmax.z += t[2][3];                                //z方向上平移
		if (t[0][0] > 0.0f) {
			vmin.x += t[0][0] * min_.x; vmax.x += t[0][0] * max_.x;
		} else {
			vmin.x += t[0][0] * max_.x; vmax.x += t[0][0] * min_.x;
		}
		if (t[0][1] > 0.0f) {
			vmin.x += t[0][1] * min_.y; vmax.x += t[0][1] * max_.y;
		} else {
			vmin.x += t[0][1] * max_.y; vmax.x += t[0][1] * min_.y;
		}
		if (t[0][2] > 0.0f) {
			vmin.x += t[0][2] * min_.z; vmax.x += t[0][2] * max_.z;
		} else {
			vmin.x += t[0][2] * max_.z; vmax.x += t[0][2] * min_.z;
		}
		if (t[1][0] > 0.0f) {
			vmin.y += t[1][0] * min_.x; vmax.y += t[1][0] * max_.x;
		} else {
			vmin.y += t[1][0] * max_.x; vmax.y += t[1][0] * min_.x;
		}
		if (t[1][1] > 0.0f) {
			vmin.y += t[1][1] * min_.y; vmax.y += t[1][1] * max_.y;
		} else {
			vmin.y += t[1][1] * max_.y; vmax.y += t[1][1] * min_.y;
		}
		if (t[1][2] > 0.0f) {
			vmin.y += t[1][2] * min_.z; vmax.y += t[1][2] * max_.z;
		} else {
			vmin.y += t[1][2] * max_.z; vmax.y += t[1][2] * min_.z;
		}
		if (t[2][0] > 0.0f) {
			vmin.z += t[2][0] * min_.x; vmax.z += t[2][0] * max_.x;
		} else {
			vmin.z += t[2][0] * max_.x; vmax.z += t[2][0] * min_.x;
		}
		if (t[2][1] > 0.0f) {
			vmin.z += t[2][1] * min_.y; vmax.z += t[2][1] * max_.y;
		} else {
			vmin.z += t[2][1] * max_.y; vmax.z += t[2][1] * min_.y;
		}
		if (t[2][2] > 0.0f) {
			vmin.z += t[2][2] * min_.z; vmax.z += t[2][2] * max_.z;
		} else {
			vmin.z += t[2][2] * max_.z; vmax.z += t[2][2] * min_.z;
		}
		current_min_ = vmin;
		current_max_ = vmax;
	}

	void AABB::Reset()
	{
		max_ = vec3(0);
		min_ = vec3(0);
		current_max_ = max_;
		current_min_ = min_;
	}
}