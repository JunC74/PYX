#ifndef __OBJ_MODEL_H__
#define __OBJ_MODEL_H__

#include "model.h"

namespace AttemptSpace
{
	class ObjModel : public Model
	{
	public:
		static ObjModel* Create(char* file_name);

		virtual AttemptERR Draw(float f_delta);

		~ObjModel();

	private:
		ObjModel();
		
		bool Init(char* file_name);

	private:
		vector<Model*> group_;
	};
} // end namespace AttemptSpace
#endif // end define__OBJ_MODEL_H__