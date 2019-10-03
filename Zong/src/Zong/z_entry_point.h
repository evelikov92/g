#pragma once

#ifdef ZN_PLATFORM_WINDOWS

#include "z_app.h"

extern Zong::Z_App* Zong::create_app();

int main(int argc, char** argv)
{
	auto app = Zong::create_app();
	app->run();
	delete app;
	return 0;
}

#endif