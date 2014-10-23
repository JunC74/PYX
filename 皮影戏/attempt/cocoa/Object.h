#ifndef OBJECT_H_HEADER_INCLUDED_AD1981AC
#define OBJECT_H_HEADER_INCLUDED_AD1981AC

#include "at_prefix.h"


namespace AttemptSpace
{

	class Object
	{
	public:
		// 对象的ID编号，唯一
		int id;

		// lua的资源ID，是提供对Lua脚本的支持。
		int lua_id;

	public:
		// 创建一个Object对象，实行初始化之后返回其指针。
		static Object* Create();

		// 初始化对象的基本信息。
		bool Init();

		// 把当前对象加入自动释放管理器中，如果在当前帧中没有被引用则会被释放掉。
		void AutoRelease();

		// 实现对自身计数器的数值+1。
		void Retain();

		// 对自身计数器数值-1。
		virtual void Release();

		// 获取当前的计时器数值。
		int GetCount();

		// 从某一对象中复制，重置其计数器。
		virtual void Copy(
			// 源对象
			Object* object);

		virtual void Update(float f_delta);


		Object();

		virtual ~Object();

		// 得到现在以创建的对象数目。
		static int GetObjectNumber();

		int GetID() { return id; }

	private:
		
		// 对象的引用计数器，当改值为0的时候自动释放对象
		int i_count;
		// 表示该对象是否被托管在自动释放管理器上，当托管时，如果改值小于或等于1的时候，在下一帧时将会被释放掉。
		bool b_auto_release;

		// 当前以创建的对象数目，用于实现对对象ID的编号。
		static int now_count;

		friend class AutoReleasePool;
	};

	// 有些疑惑- -( 父类直接调用子类的函数指针,真的不会大丈夫么)
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
