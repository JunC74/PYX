#ifndef RESOURCEMANAGER_H_HEADER_INCLUDED_AD19915D
#define RESOURCEMANAGER_H_HEADER_INCLUDED_AD19915D

#include "Object.h"
#include "AutoReleasePool.h"

namespace AttemptSpace
{

	class ResourceManager : public Object
	{
	public:
		// ��ȡ��ǰ���Զ��ͷŹ�������ʵ����
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
