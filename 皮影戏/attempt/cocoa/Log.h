#ifndef LOG_H_HEADER_INCLUDED_AD19E151
#define LOG_H_HEADER_INCLUDED_AD19E151

// »’º«¿‡°£
enum LogLeve {
	LOG_OFF,
	LOG_ERROR,
	LOG_WARN,
	LOG_INFO,
	LOG_DEBUG,
	LOG_TRACE,

	LOG_MAX,
};

class Log
{
  public:
	void SetLeve(LogLeve leve);

	LogLeve GetLeve();

	void Error(const char * str_format, ...);

	void Error(const wchar_t * str_format, ...);

	void Warn(const char * str_format, ...);

	void Warn(const wchar_t * str_format, ...);

	void Info(const char * str_format, ...);

	void Info(const wchar_t * str_format, ...);

	void Debug(const char * str_format, ...);

	void Debug(const wchar_t * str_format, ...);

	void Trace(const char * str_format, ...);

	void Trace(const wchar_t * str_format, ...);

	static Log* GetInstance();

	bool Init();

	virtual ~Log();

  private:
	Log();
	LogLeve leve_;
};

// #define ATLog Log::GetInstance()		

#endif /* LOG_H_HEADER_INCLUDED_AD19E151 */
