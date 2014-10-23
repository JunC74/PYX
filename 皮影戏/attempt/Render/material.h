#ifndef __MATERIAL_H__
#define __MATERIAL_H__

#include "at_prefix.h"


namespace AttemptSpace
{

	// ����Ĳ��ʽṹ��
	class Material : public Object
	{
	public:
		Color4f ambient;		// ��������ϵ��
		Color4f diffuse;		// ������ϵ��
		Color4f specular;		// ���淴��ϵ��
		Color4f emmissive;		// �����
		GLfloat shininess;	// �߹�ϵ��
		Material() :Object() {}
		static Material* Create(Color4f _ambient,		
			Color4f _diffuse,		
			Color4f _specular,	
			Color4f _emission,	
			float _shininess
			) 
		{
			Material *obj = new Material();
			if (obj && 
				obj->Init(_ambient, _diffuse, _specular, _emission, _shininess) == true)
			{
				obj->AutoRelease();
				return obj;
			}
			SAFDelete(obj);
			return NULL;
		}

		// Ĭ�ϵĲ��ʣ��������еĹ�
		static Material* Create()
		{
			return Material::Create(C4f(0.1, 0.1, 0.1, 1.0) , 
				C4f(0.8, 0.8, 0.8, 1.0),
				C4f(0.3, 0.3, 0.3, 1.0),
				C4f(0.0, 0.0, 0.0, 0.0), 
				100);
		}

		bool Init(Color4f _ambient,		
			Color4f _diffuse,		
			Color4f _specular,	
			Color4f _emission,	
			float _shininess
			) 
		{
			ambient = _ambient;
			diffuse = _diffuse;
			specular = _specular;
			emmissive = _emission;
			shininess = _shininess;
			return true;
		}
	};

}
#endif
