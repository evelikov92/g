#pragma once

#include "core.h"
#include "graphic/window.h"

namespace Zong
{
	class ZONG_API App
	{
	public:
		App();
		virtual ~App();

	public:
		void run();
		void close();

	private:
		void draw();
		void update();
	};

	// To be defined in client
	App* create_app();
}
