#ifndef __CURTAINS_H__
#define __CURTAINS_H__
#include "Node/Sprite.h"

typedef struct					// 顶点结构
{
	vec3 position;				// 顶点坐标
	vec3 velocity;			// 顶点运动速度
	int fixedY;					// 固定Y
	int fixed;					// 都固定	
}PARTICLE;

namespace AttemptSpace{
	class Curtains : public Sprite
	{
	public:
		Curtains();
		~Curtains();

		static Curtains* Create(int w,int h,float edge, float k,float damp,const char* file_name);//长、宽、弹簧长度、和贴图名称
		bool Init(int w,int h,float edge, float k,float damp,const char* file_name);

		void SetEdge(float edge){this->edge=edge;}//设置弹簧原长
		void SetK(float k){this->k=k;};//设置弹簧劲度系数
		void SetDamp(float damp){this->damp=damp;}//设置弹簧阻尼


		void addC(vec3 a,vec3 b,vec3 c, vec3 d);
		int getNum();           //顶点数
		vec3* getP();			//返回顶点数组
		vec3* getN();			//返回法向数组
		vec2* getT();			//返回贴图数组
		int getW();
		int getH();
		float getEdge();		//返回弹簧原长
		float getK();			//返回劲度系数K
		float getDamp();		//返回阻尼

		PARTICLE** getParticle();

		void GetForce(PARTICLE *v1, PARTICLE *v2, vec3 *force); //得到力

		void Update(float dt);

		bool moveCurtainsL(float speed,int direction);
		bool moveCurtainsR(float speed,int direction);
		

	private:
		int  width;		//网格宽度
		int height;		//网格高度
		int Num;		//顶点个数
		float edge;		//弹簧原长
		float k;		//弹簧劲度系数
		float damp;		//弹簧阻尼
		vec3 *position; //顶点坐标
		vec3 *normal;   //法向量
		vec2 *tex;      //贴图坐标
		PARTICLE** particle; //质点而为数组
		PARTICLE** ff;   //备用质点数组

		VertexFormat_XYZ_NORMAL_TEX *vectex_array;

		float gravity[4];// = {0.0, -0.2, 0.0, 1.0};		// 重力
		int index;//= 0;
		int index2;// = 0;


	};
}
#endif // __CURTAINS_H__