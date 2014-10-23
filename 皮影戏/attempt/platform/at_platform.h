#ifndef __at_platform_h__
#define __at_platform_h__

#include "at_prefix.h"

//////////////////////////////////////////////////////////////////////////
// pre configure
//////////////////////////////////////////////////////////////////////////

// define supported target platform macro which CC uses.
#define AT_PLATFORM_UNKNOWN            0
#define AT_PLATFORM_WIN32              1
#define AT_PLATFORM_LINUX              2
#define AT_PLATFORM_MAC                3

// win32
#if defined(WIN32) && defined(_WINDOWS)
#undef  CC_TARGET_PLATFORM
#define CC_TARGET_PLATFORM         CC_PLATFORM_WIN32
#include "win32/win32_prefix.h"
#endif

// linux
#if defined(LINUX)
#undef  CC_TARGET_PLATFORM
#define CC_TARGET_PLATFORM         CC_PLATFORM_LINUX
#endif

// mac
#if defined(CC_TARGET_OS_MAC)
#undef  CC_TARGET_PLATFORM
#define CC_TARGET_PLATFORM         CC_PLATFORM_MAC
#endif



namespace AttemptSpace
{

	void PrintInfo(const char *str_form, ...);
	void PrintInfo(const char *str_form, va_list argp);

	void PrintInfoW(const wchar_t *str_form, ...);
	void PrintInfoW(const wchar_t *str_form, va_list argp);

}	// end AttemptSpace

#endif