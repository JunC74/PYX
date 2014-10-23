#include "Root.h"
#include "ResourceManager.h"
#include "message_system/MessagePump.h"

namespace AttemptSpace
{
	Root *Root::instance_ = NULL;

	Root::Root() : Object()
	{
	}

	Root::~Root()
	{
		while (node_stack_.size())
		{
			SAFRelease(node_stack_.top());
			node_stack_.pop();
		}
	}


	Root* Root::GetInstance()
	{
		if (instance_ == NULL)
		{
			instance_ = new Root();
		}
		return instance_;
	}

	void Root::PushNode(Node *tag)
	{
		if (tag != NULL)
		{
			SAFRetain(tag);
			node_stack_.push(tag);
		}
	}

	Node* Root::PopNode()
	{
		if (node_stack_.size())
		{
			Node* tag = node_stack_.top();
			SAFRelease(tag);
			return tag;
		}
		else
		{
			return NULL;
		}
	}

	void Root::SetNode(Node* tag)
	{
		if (tag && (node_stack_.size()  == 0 || node_stack_.top() != tag))
		{
			if (node_stack_.size())
			{
				SAFRelease(node_stack_.top());
				node_stack_.pop();
			}
			SAFRetain(tag);
			node_stack_.push(tag);
		}
	}

	void Root::Draw(float f_delta)
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		// 运行计时器
		Schedule::GetInstance()->Update(f_delta);
		// Messagepump 的更新
		MessagePump::GetInstance()->Update(f_delta);

		if (node_stack_.size())
		{
			node_stack_.top()->Visit(f_delta);
		}

		ResourceManager::GetInstance()->GetAuoReleasePool()->Clear(); // 所有托管的对象进行释放

	}

};