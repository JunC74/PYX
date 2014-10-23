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

	// ��Ϊshaderprogram�������õ�
	// ��Դ������
	enum LightType
	{
		LIGHT_Point,		// ���Դ
		LIGHT_Spot,			// �۹��
		LIGHT_Directional,	// �����
		LIGHT_TYPE_NUM,		// ��Դ������
	};

}	// end namespace AttemptSpace

#endif	// end __at_type_h__