#ifndef ARRAY_H_HEADER_INCLUDED_AD19AA99
#define ARRAY_H_HEADER_INCLUDED_AD19AA99
#include "Object.h"

class Array : public Object
{
  public:
	// 添加对象进数组里面，其自身引用计数器+1
        bool Add(
		// 需要管理的对象指针
		Object* object);

	// 清楚所有的管理对象
	void Clear();

	// 获取当前管理的对象的数目
	int Size();

	// 根据索引获取某一对象
	Object* At(
		// 需要获取的对象在容器里面的索引
		int index);

	// 从容器中删除指定的对象。
	bool Delete(int index);
	bool Delete(Object *object);

	static Array* Create();
	bool Init();

	Array(); 

	virtual ~Array();

	// 检查对象是否在数组里面
	// return： 返回对象在数组里面的索引，如果对象不在数组里面，则返回-1
	int IsInArray(Object *object);

  private:
	// 储存对象的容器！
	vector<Object*> v_data;
};



#endif /* ARRAY_H_HEADER_INCLUDED_AD19AA99 */
