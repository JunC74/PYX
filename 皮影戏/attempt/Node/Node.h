#ifndef NODE_H_HEADER_INCLUDED_ACE2F954
#define NODE_H_HEADER_INCLUDED_ACE2F954

#include "cocoa/Object.h"
#include "cocoa/Array.h"
#include "cocoa/GLState.h"
#include "message_system/Message.h"
#include "schedule/schedule.h"

namespace AttemptSpace
{

	class Node : public Object
	{
	public:

		Node();

		~Node();

		static Node* Create();

		bool Init();

		// ��Ӻ��ӽڵ㣬������ļ�����+1��
		void AddChild(Node* object);

		// ɾ���亢�ӽڵ㣬������ļ�����-1��
		void DeleteChild(Node* object);

		// ��Ⱦ�ö���
		virtual void Draw(float f_delta);

		// �õ�����ֵ��
		vec3 GetScale();

		// Χ��v3_axle������תf_angle�ȡ�
		void SetRotate(vec3 v3_axle, float f_theta);
		void SetRotateX(float f_theta);
		void SetRotateY(float f_theta);
		void SetRotateZ(float f_theta);

		// ����
		void Spin(vec3 v3_axle, float f_theta);
		void SpinX(float f_theta);
		void SpinY(float f_theta);
		void SpinZ(float f_theta);

		// ��������ֵ��
		void SetScale(float f_scale);

		void SetScaleX(float f_scale_x);

		void SetScaleY(float f_scale_y);

		void SetScaleZ(float f_scale_z);

		void Scale(float f_scale);
		void ScaleX(float f_scale_x);
		void ScaleY(float f_scale_y);
		void ScaleZ(float f_scale_z);

		// ƽ�Ʋ���
		void SetTranslation(vec3 v3_translation);

		// X�᷽��ƽ�ơ�
		void SetTranslationX(float f_translation_x);

		// ��y�᷽��ƽ�ơ�
		void SetTranslationY(float f_translation_y);

		// ��Z�᷽��ƽ�ơ�
		void SetTranslationZ(float f_translation_z);

		// @brief ��ȡ�任����
		mat4 GetTransform();

		mat4 GetWorldTransform();

		// ���ʺ��ӵ���Ⱦ����
		void Visit(float f_delta);

		int GetWeight();

		void SetWeight(int weight);

		bool IsVisible();

		void SetVisible(bool visible);

		// ������ɫ��
		void SetShaderProgram(ShaderProgram *shader);

		// ��ȡ��ɫ��
		ShaderProgram* GetShaderProgram();

		// ===== Scheduler and Timer =====

		void Update(float dt);

		void ScheduleUpdate (void);

		void UnScheduleUpdate();

		//void Schedule (SEL_SCHEDULE selector, float interval, unsigned int repeat, float delay);


		// ===== Tag & User data =====
		virtual int GetTag () const;

		virtual void SetTag (int nTag);

		virtual void* GetUserData ();

		virtual void SetUserData( void *pUserData ) ;

		// ===== Coordinate Converters =====
		// ��ȡ��ǰ�ľֲ�����(���ڵ���ԭ��)
		vec3 GetPosition();

		// ���þֲ�����
		void SetPosition(vec3 coord);
		void SetPosition(float x, float y, float z);

		// ���ֲ�����(���������ϵ)ת��Ϊ��������
		vec3 ConvertToWorldSpace(vec3 coord);

		virtual AABB GetAABB();
		virtual void SetAABB(AABB box);

		// ��ײ���
		bool Collision(Node * b);

		// �������еı任
		void Reset();
	private:
	protected:
		
		mat4 transform_;	// �任����
		vec3 v3_scale_;		// ����ֵ
		mat4 mat_spin_;		// ����ϵ��
		int i_weight_;		// ��Ⱦʱ��Ȩֵ��
		bool b_visible_;
		Array *child_array_;
		Node *parents_;		// ���׽ڵ��ָ��
		ShaderProgram *shader_;
		int tag_;
		void *user_data_;
		int schedule_id_;	// �����¼�ID
		AABB aabb_;
	};

}	// end namespace AttemptSpace

#endif /* NODE_H_HEADER_INCLUDED_ACE2F954 */
