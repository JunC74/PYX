#include "vds_object.h"
using namespace std;

VDSObject::VDSObject(void) 
    :now_frame_(0), vao_(0), tex_(0), action_id_(0), now_index_(0)
{
}

VDSObject::VDSObject(const char* action_file_name, UINT action_id)
    : action_id_(action_id)
{
    now_frame_ = 0;
    now_index_ = 0;
    vao_ = 0;
    tex_ = 0;
    action_id_ = action_id;
    UpDateBuffer(action_file_name);
}

VDSObject::~VDSObject(void)
{
    Free();
}

//�ͷ���Դ
void VDSObject::Free()
{
    glDeleteVertexArrays(1, &vao_);
    vao_ = 0;
    if (glIsTexture(tex_))
    {
        glDeleteTextures(1, &tex_);
        tex_ = 0;
    }
    glDeleteBuffers(1, &vbo_);
    vbo_ = 0;
}

// ��ȡ�����ļ������ԭ���������滻��
int VDSObject::ReadVDS(const char *action_file_name)
{
    //////////////////////////////////////////////////////////////////////////
    int i, j;
    vector<vec3> position, vn;
    vector<vec2> vt;
    std::vector <VERTEX> vertex_attribute;  //�������������
    vector <UINT> vector_index;
    vector <UINT> vertices_num;
    bool err = false;     
    const int MAXN_FSTR = 3000;
    char fstr[MAXN_FSTR];

    // ��ȡ�ļ�����
    FILE *action_file = fopen(action_file_name, "r");
    if (action_file == NULL) return 1;
    picture_name[256];
    //��ȡͼƬ����
    fgets(fstr, MAXN_FSTR, action_file);
    sscanf(fstr, "ImagesName %s", picture_name);
    // ��ȡ�����������Ŀ
    int vt_number;
    fgets(fstr, MAXN_FSTR, action_file);
    sscanf(fstr, "vtNumber %d", &vt_number);
    vt = vector<vec2>(vt_number);
    // ��ȡÿ����������
    for (i = 0; i < vt_number; i++)
    {
        vec2 temp_vt;
        fgets(fstr, MAXN_FSTR, action_file);
        sscanf(fstr, "%f %f", &temp_vt.x ,&temp_vt.y);
        vt[i] = temp_vt;
    }
    // ��ȡ������Ŀ
    int vn_number;
    fgets(fstr, MAXN_FSTR, action_file);
    sscanf(fstr, "vnNumber %d", &vn_number);
    vn = vector<vec3>(vn_number);
    // ��ȡÿһ������
    for (i = 0; i < vn_number; i++)
    {
        vec3 temp_vn;
        fgets(fstr, MAXN_FSTR, action_file);
        sscanf(fstr, "%f %f %f", &temp_vn.x ,&temp_vn.y, &temp_vn.z);
        vn[i] = temp_vn;
    }
    // ��ȡ�������Ŀ
    int vectex_number;
    fgets(fstr, MAXN_FSTR, action_file);
    sscanf(fstr, "VertexNumber %d", &vectex_number);
    vertex_attribute = vector <VERTEX>(vectex_number);
    // ��ȡÿһ�����������
    for (i = 0; i < vectex_number; i++)
    {
        VERTEX temp_vectex;
        int vt_id, vn_id;
        fgets(fstr, MAXN_FSTR, action_file);
        sscanf(fstr, "%f %f %f %d %d", 
            &temp_vectex.v.x, &temp_vectex.v.y, &temp_vectex.v.z,
            &vt_id, &vn_id);
        temp_vectex.vt = vt[vt_id];
        temp_vectex.vn = vn[vn_id];
        vertex_attribute[i] = temp_vectex;
    }
    // ��ȡ֡����Ŀ
    int frame_number; 
    fgets(fstr, MAXN_FSTR, action_file);
    sscanf(fstr, "FramesNumber %d", &frame_number);
    vertices_num = vector<UINT>(frame_number);
    // ��ȡÿһ֡
    for (i = 0;i < frame_number; i++)
    {
        // ��ȡ��ǰ֡������
        int face_number;
        fgets(fstr, MAXN_FSTR, action_file);
        sscanf(fstr, "FaceNumber %d", &face_number);
        vertices_num[i] = face_number * 3;
        vector <UINT> index(vertices_num[i]);
        //��ȡ���е���
        for (j = 0; j < index.size(); j += 3)
        {
            fgets(fstr, MAXN_FSTR, action_file);
            sscanf(fstr, "%d %d %d", &index[j], &index[j + 1], &index[j + 2]);
        }
        vector_index.insert(vector_index.end(), index.begin(), index.end());
    }

    // ���ݶ�ȡ����
    fclose(action_file);

    vertex_index_ = vector_index;
    vertices_num_ = vertices_num;
    vertex_attribute_ = vertex_attribute;
    return 0;
}

// ����Ϊ�µĶ���
int VDSObject::UpDateBuffer(const char* action_file_name)
{
    int err = ReadVDS(action_file_name);
    if(err) return err;

    GLuint vao, tex, vbo;
    // ���붥������
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);
    // ���붥�㻺����
    glGenBuffers(1, &vbo);
    // ����������
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER,
        vertex_attribute_.size() * sizeof(VERTEX),
        &vertex_attribute_[0],
        GL_STATIC_DRAW);

    // ��ȡͼƬ������
    glGenTextures(1, &tex);
    glBindTexture(GL_TEXTURE_2D, tex);
    LoadTexture(picture_name);
    glGenerateMipmap(GL_TEXTURE_2D);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
    Free();
 
    vbo_ = vbo;
    vao_ = vao;
    tex_ = tex;
    UpShader();
    return 0;
}

// ���µ���һ֡
void VDSObject::UpDate()
{
    now_frame_++;
    if (now_frame_ >= vertices_num_.size()) 
    {
        now_frame_ = 0;
        now_index_ = 0;
    }
    else
    {
        now_index_ += vertices_num_[now_frame_ - 1];
    }
}

// ����shader
void VDSObject::UpShader()
{
    ShaderClass *shader = ShaderClass::GetShader();

    glBindVertexArray(vao_);

    glEnableVertexAttribArray(shader->vTexCoord);
    glVertexAttribPointer(
        shader->vTexCoord,
        2,
        GL_FLOAT,
        GL_FALSE,
        sizeof(VERTEX),
        BUFFER_OFFSET(sizeof(vec3))
        );

    glEnableVertexAttribArray(shader->vPosition);
    glVertexAttribPointer(
        shader->vPosition,
        3,
        GL_FLOAT,
        GL_FALSE,
        sizeof(VERTEX),
        BUFFER_OFFSET(0)
        );
    shader->Release();
}

// ���ƶ���
void VDSObject::Draw()
{
    ShaderClass *shader = ShaderClass::GetShader();
    glUniformMatrix4fv(shader->ModelView, 1, GL_TRUE, model_view_);
    glBindVertexArray(this->vao_);
    glBindTexture(GL_TEXTURE_2D, this->tex_);
    glDrawElementsBaseVertex(
        GL_TRIANGLES,
        vertices_num_[now_frame_],
        GL_UNSIGNED_INT,
        &vertex_index_[now_index_],
        0);
    shader->Release();
}

void VDSObject::InitVertex()
{
    ShaderClass *shader = ShaderClass::GetShader();
    Free();
    VERTEX vertex[4];
    vertex[0].v = vec3(34.7056, -70.6660, 0.0000);
    vertex[1].v = vec3(80.6683, -32.0987, 0.0000);
    vertex[2].v = vec3(72.9548, -22.9062, 0.0000);
    vertex[3].v = vec3(26.9922, -61.4734, 0.0000);

    vertex[0].vt = vec2(0.f, 1.f);
    vertex[1].vt = vec2(1.f, 1.f);
    vertex[2].vt = vec2(1.f, 0.f);
    vertex[3].vt = vec2(0.f, 0.f);

    vertex_attribute_.insert(vertex_attribute_.end(), vertex, vertex + 4);
    UINT _index[6] = { 0, 1, 2, 0, 2, 3};
    vertex_index_.clear();
    vertex_index_.insert(vertex_index_.begin(), _index, _index + 6);
    vertices_num_ = vector<UINT>(1, 6);
    strcpy(picture_name, "NULL.png");

    // ���붥������
    glGenVertexArrays(1, &vao_);
    glBindVertexArray(vao_);
    // ���붥�㻺����
    glGenBuffers(1, &vbo_);
    // ����������
    glBindBuffer(GL_ARRAY_BUFFER, vbo_);
    glBufferData(GL_ARRAY_BUFFER,
        vertex_attribute_.size() * sizeof(VERTEX),
        &vertex_attribute_[0],
        GL_STATIC_DRAW);

    // ��ȡͼƬ������
    glGenTextures(1, &tex_);
    glBindTexture(GL_TEXTURE_2D, tex_);
    LoadTexture(picture_name);
    glGenerateMipmap(GL_TEXTURE_2D);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
    
    UpShader();
    shader->Release();
}

// ��ʾ��ǰ֡����Ϣ
void VDSObject::ShowFrameInfo()
{
    int i;
    printf("Frame ID: %d\n", now_frame_);
    printf("Index ID: %d\n", now_index_);
    printf("Vertex Number: %d\n", vertices_num_[now_frame_]);
    for (i = 0; i < vertices_num_[now_frame_]; i += 3)
    {
        VERTEX a, b, c;
        a = vertex_attribute_[vertex_index_[now_index_ + i + 0]];
        b = vertex_attribute_[vertex_index_[now_index_ + i + 1]];
        c = vertex_attribute_[vertex_index_[now_index_ + i + 2]];
        printf("index : %d (%.4f, %.4f, %.4f)\n", vertex_index_[now_index_ + i + 0],
            a.v.x, a.v.y, a.v.z);
        printf("index : %d (%.4f, %.4f, %.4f)\n", vertex_index_[now_index_ + i + 1],
            b.v.x, b.v.y, b.v.z);
        printf("index : %d (%.4f, %.4f, %.4f)\n", vertex_index_[now_index_ + i + 2],
            c.v.x, c.v.y, c.v.z);
        puts("");
    }
}
