#pragma once

#include <vector>
#include "ui_object.h"

class UIObjectManangeClass
{
protected:
	std::vector<UIObject *> object_vector;	//UIobject��������
	UIObject *focus;

public:
	UIObjectManangeClass(void);

	// ����������������������
	// ������
	//     need_add_object_poiner������Ҫ��ӽ�������UIobjectָ��
	// ����ֵ��
	//      true�����ɹ����
	//      false�������ʧ��
	void AddUIObject( UIObject *need_add_object_poiner ); 

	// ������ɾ���������ָ������
	// ������
	// need_delete_object_poiner������Ҫɾ����������ָ���Ķ���ָ��
	// ����ֵ��
	//		true����ɾ���ɹ�
	//      false����ɾ��ʧ��
	void DeleteUIObject( UIObject *need_delete_object_poiner );

	// ����������ui�Ӷ���
	// ������
	//     target_hdc����Ŀ���豸
	void DrawObject ( HDC target_hdc );

	// ������������ƶ����Ǻ����Ƿ���UI����ѡ��
	// ������
	//     x��y��������ڵ�ǰUI���������ϵ�µ����꣨UI��������ϵ�Ϊԭ�㣩
	// ����ֵ��UIobject�����ָ��(�����ѡ�У����򷵻�NULL)
	UIObject* CheckObjectWhenMouseAction ( int x, int y);
};

