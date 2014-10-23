#include "curtains.h"

namespace AttemptSpace
{

	Curtains::Curtains():Sprite()
	{

	}

	Curtains::~Curtains()
	{
		SAFRelease(geomety_model_);
	}

	Curtains* Curtains::Create(int w,int h,float edge, float k,float damp,const char* file_name)
	{
		
		Curtains *obj = new Curtains();
		if (obj && obj->Init(w,h,edge,k,damp,file_name) == true)
		{
			obj->AutoRelease();
			return obj;
		}
		else
		{
			SAFDelete(obj);
			return NULL;
		}


		return obj;
	}

	bool Curtains::Init(int w,int h,float edge, float k,float damp,const char* file_name)
	{
		index=0;
		index2=0;
		gravity[0] = 0.0;
		gravity[1] = -0.2;
		gravity[2] = 0.0;
		gravity[3] =1.0;		// 重力

		width = w;
		height = h;
		this->edge =edge;
		this->k=k;
		this->damp = damp;
		particle = new PARTICLE*[height];
		ff = new PARTICLE*[height];
		for(int i=0;i<height;i++)
		{
			particle[i] = new PARTICLE[width];
			ff[i] = new PARTICLE[width];
		}

		for (int i = 0;i<height;i++)
		{
			for(int j = 0;j<width;j++)
			{
				particle[i][j].position.x = (j - w / 2) * edge;
				particle[i][j].position.y = -(i - h / 2) * edge;
				particle[i][j].position.z = 0;
				particle[i][j].fixed = 0;
				particle[i][j].fixedY = 0;
			}
		}

		for(int j = 0; j < width; j+=3)
			particle[0][j].fixed = 1;

		for(int j = 0; j < width; j++)
			particle[0][j].fixedY = 1;

		Num = width*height*6;

// 		position = NULL;
// 		normal = NULL;
// 		tex = NULL;
// 
// 		position = new vec3[Num];
// 		normal = new vec3[Num];
// 		tex = new vec2[Num];

		vectex_array = new VertexFormat_XYZ_NORMAL_TEX[Num];

		GLfloat iterationW = width/damp;
		GLfloat iterationH = height/damp;
		GLfloat fTexCoordStepW = 1.0/(width-1);//50/(GLfloat)iterationW;
		GLfloat fTexCoordStepH = 1.0/(height-1);//50/(GLfloat)iterationH;
		//int index = 0;
		GLfloat s = 0;
		GLfloat t = 0;

		for(int i = 0;i<height-1;i++,t+=fTexCoordStepH)
			for(int j = 0;j<width-1;j++,s+=fTexCoordStepW)
			{
				addC(particle[i][j].position,particle[i+1][j].position,particle[i+1][j+1].position,particle[i][j+1].position);

// 				tex[index2++] = vec2(s,t);
// 				tex[index2++] = vec2(s,t+fTexCoordStepH);
// 				tex[index2++] = vec2(s+fTexCoordStepW,t+fTexCoordStepH);
// 				tex[index2++] = vec2(s+fTexCoordStepW,t+fTexCoordStepH);
// 				tex[index2++] = vec2(s+fTexCoordStepW,t);
// 				tex[index2++] = vec2(s,t);

				vectex_array[index2++].tex_coord = vec2(s,t);
				vectex_array[index2++].tex_coord = vec2(s,t+fTexCoordStepH);
				vectex_array[index2++].tex_coord = vec2(s+fTexCoordStepW,t+fTexCoordStepH);
				vectex_array[index2++].tex_coord = vec2(s+fTexCoordStepW,t+fTexCoordStepH);
				vectex_array[index2++].tex_coord = vec2(s+fTexCoordStepW,t);
				vectex_array[index2++].tex_coord = vec2(s,t);

			}
			for(int i = 0;i<Num;i++)
				//normal[i] = vec3(0.0,0.0,1.0);
				vectex_array[i].normal = vec3(0.0,0.0,1.0);

			geomety_model_ = Model::Create();
			SAFRetain(geomety_model_);
			geomety_model_->SetTexture(TextureLoader::GetInstance()->LoadTexture2D(file_name));
			geomety_model_->SetVertexData(vectex_array,Num*sizeof(VertexFormat_XYZ_NORMAL_TEX),Num);
			geomety_model_->SetVertexFomat(FVF_XYZ_NORMAL_TEX);

			return true;
	}

	void Curtains::Update(float dt)
	{
		vec3 Li;
		for (int i =0;i<height;i++)
		{
			for(int j = 0;j<width;j++)
			{
				ff[i][j] = particle[i][j];
			}
		}
		for (int i =0;i<height;i++)
		{
			for(int j = 0;j<width;j++)
			{
				if(particle[i][j].fixed)
				{
					continue;
				}
				memset(&Li, 0, sizeof(vec3));
				if (i > 0)
				{
					GetForce(&ff[i][j], &ff[i - 1][j], &Li);
				}
				if (i < height - 1)
				{
					GetForce(&ff[i][j], &ff[i + 1][j], &Li);
				}
				particle[i][j].velocity.x += Li.x;

				if(!particle[i][j].fixedY)
					particle[i][j].velocity.y += Li.y;

				particle[i][j].velocity.z += Li.z;
				// 计算左右相邻点的作用力
				memset(&Li, 0, sizeof(vec3));
				if (j > 0)
				{
					GetForce(&ff[i][j], &ff[i][j - 1], &Li);
				}
				if (j < width - 1)
				{
					GetForce(&ff[i][j], &ff[i][j + 1], &Li);
				}

				// 默认质量为1，外力的加速度数值上等于外力
				// 速度改变
				particle[i][j].velocity.x += Li.x + gravity[0];
				if(!particle[i][j].fixedY)
					particle[i][j].velocity.y += Li.y + gravity[1];
				particle[i][j].velocity.z += Li.z + gravity[2];

				// 坐标改变
				particle[i][j].position.x += particle[i][j].velocity.x;
				if(!particle[i][j].fixedY)
					particle[i][j].position.y+= particle[i][j].velocity.y;
				particle[i][j].position.z += particle[i][j].velocity.z;
			}
		}


		index = 0;
		for(int i = 0;i<height-1;i++)
			for(int j = 0;j<width-1;j++)
			{
				addC(particle[i][j].position,particle[i+1][j].position,particle[i+1][j+1].position,particle[i][j+1].position);
			}

			geomety_model_->SetVertexData(vectex_array,Num*sizeof(VertexFormat_XYZ_NORMAL_TEX),Num);
			geomety_model_->SetVertexFomat(FVF_XYZ_NORMAL_TEX);
			//Log::GetInstance()->Debug("aaaaaaaa");
	}


	void Curtains::addC(vec3 a,vec3 b,vec3 c, vec3 d)
	{
		vectex_array[index++].position = a;
		vectex_array[index++].position = b;
		vectex_array[index++].position = c;
		vectex_array[index++].position = c;
		vectex_array[index++].position = d;
		vectex_array[index++].position = a;
	}

	void Curtains::GetForce(PARTICLE *v1, PARTICLE *v2, vec3 *force)
	{
		//std::cout<<k<<" "<<edge<<" "<<damp<<std::endl;
		float distance;
		float dx, dy, dz;
		float f, fx, fy, fz;

		dx = v2->position.x - v1->position.x;
		dy = v2->position.y - v1->position.y;
		dz = v2->position.z - v1->position.z;
		// 计算两个点的距离
		distance = sqrt(dx * dx + dy * dy + dz * dz);
		// 计算弹力，大于0为拉力，小于0位弹力
		f = (distance - edge) * k;	
		// 投影到3个正方向
		fx = f * dx / distance - v1->velocity.x * damp;
		fy = f * dy / distance - v1->velocity.y * damp;
		fz = f * dz / distance - v1->velocity.z * damp;
		// 截断，减少累积误差
		(*(int *)&fx) &= 0xFFFF0000;
		(*(int *)&fy) &= 0xFFFF0000;
		(*(int *)&fz) &= 0xFFFF0000;
		// 累积力量
		force->x += fx;
		force->y += fy;
		force->z += fz;
	}


	bool Curtains::moveCurtainsL(float speed,int direction)
	{
		static float gridSize = edge;
		float deltaX = speed*direction;

		gridSize = (gridSize * (width - 1) + deltaX) / (width- 1);
		if(gridSize > edge)
			gridSize = edge;
		if(gridSize < edge / 5)
		{
			gridSize = edge / 5;
			return false;
		}
		float start =  -width / 2 * edge;
		for(int j = 0; j < width; j+=3){
			particle[0][j].position.x = start + j * gridSize;
		}
		return true;
	}

	bool Curtains::moveCurtainsR(float speed,int direction)
	{
		static float gridSize = edge;
		float deltaX = speed*direction;

		gridSize = (gridSize * (width - 1) + deltaX) / (width- 1);
		if(gridSize > edge)
			gridSize = edge;
		if(gridSize < edge / 5)
		{
			gridSize = edge / 5;
			return false;
		}
		float start =  width / 2 * edge;
		for(int j = width-1; j >=0; j-=3){
			particle[0][j].position.x = start - (width-1-j) * gridSize;
		}
		return true;
	}


	int Curtains::getNum()
	{
		return Num;
	}

	vec3* Curtains::getP()
	{
		return position;
	}
	vec3* Curtains::getN()
	{
		return normal;
	}
	vec2* Curtains::getT()
	{
		return tex;
	}
	int Curtains::getW()
	{
		return width;
	}
	int Curtains::getH()
	{
		return height;
	}
	float Curtains::getEdge()
	{
		return edge;
	}
	float Curtains::getK()
	{
		return k;
	}
	float Curtains::getDamp()
	{
		return damp;
	}

	PARTICLE** Curtains::getParticle()
	{
		return particle;
	}
} 