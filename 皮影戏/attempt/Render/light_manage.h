#ifndef __LIGHTING_MANAGE_H__
#define __LIGHTING_MANAGE_H__

#include "cocoa/Object.h"
#include "material.h"

namespace AttemptSpace
{

	// 光源结构体
	class Light : public Object
	{
	public:
		bool		power;			// 光源开关
		float		attenuation;	// 衰减系数 
		Color4f		ambient;		// 环境光
		Color4f		diffuse;		// 漫反射光
		Color4f		specular;		// 镜面反射光
		vec3		direction;		// 光源方向 (LIGHT_Spot & LIGHT_Directional)
		//float		range;			// 光照范围 (LIGHT_Point & LIGHT_Spot)
		GLfloat		spot_theta;			// 聚光灯的内锥大小 (LIGHT_Spot)
		GLfloat		spot_phi;			// 聚光灯的外锥大小 (LIGHT_Spot)

		Light() : Object() {
			power = true;
			light_type = LIGHT_Point;
		}
		static Light* Create(LightType type)
		{
			Light* obj = new Light();
			if (obj && obj->Init(type) == true)
			{
				obj->AutoRelease();
				return obj;
			}
			SAFDelete(obj);
			return NULL;
		}

		// 围绕v3_axle向量旋转f_angle度。
		void Rotate(vec3 v3_axle, float f_angle)
		{ transform_ = AttemptSpace::Rotate(f_angle, v3_axle.x, v3_axle.y, v3_axle.z) * transform_;}
		void RotateX(float f_angle)
		{ transform_ = AttemptSpace::RotateX(f_angle) * transform_;}
		void RotateY(float f_angle)
		{ transform_ = AttemptSpace::RotateY(f_angle) * transform_;}
		void RotateZ(float f_angle)
		{ transform_ = AttemptSpace::RotateZ(f_angle) * transform_;}

		// 自旋
		void Spin(vec3 v3_axle, float f_angle)
		{ mat_spin_ = AttemptSpace::Rotate(f_angle, v3_axle.x, v3_axle.y, v3_axle.z); }
		void SpinX(float f_angle)
		{ mat_spin_ = AttemptSpace::RotateX(f_angle) * mat_spin_; }
		void SpinY(float f_angle)
		{ mat_spin_ = AttemptSpace::RotateY(f_angle) * mat_spin_; }
		void SpinZ(float f_angle)
		{ mat_spin_ = AttemptSpace::RotateZ(f_angle) * mat_spin_;}

		// 平移操作
		void Translation(vec3 v3_translation) 
		{transform_ = AttemptSpace::Translate(v3_translation) * transform_;};
		void TranslationX(float f_translation_x)
		{ transform_ = AttemptSpace::Translate(f_translation_x, 0, 0) * transform_;}
		void TranslationY(float f_translation_y)
		{ transform_ = AttemptSpace::Translate(0, f_translation_y, 0) * transform_; }
		void TranslationZ(float f_translation_z)
		{ transform_ = AttemptSpace::Translate(0, 0, f_translation_z) * transform_; }

		vec4 GetPosition() { return transform_ * mat_spin_ * vec4(0, 0, 0, 1); }

		LightType GetLightType() { return light_type; }
	private:
	
		bool Init(LightType type)
		{
			if(type >= 0 && type < LIGHT_TYPE_NUM)
			{
				light_type = type;
				return true;
			}
			return false;
		}
		mat4	transform_;	// 变换矩阵。
		mat4	mat_spin_;		// 自旋矩阵
		LightType	light_type;		// 光源类型
		
	}; // end Light

	class LightManage : public Object
	{
	public:

		static LightManage* Create();
		
		LightManage():Object() {}
		
		~LightManage();

		void AddObject(Light* object);

		void CloseAll();

		void CloseTag(LightType type, int index);

		void OpeningAll();

		void OpeningTag(LightType type, int index);

		void Clear();

		void DeleteTag(LightType type, int index);

		void DeleteTag(Light* object);

		Light* GetByIndex(LightType type, int index) { return light_type_index_[type].at(index); }

		// 获取某个类型的光源数量
		int GetLightNum(LightType type);

		void Bind(Material *material);

		bool Init();
	private:
		typedef std::vector<Light*> LightVector;
		LightVector light_type_index_[LIGHT_TYPE_NUM];
		bool power_all_;
	protected:
	}; // end class LightManage

} // end namespace AttemptSpace

#endif // end __LIGHTING_MANAGE_H__

