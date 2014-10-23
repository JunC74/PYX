#include "Node.h"
#include "cocoa/GLState.h"
#include "cocoa/ResourceManager.h"

namespace AttemptSpace
{

	void Node::AddChild(Node* object)
	{
		if(object == NULL) return;
		if(object->parents_ != NULL)
		{
			Log::GetInstance()->Warn("node already has parents");
			return ;
		}
		child_array_->Add(object);
		object->parents_ = this;
	}

	void Node::DeleteChild(Node* object)
	{
		if (object == NULL || object->parents_ != this)
		{
			return;
		}
		child_array_->Delete(object);
	}

	void Node::Draw(float f_delta)
	{
	}

	vec3 Node::GetScale()
	{
		return v3_scale_;
	}

	void Node::SetRotate(vec3 v3_axle, float f_theta)
	{
		transform_ = Rotate(f_theta, v3_axle.x, v3_axle.y, v3_axle.z) *
			transform_;
	}

	void Node::SetRotateX(float f_theta)
	{
		transform_ = RotateX(f_theta) * transform_;
	}

	void Node::SetRotateY(float f_theta)
	{
		transform_ = RotateY(f_theta) * transform_;
	}   

	void Node::SetRotateZ(float f_theta)
	{
		transform_ = RotateZ(f_theta) * transform_;
	}

	void Node::Spin(vec3 v3_axle, float f_theta)
	{
		mat_spin_ = Rotate(f_theta, v3_axle.x, v3_axle.y, v3_axle.z);
	}

	void Node::SpinX(float f_angle)
	{
		mat_spin_ = RotateX(f_angle) * mat_spin_;
	}

	void Node::SpinY(float f_angle)
	{
		mat_spin_ = RotateY(f_angle) * mat_spin_;
	}

	void Node::SpinZ(float f_angle)
	{
		mat_spin_ = RotateZ(f_angle) * mat_spin_;
	}

	void Node::SetScale(float f_scale)
	{
		v3_scale_.x = f_scale;
		v3_scale_.y = f_scale;
		v3_scale_.z = f_scale;
	}

	void Node::SetScaleX(float f_scale_x)
	{
		v3_scale_.x = f_scale_x;
	}

	void Node::SetScaleY(float f_scale_y)
	{
		v3_scale_.y = f_scale_y;
	}

	void Node::SetScaleZ(float f_scale_z)
	{
		v3_scale_.z = f_scale_z;
	}

	void Node::Scale(float f_scale)
	{
		v3_scale_ *= f_scale;
	}
	void Node::ScaleX(float f_scale_x)
	{
		v3_scale_.x *= f_scale_x;
	}

	void Node::ScaleY(float f_scale_y)
	{
		v3_scale_.y *= f_scale_y;
	}

	void Node::ScaleZ(float f_scale_z)
	{
		v3_scale_.z *= f_scale_z;
	}

	void Node::SetTranslation(vec3 v3_translation)
	{
		transform_ = Translate(v3_translation) * transform_;
	}

	void Node::SetTranslationX(float f_translation_x)
	{
		transform_ = Translate(f_translation_x, 0, 0) * transform_;
	}

	void Node::SetTranslationY(float f_translation_y)
	{
		transform_ = Translate(0, f_translation_y, 0) * transform_;
	}

	void Node::SetTranslationZ(float f_translation_z)
	{
		transform_ = Translate(0, 0, f_translation_z) * transform_;
	}


	mat4 Node::GetTransform()
	{
		return transform_ * mat_spin_ * AttemptSpace::Scale(v3_scale_.x, v3_scale_.y, v3_scale_.z);
	}

	mat4 Node::GetWorldTransform()
	{
		mat4 t = GetTransform();
		if (parents_)
		{
			t = parents_->GetWorldTransform() * t;
		}
		return t;
	}

	void Node::Visit(float f_delta)
	{
		if (b_visible_ == false)
		{
			return ;
		}
		// 变换矩阵入栈
		MatrixStack *model_view_statck = GLState::GetInstance()->GetModelViewStack();
		model_view_statck->Push(model_view_statck->GetTop() * GetTransform() );
		if (shader_)
		{
			GLState::GetInstance()->PushShaderProgram(shader_);
		}
		this->Draw(f_delta);

		for (int i = 0; i < child_array_->Size(); i++)
		{
			Node *child = (Node*)child_array_->At(i);
			child->Visit(f_delta);
		}
		if (shader_)
		{
			GLState::GetInstance()->PopShaderProgram();
		}
		model_view_statck->Pop();
	}

	int Node::GetWeight()
	{
		return i_weight_;
	}

	void Node::SetWeight(int weight)
	{
		i_weight_ = weight;
	}

	bool Node::IsVisible()
	{
		return b_visible_;
	}

	void Node::SetVisible(bool visible)
	{
		b_visible_ = visible;
	}

	// 设置着色器
	void Node::SetShaderProgram(ShaderProgram *shader)
	{
		if (shader == NULL)
		{
			return;
		}
		SAFRelease(shader_);
		SAFRetain(shader);
		shader_ = shader;
	}

	// 获取着色器
	ShaderProgram* Node::GetShaderProgram()
	{
		return shader_;
	}

	// ===== Scheduler and Timer =====

	void Node::Update(float dt)
	{
	}

	void Node::ScheduleUpdate (void)
	{
		schedule_id_ = Schedule::GetInstance()->RegisterForTimeing(this, (FUNC_Schedule)&Node::Update);
	}

	void Node::UnScheduleUpdate()
	{
		Schedule::GetInstance()->UnRegisterForTimeing(schedule_id_);
	}

	// ===== Tag & User data =====
	int Node::GetTag () const
	{
		return tag_;
	}

	void Node::SetTag (int nTag)
	{
		tag_ = nTag;
	}

	void* Node::GetUserData ()
	{
		return user_data_;
	}

	void Node::SetUserData( void *pUserData ) 
	{
		SAFDelete(user_data_);
		user_data_ = pUserData;
	}

 	// 设置摄像机
// 	void Node::SetCamera(CameraClass *camera)
// 	{
// 		if (camera == NULL)
// 		{
// 			return;
// 		}
//		SAFRelease(camera_);
// 		SAFRetain(camera);
// 		camera_ = camera;
// 	}

// 	// 获取摄像机
// 	CameraClass* Node::GetCamera()
// 	{
// 		return camera_;
// 	}


	vec3 Node::GetPosition()
	{
		vec4 coord = transform_ * vec4(0, 0, 0, 1);
		return vec3(coord.x, coord.y, coord.z);
	}

	void Node::SetPosition(vec3 coord)
	{
		vec3 cur_position = this->GetPosition();
		this->SetTranslation(coord - cur_position);
	}

	void Node::SetPosition(float x, float y, float z)
	{
		SetPosition(vec3(x,y,z));
	}

	// 将局部坐标转化为世界坐标
	vec3 Node::ConvertToWorldSpace(vec3 coord)
	{
		vec3 origin;
		vec4 pos = GetTransform() * vec4(coord, 1.0);
		if (parents_)
		{
			pos = parents_->GetTransform() * pos;
		}
		return vec3(pos.x, pos.y, pos.z);
	}

	AABB Node::GetAABB()
	{
		AABB box;
		for (int i = 0; i < child_array_->Size(); i++)
		{
			Node * node = (Node*)child_array_->At(i);
			AABB tbox = node->GetAABB();
			vec3 v = tbox.GetMax();
			box.Add(v.x, v.y, v.z);
			v = tbox.GetMin();
			box.Add(v.x, v.y, v.z);
		}
		vec3 v = aabb_.GetMax();
		box.Add(v.x, v.y, v.z);
		v = aabb_.GetMin();
		box.Add(v.x,v.y, v.z);

		mat4 t = this->GetTransform();
		if (parents_)
		{
			t = parents_->GetTransform() * t;
		}
		box.SetToTransformedBox(t);
		return box;
	}

	void Node::SetAABB(AABB box)
	{
		aabb_ = box;
	}

	// 碰撞检测
	bool Node::Collision(Node * b)
	{
		if (b)
		{
			return AABB::IntersectAABBs(this->GetAABB(), b->GetAABB());
		}
		return false;
		
	}
	Node::Node() : Object()
	{
		child_array_ = new Array();
		child_array_->Init();
		transform_ = Identity();
		b_visible_ = true;
		parents_ = NULL;
		tag_ = -1;
		user_data_ = NULL;
		schedule_id_ = 0;
		shader_ = NULL;
		v3_scale_ = vec3(1, 1, 1);
	}

	Node::~Node()
	{
		SAFRelease(child_array_);
		SAFDelete(user_data_);
		UnScheduleUpdate();
		Schedule::GetInstance()->UnRegisterForTimeing(schedule_id_);
	}

	Node* Node::Create()
	{
		Node* object = new Node();
		if (object != NULL && object->Init() == true)
		{
			object->AutoRelease();
			return object;
		}
		SAFDelete(object);
		return NULL;
	}

	bool Node::Init()
	{
		return true;
	}
}	// end namespace AttemptSpace