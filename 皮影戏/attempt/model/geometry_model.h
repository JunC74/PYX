#ifndef __RENDER_OBJECT_DATA_H__
#define __RENDER_OBJECT_DATA_H__

#include "model.h"


namespace AttemptSpace
{
	class GeometryModel : public Model
	{
	public:
		~GeometryModel();

		// 创建三角形
		static GeometryModel* CreateTrilateral();

		static GeometryModel* CreateSquareWithTexture(Texture2D* tex);
		static GeometryModel* CreateSquareWithTexture(float anchor_x, float anchor_y, Texture2D* tex);

		static GeometryModel* CreateSquare(float w, float h);
		static GeometryModel* CreateSquare(float w, float h, float anchor_x, float anchor_y);

		static GeometryModel* CreateSquare(float w, float h, float anchor_x, float anchor_y, Texture2D *tex);


	protected:
		GeometryModel();

	protected:
	private:
	};

}	// end namespace AttemptSpace

#endif
