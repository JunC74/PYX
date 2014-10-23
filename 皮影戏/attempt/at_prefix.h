//
//  at_prefix.h
//  piyingxi
//
//  Created by Chen Jun on 13-12-26.
//  Copyright (c) 2013年 Chen Jun. All rights reserved.
//

#ifndef __piyingxi__at_prefix__
#define __piyingxi__at_prefix__


#include <iostream>
#include <cmath>
#include <algorithm>


using namespace std;


#include "at_config.h"
#include "at_type/at_type.h"
#include "platform/at_platform.h"
#include "cocoa/Log.h"

namespace AttemptSpace
{

	template <typename Type>
	inline void SAFRelease(Type &p) {
		if(p)
		{
			p->Release();
			p = NULL;
		}
	}


	template <typename Type>
	inline void SAFRetain(Type &p)
	{
		if (p)
		{
			p->Retain();
		}
	}

	template <typename Type>
	inline void SAFDelete(Type &p)
	{
		if (p)
		{
			delete p;
			p = NULL;
		}
	}

	template <typename Type>
	inline void SAFDeleteArray(Type &p)
	{
		if (p)
		{
			delete [] p;
			p = NULL;
		}
	}

	inline
	wchar_t* ATC2W(const char *str)
	{
		int length = strlen(str)+1;
		wchar_t *t = new wchar_t[length];
		memset(t,0,length*sizeof(wchar_t));
		MultiByteToWideChar(CP_ACP,0,str,strlen(str),t,length);
		return t;
	}

	//将char* 转成char*的实现函数如下：
	inline
	char* ATW2C(const wchar_t *pwstr)
	{
		int nlength = wcslen(pwstr);
		char *pcstr = new char[nlength];
		
		//获取转换后的长度
		int nbytes = WideCharToMultiByte( 0, // specify the code page used to perform the conversion
			0,         // no special flags to handle unmapped characters
			pwstr,     // wide character string to convert
			nlength,   // the number of wide characters in that string
			NULL,      // no output buffer given, we just want to know how long it needs to be
			0,
			NULL,      // no replacement character given
			NULL );    // we don't want to know if a character didn't make it through the translation
		// make sure the buffer is big enough for this, making it larger if necessary
		// 通过以上得到的结果，转换unicode 字符为ascii 字符
		WideCharToMultiByte( 0, // specify the code page used to perform the conversion
			0,         // no special flags to handle unmapped characters
			pwstr,     // wide character string to convert
			nlength,   // the number of wide characters in that string
			pcstr, 	   // put the output ascii characters at the end of the buffer
			nbytes,    // there is at least this much space there
			NULL,      // no replacement character given
			NULL );
		return pcstr;
	}

} // namespace AttemptSpace

using namespace  AttemptSpace;

#endif /* defined(__piyingxi__at_prefix__) */
