#include "pch.h"
#include "log.h"

namespace Zong
{
	namespace Log
	{
		std::shared_ptr<spdlog::logger> Log::s_Core_Logger;
		std::shared_ptr<spdlog::logger> Log::s_Client_Logger;

		void Log::init()
		{
			spdlog::set_pattern("%^[%T] %n: %v%$");

			s_Core_Logger = spdlog::stdout_color_mt("Zong");
			s_Core_Logger->set_level(spdlog::level::trace);

			s_Client_Logger = spdlog::stderr_color_mt("Game");
			s_Client_Logger->set_level(spdlog::level::trace);
		}

		void Log::write(const char* msg)
		{

		}

		inline std::shared_ptr<spdlog::logger>& Log::get_core_logger()
		{
			return Log::s_Core_Logger;
		}
		
		inline std::shared_ptr<spdlog::logger>& Log::get_client_logger()
		{
			return Log::s_Client_Logger;
		}
	}
}
