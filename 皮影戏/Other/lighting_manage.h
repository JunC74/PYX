#ifndef __LIGHTING_MANAGE_H__
#define __LIGHTING_MANAGE_H__

#include "Attempt/promise.h"
#include "Attempt/Render/lighting.h"

namespace AttemptSpace
{
	class RenderClass;

	class LightingManage
	{
	public:
		
		LightingManage() {}
		
		~LightingManage();

		void AddObject(shared_ptr<Lighting> object);

		shared_ptr<Lighting> At(int index);

		shared_ptr<Lighting>* GetArray();

		void Clear();

		void DeleteObject(int index);

		int DeleteObject(shared_ptr<Lighting> object);

		void Bind(RenderClass* render_device);
	private:
		std::vector<shared_ptr<Lighting>> light_objects_;

	protected:
	}; // end class LightingManage

} // end namespace AttemptSpace

#endif // end __LIGHTING_MANAGE_H__

