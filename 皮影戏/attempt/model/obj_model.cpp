#include "obj_model.h"
#include "external_support/glm/glm.h"
#include "texture/TextureLoader.h"
#include "cocoa/FileTool.h"

namespace AttemptSpace
{
	ObjModel* ObjModel::Create(char* file_name)
	{
		ObjModel *obj = new ObjModel();
		if (obj && obj->Init(file_name) == true)
		{
			obj->AutoRelease();
			return obj;
		}
		SAFDelete(obj);
		return NULL;
	}

	ObjModel::ObjModel() : Model()
	{
	}

	ObjModel::~ObjModel()
	{
		for (int i = 0; i < group_.size(); i++)
		{
			SAFRelease(group_.at(i));
		}
	}

	bool ObjModel::Init(char* file_name)
	{
		char* complete_path = FileTool::GetInstance()->GetCompletePath(file_name);
		if (complete_path == NULL)
		{
			return false;
		}
		GLMmodel *model = glmReadOBJ(complete_path);
		SAFDelete(complete_path);
		glmFacetNormals(model);
		if (model == NULL)
		{
			return false;
		}
		VertexFomat vertex_fomat = FVF_XYZ;
		if (model->numnormals != 0)
		{
			vertex_fomat |= FVF_NORMAL;
		}
		if(model->numtexcoords != 0)
		{
			vertex_fomat |= FVF_TEX;
		}

		int vertex_size = GetVertexFomatSize(vertex_fomat);
		int vertex_offset = vertex_size / sizeof(float);
		int arr_size = vertex_offset * model->numtriangles * 3;
		// 每个面三个顶点,没有做优化
		float *vertex_att_arr = new float[arr_size];
		assert(vertex_att_arr != NULL);
		memset(vertex_att_arr, 0, sizeof(float) * arr_size);
		float *tempt_vertex = vertex_att_arr;
		Log *log = Log::GetInstance();

		for (int i = 0; i < model->numtriangles; i++)
		{
			GLMtriangle &face = model->triangles[i];
			for(int j = 0; j < 3; j++)
			{
				int offset = 0;
				
				if (vertex_fomat & FVF_XYZ)
				{
					memcpy(&tempt_vertex[offset],
						&model->vertices[face.vindices[j] * 3],
						sizeof(float) * 3);
					offset += 3;
				}
				if (vertex_fomat & FVF_NORMAL)
				{
					memcpy(&tempt_vertex[offset],
						&model->normals[face.nindices[j] * 3],
						sizeof(float) * 3);
					offset += 3;
				}
				if (vertex_fomat & FVF_TEX)
				{
					memcpy(&tempt_vertex[offset],
						&model->texcoords[face.tindices[j] * 2],
						sizeof(float) * 2);
					offset += 2;
				}
				tempt_vertex += vertex_offset;
			} // vertices
			
		} //triangles

		this->SetVertexData(vertex_att_arr, sizeof(float) * arr_size, model->numtriangles * 3);
		this->SetVertexFomat(vertex_fomat);
		SAFDelete(vertex_att_arr);

		GLMgroup *group = model->groups;
		while (group)
		{
			GLuint *index = new GLuint[group->numtriangles * 3];
			memset(index, 0, sizeof(GLuint) * 3 * group->numtriangles);
			for (int i = 0; i < group->numtriangles; i++)
			{
				index[i * 3] = group->triangles[i] * 3;
				index[i * 3 + 1] = index[i * 3] + 1;
				index[i * 3 + 2] = index[i * 3] + 2;
			} // triangles
			Model *geometry = Model::Create();
			Material *material = Material::Create();
			if (model->nummaterials != 0)
			{
				GLMmaterial &t_mater = model->materials[group->material];
				material->ambient = C4f(t_mater.ambient[0], t_mater.ambient[1], t_mater.ambient[2], t_mater.ambient[3]);
				material->diffuse = C4f(t_mater.diffuse[0], t_mater.diffuse[1], t_mater.ambient[2], t_mater.diffuse[3]);
				material->specular = C4f(t_mater.specular[0], t_mater.specular[1], t_mater.specular[2], t_mater.specular[3]);
				material->emmissive = C4f(t_mater.emmissive[0], t_mater.emmissive[1], t_mater.emmissive[2], t_mater.emmissive[3]);
				material->shininess = t_mater.shininess;
				Texture2D *tex = TextureLoader::GetInstance()->LoadTexture2D(t_mater.map_kd);
				geometry->SetTexture(tex);
			}
			geometry->SetMaterial(material);
			geometry->SetIndex(index, group->numtriangles * 3);
			group_.push_back(geometry);
			SAFRetain(geometry);
			SAFDelete(index);
			group = group->next;
		} // gtoup
		glmDelete(model);
		return true;
	}

	// 绑定数据并且渲染
	AttemptERR ObjModel::Draw(float f_delta)
	{
		AttemptERR err = this->Model::BindData();
		if ( err != AT_OK)
		{
			return err;
		}
		for (int i = 0; i < group_.size(); i++)
		{
			group_.at(i)->Draw(f_delta);
		}
		return AT_OK;
	}
}