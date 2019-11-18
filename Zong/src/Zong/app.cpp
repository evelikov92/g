#include "pch.h"
#include "app.h"

namespace Zong
{
	App::App()
	{

	}

	App::~App()
	{

	}

	void App::run()
	{
		while (true)
		{
			// Run every frame

			// Update the state of everything
			this->update();

			// Draw everything in the screen
			this->draw();
		}
	}

	void App::close()
	{

	}

	void App::draw()
	{
	
	}
	
	void App::update()
	{

	}
}
