#ifndef __OBJECT_H__
#define __OBJECT_H__

#include "attempt/Render/render_object.h"

namespace AttemptSpace
{
	class RenderClass;

	class ObjectControl
	{
	public:

		ObjectControl();

		~ObjectControl();

		// 清除
		void ClearObject();

		// 添加渲染对象(相同的渲染对象都会删除掉)
		void AddObject(boost::shared_ptr<RenderObject> object);

		void DeleteObject(boost::shared_ptr<RenderObject> object);

		boost::shared_ptr<RenderObject> DeleteObject(int indedx);

		boost::shared_ptr<RenderObject>* GetObjectArray();

		// 对渲染对象进行Z方向的排序(由远到近)
		void ObjectSort(RenderClass* render_device, mat4 transformation);

		int GetSize();

		boost::shared_ptr<RenderObject> At(int index);

	protected:
	private:
		std::vector<boost::shared_ptr<RenderObject>> objects_;
		
	}; // end class ObjectControl

} // end namespace AttemptSpace

#endif // end #ifndef __OBJECT_H__



