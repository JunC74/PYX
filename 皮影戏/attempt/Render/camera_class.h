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

		// ��������ͶӰ
		void SetOrthographic(float x_min, float x_max, float y_min, float y_max, float z_min, float z_max);

		// ����͸��ͶӰ
		// fov - ��ֱ�����ϵ��ӳ��Ƕ�
		// aspect - ���ڵĿ����߶ȵ��ݺ��
		// f_near - ���ü���
		// f_far - Զ�ü���
		void SetPrespective(float fov, float aspect, float f_near, float f_far);

		// ��ȡ�任����
		mat4 GetViewMatrix() { return spin_mat_*view_mat_; };

		// ��ȡͶӰ����
		mat4 GetProjectionMatrix() { return projection_mat_; };


		//  �����ƽ��
		// ������
		//		direction -- ���ƽ�Ƶķ�������,����, ǰ��
		//		distance -- ƽ�Ƶľ���
		void Translational(vec3 direction, float distance);

		vec3 GetPosition() 
		{
			vec4 pos = this->GetViewMatrix() * vec4(0, 0, 0, 1);
			return -vec3(pos.x, pos.y, pos.z);
		}

		void LookAt(float eye_x, float eye_y, float eye_z,
			float look_at_x, float look_at_y, float look_at_z,
			float up_x, float up_y, float up_z);

		// ����
		void Spin(float x, float y, float z, float radian);


		//  Χ��LookAt�������ת
		// ������ 
		//		x, y, z -- �����᷽�򣨵�ǰ����ϵ��
		//		radian -- ��ת�Ļ���
		void Rotate(float x, float y, float z, float radian);

	private:
		vec4 up_;				// �Ϸ���
		vec4 eye_;				// �������
		vec4 look_at_;			// Ŀ������
		mat4 projection_mat_;	// ͶӰ����
		mat4 view_mat_;			// ��ģ����
		mat4 spin_mat_;			// �����任����

	}; // end class CameraClass

} // end namespace AttemptSpace

#endif // end __CAMERA_CLASS_H__