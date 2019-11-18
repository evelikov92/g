#pragma once

#ifdef ZN_PLATFORM_WINDOWS

#include "log/log.h"
#include "app.h"

extern Zong::App* Zong::create_app();

int main(int argc, char** argv)
{
	Zong::Log::Log::init();
	ZONG_CORE_WARN("initialize logger");
	ZONG_INFO("initialize client logger");

	auto app = Zong::create_app();
	app->run();
	delete app;
	return 0;
}

#endif
