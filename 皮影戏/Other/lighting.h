#ifndef __LIGHTING_H__
#define __LIGHTING_H__

#include "attempt/promise.h"

namespace AttemptSpace
{
	class RenderClass;

	// 光源结构体
	class Lighting
	{
	public:
		LightType light_type; // 光源类型
		Color4  ambient;	// 环境光
		Color4  diffuse;	// 漫反射光
		Color4  specular;   // 镜面反射光
		vec4    position;   // 世界坐标
		vec4	direction;	// 光源方向
		float	range;		// 光照范围
		GLfloat	theta;		// 聚光灯的内锥大小
		GLfloat	phi;		// 聚光灯的外锥大小
		bool	power;		// 光源开关

		Lighting();
		~Lighting();
		
		// 使用光源
		void Bind(RenderClass *render_device, int location);

	}; // end Lighting

} // end namespace AttemptSpace

#endif __LIGHTING_H__
