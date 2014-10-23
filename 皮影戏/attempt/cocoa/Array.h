#ifndef ARRAY_H_HEADER_INCLUDED_AD19AA99
#define ARRAY_H_HEADER_INCLUDED_AD19AA99
#include "Object.h"

class Array : public Object
{
  public:
	// ��Ӷ�����������棬���������ü�����+1
        bool Add(
		// ��Ҫ����Ķ���ָ��
		Object* object);

	// ������еĹ������
	void Clear();

	// ��ȡ��ǰ����Ķ������Ŀ
	int Size();

	// ����������ȡĳһ����
	Object* At(
		// ��Ҫ��ȡ�Ķ������������������
		int index);

	// ��������ɾ��ָ���Ķ���
	bool Delete(int index);
	bool Delete(Object *object);

	static Array* Create();
	bool Init();

	Array(); 

	virtual ~Array();

	// �������Ƿ�����������
	// return�� ���ض������������������������������������棬�򷵻�-1
	int IsInArray(Object *object);

  private:
	// ��������������
	vector<Object*> v_data;
};



#endif /* ARRAY_H_HEADER_INCLUDED_AD19AA99 */
