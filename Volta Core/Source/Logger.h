#pragma once

#include "Application.h"
#include "vlpch.h"
#include "spdlog/spdlog.h"

namespace Volta {
	class VOLTA_API Logger
	{
	public:
		inline static std::shared_ptr<spdlog::logger> GetCoreLog() { return s_CoreLog; }
		inline static std::shared_ptr<spdlog::logger> GetClientLog() { return s_ClientLog; }

		friend class Application;
	private:
		Logger();
		~Logger();
		static std::shared_ptr<spdlog::logger> s_CoreLog;
		static std::shared_ptr<spdlog::logger> s_ClientLog;
	};
}


#define CORE_TRACE(...)				::Volta::Logger::GetCoreLog()->trace(__VA_ARGS__)
#define CORE_DEBUG(...)				::Volta::Logger::GetCoreLog()->debug(__VA_ARGS__)
#define CORE_INFO(...)				::Volta::Logger::GetCoreLog()->info(__VA_ARGS__)
#define CORE_WARN(...)				::Volta::Logger::GetCoreLog()->warn(__VA_ARGS__)
#define CORE_ERROR(...)				::Volta::Logger::GetCoreLog()->error(__VA_ARGS__)
#define CORE_CRITICAL(...)			::Volta::Logger::GetCoreLog()->critical(__VA_ARGS__)
								  			
#define CLIENT_TRACE(...)			::Volta::Logger::GetClientLog()->trace(__VA_ARGS__)
#define CLIENT_DEBUG(...)			::Volta::Logger::GetClientLog()->debug(__VA_ARGS__)
#define CLIENT_INFO(...)			::Volta::Logger::GetClientLog()->info(__VA_ARGS__)
#define CLIENT_WARN(...)			::Volta::Logger::GetClientLog()->warn(__VA_ARGS__)
#define CLIENT_ERROR(...)			::Volta::Logger::GetClientLog()->error(__VA_ARGS__)
#define CLIENT_CRITICAL(...)		::Volta::Logger::GetClientLog()->critical(__VA_ARGS__) 