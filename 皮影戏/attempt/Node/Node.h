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

		// 添加孩子节点，其自身的计数器+1。
		void AddChild(Node* object);

		// 删除其孩子节点，其自身的计数器-1。
		void DeleteChild(Node* object);

		// 渲染该对象。
		virtual void Draw(float f_delta);

		// 得到缩放值。
		vec3 GetScale();

		// 围绕v3_axle向量旋转f_angle度。
		void SetRotate(vec3 v3_axle, float f_theta);
		void SetRotateX(float f_theta);
		void SetRotateY(float f_theta);
		void SetRotateZ(float f_theta);

		// 自旋
		void Spin(vec3 v3_axle, float f_theta);
		void SpinX(float f_theta);
		void SpinY(float f_theta);
		void SpinZ(float f_theta);

		// 设置缩放值。
		void SetScale(float f_scale);

		void SetScaleX(float f_scale_x);

		void SetScaleY(float f_scale_y);

		void SetScaleZ(float f_scale_z);

		void Scale(float f_scale);
		void ScaleX(float f_scale_x);
		void ScaleY(float f_scale_y);
		void ScaleZ(float f_scale_z);

		// 平移操作
		void SetTranslation(vec3 v3_translation);

		// X轴方向平移。
		void SetTranslationX(float f_translation_x);

		// 沿y轴方向平移。
		void SetTranslationY(float f_translation_y);

		// 沿Z轴方向平移。
		void SetTranslationZ(float f_translation_z);

		// @brief 获取变换矩阵
		mat4 GetTransform();

		mat4 GetWorldTransform();

		// 访问孩子的渲染函数
		void Visit(float f_delta);

		int GetWeight();

		void SetWeight(int weight);

		bool IsVisible();

		void SetVisible(bool visible);

		// 设置着色器
		void SetShaderProgram(ShaderProgram *shader);

		// 获取着色器
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
		// 获取当前的局部坐标(父节点做原点)
		vec3 GetPosition();

		// 设置局部坐标
		void SetPosition(vec3 coord);
		void SetPosition(float x, float y, float z);

		// 将局部坐标(自身的坐标系)转化为世界坐标
		vec3 ConvertToWorldSpace(vec3 coord);

		virtual AABB GetAABB();
		virtual void SetAABB(AABB box);

		// 碰撞检测
		bool Collision(Node * b);

		// 重置所有的变换
		void Reset();
	private:
	protected:
		
		mat4 transform_;	// 变换矩阵。
		vec3 v3_scale_;		// 缩放值
		mat4 mat_spin_;		// 自旋系数
		int i_weight_;		// 渲染时的权值。
		bool b_visible_;
		Array *child_array_;
		Node *parents_;		// 父亲节点的指针
		ShaderProgram *shader_;
		int tag_;
		void *user_data_;
		int schedule_id_;	// 调度事件ID
		AABB aabb_;
	};

}	// end namespace AttemptSpace

#endif /* NODE_H_HEADER_INCLUDED_ACE2F954 */
