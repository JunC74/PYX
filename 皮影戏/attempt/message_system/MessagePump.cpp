#include "MessagePump.h"
#include "lua/lua_support.h"

MessagePump *MessagePump::instance_ = NULL;

MessagePump* MessagePump::GetInstance()
{
	if (instance_ == NULL)
	{
		instance_ = new MessagePump;
		instance_->Init();
	}
	return instance_;
}

MessagePump::MessagePump()
	:Object()
{

}

MessagePump::~MessagePump()
{
	// 释放 msg_queue_
	for (MessageList::iterator msg_it = msg_list_.begin();
		msg_it != msg_list_.end();
		msg_it++)
	{
		SAFRelease(*msg_it);
	}
	// 释放注册的消息响应
	for (MessageEventIDMap::iterator it = message_event_map_.begin();
		it != message_event_map_.end(); it++)
	{
		SAFRelease(it->second);
	}
}

bool MessagePump::Init()
{
	// 添加系统消息
	for (int msg = 0; msg < MSG_NUM; msg++)
	{
		AddMessageToSystem(msg);
	}
	return true;
}

void MessagePump::Update(float dt)
{
	if(msg_list_.size() == 0)
	{
		return ;
	}

	// 处理消息
	for(MessageList::iterator msg_it = msg_list_.begin();
	msg_it != msg_list_.end();
	msg_it++)
	{
		(*msg_it)->f_timer_ -= dt;
		if ((*msg_it)->f_timer_  < 0)
		{
			ProcessMessage(*msg_it);
		}
	}

	// 销毁已经处理过了的消息
	for (MessageList::iterator msg_it = msg_list_.begin();
		msg_it != msg_list_.end();)
	{
		if ((*msg_it)->b_delivered == true)
		{
			SAFRelease(*msg_it);
			MessageList::iterator t = msg_it;
			msg_it++;
			msg_list_.erase(t);
		}
		else
			msg_it++;
		
	}

}

bool MessagePump::IsTypeInSystem(int type)
{
	MessageTypeMap::iterator msg_type_it = m_message_type_.find(type);
	return msg_type_it != m_message_type_.end();
}

void MessagePump::AddMessageToSystem(int type)
{
	// 确定该类型是否已经在系统里了
	if(IsTypeInSystem(type) == true)
	{
		return ;
	}

	MessageType msg_tyep;
	msg_tyep.type = type;
	m_message_type_[type] = msg_tyep;
}


void MessagePump::SendMessage(Message *message)
{
	message->Retain();
	if (message->priority == MSG_PRIORITY_Immediately)
	{
		this->ProcessMessage(message);
	}
	else
	{
		SAFRetain(message);
		msg_list_.push_back(message);
	}
}

int MessagePump::RegisterForMessage(int type, Object *callback_object, FUNC_MESSAGE_CALLBACK callback_func)
{
	ObjMessageEvent *pevent = ObjMessageEvent::Create(type, callback_object, callback_func);
	return RegistaerMessageEvent(pevent);
}

int MessagePump::RegisterScriptFunc(int type, int handler)
{
	LuaMessageEvent* pevent = LuaMessageEvent::Create(type, handler);
	return RegistaerMessageEvent(pevent);
}

// @brief 注册消息事件
int MessagePump::RegistaerMessageEvent(MessageEvent *pevent)
{
	MessageTypeMap::iterator msg_it = m_message_type_.find(pevent->GetMessageType());
	if(msg_it == m_message_type_.end())
	{
		// 没有注册该类型的信息
		return 0;
	}
	SAFRetain(pevent);
	msg_it->second.reg_list.push_back(pevent);
	message_event_map_[pevent->GetID()] = pevent;
	return pevent->GetID();
}

void MessagePump::UnRegisterForMessage(int id)
{
	MessageTypeMap::iterator msg_type_it = m_message_type_.find(id);
	if(msg_type_it == m_message_type_.end())
	{
		return;
	}
	MessageType &msg_type = msg_type_it->second;
	RegList &reg_list = msg_type.reg_list;
	for(RegList::iterator reg_it = reg_list.begin(); reg_it != reg_list.end(); reg_it++)
	{
		if ((*reg_it)->GetID() == id)
		{
			reg_list.erase(reg_it);
			break;
		}

	}
}

// @brief 处理消息
void MessagePump::ProcessMessage(Message* msg)
{
	MessageTypeMap::iterator msg_type_it = m_message_type_.find(msg->type_ID);
	if(msg_type_it == m_message_type_.end())
	{
		return;
	}
	MessageType &msg_type = msg_type_it->second;
	RegList &reg_list = msg_type.reg_list;
	for(RegList::iterator reg_it = reg_list.begin(); reg_it != reg_list.end(); reg_it++)
	{
		(*reg_it)->Execute(msg);

	}
	msg->b_delivered = true;
}
