#ifndef __ATTEMPT_TOOL_H__
#define __ATTEMPT_TOOL_H__

#include "attempt/promise.h"
#include "attempt/Render/lighting.h"
#include "attempt/Render/camera_class.h"
#include "attempt/render/material.h"
#include "attempt/Render/render_group.h"
#include "attempt/Render/render_object.h"

namespace AttemptSpace
{
	// 创建一个正三棱锥（四面体）
	shared_ptr<RenderObject> CreateTriangularPyramid(float length);

} // end namespace AttemptSpace

#endif // end __ATTEMPT_TOLL_H__