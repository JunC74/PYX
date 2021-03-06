#include "camera_class.h"

namespace AttemptSpace
{

	CameraClass::CameraClass()
		:Object()
	{
		up_ = vec4(0.0f,1.0f,0.0f,0.0f);	// 上方向
		eye_ = vec4(0.0f,0.0f,0.0f,0.0f);	// 相机坐标
		look_at_ = vec4(0.0,0.0,1.0f);	// 目标坐标
		projection_mat_= Ortho(-1, 1, -1, 1, -1, 1);	// 投影矩阵
		view_mat_=Identity();			// 视模矩阵
		spin_mat_ = Identity();
	}

	 CameraClass* CameraClass::Create(vec4 eye, vec4 look_at, vec4 up)
	 {
		 CameraClass *object = new CameraClass();
		 if (object != NULL && object->Init(eye, look_at, up) == AT_OK)
		 {
			 object->AutoRelease();
			 return object;
		 }

		 SAFDelete(object);
		 return NULL;
	 }

	bool CameraClass::Init(vec4 eye, vec4 look_at, vec4 up)
	{
		up_ = up;
		eye_ = eye;
		look_at_ = look_at;
		projection_mat_= Identity();	// 投影矩阵
		view_mat_= Identity();	// 视模矩阵
		spin_mat_= Identity();
		view_mat_ = AttemptSpace::LookAt(eye_, look_at_, up_);
		vec3 camera_position = GetPosition();
		return AT_OK;
	}


	// 设置正交投影
	void CameraClass::SetOrthographic(float x_min, float x_max, float y_min, float y_max, float z_min, float z_max)
	{
		projection_mat_ = Ortho(x_min, x_max, y_min, y_max, z_min, z_max);
	}

	// 设置透视投影
	// fov - 垂直方向上的视场角度
	// aspect - 窗口的宽度与高度的纵横比
	// f_near - 近裁剪面
	// f_far - 远裁剪面
	void CameraClass::SetPrespective(float fov, float aspect, float z_near, float z_far)
	{
		projection_mat_ = Perspective(fov, aspect, z_near, z_far);
	}

	void CameraClass::Translational(vec3 direction, float distance)
	{
		vec4 route = direction * distance;
		view_mat_ = Translate(route)*view_mat_;
	}

	void CameraClass::LookAt(float eye_x, float eye_y, float eye_z,
		float look_at_x, float look_at_y, float look_at_z,
		float up_x, float up_y, float up_z)
	{
		up_ = vec4(up_x, up_y, up_z, 1.0);
		eye_ = vec4(eye_x, eye_y, eye_z, 1.0);
		look_at_ = vec4(look_at_x, look_at_y, look_at_z, 1.0);
		view_mat_ = AttemptSpace::LookAt(eye_, look_at_, up_);
		spin_mat_= Identity();
	}



	void CameraClass::Spin(float x, float y, float z, float radian)
	{
		spin_mat_ = AttemptSpace::Rotate(radian, x, y, z) * spin_mat_; 
	}


	void CameraClass::Rotate(float x, float y, float z, float radian)
	{
		view_mat_ *= AttemptSpace::Translate(look_at_)*AttemptSpace::Rotate(radian, x, y, z)*AttemptSpace::Translate(-look_at_);
// 		if(direction==DIRECTION_UP)
// 		{
// 			//mat4 m=identity();;
// 			// 		vec4 v;
// 			// 		setupRotate(vec4(1.0,0.0,0.0,0.0),&m,radian);
// 			// 		v.x = (m[0][0]*d_.x + m[1][0]*d_.y + m[2][0]*d_.z + m[3][0]);
// 			// 		v.y = (d_.x * m[0][1] + d_.y * m[1][1] + d_.z * m[2][1] + m[3][1]);
// 			// 		v.z = (d_.x * m[0][2] + d_.y * m[1][2] + d_.z * m[2][2] + m[3][2]);
// 
// 			// 		eye_.z=eye_.z*cos(radian)-eye_.x*sin(radian);
// 			//  		eye_.x=eye_.z*sin(radian)+eye_.x*cos(radian);
// 			//eye_ = look_at_+v;
// 
// 			view_mat_*=Translate(-look_at_)*RotateX(radian)*Translate(look_at_);
// 
// 		}
// 		if (direction==DIRECTION_DOWN)
// 		{
// 			view_mat_*=Translate(-look_at_)*RotateX(-radian)*Translate(look_at_);
// 		}
// 		if(direction==DIRECTION_LEFT)
// 		{
// 			view_mat_*=Translate(-look_at_)*RotateY(radian)*Translate(look_at_);
// 		}
// 		if(direction==DIRECTION_RIGHT)
// 		{
// 			view_mat_*=Translate(-look_at_)*RotateY(-radian)*Translate(look_at_);
// 		}
	}

}	// end namespace AttemptSpacee