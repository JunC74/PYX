#include <windows.h> 
#include <stdarg.h> 
#include <stdio.h>
#include "platform/at_platform.h"

namespace AttemptSpace
{

	void PrintInfo(const char *str_form, ...)
	{
		char szBuf[MaxLogLen];

		va_list argp;
		va_start(argp, str_form);
		vsnprintf_s(szBuf, MaxLogLen, MaxLogLen, str_form, argp);
		va_end(argp);
		WCHAR wszBuf[MaxLogLen] = {0};
		MultiByteToWideChar(CP_UTF8, 0, szBuf, -1, wszBuf, sizeof(wszBuf));
		OutputDebugString(wszBuf);
		
		WideCharToMultiByte(CP_ACP, 0, wszBuf, sizeof(wszBuf), szBuf, sizeof(szBuf), NULL, FALSE);
		printf("%s", szBuf);
	}

	void PrintInfo(const char *str_form, va_list argp)
	{
		char szBuf[MaxLogLen];
		vsnprintf_s(szBuf, MaxLogLen, MaxLogLen, str_form, argp);
		WCHAR wszBuf[MaxLogLen] = {0};
		MultiByteToWideChar(CP_UTF8, 0, szBuf, -1, wszBuf, sizeof(wszBuf));
		OutputDebugString(wszBuf);

		WideCharToMultiByte(CP_ACP, 0, wszBuf, sizeof(wszBuf), szBuf, sizeof(szBuf), NULL, FALSE);
		printf("%s", szBuf);
	}

	void PrintInfoW(const wchar_t *str_form, ...)
	{
		wchar_t wszBuf[MaxLogLen];

		va_list argp;
		va_start(argp, str_form);
		vswprintf_s(wszBuf, MaxLogLen, str_form, argp);
		va_end(argp);
		OutputDebugString(wszBuf);

		char szBuf[MaxLogLen];
		WideCharToMultiByte(CP_ACP, 0, wszBuf, sizeof(wszBuf), szBuf, sizeof(szBuf), NULL, FALSE);
		printf("%s", szBuf);
	}

	void PrintInfoW(const wchar_t *str_form, va_list argp)
	{
		wchar_t wszBuf[MaxLogLen];
		vswprintf_s(wszBuf, MaxLogLen, str_form, argp);
		OutputDebugString(wszBuf);

		char szBuf[MaxLogLen];
		WideCharToMultiByte(CP_ACP, 0, wszBuf, sizeof(wszBuf), szBuf, sizeof(szBuf), NULL, FALSE);
		printf("%s", szBuf);
	}
}	// end namespace AttemptSpace 