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
		int type;		// 消息类型
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

		// @brief 注册Obj的消息响应
		// return 注册的ID
		int RegisterForMessage(int type, Object * callback_object, FUNC_MESSAGE_CALLBACK call_back_func);

		int RegisterScriptFunc(int type, int handler);

		void UnRegisterForMessage(int id);

		void SendMessage(Message *new_message);

		bool IsTypeInSystem(int type);

	private:
	
		MessagePump();

		bool Init();
		
		// @brief 注册消息事件
		int RegistaerMessageEvent(MessageEvent *pevent);

		// @brief 处理消息
		void ProcessMessage(Message* msg);
	private:

		static MessagePump *instance_;
		MessageEventIDMap message_event_map_;		// 所有注册时间的管理
		MessageTypeMap m_message_type_;
		MessageList msg_list_;
	};
}	// end AttemptSpace

#endif