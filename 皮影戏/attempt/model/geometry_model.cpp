#include "geometry_model.h"
#include "cocoa/ResourceManager.h"


namespace AttemptSpace
{
	GeometryModel::GeometryModel()
		:Model()
	{
	}

	GeometryModel::~GeometryModel()
	{
	}
	
	GeometryModel* GeometryModel::CreateTrilateral()
	{
		VertexFormat_XYZW_RGBA vectex_array[3];

		vectex_array[0].position = vec4(-0.5, 0, 0, 1);
		vectex_array[0].color = C4f(1.0, 0, 0, 1);

		vectex_array[1].position = vec4(0.5, 0, 0, 1);
		vectex_array[1].color = C4f(0.0, 1.0, 0, 1);

		vectex_array[2].position = vec4(0.0, 0.5, 0, 1);
		vectex_array[2].color = C4f(0.0, 0.0, 1.0, 1);


		GeometryModel *object = new GeometryModel();
		object->AutoRelease();

		object->SetVertexData(vectex_array, sizeof(vectex_array), 3);
		object->SetVertexFomat(FVF_XYZW_RGBA);
		object->SetMaterial(Material::Create());

		return object;
	}


	GeometryModel* GeometryModel::CreateSquare(float w, float h)
	{
		return CreateSquare(w, h, 0.5, 0.5);
	}

	GeometryModel* GeometryModel::CreateSquareWithTexture(Texture2D* tex)
	{
		return CreateSquareWithTexture(0.5, 0.5, tex);
	}

	GeometryModel* GeometryModel::CreateSquareWithTexture(float anchor_x, float anchor_y, Texture2D* tex)
	{
		return CreateSquare(tex->GetWidth(), tex->GetHeight(), anchor_x, anchor_y, tex);
	}

	GeometryModel* GeometryModel::CreateSquare(float w, float h, float anchor_x, float anchor_y)
	{
		return CreateSquare(w, h, anchor_x, anchor_y, NULL);
	}

	GeometryModel* GeometryModel::CreateSquare(float w, float h, float anchor_x, float anchor_y, Texture2D *texture)
	{
		VertexFormat_XYZ_NORMAL_TEX vertices[4];

		float y = h / 2.0;
		float x = w / 2.0;
		if (anchor_x < 0) anchor_x = 0;
		if (anchor_x > 1) anchor_x = 1;
		if(anchor_y < 0) anchor_y = 0;
		if(anchor_y > 1) anchor_y = 1;
		anchor_x = 0.5 - anchor_x;
		anchor_y = 0.5 - anchor_y;
		anchor_x *= w;
		anchor_y *= h;
		vertices[0].position = vec3(anchor_x - x, anchor_y - y, 0);
		vertices[0].tex_coord = vec2(0, 0);
		vertices[0].normal = vec3(0, 0, 1);

		vertices[1].position = vec3(anchor_x + x, anchor_y -y, 0);
		vertices[1].tex_coord = vec2(1, 0);
		vertices[1].normal = vec3(0, 0, 1);

		vertices[2].position = vec3(anchor_x + x, anchor_y + y, 0);
		vertices[2].tex_coord = vec2(1, 1);
		vertices[2].normal = vec3(0, 0, 1);

		vertices[3].position = vec3(anchor_x - x, anchor_y + y, 0);
		vertices[3].tex_coord = vec2(0, 1);
		vertices[3].normal = vec3(0, 0, 1);

		GLuint index[6] = {
			0, 1, 2,
			0, 2, 3,
		};

		GeometryModel *object = new GeometryModel();
		object->AutoRelease();
		object->SetVertexData(vertices, sizeof(vertices), 4);
		object->SetVertexFomat(FVF_XYZ_NORMAL_TEX);
		object->SetIndex(index, 6);
		object->SetMaterial(Material::Create());
		object->SetMaterial(Material::Create());
		object->SetTexture(texture);
		return object;
	}

} // end namespace AttemptSpace
