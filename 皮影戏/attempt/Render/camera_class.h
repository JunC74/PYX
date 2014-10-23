#ifndef __CAMERA_CLASS_H__
#define __CAMERA_CLASS_H__

#include "at_prefix.h"
#include "cocoa/Object.h"

namespace AttemptSpace
{
	class CameraClass : public Object
	{
	public:
		CameraClass();

		static CameraClass* Create(vec4 eye, vec4 look_at, vec4 up);

		bool Init(vec4 eye, vec4 look_at, vec4 up);

		// 设置正交投影
		void SetOrthographic(float x_min, float x_max, float y_min, float y_max, float z_min, float z_max);

		// 设置透视投影
		// fov - 垂直方向上的视场角度
		// aspect - 窗口的宽度与高度的纵横比
		// f_near - 近裁剪面
		// f_far - 远裁剪面
		void SetPrespective(float fov, float aspect, float f_near, float f_far);

		// 获取变换矩阵
		mat4 GetViewMatrix() { return spin_mat_*view_mat_; };

		// 获取投影矩阵
		mat4 GetProjectionMatrix() { return projection_mat_; };


		//  相机的平移
		// 参数：
		//		direction -- 相机平移的方向（左右,上下, 前后）
		//		distance -- 平移的距离
		void Translational(vec3 direction, float distance);

		vec3 GetPosition() 
		{
			vec4 pos = this->GetViewMatrix() * vec4(0, 0, 0, 1);
			return -vec3(pos.x, pos.y, pos.z);
		}

		void LookAt(float eye_x, float eye_y, float eye_z,
			float look_at_x, float look_at_y, float look_at_z,
			float up_x, float up_y, float up_z);

		// 自旋
		void Spin(float x, float y, float z, float radian);


		//  围绕LookAt点进行旋转
		// 参数： 
		//		x, y, z -- 中心轴方向（当前坐标系）
		//		radian -- 旋转的弧度
		void Rotate(float x, float y, float z, float radian);

	private:
		vec4 up_;				// 上方向
		vec4 eye_;				// 相机坐标
		vec4 look_at_;			// 目标坐标
		mat4 projection_mat_;	// 投影矩阵
		mat4 view_mat_;			// 视模矩阵
		mat4 spin_mat_;			// 自旋变换矩阵

	}; // end class CameraClass

} // end namespace AttemptSpace

#endif // end __CAMERA_CLASS_H__