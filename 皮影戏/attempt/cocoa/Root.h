#ifndef __ROOT_H__
#define __ROOT_H__

#include "Node/node.h"

namespace AttemptSpace
{
	class Root : public Object
	{
	public:
		~Root();

		static Root* GetInstance();

		// 新的渲染树入栈，但不释放之前的渲染树
		void PushNode(Node *tag);

		// 移除当前的渲染树
		Node* PopNode();

		// 替换当前的渲染树
		void SetNode(Node* tag);

		// 渲染当前的渲染树
		void Draw(float f_delta);
		Node* GetNode() { if (!node_stack_.empty()) { return node_stack_.top();}}

	protected:
		Root();

	private:

		static Root* instance_;	//单例对象

		stack<Node*> node_stack_;	// 根节点栈
	};
};
#endif // __ROOT_H__