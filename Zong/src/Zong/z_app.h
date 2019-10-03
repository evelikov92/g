#pragma once

#include "z_core.h"

namespace Zong
{
	class ZONG_API Z_App
	{
	public:
		Z_App();
		virtual ~Z_App();

	public:
		void run();

	private:
		void draw();
		void update();
	};

	// To be defined in client
	Z_App* create_app();
}
