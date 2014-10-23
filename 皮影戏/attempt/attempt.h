#ifndef __ATTEMPT_H__
#define __ATTEMPT_H__

#include "at_config.h"
#include "at_prefix.h"
#include "cocoa/Object.h"
#include "cocoa/GLState.h"
#include "cocoa/Log.h"
#include "cocoa/FileTool.h"
#include "cocoa/AutoReleasePool.h"
#include "cocoa/ResourceManager.h"
#include "message_system/MessagePump.h"
#include "cocoa//Root.h"
#include "at_type/AABB.h"

// render
#include "render/camera_class.h"
#include "Node/Node.h"
#include "Node/Sprite.h"
// texture
#include "Texture/TextureLoader.h"

//input
#include "input/input.h"

// lua
#include "lua/luaManager.h"

// schedule
#include "schedule/schedule.h"

#include "model/model.h"
#include "model/geometry_model.h"
#include "model/obj_model.h"
#include "model/vds_model.h"

#endif