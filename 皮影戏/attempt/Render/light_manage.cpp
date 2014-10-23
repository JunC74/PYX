#include "Render/light_manage.h"
#include "cocoa/GLState.h"

namespace AttemptSpace
{
	LightManage::~LightManage()
	{
		Clear();
	}

	LightManage* LightManage::Create()
	{
		LightManage * obj = new LightManage();
		if (obj && obj->Init() == true)
		{
			obj->AutoRelease();
			return obj;
		}
		SAFDelete(obj);
		return obj;
	}

	bool LightManage::Init()
	{
		power_all_ = true;
		return true;
	}

	void LightManage::AddObject(Light* object)
	{
		assert(object != NULL);
		LightType type = object->GetLightType();
		for (int i = 0; i < light_type_index_[type].size(); i++)
		{
			if (object->GetID() == light_type_index_[type].at(i)->GetID())
			{
				return ;
			}
		}

		SAFRetain(object);
		light_type_index_[type].push_back(object);
	}


	void LightManage::Clear()
	{
		for (int type_index = 0; type_index < LIGHT_TYPE_NUM; type_index++)
		{
			for (LightVector::iterator it = light_type_index_[type_index].begin();
				it != light_type_index_[type_index].end();
				it++)
			{
				SAFRelease(*it);
			}
		}
		
	}

	void LightManage::DeleteTag(LightType type, int index)
	{
		if(type < 0 || type >= LIGHT_TYPE_NUM ||
			index < 0 || index >= light_type_index_[type].size())
		{
			return ;
		}
		LightVector::iterator it = light_type_index_[type].begin() + index;
		SAFRelease(*it);
		light_type_index_[type].erase(it);
	}
	
	void LightManage::DeleteTag(Light* object)
	{
		for (int type_index = 0; type_index < LIGHT_TYPE_NUM; type_index++)
		{
			for (LightVector::iterator it = light_type_index_[type_index].begin();
				it != light_type_index_[type_index].end();
				it++)
			{
				SAFRelease(*it);
				return ;
			}
		}
	}

	void LightManage::CloseAll()
	{
		power_all_ = false;
	}

	void LightManage::CloseTag(LightType type, int index)
	{
		assert(type < 0 || type >= LIGHT_TYPE_NUM);
		light_type_index_[type].at(index)->power = false;
	}


	void LightManage::OpeningAll()
	{
		power_all_ = true;
	}

	void LightManage::OpeningTag(LightType type, int index)
	{
		assert(type < 0 || type >= LIGHT_TYPE_NUM);
		light_type_index_[type].at(index)->power = true;
	}

	// 获取某个类型的光源数量
	int LightManage::GetLightNum(LightType type)
	{
		assert(type < 0 || type >= LIGHT_TYPE_NUM);
		return light_type_index_[type].size();
	}


	void LightManage::Bind(Material *material)
	{
		int current_num = 0;			// 当前开启的灯光数目
		ShaderProgram *shader = GLState::GetInstance()->GetShaderProgram();		
		GLuint light_power_location = shader->GetUniformLocation(Uniform_LightPower);
		GLuint light_position_loaction = shader->GetUniformLocation(Uniform_LightPosition);
		GLuint attenuation_location = shader->GetUniformLocation(Uniform_Attenuation);
		GLuint ambient_product_location = shader->GetUniformLocation(Uniform_AmbientProduct);
		GLuint diffuse_product_location = shader->GetUniformLocation(Uniform_DiffuseProduct);
		GLuint specular_product_location = shader->GetUniformLocation(Uniform_SpecularProduct);
		GLuint light_direction_location = shader->GetUniformLocation(Uniform_LightDirection);
		GLuint spot_thete_location = shader->GetUniformLocation(Uniform_SpotTheta);
		GLuint spot_phi_location = shader->GetUniformLocation(Uniform_SpotPhi);

		int point_light_num = shader->GetLightNum(LIGHT_Point);
		int spot_light_num = shader->GetLightNum(LIGHT_Spot);
		int directional_light_num = shader->GetLightNum(LIGHT_Directional);

		int point_light_count  = 0;
		int spot_light_count = 0;
		int directional_light_count = 0;

		mat4 camera_view_matrix = GLState::GetInstance()->GetCamera()->GetViewMatrix();
		// 设置光源的坐标和光源状态
		for (int type_index = 0; type_index < LIGHT_TYPE_NUM; type_index++)
		{
			if (light_type_index_[type_index].size() == 0)
			{
				continue;
			}
			// 只能传shader里面规定的光源数量
			int light_num = shader->GetLightNum((LightType)type_index);
			for (LightVector::iterator it = light_type_index_[type_index].begin();
				it != light_type_index_[type_index].end() && light_num > 0;
				it++, light_num--)
			{
				glUniform1i(light_power_location + current_num, 
					(*it)->power);
				// 当光源开启的时候我们设置相关属性
				if ((*it)->power == true)
				{
					vec4 light_point = (*it)->GetPosition();
					// 世界坐标转化为摄像机坐标系下的坐标
					light_point = camera_view_matrix * light_point;
					light_point.w = 1.0;

					// 光源坐标
					glUniform4fv(light_position_loaction + current_num, 
						1, light_point);
					// 光源衰减系数
					glUniform1f(attenuation_location, (*it)->attenuation);
					// 光源信息和材质的乘积
					glUniform4fv(ambient_product_location, 1, (*it)->ambient * material->ambient);
					glUniform4fv(diffuse_product_location, 1, (*it)->diffuse * material->diffuse);
					glUniform4fv(specular_product_location, 1, (*it)->specular * material->specular);
				}
				current_num++;
			}
		}

		// 方向光设置
		current_num = 0;
		if (light_type_index_[LIGHT_Directional].size() != 0)
		{
			int light_num = shader->GetLightNum(LIGHT_Directional);
			for (LightVector::iterator it = light_type_index_[LIGHT_Directional].begin();
				light_num > 0 && it != light_type_index_[LIGHT_Directional].end();
				it++, light_num --)
			{
				if ((*it)->power == true)
				{
					glUniform3fv(light_direction_location + current_num,
						1, (*it)->direction);
				}
				current_num ++;
			}
		}
		

		// 聚光灯设置
		current_num = 0;
		if (light_type_index_[LIGHT_Spot].size() != 0)
		{
			int light_num = shader->GetLightNum(LIGHT_Spot);
			for (LightVector::iterator it = light_type_index_[LIGHT_Spot].begin();
				light_num > 0 && it != light_type_index_[LIGHT_Spot].end();
				it++, light_num --)
			{
				if ((*it)->power == true)
				{
					glUniform3fv(light_direction_location + GetLightNum(LIGHT_Directional) + current_num,
						1, (*it)->direction);
					glUniform1f(spot_thete_location + current_num,
						(*it)->spot_theta);
					glUniform1f(spot_phi_location + current_num,
						(*it)->spot_phi);
				}
				current_num ++;
			}
		}
		
	}
} // end namespace AttemptSpace