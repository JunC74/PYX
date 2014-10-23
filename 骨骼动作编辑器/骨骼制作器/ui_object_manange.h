#pragma once

#include <vector>
#include "ui_object.h"

class UIObjectManangeClass
{
protected:
	std::vector<UIObject *> object_vector;	//UIobject对象容器
	UIObject *focus;

public:
	UIObjectManangeClass(void);

	// 函数：加入对象进对象容器
	// 参数：
	//     need_add_object_poiner——需要添加进容器的UIobject指针
	// 返回值：
	//      true——成功添加
	//      false——添加失败
	void AddUIObject( UIObject *need_add_object_poiner ); 

	// 函数：删除容器里的指定对象
	// 参数：
	// need_delete_object_poiner——需要删除容器里面指定的对象指针
	// 返回值：
	//		true——删除成功
	//      false——删除失败
	void DeleteUIObject( UIObject *need_delete_object_poiner );

	// 函数：绘制ui子对象
	// 参数：
	//     target_hdc——目标设备
	void DrawObject ( HDC target_hdc );

	// 函数：在鼠标移动的是后检查是否有UI对象被选中
	// 参数：
	//     x，y——鼠标在当前UI对象的坐标系下的坐标（UI对象的左上点为原点）
	// 返回值：UIobject对象的指针(如果有选中，否则返回NULL)
	UIObject* CheckObjectWhenMouseAction ( int x, int y);
};

