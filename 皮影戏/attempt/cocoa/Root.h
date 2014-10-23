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

		// �µ���Ⱦ����ջ�������ͷ�֮ǰ����Ⱦ��
		void PushNode(Node *tag);

		// �Ƴ���ǰ����Ⱦ��
		Node* PopNode();

		// �滻��ǰ����Ⱦ��
		void SetNode(Node* tag);

		// ��Ⱦ��ǰ����Ⱦ��
		void Draw(float f_delta);
		Node* GetNode() { if (!node_stack_.empty()) { return node_stack_.top();}}

	protected:
		Root();

	private:

		static Root* instance_;	//��������

		stack<Node*> node_stack_;	// ���ڵ�ջ
	};
};
#endif // __ROOT_H__