#ifndef __MESSAGEPUMP_H__
#define __MESSAGEPUMP_H__

#include "cocoa/Object.h"
#include "Message.h"
#include "MessageEvent.h"

namespace AttemptSpace
{

	struct MessageReg
	{
		Object *object;
		FUNC_MESSAGE_CALLBACK CallbackFunc;
	};

	struct MessageType
	{
		int type;		// ��Ϣ����
		std::list<MessageEvent*> reg_list;
	};

	typedef std::list<Message*> MessageList;
	typedef std::list<MessageEvent*> RegList;
	typedef std::map<int, MessageType> MessageTypeMap;
	typedef std::map<int, MessageEvent*> MessageEventIDMap;

	class MessagePump : public Object
	{
	public:
		static MessagePump* GetInstance();

		~MessagePump();

		void Update(float dt);

		void AddMessageToSystem(int type);

		// @brief ע��Obj����Ϣ��Ӧ
		// return ע���ID
		int RegisterForMessage(int type, Object * callback_object, FUNC_MESSAGE_CALLBACK call_back_func);

		int RegisterScriptFunc(int type, int handler);

		void UnRegisterForMessage(int id);

		void SendMessage(Message *new_message);

		bool IsTypeInSystem(int type);

	private:
	
		MessagePump();

		bool Init();
		
		// @brief ע����Ϣ�¼�
		int RegistaerMessageEvent(MessageEvent *pevent);

		// @brief ������Ϣ
		void ProcessMessage(Message* msg);
	private:

		static MessagePump *instance_;
		MessageEventIDMap message_event_map_;		// ����ע��ʱ��Ĺ���
		MessageTypeMap m_message_type_;
		MessageList msg_list_;
	};
}	// end AttemptSpace

#endif