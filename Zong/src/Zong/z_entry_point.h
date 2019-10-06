#pragma once

#ifdef ZN_PLATFORM_WINDOWS

#include "z_app.h"
#include "log/z_log.h"

extern Zong::Z_App* Zong::create_app();

int main(int argc, char** argv)
{
	Zong::Log::Z_Log::init();
	ZONG_CORE_WARN("initialize logger");
	ZONG_INFO("initialize client logger");

	auto app = Zong::create_app();
	app->run();
	delete app;
	return 0;
}

#endif
