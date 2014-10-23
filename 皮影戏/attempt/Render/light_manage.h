#ifndef __LIGHTING_MANAGE_H__
#define __LIGHTING_MANAGE_H__

#include "cocoa/Object.h"
#include "material.h"

namespace AttemptSpace
{

	// ��Դ�ṹ��
	class Light : public Object
	{
	public:
		bool		power;			// ��Դ����
		float		attenuation;	// ˥��ϵ�� 
		Color4f		ambient;		// ������
		Color4f		diffuse;		// �������
		Color4f		specular;		// ���淴���
		vec3		direction;		// ��Դ���� (LIGHT_Spot & LIGHT_Directional)
		//float		range;			// ���շ�Χ (LIGHT_Point & LIGHT_Spot)
		GLfloat		spot_theta;			// �۹�Ƶ���׶��С (LIGHT_Spot)
		GLfloat		spot_phi;			// �۹�Ƶ���׶��С (LIGHT_Spot)

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

		// Χ��v3_axle������תf_angle�ȡ�
		void Rotate(vec3 v3_axle, float f_angle)
		{ transform_ = AttemptSpace::Rotate(f_angle, v3_axle.x, v3_axle.y, v3_axle.z) * transform_;}
		void RotateX(float f_angle)
		{ transform_ = AttemptSpace::RotateX(f_angle) * transform_;}
		void RotateY(float f_angle)
		{ transform_ = AttemptSpace::RotateY(f_angle) * transform_;}
		void RotateZ(float f_angle)
		{ transform_ = AttemptSpace::RotateZ(f_angle) * transform_;}

		// ����
		void Spin(vec3 v3_axle, float f_angle)
		{ mat_spin_ = AttemptSpace::Rotate(f_angle, v3_axle.x, v3_axle.y, v3_axle.z); }
		void SpinX(float f_angle)
		{ mat_spin_ = AttemptSpace::RotateX(f_angle) * mat_spin_; }
		void SpinY(float f_angle)
		{ mat_spin_ = AttemptSpace::RotateY(f_angle) * mat_spin_; }
		void SpinZ(float f_angle)
		{ mat_spin_ = AttemptSpace::RotateZ(f_angle) * mat_spin_;}

		// ƽ�Ʋ���
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
		mat4	transform_;	// �任����
		mat4	mat_spin_;		// ��������
		LightType	light_type;		// ��Դ����
		
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

		// ��ȡĳ�����͵Ĺ�Դ����
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

