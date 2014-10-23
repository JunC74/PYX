#ifndef RESOURCEMANAGER_H_HEADER_INCLUDED_AD19915D
#define RESOURCEMANAGER_H_HEADER_INCLUDED_AD19915D

#include "Object.h"
#include "AutoReleasePool.h"

namespace AttemptSpace
{

	class ResourceManager : public Object
	{
	public:
		// 获取当前的自动释放管理器的实例。
		AutoReleasePool* GetAuoReleasePool();

		virtual ~ResourceManager();

		static ResourceManager* GetInstance();

	private:

		bool b_game_end_;

		ResourceManager();
		AutoReleasePool *auto_release_;
		static ResourceManager *resource_manager_;
	};
}	// end namespace AttemptSpace

#endif /* RESOURCEMANAGER_H_HEADER_INCLUDED_AD19915D */
