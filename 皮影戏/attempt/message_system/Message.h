#ifndef __Message_H__
#define __Message_H__

#include "cocoa/Object.h"

namespace AttemptSpace
{
	enum MessagePriority
	{
		MSG_PRIORITY_NextFrame,		// ���¸�֡����
		MSG_PRIORITY_Immediately,	// ��ʱ������Ϣ

		MSG_PRIORITY_NUM,
	};

	class Message : public Object
	{
	public:
		Message()
			:Object()
		{
			type_ID = 0;
			b_delivered = false;
			f_timer_ = 0;
			priority = MSG_PRIORITY_NextFrame;
		}

		static Message* Create()
		{
			return Create(0);
		}

		static Message* Create(int type)
		{
			Message * pob = new Message();
			if(pob != NULL && pob->Init(type) == true)
			{
				pob->AutoRelease();
				return pob;
			}
			SAFRelease(pob);
			return NULL;
		}

		bool Init(int type)
		{
			type_ID = type;
			return true;
		}

	public:
		int type_ID;    // ��Ϣ����
		bool b_delivered; // ����Ϣ�����ڱ���Ѵ��������Ϣ
		float f_timer_;		// ������Ϣ�����е���ʱ
		MessagePriority priority;	// ���ȼ�
	};

	class DataMessage : public Message
	{
	private:
	public:
		DataMessage()
			:Message()
		{
		}
		~DataMessage()
		{
			SAFDelete(data_storage_);
		}

		static DataMessage* Create(int type, void* data)
		{
			DataMessage * pob = new DataMessage();
			if(pob != NULL && pob->Init(type, data))
			{
				pob->AutoRelease();
				return pob;
			}
			SAFRelease(pob);
			return NULL;
		}

		bool Init(int type, void *data)
		{
			type_ID = type;
			data_storage_ = data;
			return true;
		}

		void *data_storage_;
	};

}	// end AttemptSpace

#endif