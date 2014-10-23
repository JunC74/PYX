//����
#include "attempt/promise.h"

// #define GRID_WIDTH	28			// ������
// #define GRID_HEIGHT	21			// ����߶�
// #define GRID_EDGE	8.0			// ����ԭ��
// #define GRID_K		0.5			// ���ɾ���ϵ��
// #define GRID_DAMP	0.01		// ��������

typedef struct					// ����ṹ
{
	vec3 position;				// ��������
	vec3 velocity;			// �����˶��ٶ�
	int fixedY;					// �̶�Y
	int fixed;					// ���̶�	
}PARTICLE;

class curtains{
	int  width;		//������
	int height;		//����߶�
	int Num;		//�������
	float edge;		//����ԭ��
	float k;		//���ɾ���ϵ��
	float damp;		//��������
	vec3 *position; //��������
	vec3 *normal;   //������
	vec2 *tex;      //��ͼ����
	PARTICLE** particle; //�ʵ��Ϊ����
	PARTICLE** ff;   //�����ʵ�����


public:
	curtains();
	curtains(int w,int h,float edge,float k,float damp);		//��ʼ������

	void addC(vec3 a,vec3 b,vec3 c, vec3 d);
	void UpdateParticle();  //�����ʵ�
	void contraryNormal();
	void SetVao();
	int getVao();			//����Vao
	int getNum();           //������
	vec3* getP();			//���ض�������
	vec3* getN();			//���ط�������
	vec2* getT();			//������ͼ����
	int getW();
	int getH();
	float getEdge();		//���ص���ԭ��
	float getK();			//���ؾ���ϵ��K
	float getDamp();		//��������

	PARTICLE** getParticle();
	void setParticlePoistion(int i,int j,int tupe,float l);			//�����ʵ����꣬����������0��������X���꣬1��������Y���꣬2��������Z����

	void GetForce(PARTICLE *v1, PARTICLE *v2, vec3 *force); //�õ���
};