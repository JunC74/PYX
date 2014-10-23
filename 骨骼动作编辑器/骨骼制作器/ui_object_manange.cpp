#include "ui_object_manange.h"


UIObjectManangeClass::UIObjectManangeClass(void)
{
}

void UIObjectManangeClass::AddUIObject ( UIObject *need_add_object_poiner ){
	object_vector.push_back(need_add_object_poiner);
}

void UIObjectManangeClass::DeleteUIObject ( UIObject *need_delete_object_poiner){
	for (UINT i = 0; i < object_vector.size(); i++)
	{
		if (need_delete_object_poiner == object_vector[i])
		{
			object_vector.erase(object_vector.begin() + i);
			break;
		}
	}
}

void UIObjectManangeClass::DrawObject ( HDC target_dc ){
	for (UINT i = 0; i < object_vector.size(); i++)
	{
		object_vector[i]->Draw(target_dc);
	}
}


UIObject* UIObjectManangeClass::CheckObjectWhenMouseAction ( int x, int y ){
	for (UINT i = 0; i < object_vector.size(); i++)
	{
		if ((object_vector[i]->GetPostionRect().left <= x && object_vector[i]->GetPostionRect().right >= x) &&
			(object_vector[i]->GetPostionRect().top <= y && object_vector[i]->GetPostionRect().bottom >= y))
		{
			return object_vector[i];
		}
	}
	return NULL;
}
