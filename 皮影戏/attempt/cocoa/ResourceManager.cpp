#include "ResourceManager.h"
#include "Log.h"


namespace AttemptSpace
{

	AutoReleasePool* ResourceManager::GetAuoReleasePool()
	{
		if (auto_release_ == NULL)
		{
			auto_release_ = AutoReleasePool::Create();
		}
		return auto_release_;
	}

	ResourceManager::ResourceManager()
		:Object(),
		auto_release_(NULL),
		b_game_end_(false)
	{
	}

	ResourceManager::~ResourceManager()
	{
		Log::GetInstance()->Info("ResourceManager::~ResourceManager()");
		SAFRelease(auto_release_);

	}

	ResourceManager* ResourceManager::GetInstance()
	{
		if (resource_manager_ == NULL)
		{
			resource_manager_ = new ResourceManager();
		}
		return resource_manager_;
	}

	ResourceManager *ResourceManager::resource_manager_ = NULL;
}	// end namespace AttemptSpace
