#ifndef OBJECT_H_HEADER_INCLUDED_AD1981AC
#define OBJECT_H_HEADER_INCLUDED_AD1981AC

#include "at_prefix.h"


namespace AttemptSpace
{

	class Object
	{
	public:
		// �����ID��ţ�Ψһ
		int id;

		// lua����ԴID�����ṩ��Lua�ű���֧�֡�
		int lua_id;

	public:
		// ����һ��Object����ʵ�г�ʼ��֮�󷵻���ָ�롣
		static Object* Create();

		// ��ʼ������Ļ�����Ϣ��
		bool Init();

		// �ѵ�ǰ��������Զ��ͷŹ������У�����ڵ�ǰ֡��û�б�������ᱻ�ͷŵ���
		void AutoRelease();

		// ʵ�ֶ��������������ֵ+1��
		void Retain();

		// �������������ֵ-1��
		virtual void Release();

		// ��ȡ��ǰ�ļ�ʱ����ֵ��
		int GetCount();

		// ��ĳһ�����и��ƣ��������������
		virtual void Copy(
			// Դ����
			Object* object);

		virtual void Update(float f_delta);


		Object();

		virtual ~Object();

		// �õ������Դ����Ķ�����Ŀ��
		static int GetObjectNumber();

		int GetID() { return id; }

	private:
		
		// ��������ü�����������ֵΪ0��ʱ���Զ��ͷŶ���
		int i_count;
		// ��ʾ�ö����Ƿ��й����Զ��ͷŹ������ϣ����й�ʱ�������ֵС�ڻ����1��ʱ������һ֡ʱ���ᱻ�ͷŵ���
		bool b_auto_release;

		// ��ǰ�Դ����Ķ�����Ŀ������ʵ�ֶԶ���ID�ı�š�
		static int now_count;

		friend class AutoReleasePool;
	};

	// ��Щ�ɻ�- -( ����ֱ�ӵ�������ĺ���ָ��,��Ĳ�����ɷ�ô)
	class Message;
	class Node;
	typedef int (Object::*FUNC_MESSAGE_CALLBACK)(Message*);
	typedef void (Object::*FUNC_Schedule)(float);
	typedef void (Object::*FUNC_CallFunc)();
	typedef void (Object::*FUNC_CallFuncN)(Node*);
	typedef void (Object::*FUNC_CallFuncND)(Node*, void*);
	typedef void (Object::*FUNC_CallFuncO)(Object*);
// 
	template <typename Type>
	inline
	FUNC_MESSAGE_CALLBACK MessageCallbackFunc(Type func)
	{
		return (FUNC_MESSAGE_CALLBACK)func;
	}

}	// end namespace AttemptSpace

#endif /* OBJECT_H_HEADER_INCLUDED_AD1981AC */
