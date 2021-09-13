/*log system core file*/

#pragma once

#include "spdlog/spdlog.h"
#include <spdlog/fmt/ostr.h>

namespace Aurora
{

	class Log
	{
	public:
		static void init();

		static std::shared_ptr<spdlog::logger> GetAuroraLogger() { return auroraLogger; }
		static std::shared_ptr<spdlog::logger> GetDebugLogger() { return debugLogger; }
	private:
		static std::shared_ptr<spdlog::logger> auroraLogger;
		static std::shared_ptr<spdlog::logger> debugLogger;
	};

}

#define AURORA_LOG_TRACE(...) Aurora::Log::GetAuroraLogger()->trace(__VA_ARGS__)
#define AURORA_LOG_DEBUG(...) Aurora::Log::GetAuroraLogger()->debug(__VA_ARGS__)
#define AURORA_LOG_INFO(...) Aurora::Log::GetAuroraLogger()->info(__VA_ARGS__)
#define AURORA_LOG_WARN(...) Aurora::Log::GetAuroraLogger()->warn(__VA_ARGS__)
#define AURORA_LOG_ERROR(...) Aurora::Log::GetAuroraLogger()->error(__VA_ARGS__)
#define AURORA_LOG_FATAL(...) Aurora::Log::GetAuroraLogger()->critical(__VA_ARGS__)

#define DEBUG_LOG_TRACE(...) Aurora::Log::GetDebugLogger()->trace(__VA_ARGS__)
#define DEBUG_LOG_DEBUG(...) Aurora::Log::GetDebugLogger()->debug(__VA_ARGS__)
#define DEBUG_LOG_INFO(...) Aurora::Log::GetDebugLogger()->info(__VA_ARGS__)
#define DEBUG_LOG_WARN(...) Aurora::Log::GetDebugLogger()->warn(__VA_ARGS__)
#define DEBUG_LOG_ERROR(...) Aurora::Log::GetDebugLogger()->error(__VA_ARGS__)
#define DEBUG_LOG_FATAL(...) Aurora::Log::GetDebugLogger()->critical(__VA_ARGS__)