#ifndef __MESSAGE_EVENT_H__
#define __MESSAGE_EVENT_H__

#include "cocoa/Object.h"

namespace AttemptSpace
{
	class MessageEvent : public Object
	{
	public:
		virtual ~MessageEvent() {};
		
		 // @brief 注册的消息事件响应
		 virtual int Execute(Message* msg)
		 {
			 return 0;
		 }

		 int GetMessageType() { return message_type_; }

		 virtual const char* GetEventType() const
		 { 
			 static char event_type_[] = "MessageEvent";
			 return event_type_; 
		 }
		 
		 virtual bool Compare(const MessageEvent &b)
		 {
			 if (strcmp(this->GetEventType(), b.GetEventType()) == 0)
			 {
				 return true;
			 }
			 return false;
		 }

	protected:
		MessageEvent(int message_type): Object() 
		{ 
			message_type_ = message_type;
		};

	private:
		int message_type_;	// 注册的消息类型
	};

	class ObjMessageEvent : public MessageEvent
	{
	public:
		static ObjMessageEvent* Create(int type, Object *tag, FUNC_MESSAGE_CALLBACK func)
		{
			ObjMessageEvent *obj = new ObjMessageEvent(type);
			if (obj && obj->Init(tag, func) == true)
			{
				obj->AutoRelease();
				return obj;
			}
			SAFDelete(obj);
			return NULL;
		}

		bool Init(Object *obj, FUNC_MESSAGE_CALLBACK func)
		{
			if (obj != NULL && func != NULL)
			{
				tag_ = obj;
				func_ = func;
				return true;
			}
			return false;
		}

		int Execute(Message *msg)
		{
			return (tag_->*(func_))(msg);
		}

		virtual const char* GetEventType() const
		{ 
			static char event_type_[] = "ObjMessageEvent";
			return event_type_; 
		}

		virtual bool Compare(const MessageEvent &b)
		{
			if (strcmp(this->GetEventType(), b.GetEventType()) == 0)
			{
				 const ObjMessageEvent * p = dynamic_cast<const ObjMessageEvent*>(&b);
				 if (this->tag_->id == p->tag_->id &&
					 this->func_ == p->func_)
				 {
					 return true;
				 }
				 else
				 {
					 return false;
				 }
			}
			return false;
		}
	private:
		ObjMessageEvent(int message_type) 
			: MessageEvent(message_type)
		{
			tag_ = NULL;
			func_ = NULL;
		}

	private:

		Object *tag_;
		FUNC_MESSAGE_CALLBACK func_;
	};
}
#endif //__MESSAGE_EVENT_H__
