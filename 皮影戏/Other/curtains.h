//窗帘
#include "attempt/promise.h"

// #define GRID_WIDTH	28			// 网格宽度
// #define GRID_HEIGHT	21			// 网格高度
// #define GRID_EDGE	8.0			// 弹簧原长
// #define GRID_K		0.5			// 弹簧劲度系数
// #define GRID_DAMP	0.01		// 弹簧阻尼

typedef struct					// 顶点结构
{
	vec3 position;				// 顶点坐标
	vec3 velocity;			// 顶点运动速度
	int fixedY;					// 固定Y
	int fixed;					// 都固定	
}PARTICLE;

class curtains{
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


public:
	curtains();
	curtains(int w,int h,float edge,float k,float damp);		//初始化窗帘

	void addC(vec3 a,vec3 b,vec3 c, vec3 d);
	void UpdateParticle();  //更新质点
	void contraryNormal();
	void SetVao();
	int getVao();			//设置Vao
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
	void setParticlePoistion(int i,int j,int tupe,float l);			//设置质点坐标，第三个参数0代表设置X坐标，1代表设置Y坐标，2代表设置Z坐标

	void GetForce(PARTICLE *v1, PARTICLE *v2, vec3 *force); //得到力
};