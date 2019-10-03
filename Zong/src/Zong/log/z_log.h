#pragma once

#include <memory>

#include "z_core.h"

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Zong
{
	namespace Log
	{
		class ZONG_API Z_Log
		{
		private:
			Z_Log() { }

		public:
			void static init();
			void static write(const char* msg);
			inline static std::shared_ptr<spdlog::logger>& get_core_logger();
			inline static std::shared_ptr<spdlog::logger>& get_client_logger();

		private:
			static std::shared_ptr<spdlog::logger> s_Core_Logger;
			static std::shared_ptr<spdlog::logger> s_Client_Logger;
		};
	}
}

// Core log macros
#define ZONG_CORE_ERROR(...) ::Zong::Log::Z_Log::get_core_logger()->error(__VA_ARGS__)
#define ZONG_CORE_WARN(...)  ::Zong::Log::Z_Log::get_core_logger()->warn(__VA_ARGS__)
#define ZONG_CORE_INFO(...)  ::Zong::Log::Z_Log::get_core_logger()->info(__VA_ARGS__)
#define ZONG_CORE_TRACE(...) ::Zong::Log::Z_Log::get_core_logger()->trace(__VA_ARGS__)
#define ZONG_CORE_FATAL(...) ::Zong::Log::Z_Log::get_core_logger()->fatal(__VA_ARGS__)

// Client log macros
#define ZONG_ERROR(...) ::Zong::Log::Z_Log::get_client_logger()->error(__VA_ARGS__)
#define ZONG_WARN(...)  ::Zong::Log::Z_Log::get_client_logger()->warn(__VA_ARGS__)
#define ZONG_INFO(...)  ::Zong::Log::Z_Log::get_client_logger()->info(__VA_ARGS__)
#define ZONG_TRACE(...) ::Zong::Log::Z_Log::get_client_logger()->trace(__VA_ARGS__)
#define ZONG_FATAL(...) ::Zong::Log::Z_Log::get_client_logger()->fatal(__VA_ARGS__)
