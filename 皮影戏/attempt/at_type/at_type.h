#ifndef __at_type_h__
#define __at_type_h__

#include <vector>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <utility>

#include <at_config.h>
#include "attempt_err_msg.h"
#include "vec.h"
#include "mat.h"
#include "Size2d.h"
#include "Color.h"
#include "AABB.h"

namespace AttemptSpace
{
	typedef unsigned long size_type;

	typedef std::pair<int, std::string> PairIntString;

	typedef std::pair<int, int> PairInt;

	inline
		bool PairIntStringCompare(const PairIntString &a, const PairIntString &b)
	{
		return a.first < b.first;
	}

	class StringCompareClass
	{
	public:
		bool operator() (const string& lhs, const string& rhs) const
		{
			return lhs.compare(rhs) <= 0? false : true;
		}
	};

	// 因为shaderprogram里面有用到
	// 光源的类型
	enum LightType
	{
		LIGHT_Point,		// 点光源
		LIGHT_Spot,			// 聚光灯
		LIGHT_Directional,	// 方向光
		LIGHT_TYPE_NUM,		// 光源的数量
	};

}	// end namespace AttemptSpace

#endif	// end __at_type_h__