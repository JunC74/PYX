#include "curtains.h"

float gravity[4] = {0.0, -0.2, 0.0, 1.0};		// 重力
int index= 0;
int index2 = 0;

void curtains::addC(vec3 a,vec3 b,vec3 c, vec3 d)
{
	position[index++] = a;
	position[index++] = b;
	position[index++] = c;
	position[index++] = c;
	position[index++] = d;
	position[index++] = a;
}


curtains::curtains(int w,int h,float edge, float k,float damp){
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

	position = NULL;
	normal = NULL;
	tex = NULL;

	position = new vec3[Num];
	normal = new vec3[Num];
	tex = new vec2[Num];

	GLfloat iterationW = width/damp;
	GLfloat iterationH = height/damp;
	GLfloat fTexCoordStepW = 0.1;//50/(GLfloat)iterationW;
	GLfloat fTexCoordStepH = 0.1;//50/(GLfloat)iterationH;
	int index = 0;
	GLfloat s = 0;
	GLfloat t = 0;

	for(int i = 0;i<height-1;i++,t+=fTexCoordStepH)
		for(int j = 0;j<width-1;j++,s+=fTexCoordStepW)
		{
			addC(particle[i][j].position,particle[i+1][j].position,particle[i+1][j+1].position,particle[i][j+1].position);

			tex[index2++] = vec2(s,t);
			tex[index2++] = vec2(s,t+fTexCoordStepH);
			tex[index2++] = vec2(s+fTexCoordStepW,t+fTexCoordStepH);
			tex[index2++] = vec2(s+fTexCoordStepW,t+fTexCoordStepH);
			tex[index2++] = vec2(s+fTexCoordStepW,t);
			tex[index2++] = vec2(s,t);

		}
	for(int i = 0;i<Num;i++)
		normal[i] = vec3(0.0,0.0,1.0);

}

void curtains::UpdateParticle()
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
	// glutPostRedisplay(); 重绘窗口
	Sleep(10);

}

void curtains:: contraryNormal(){
	for (int i = 0;i<Num;i++)
	{
		normal[i] = -normal[i];
	}
}

void curtains::GetForce(PARTICLE *v1, PARTICLE *v2, vec3 *force)
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

int curtains::getNum()
{
	return Num;
}

vec3* curtains::getP()
{
	return position;
}
vec3* curtains::getN()
{
	return normal;
}
vec2* curtains::getT()
{
	return tex;
}
int curtains::getW()
{
	return width;
}
int curtains::getH()
{
	return height;
}
float curtains::getEdge()
{
	return edge;
}
float curtains::getK()
{
	return k;
}
float curtains::getDamp()
{
	return damp;
}

PARTICLE** curtains::getParticle()
{
	return particle;
}

void curtains::setParticlePoistion(int i,int j,int type,float l){
	switch(type){
	case 0:
		particle[i][j].position.x = l;
		break;
	case 1:
		particle[i][j].position.y = l;
		break;
	case 2:
		particle[i][j].position.z = l;
		break;
	}
}