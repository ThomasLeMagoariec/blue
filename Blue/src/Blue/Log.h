#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Blue {
	class BLUE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}


// Core log macros
#define BLUE_CORE_TRACE(...) ::Blue::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BLUE_CORE_INFO(...)  ::Blue::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BLUE_CORE_WARN(...)  ::Blue::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BLUE_CORE_ERROR(...) ::Blue::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BLUE_CORE_FATAL(...) ::Blue::Log::GetCoreLogger()->fatal(__VA_ARGS__)
// ^^^Should be critical, but he hasn't realised yet!

// Client log macros
#define BLUE_TRACE(...)      ::Blue::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BLUE_INFO(...)       ::Blue::Log::GetClientLogger()->info(__VA_ARGS__)
#define BLUE_WARN(...)       ::Blue::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BLUE_ERROR(...)      ::Blue::Log::GetClientLogger()->error(__VA_ARGS__)
#define BLUE_FATAL(...)      ::Blue::Log::GetClientLogger()->fatal(__VA_ARGS__)
// ^^^Should be critical, but he hasn't realised yet!