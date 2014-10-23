#include <stdarg.h> 
#include "Log.h"
#include "at_prefix.h"

void Log::SetLeve(LogLeve leve)
{
	if (leve >= 0 && leve <= LOG_MAX)
	{
		leve_ = leve;
	}
}

LogLeve Log::GetLeve()
{
	return leve_;
}

void Log::Debug(const char * str_format, ...)
{
	if (leve_ < LogLeve::LOG_DEBUG)
	{
		return;
	}
	PrintInfo("AT: [Debug] ");
	va_list ap;
	va_start(ap, str_format);
	PrintInfo(str_format, ap);
	va_end(ap);
	PrintInfo("\n");

}

void Log::Info(const char * str_format, ...)
{
	if (leve_ < LOG_INFO)
	{
		return ;
	}
	PrintInfo("[Info] ");
	va_list ap;
	va_start(ap, str_format);
	PrintInfo(str_format, ap);
	va_end(ap);
	PrintInfo("\n");
}


void Log::Warn(const char * str_format, ...)
{
	if (leve_ < LOG_WARN)
	{
		return ;
	}
	PrintInfo("[Warn] ");
	va_list ap;
	va_start(ap, str_format);
	PrintInfo(str_format, ap);
	va_end(ap);
	PrintInfo("\n");
}

void Log::Error(const char * str_format, ...)
{
	if (leve_ < LOG_ERROR)
	{
		return ;
	}
	PrintInfo("[Error] ");
	va_list ap;
	va_start(ap, str_format);
	PrintInfo(str_format, ap);
	va_end(ap);
	PrintInfo("\n");
}
void Log::Trace(const char * str_format, ...)
{
	if (leve_ < LOG_TRACE)
	{
		return ;
	}
	PrintInfo("[Tarce] ");
	va_list ap;
	va_start(ap, str_format);
	PrintInfo(str_format, ap);
	va_end(ap);
	PrintInfo("\n");
}

Log::Log()
{
	leve_ = LOG_TRACE;
}


Log::~Log()
{
}

Log* Log::GetInstance()
{
	static Log log;
	return &log;
}

bool Log::Init()
{
	leve_ = LOG_ERROR;
	return true;
}


void Log::Debug(const wchar_t * str_format, ...)
{
	if (leve_ < LogLeve::LOG_DEBUG)
	{
		return;
	}
	PrintInfoW(L"[Debug] ");
	va_list ap;
	va_start(ap, str_format);
	PrintInfoW(str_format, ap);
	va_end(ap);
	PrintInfoW(L"\n");

}

void Log::Info(const wchar_t * str_format, ...)
{
	if (leve_ < LOG_INFO)
	{
		return ;
	}
	PrintInfoW(L"[Info] ");
	va_list ap;
	va_start(ap, str_format);
	PrintInfoW(str_format, ap);
	va_end(ap);
	PrintInfoW(L"\n");
}


void Log::Warn(const wchar_t * str_format, ...)
{
	if (leve_ < LOG_WARN)
	{
		return ;
	}
	PrintInfoW(L"[Warn] ");
	va_list ap;
	va_start(ap, str_format);
	PrintInfoW(str_format, ap);
	va_end(ap);
	PrintInfoW(L"\n");
}

void Log::Error(const wchar_t * str_format, ...)
{
	if (leve_ < LOG_ERROR)
	{
		return ;
	}
	PrintInfoW(L"[Error] ");
	va_list ap;
	va_start(ap, str_format);
	PrintInfoW(str_format, ap);
	va_end(ap);
	PrintInfoW(L"\n");
}

void Log::Trace(const wchar_t * str_format, ...)
{
	if (leve_ < LOG_TRACE)
	{
		return ;
	}
	PrintInfoW(L"[Tarce] ");
	va_list ap;
	va_start(ap, str_format);
	PrintInfoW(str_format, ap);
	va_end(ap);
	PrintInfoW(L"\n");
}