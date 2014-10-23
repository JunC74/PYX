#ifndef __SIZE2D_H__
#define __SIZE2D_H__

struct Size2D
{
	float width, height;
	Size2D()
	{
		width = 0.0f;
		height = 0.0f;
	}
	Size2D(float w, float h)
	{
		width = w;
		height = h;
	}
	bool operator == (const Size2D &b)
	{
		if(this->width == b.width && this->height == b.width)
		{
			return true;
		}
		return false;
	}

	bool operator != (const Size2D &b)
	{
		return !(this->operator==(b));
	}
};

#endif // !__SIZE2D_H__
