#include "frames_data_string.h"
#include <cmath>

using namespace std;

FramesDataString::FramesDataString(){
    file_name_ = NULL;
	frames_string_.clear();
    Init();
}

void FramesDataString::Init()
{
    if (file_name_ == NULL)  ChangeFileName("未命名");

    frames_string_.clear();
    Frame frame;
    frame.number = 1;
    frame.node = new Node;
    memset(frame.node, 0, sizeof(Node));
    frame.node[0].x = frame.node[0].y = FRAME_SIZE / 2;
    frame.node[0].father = 0;
    frame.node[0].direct_x = 0;
    frame.node[0].direct_y =-1;
    frame.node[0].angle = 0;
    frames_string_.push_back(frame);
}

FramesDataString::~FramesDataString()
{
    if(file_name_)
    {
        delete [] file_name_;
        file_name_ = NULL;
    }
}


bool FramesDataString::LoadVersion01B(ifstream &frame_file)
{
	int vertex_num;
	int frames_num;
	NodeCollection *node_collection;
	int i;

	// 获取帧数目
	frame_file.read((char *)&frames_num, sizeof(int));
	if(frames_num <= 0) {
		return false;
	}

	// 获取帧数据
	node_collection = new NodeCollection[vertex_num];
	Frame  frame;
    frame.number = vertex_num;
    frame.node = new Node[vertex_num];
	for(i = 0; i < frames_num; i++) {
        frame_file.read((char *)&vertex_num, sizeof(int));
		frame_file.read((char *)(frame.node), 
			sizeof(Node) * vertex_num);
		 // 文件读取错误
		 if(frame_file.good() != true){
			 return false;
		 }
		frames_string_.push_back(frame);
	} //end for(i = 0; i < frames_num; i++)
	return true;
}

bool FramesDataString::LoadVersion01(FILE *frame_file)
{
    int frames_num;
    if(fscanf(frame_file, "<Frames Number: %d>\n", &frames_num) == EOF) 
        return false;
    if (frames_num <= 0) return false;

    // 读取帧串数据
    Frame frame;
    int i;
    for (i = 0; i <frames_num; i++)
    {
        // 读取每一帧的数据
        int frame_id;
        char str[300];
        int direction = 0;
        fgets(str, 300, frame_file);
        sscanf(str, "<Frame ID:%d, Node Number: %d, Direction: %d>\n", 
            &frame_id, &frame.number, &direction);
       
        frame.direction = direction;

        if(frame_id != i + 1 || frame.number < 0) return false;
        frame.node = new Node[frame.number];
        memset(frame.node, 0, sizeof(Node)*frame.number);
        for (int j = 0 ; j < frame.number; j++)
        {
            Node * node = &frame.node[j];
            int node_id;
           
            fgets(str, 300, frame_file);
            if(sscanf(str,
                "\t<Node ID:%d %d %lf %f %f %f %lf %lf %d>\n",
                &node_id,
                &node->father, &node->angle, &node->distance,
                &node->x, &node->y, &node->direct_x, &node->direct_y, &node->rotate
                ) == EOF || node_id != j + 1) return false;
        }
        frames_string_.push_back(frame);
    }
    return true;
}

bool FramesDataString::LoadFramesDataString (const char *fds_file_name) {      
	// 打开文件
    if(ChangeFileName(fds_file_name) == false)
    {
        return false;
    }
    
    FILE *frame_file = fopen(file_name_, "r");
	if(!frame_file){
		return false;
	}
    //备份之前的信息
    vector<Frame> old_frames = frames_string_;
    frames_string_.clear();
	// 获取版本号
	int version;
	//fin.read((char *)&version, sizeof(int));
	bool err;
    err = (fscanf(frame_file, "<version: %d>\n", &version) == EOF)? false : true;
	switch(version) {
	case 1:
		err = LoadVersion01(frame_file);
		break;
	default:
		err = false;
	}

    if (err == false)
    {
        frames_string_ = old_frames;
    }
    fclose(frame_file);
    return err;
}

bool FramesDataString::SaveFramesDataStringB (){
	int frames_num = frames_string_.size();
	// 帧序列是否为空
	if(frames_num <= 0) {
		return false;
	}
	
	ofstream fout(file_name_, ios::binary);
	if(!fout){
		return false;
	}
      
	bool err = false;

	// 写入版本号
	char version = FRAME_VERSION;
	fout.write(&version, sizeof(version));
	err = fout.fail();
	
	// 写入帧数目
	if(!err){
		int frames_num = frames_string_.size();
		fout.write((char*)(&frames_num), sizeof(string::size_type ));
		err = fout.fail();
	}

	// 写如帧信息
	if(!err){
		for(int i = 0; i < frames_num && !err; i++) {
            // 写入顶点数目
            fout.write((char*)(&frames_string_[0].number), sizeof(int));
            err = fout.fail();
			fout.write((char*)&(frames_string_[i]), sizeof(Node));
			err = fout.fail();
		}
	}

	// 写入文件是否存在错误
	if(err){
		fout.clear();
	}
	fout.close();
	return !err;
}

bool FramesDataString::SaveFramesDataString ()
{
    int frames_num = frames_string_.size();
    // 帧序列是否为空
    if(frames_num <= 0) {
        return false;
    }


    // 以只写方式打开文件
    FILE *fout = fopen(file_name_, "wt");
    if(!fout){
        return false;
    }

    bool err = false;

    // 写入版本号
    //char version = FRAME_VERSION;
    //fout.write(&version, sizeof(version));
    err = (fprintf(fout, "<version: %d>\n", FRAME_VERSION) > 0)? false : true;

    // 写入帧数目
    if(!err){
        int frames_num = frames_string_.size();
        //fout.write((char*)(&frames_num), sizeof(string::size_type ));
        err = (fprintf(fout, "<Frames Number: %d>\n", frames_num) > 0)?
            false : true;
    }

    // 写如帧信息
    if(!err){
        for(int i = 0; i < frames_num && !err; i++) {
            err = (fprintf(fout, "<Frame ID: %2d, Node Number: %4d, Direction: %d>\n", 
                    i+1, frames_string_[i].number, frames_string_[i].direction) > 0)? false : true;
            for (int j = 0; j < frames_string_[i].number && !err; j++)
            {
//              fout.write((char*)&(frames_string_[i]), sizeof(Node));
//              err = fout.fail();
                Node * node = &frames_string_[i].node[j];
                fprintf(fout, 
                    "\t<Node ID:%04d %04d %6.6f %6.6f %6.6f %6.6f %12.6f %12.6f %d>\n",
                    j + 1,
                    node->father, node->angle, node->distance,
                    node->x, node->y, node->direct_x, node->direct_y, node->rotate);
            }
            
        }
    }

    // 写入文件是否存在错误
    fclose(fout);
    return !err;
}

bool FramesDataString::Insert(const Frame& frame_data, int frame_id_){
	if(frame_id_ < 0 || frame_id_ > frames_string_.size()){
		return false;
	}
    // 对frame_data进行数据的检查
    int i;
    // 检查节点的属性是否与之前的节点一样
    if(frames_string_.size() != 0) {
        if(frame_data.number != frames_string_[0].number)
            return false;
        for (i = 0; i < frame_data.number; i++) {
            //检查父亲和距离是否和前一帧一致
            if(frames_string_.back().node[i].father != frame_data.node[i].father) {
                    return false;
            }
        }
    }
	if(frame_id_ == frames_string_.size()) 
    {
		frames_string_.push_back(frame_data);
	}
    else
    {
        frames_string_.insert(frames_string_.begin() + frame_id_, frame_data);
    }
	
	return true;
}

bool FramesDataString::DeleteFrame(int num){
    int frames_num = frames_string_.size();

	if(num < 0 || num >= frames_num) {
			return false;
	}
	
	if(num == 0){
		frames_string_.erase(frames_string_.begin());
		for(int i = 0; frames_string_.size() && i < frames_string_[0].number; i++){
			frames_string_[0].node[i].rotate = true;
			frames_string_[0].node[i].angle = 0;
		}
	} else if(num == frames_num - 1) {
		frames_string_.pop_back();
	} else {
		Frame *delete_frame = &frames_string_[num];
		Frame *next_frame = &frames_string_[num+1];
		for(int i = 0; i < delete_frame->number; i++)
        {
			if(delete_frame->node[i].rotate != 
				next_frame->node[i].rotate)
            {
					double delete_angle = delete_frame->node[i].angle * 
						((delete_frame->node[i].rotate)? -1 : 1);
					double next_angle = next_frame->node[i].angle * 
						((next_frame->node[i].rotate)? -1: 1);
					next_frame->node[i].rotate = (delete_angle + next_angle < 0)?
						true : false;
			}
		} // end for(int i = 0; i < delete_frame->number; i++)
        frames_string_.erase(frames_string_.begin() + num);
	} 
    if (frames_string_.size() == 0)
    {
        Init();
    }
	return true;
}

int FramesDataString::GetFrameNum(){
	return frames_string_.size();
}

Frame FramesDataString::GetFrameData(int num){
	if (num < 0)
	{
        num = 0;
	}
    if (num >= frames_string_.size())
    {
        num = frames_string_.size() - 1;
    }
	return frames_string_[num];
}

bool FramesDataString::CreateNewFramesString(const char* file_name){
    if(ChangeFileName(file_name) == false)
    {
        return true;
    }

	Init();
    return true;
}

bool FramesDataString::ChangeFileName(const char *file_name)
{
    if(file_name == NULL)
    {
        return false;
    }
    int len = 0;
    while(file_name[len] != '.' && file_name[len] != '\0'
        && len <= 50) 
    {
        len++;
    }
    char *ans_name = new char[len + 5];
    strncpy(ans_name, file_name, len);
    strcpy(ans_name + len, ".fds");

    if (file_name_ != NULL)
    {
        delete [] file_name_;
        file_name_ = NULL;
    }
    file_name_ = ans_name;
    return true;
}

bool FramesDataString::ReplaceFrame(const Frame& frame, int id)
{
    if(id < 0 || id >= frames_string_.size()) return false;
    Frame source_frame = frames_string_[id];

    // 确定两个帧是否可以替换
    if (frames_string_.size() == 1)
    {
        frames_string_[id] = frame;
        return true;
    }
    else
    {
        if (frame.number != source_frame.number) 
            return false;
        for (int i = 0; i < frame.number; i++)
        {
            if (frame.node[i].father != source_frame.node[i].father)
                return false;
        }
        frames_string_[id] = frame;
    }
    return true; 
}