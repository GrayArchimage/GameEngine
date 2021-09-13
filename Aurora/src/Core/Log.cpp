#include "aurora_pch.h"
#include "log.h"

#include <spdlog/sinks/stdout_color_sinks.h>

namespace Aurora
{
	std::shared_ptr<spdlog::logger> Log::auroraLogger;
	std::shared_ptr<spdlog::logger> Log::debugLogger;

	void Log::init()
	{
		spdlog::sink_ptr logSink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();

		logSink->set_pattern("%^[%n] [%l]: %v%$");
		auroraLogger = std::make_shared<spdlog::logger>("Aurora", logSink);
		spdlog::register_logger(auroraLogger);

		auroraLogger->set_level(spdlog::level::info);
		auroraLogger->flush_on(spdlog::level::info);

		logSink->set_pattern("%^[%n] [%l]: %v%$");
		debugLogger = std::make_shared<spdlog::logger>("Debug", logSink);
		spdlog::register_logger(debugLogger);

		debugLogger->set_level(spdlog::level::debug);
		debugLogger->flush_on(spdlog::level::debug);
	}

}