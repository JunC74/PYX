#ifndef __COLOR_H__
#define __COLOR_H__



#include <algorithm>

namespace AttemptSpace
{

	///////////////////////////////////////////////////////////////////////////
	// Colcor3b
	///////////////////////////////////////////////////////////////////////////c

	struct Color3b 
	{
		char r, g, b;
		Color3b() : r(0), g(0), b(0)
		{}
		operator const char* () const
		{ return static_cast<const char*>( &r ); }
		operator char* ()
		{ return static_cast<char*>( &r ); }
	};

	inline
	Color3b C3b(int _r, int _g, int _b) 
	{
		Color3b c;
		c.r = _r > 256? 256 : _r;
		c.g = _g > 256? 256 : _g;
		c.b = _b > 256? 256 : _b;
		return c;
	}

	inline
	bool operator == (const Color3b &a, const Color3b &b)
	{
		return a.r == b.r && a.g == b.g && a.b == b.b;
	}

	inline
	bool operator != (const Color3b &a, const Color3b &b)
	{
		return a.r != b.r || b.g != a.g || a.b != b.b;
	}

	inline
	Color3b operator + (const Color3b &a, const Color3b &b)
	{
		return C3b(a.r + b.r, a.g + b.g, a.b + b.b);
	}

	inline
	Color3b operator * (const Color3b &a, const Color3b &b)
	{
		return C3b(a.r * b.r, a.g * b.g, a.b * b.b);
	}


	///////////////////////////////////////////////////////////////////////////
	// Colcor3f
	///////////////////////////////////////////////////////////////////////////

	struct Color3f
	{
		float r, g, b;

		Color3f() : r(0.0), g(0.0), b(0.0)
		{}

		operator const float* () const
		{ return static_cast<const float*>( &r ); }
		operator float* ()
		{ return static_cast<float*>( &r ); }
	};

	inline
	Color3f C3f(float _r, float _g, float _b)
	{
		Color3f c;
		c.r = max(0.0f, min(1.0f, _r));
		c.g = max(0.0f, min(1.0f, _g));
		c.b = max(0.0f, min(1.0f, _b));
		return c;
	}

	inline
	bool operator == (const Color3f &a, const Color3f &b)
	{
		return a.r == b.r && a.g == b.g && a.b == b.b;
	}

	inline
	bool operator != (const Color3f &a, const Color3f &b)
	{
		return a.r != b.r || b.g != a.g || a.b != b.b;
	}

	inline
	Color3f operator + (const Color3f &a, const Color3f &b)
	{
		return C3f(a.r + b.r, a.g + b.g, a.b + b.b);
	}

	inline
	Color3f operator * (const Color3f &a, const Color3f &b)
	{
		return C3f(a.r * b.r, a.g * b.g, a.b * b.b);
	}


	///////////////////////////////////////////////////////////////////////////
	// Colcor4b
	///////////////////////////////////////////////////////////////////////////

	struct Color4b 
	{
		char r, g, b, a;
		Color4b() : r(0), g(0), b(0), a(0)
		{}
		operator const char* () const
		{ return static_cast<const char*>( &r ); }
		operator char* ()
		{ return static_cast<char*>( &r ); }
	};

	inline
	Color4b C4b(int _r, int _g, int _b, int _a) 
	{
		Color4b c;
		c.r = _r > 256? 256 : _r;
		c.g = _g > 256? 256 : _g;
		c.b = _b > 256? 256 : _b;
		c.a = _a > 256? 256 : _a;
		return c;
	}

	inline
	bool operator == (const Color4b &a, const Color4b &b)
	{
		return a.r == b.r && a.g == b.g && a.b == b.b && a.a == b.a;
	}

	inline
	bool operator != (const Color4b &a, const Color4b &b)
	{
		return a.r != b.r || b.g != a.g || a.b != b.b || a.a != b.a;
	}

	inline
	Color4b operator + (const Color4b &a, const Color4b &b)
	{
		return C4b(a.r + b.r, a.g + b.g, a.b + b.b, a.a + b.a);
	}

	inline
	Color4b operator * (const Color4b &a, const Color4b &b)
	{
		return C4b(a.r * b.r, a.g * b.g, a.b * b.b, a.a * b.a);
	}

	///////////////////////////////////////////////////////////////////////////
	// Colcor4f
	///////////////////////////////////////////////////////////////////////////

	struct Color4f
	{
		float r, g, b, a;

		Color4f() : r(0.0), g(0.0), b(0.0), a(0.0)
		{}

		operator const float* () const
		{ return static_cast<const float*>( &r ); }
		operator float* ()
		{ return static_cast<float*>( &r ); }
	};

	inline
	Color4f C4f(float _r, float _g, float _b, float _a)
	{
		Color4f c;
		c.r = max(0.0f, min(1.0f, _r));
		c.g = max(0.0f, min(1.0f, _g));
		c.b = max(0.0f, min(1.0f, _b));
		c.a = max(0.0f, min(1.0f, _a));
		return c;
	}

	inline
	bool operator == (const Color4f &a, const Color4f &b)
	{
		return a.r == b.r && a.g == b.g && a.b == b.b && a.a == b.a;
	}

	inline
	bool operator != (const Color4f &a, const Color4f &b)
	{
		return a.r != b.r || b.g != a.g || a.b != b.b || a.a != b.a;
	}

	inline
	Color4f operator + (const Color4f &a, const Color4f &b)
	{
		return C4f(a.r + b.r, a.g + b.g, a.b + b.b, a.a + b.a);
	}

	inline
	Color4f operator * (const Color4f &a, const Color4f &b)
	{
		return C4f(a.r * b.r, a.g * b.g, a.b * b.b, a.a * b.a);
	}


	inline
	Color3f Color3bTo3f(const Color3b &color)
	{
		return C3f(color.r / 256.0, color.g / 256.0, color.b / 256.0);
	}

	inline
	Color3b Color3fTo3b(const Color3f &color)
	{
		return C3b(color.r * 256, color.g * 256, color.b * 256);
	}

	inline
	Color4f Color4bTo4f(const Color4b &color)
	{
		return C4f(color.r / 256.0, color.g / 256.0, color.b / 256.0, color.a / 256.0);
	}

	inline
	Color4b Color4fTo4b(const Color4f &color)
	{
		return C4b(color.r * 256, color.g * 256, color.b * 256, color.a * 256);
	}
}	// end AttemptSpace
#endif // end define __COLOR_H__