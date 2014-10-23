#ifndef __MATRIXSTACK_h__
#define __MATRIXSTACK_h__

#include "Object.h"

namespace AttemptSpace
{
	class MatrixStack : public Object
	{
		int    _index;
		int    _size;
		mat4*  _matrices;

	public:


		MatrixStack( int numMatrices = 32 ): Object(),_index(0), _size(numMatrices)
		{ 
			_matrices = new mat4[numMatrices];
		}

		~MatrixStack()
		{ delete[]_matrices; }

		int GetSize()
		{
			return _size;
		}

		void Push( const mat4& m ) {
			if (_index + 1 >= _size)
			{
				mat4 *mat4_stack = new mat4[_size << 1];
				memset(mat4_stack, 0, sizeof(mat4) * _size * 2);
				memcpy(mat4_stack, _matrices, sizeof(mat4) * _size);
				delete [] _matrices;
				_matrices = mat4_stack;
				_size *= 2;
			}
			_matrices[_index++] = m;
		}

		mat4& GetTop()
		{
			return _matrices[_index - 1];
		}

		mat4 Pop( void ) {
			assert( _index - 1 >= 0 );
			_index--;
			return _matrices[_index];
		}
	};
} // end namespace AttemptSpace
#endif