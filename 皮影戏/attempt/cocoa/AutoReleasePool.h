#ifndef AUTORELEASE_H_HEADER_INCLUDED_AD198C35
#define AUTORELEASE_H_HEADER_INCLUDED_AD198C35
#include "Object.h"
#include "Array.h"

namespace AttemptSpace
{

	class AutoReleasePool : public Object
	{
	public:
		// 添加对象进自动释放管理器中
		void Add(Object* object);

		// 从管理器中移除相应的对象。
		void Remove(Object* object);

		// 所有的托管对象的计数器进行-1操作，并修改其托管标志。
		void Clear();

		// 把指定的对象从容器中移除，使其自身的计数器-1和重置其托管标识。
		void Delete(Object* object);

		static AutoReleasePool* Create();

		bool Init();

		AutoReleasePool();

		virtual ~AutoReleasePool();
	private:
		Array arr_object_pool;
	};

}	// end namespace AttemptSpace
#endif /* AUTORELEASE_H_HEADER_INCLUDED_AD198C35 */
