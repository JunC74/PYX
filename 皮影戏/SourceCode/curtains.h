#ifndef __CURTAINS_H__
#define __CURTAINS_H__
#include "Node/Sprite.h"

typedef struct					// ����ṹ
{
	vec3 position;				// ��������
	vec3 velocity;			// �����˶��ٶ�
	int fixedY;					// �̶�Y
	int fixed;					// ���̶�	
}PARTICLE;

namespace AttemptSpace{
	class Curtains : public Sprite
	{
	public:
		Curtains();
		~Curtains();

		static Curtains* Create(int w,int h,float edge, float k,float damp,const char* file_name);//���������ɳ��ȡ�����ͼ����
		bool Init(int w,int h,float edge, float k,float damp,const char* file_name);

		void SetEdge(float edge){this->edge=edge;}//���õ���ԭ��
		void SetK(float k){this->k=k;};//���õ��ɾ���ϵ��
		void SetDamp(float damp){this->damp=damp;}//���õ�������


		void addC(vec3 a,vec3 b,vec3 c, vec3 d);
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

		void GetForce(PARTICLE *v1, PARTICLE *v2, vec3 *force); //�õ���

		void Update(float dt);

		bool moveCurtainsL(float speed,int direction);
		bool moveCurtainsR(float speed,int direction);
		

	private:
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

		VertexFormat_XYZ_NORMAL_TEX *vectex_array;

		float gravity[4];// = {0.0, -0.2, 0.0, 1.0};		// ����
		int index;//= 0;
		int index2;// = 0;


	};
}
#endif // __CURTAINS_H__