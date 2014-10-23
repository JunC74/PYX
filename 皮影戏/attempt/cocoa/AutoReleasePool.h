#ifndef AUTORELEASE_H_HEADER_INCLUDED_AD198C35
#define AUTORELEASE_H_HEADER_INCLUDED_AD198C35
#include "Object.h"
#include "Array.h"

namespace AttemptSpace
{

	class AutoReleasePool : public Object
	{
	public:
		// ��Ӷ�����Զ��ͷŹ�������
		void Add(Object* object);

		// �ӹ��������Ƴ���Ӧ�Ķ���
		void Remove(Object* object);

		// ���е��йܶ���ļ���������-1���������޸����йܱ�־��
		void Clear();

		// ��ָ���Ķ�����������Ƴ���ʹ������ļ�����-1���������йܱ�ʶ��
		void Delete(Object* object);

		static AutoReleasePool* Create();

		bool Init();

		AutoReleasePool();

		virtual ~AutoReleasePool();
	private:
		Array arr_object_pool;
	};

}	// end namespace AttemptSpace
#endif /* AUTORELEASE_H_HEADER_INCLUDED_AD198C35 */
