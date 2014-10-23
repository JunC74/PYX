#ifndef __ACTION_SPRITE_H__
#define __ACTION_SPRITE_H__
#include "Sprite.h"

namespace AttemptSpace{
	class ActionSprite : public Sprite
	{
	public:
		static ActionSprite* Create(const char* file_name);

		bool IsPause();
		void Pause();

		void Draw();

		~ActionSprite();

	private:

	private:
		

	};
}
#endif // __ACTION_SPRITE_H__