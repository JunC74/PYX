#include <algorithm>
#include "frames_data_compute.h"

FramesDataCompute::FramesDataCompute(){
    frame_id_ = 0;
}

FramesDataCompute::~FramesDataCompute(){}

FramesDataCompute::FramesDataCompute(FramesDataString *fds_object)
{
	fds_ = fds_object;
    frame_id_ = 0;
}

bool FramesDataCompute::CreateNewFile(const char* file_name)
{
	if(!fds_->CreateNewFramesString(file_name))
		return false;
	frame_id_ = 0;

	return true;
}

bool FramesDataCompute::OpenFile(const char* file_name)
{
	
	if (fds_->LoadFramesDataString(file_name))
	{
        frame_id_ = fds_->GetFrameNum() - 1;
        return true;
	}
	return false;
}

bool FramesDataCompute::SaveFile()
{
	if(fds_->SaveFramesDataString())
    {
        char file_name[300];
        strcpy(file_name, fds_->GetFileName());
        int len = strlen(file_name);
        file_name[len - 3] = 'v'; 
        WriteVertex(file_name, false);
// 		sprintf(file_name, "reversal_%s", fds_->GetFileName());
// 		len = strlen(file_name);
// 		file_name[len - 3] = 'v'; 
// 		WriteVertex(file_name, true);
		
        return true;
    }
	return false;
}

bool FramesDataCompute::SaveFile(const char *file_name)
{
    char old_file_name[300];
    strcpy(old_file_name, fds_->GetFileName());
    if (fds_->ChangeFileName(file_name) == false) return false;

    int err = fds_->SaveFramesDataString();
    fds_->ChangeFileName(old_file_name);
    return err;
}
void FramesDataCompute::SetFramesDataStringObject(FramesDataString *fds_object)
{
	this->fds_ = fds_object;
}

int FramesDataCompute::GetFrameId()
{
	return frame_id_;
}

void FramesDataCompute::SetStep(int num)
{
	this->step_ = num;
}

void FramesDataCompute::SetOutSize(int length)
{
	this->frames_size_ = length;
}

Frame* FramesDataCompute::GetInterpolationFrames(int* frames_number)
{
    int i;
	*frames_number = (fds_->GetFrameNum() - 1) * (step_ + 1) + 1;
	Frame* outputFrame = new Frame[ *frames_number];
	//�����ؼ�֡���飬ÿ�ζ�ÿ��֮֡����в�ֵ
	for (i = 0;i < fds_->GetFrameNum() - 1; i++)
	{
		int k = i * (step_ + 1);
        vector<Frame> frame = InsertionBetweenTwoFrames(i, step_);
		for (int j = k; j < k + step_ + 1; j++)
			outputFrame[j] = frame[j - k];
	}
    outputFrame[*frames_number - 1] = fds_->GetFrameData(fds_->GetFrameNum());
    for (i = 0; i < *frames_number; i++)
    {
        SetFrameScale(frames_size_ / (float)FRAME_SIZE, outputFrame[i]);
    }
	return outputFrame;
}

Frame FramesDataCompute::GetFrame(int num)
{
    Frame frame = fds_->GetFrameData(num);
	SetFrameScale(frames_size_ / (float)FRAME_SIZE, frame);
	return frame;
}

Frame FramesDataCompute::NextFrame()
{
    // ����������һ֡���򷵻����һ֡;
    if (frame_id_ < fds_->GetFrameNum() - 1) frame_id_++;
    Frame next_frame = fds_->GetFrameData(frame_id_);
	SetFrameScale(frames_size_ / (float)FRAME_SIZE, next_frame);
	return next_frame;
}

Frame FramesDataCompute::PreviousFrame()
{
    // ���ǵ�һ֡�����ص�һ֡
    if (frame_id_ >= 1) frame_id_--;
    Frame previous_frame = fds_->GetFrameData(frame_id_);
	SetFrameScale(frames_size_ / (float)FRAME_SIZE, previous_frame);
	return previous_frame;
}

bool FramesDataCompute::SaveFrame(const Frame& frame_data)
{
	if (frame_data.number <= 0)
		return false;
	Frame frame_ = frame_data;
    SetFrameScale((float)FRAME_SIZE / frames_size_, frame_);
    bool err = fds_->ReplaceFrame(frame_, frame_id_);
    if (err && fds_->GetFrameNum() == frame_id_ + 1)
    {
        return fds_->Insert(frame_, frame_id_ + 1)? ++frame_id_ : false;
    }
    return err;
}

bool FramesDataCompute::DeleteFrame()
{
    int size = fds_->GetFrameNum();
    if (size == 1)
    {
        // ֻ��һ֡�����
       return fds_->DeleteFrame(frame_id_);
    } 
    else if (size - 1 == frame_id_)
    {
        // �����һ֡�ǵ����
        if (fds_->DeleteFrame(frame_id_) == false) return false;
        frame_id_--;
        return true;
    } 
    else
    {
        return fds_->DeleteFrame(frame_id_);
    }
}

bool FramesDataCompute::InsertFrame(Frame frame)
{
    frame_id_;
    SetFrameScale(FRAME_SIZE / (float)frames_size_, frame);
    if (fds_->Insert(frame, frame_id_) == false)
    {
        frame_id_--;
        return false;
    }
    return true;
}

void FramesDataCompute::SetFrameScale(float scale, Frame& frame)
{

	if (frame.number <= 0)
	    return;

    for (int i = 0; i < frame.number; i++)
    {
        frame.node[i].x *= scale;
        frame.node[i].y *= scale;
        frame.node[i].distance *= scale;
    }
	for (int i = 0; i < frame.number; i++)
	{
		int father_x_ = frame.node[frame.node[i].father].x;
		int father_y_ = frame.node[frame.node[i].father].y;
		int son_x_ = frame.node[i].x;
		int son_y_ = frame.node[i].y;
		frame.node[i].angle = GetAngle(father_x_, father_y_, son_x_, son_y_);
	}
}

vector<Frame> FramesDataCompute::InsertionBetweenTwoFrames(int frameIndex, int frameNum)
{
    Frame previousFrame = fds_->GetFrameData(frameIndex);
    Frame nextFrame = fds_->GetFrameData(frameIndex + 1);

	//������ֵ֮���֡���鲢��ʼ��
	int tmpFrameSize = frameNum + 1;
	vector<Frame> tmpFrames(tmpFrameSize);
	for (int i = 0; i < tmpFrameSize; i++)
	{
		tmpFrames[i].number = previousFrame.number;
		tmpFrames[i].node = new Node[tmpFrames[i].number];
		for (int j = 0; j < tmpFrames[i].number; j++)
			tmpFrames[i].node[j] = previousFrame.node[j];
        tmpFrames[i].direction = previousFrame.direction;
	}
//     tmpFrames[0] = previousFrame;
//     tmpFrames[tmpFrameSize - 1] = previousFrame;
	//�Բ�ֵ��ÿһ֡��ÿ���ڵ�ĽǶȽ��м���
	for (int i = 0; i < previousFrame.number; i++)
	{
		//������ʱ�Ƕȣ�Ϊ��֮֡������һ���ڵ�ĽǶȲ���ϲ���֡��
		float delta_angle_ = ComputeDeltaAngle(nextFrame.node[i].angle, previousFrame.node[i].angle);
		float tmpAngle = delta_angle_ / (float)tmpFrameSize;
		for (int j = 0; j < tmpFrameSize; j++)
		{
            if (tmpFrames[j].node[i].father == i)
            {
                vec2 a(previousFrame.node[i].x, previousFrame.node[i].y),
                    b(nextFrame.node[i].x, nextFrame.node[i].y); 
                tmpFrames[j].node[i].x = a.x + (b.x - a.x) / (tmpFrameSize + 1) * j;
                tmpFrames[j].node[i].y = a.y + (b.y - a.y) / (tmpFrameSize + 1) * j;
                continue;
            }
			Node son = tmpFrames[j].node[i];
			Node father = tmpFrames[j].node[son.father];

			float angle_ = RadianToAngle(previousFrame.node[i].angle) + tmpAngle * j;

			if (angle_ > 180)
				angle_ -= 360;
			else if (angle_ < -180)
				angle_ += 360;
			
			son.angle = AngleToRadian(angle_);
			son.x = father.x + son.distance * sin(son.angle);
			son.y = father.y + son.distance * cos(son.angle);

			tmpFrames[j].node[i].angle = son.angle;
			tmpFrames[j].node[i].x = son.x;
			tmpFrames[j].node[i].y = son.y;
		}
	}
	
	//�����ֵ���֡����
	return tmpFrames;
}

double FramesDataCompute::RadianToAngle(double radian)
{
	return radian / M_PI * 180;
}

double FramesDataCompute::AngleToRadian(double angle)
{
	return angle / 180 * M_PI;
}

int FramesDataCompute::ComputeDeltaAngle(double next_radian_, double previous_radian_)
{
	double next_angle_ = RadianToAngle(next_radian_);
	double previous_angle_ = RadianToAngle(previous_radian_);
	double delta_angle_ = 0;
	
	if (next_angle_ * previous_angle_ < 0)
	{
		if (next_angle_ > previous_angle_)
		{
			if (360 + previous_angle_ - next_angle_ < 180)
				delta_angle_ = next_angle_ - previous_angle_ - 360;
			else 
				delta_angle_ = next_angle_ - previous_angle_;
		}
		else
		{
			if (360 + next_angle_ - previous_angle_ < 180)
				delta_angle_ = next_angle_ - previous_angle_ + 360;
			else
				delta_angle_ = next_angle_ - previous_angle_;
		}
	}
	else
		delta_angle_ = next_angle_ - previous_angle_;
	 
	return delta_angle_;
}

void FramesDataCompute::CreateRectangle(const vec2 &father, const vec2 &child, 
                     int width, int hight, vec2 *p)
{
    int len = hight;
    width /= 2;
    len /= 2;
    p[0] = vec2(-len, -width);
    p[1] = vec2(len, -width);
    p[2] = vec2(len, width);
    p[3] = vec2(-len, width);
    double x = (father.x + child.x) / 2.0, 
            y = (father.y + child.y) / 2.0;
    double rote = GetRotateAngle(1, 0, child.x - father.x, child.y - father.y);
    mat4 m;
     
    m *= Translate(x, y, 0);
    m *= Rotate(rote, 0.0, 0.0, 1.0);
   
    for (int i = 0; i < 4; i++)
    {
        vec4 t = (m * vec4(p[i], 0.0, 1.0));
        p[i] = vec2(t.x, t.y);
    }
}

vector<vector<VERTEX>> FramesDataCompute::GetRectangleString()
{
    int i, j;
    int frame_number; //�ؼ�֡����Ŀ
    Frame *frame;   //�ؼ�֡��
    int vertex_num = 0; // ����ĸ���
    frame = GetInterpolationFrames(&frame_number);
    for(i = 0; i < frame_number; i++) vertex_num += (frame[i].number - 1) << 2;
    vector<vector<VERTEX>> 
        vp(frame_number, vector<VERTEX>((frame[0].number - 1) * 4));

    // ��ȡ������Ϣ�����������Ϣ
    if (ReadINI("FDS_BMP.ini", frame[0].number - 1, &bmp_ini_) != frame[0].number - 1)
    {
        vp.clear();
        return vp;
    }
    
    for(i = 0; i < frame_number; i++)
    {
        int direction = frame[i].direction;     // ��ǰ�ؼ�֡�ķ���
        // 0���Ǹ��ڵ㣬û�и��ڵ��
        for(j = 0; j < frame[i].number - 1; j++)
        {
            
            // �ؽ�
            ImagesNode bmp_node = bmp_ini_.bmp_node[j];
            Node *node = &frame[i].node[bmp_node.child], 
                *father_node = &frame[i].node[bmp_node.father];
            int resource_id = bmp_node.id * 2 + direction;  // �õ�ͼƬ����������

            ResourceSP resource = bmp_ini_.resource_sp[resource_id];
           
            vec2 child(node->x, node->y), 
                father(father_node->x, father_node->y);
            vec2 v[4];
            CreateRectangle(father, child, 
                resource.hight, resource.width, v);
            
            for (int ik = 0; ik < 4; ik++) 
            {
                vp[i][j*4 + ik].v = vec3(v[ik], bmp_node.z);
            }
            double hight = bmp_ini_.hight, width = bmp_ini_.width;
            // ��ͼƬ���ز��е��Ǹ�λ��
            vp[i][j*4 + 0].vt_id = resource_id * 4 + 0; 
            vp[i][j*4 + 0].vn_id = 0;
            vp[i][j*4 + 1].vt_id = resource_id * 4 + 1; 
            vp[i][j*4 + 1].vn_id = 0;
            vp[i][j*4 + 2].vt_id = resource_id * 4 + 2; 
            vp[i][j*4 + 2].vn_id = 0;
            vp[i][j*4 + 3].vt_id = resource_id * 4 + 3; 
            vp[i][j*4 + 3].vn_id = 0;
        }
    }

    delete [] frame;
    frame = NULL;
    return vp;
}

void ReadStr(char *str, int size, FILE *file)
{
    do 
    {
        fgets(str, size, file);
    } while (str[0] == ';');
}
int FramesDataCompute::ReadINI(char *file_name, int num, ImagesINI *bmp_ini)
{
    bool err = true;

    const int MAXN_STR = 3000;
    char fstr[MAXN_STR];
    FILE *frame_file = fopen(file_name, "r");
    if (frame_file == NULL)
    {
        return false;
    }
    // ��ȡͼƬ������
    ReadStr(fstr, 256, frame_file);
    fstr[strlen(fstr) - 1] = '\0';
    strcpy(bmp_ini->picture_name, fstr);
    //��ȡͼƬ�Ŀ�͸�
    ReadStr(fstr, MAXN_STR, frame_file);
    sscanf(fstr, "%lf %lf", &bmp_ini->width, &bmp_ini->hight);
    bmp_ini->hight /= 2.0;
    double width = bmp_ini->width;
    double hight = bmp_ini->hight;
    bmp_ini->bmp_node.clear();

    int i;
    ImagesNode bmp_node;
    // ��ȡû���زĵĸ���
    bmp_ini->resource_sp.clear();
    ReadStr(fstr, MAXN_STR, frame_file);
    int number;
    sscanf(fstr, "%d", &number);
    for (i = 0; i < number; i++)
    {
        ResourceSP resource;
        ReadStr(fstr, MAXN_STR, frame_file);
        sscanf(fstr, "%lf %lf %lf %lf",
            &resource.x, &resource.y,
            &resource.width, &resource.hight);
        resource.vt[0] = vec2(resource.x / width, resource.y / hight);
        resource.vt[1] = vec2((resource.x + resource.width) / width, resource.y / hight);
        resource.vt[2] = vec2((resource.x + resource.width) / width, (resource.y - resource.hight) / hight);
        resource.vt[3] = vec2(resource.x / width, (resource.y - resource.hight) / hight);

        // ����
        resource.vt[0].y /= 2.0;
        resource.vt[1].y /= 2.0;
        resource.vt[2].y /= 2.0;
        resource.vt[3].y /= 2.0;
        bmp_ini->resource_sp.push_back(resource);
        // ����
        resource.vt[0].y = 1.0 - resource.vt[2].y;
        resource.vt[1].y = 1.0 - resource.vt[3].y;
        resource.vt[2].y = 0.5;
        resource.vt[3].y = 0.5;
        bmp_ini->resource_sp.push_back(resource);
    }
    // ��ȡ�����ڵ����Ϣ
    for (i = 0; i < num; i++)
    {
        ReadStr(fstr, MAXN_STR, frame_file);
        sscanf(fstr, "%d %d %d %f",
            &bmp_node.father, &bmp_node.child,
            &bmp_node.id, &bmp_node.z);
        
        bmp_ini->bmp_node.push_back(bmp_node);
    }
	sort(bmp_ini->bmp_node.begin(), bmp_ini->bmp_node.end());
    return i;
}

int FramesDataCompute::WriteVertex(const char *file_name, bool is_reversal)
{
    int i ,j;
    const int MAX_STR = 3000;
    char fstr[MAX_STR];

    FILE *file = fopen(file_name, "wt");
    vector< vector<VERTEX> > vertex = GetRectangleString();
    
	float reversal = 1;
	if (is_reversal == true)
	{
		reversal = -1;
	}
	Frame frame = fds_->GetFrameData(0);
	float fix_x = frame.node[0].x * (float)frames_size_ / FRAME_SIZE;
	float fix_y = (frames_size_ - frame.node[0].y * (float)frames_size_ / FRAME_SIZE);

	// �Զ������ݽ�������
    for (i = 0; i < vertex.size(); i++)
    {
        for (j = 0; j < vertex[i].size(); j++)
        {
			//���еĶ������ת����opengl������ϵ
            vertex[i][j].v.y *= -1;
            vertex[i][j].v.y = frames_size_ + vertex[i][j].v.y;

			// ���ĵ�Ϊ0
			vertex[i][j].v.y -= fix_y;
			vertex[i][j].v.x -= fix_x;
			vertex[i][j].v.x *= reversal;
        }
    }

    //���ͼƬ���ļ���
    sprintf(fstr, "ImagesName %s", bmp_ini_.picture_name);
    fprintf(file, "%s\n", fstr);

    // �����������
    sprintf(fstr, "vtNumber %d", bmp_ini_.resource_sp.size() * 4);
    fprintf(file, "%s\n", fstr);
    for (i = 0; i < bmp_ini_.resource_sp.size(); i++)
    {
        for (j = 0; j < 4; j++)
        {
            vec2 vt = bmp_ini_.resource_sp[i].vt[j];
            sprintf(fstr, "%.6lf %.6lf",  vt.x, vt.y);
            fprintf(file, "%s\n", fstr);
        }
    }

    // �������
    sprintf(fstr, "vnNumber 1");
    fprintf(file, "%s\n", fstr);

    sprintf(fstr, "%.6lf %.6lf %.6lf", 0.0, 0.0, -1.0);
    fprintf(file, "%s\n", fstr);

    // ���������Ŀ
    int vertex_number = 0;
    for (i = 0; i < vertex.size(); i++)
    {
        vertex_number += vertex[i].size();
    }
    sprintf(fstr, "VertexNumber %d", vertex_number);
    fprintf(file, "%s\n", fstr);

    //������еĶ�������
    // ������㣺 �������� + ������������ + ��������
    for (i = 0; i < vertex.size(); i++)
    {
        for (j = 0; j < vertex[i].size(); j++)
        {
            sprintf(fstr, "%.6lf %.6lf %.6f %d %d",
                vertex[i][j].v.x, vertex[i][j].v.y, vertex[i][j].v.z,
                vertex[i][j].vt_id, vertex[i][j].vn_id);
            fprintf(file, "%s\n", fstr);
        }
    }

    //���һ���ж���֡
    sprintf(fstr, "FramesNumber %d", vertex.size());
    fprintf(file, "%s\n", fstr);

    // ���ÿһ֡��������Ķ�������
    int index = 0;
    for(i = 0; i < vertex.size(); i++)
    {
        // ��ǰ֡���ж��ٸ�������
        sprintf(fstr, "FaceNumber %d", vertex[i].size() / 2);
        fprintf(file, "%s\n", fstr);
        for (j = 0; j < vertex[i].size(); j  += 4, index += 4)
        {
            sprintf(fstr, "%d %d %d", index, index + 2, index + 1);
            fprintf(file, "%s\n", fstr);
            sprintf(fstr, "%d %d %d", index, index + 3, index + 2);
            fprintf(file, "%s\n", fstr);
        }
    }
    fclose(file);
    return 0;
}