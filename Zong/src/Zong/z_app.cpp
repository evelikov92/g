#include "z_app.h"

namespace Zong
{
	Z_App::Z_App()
	{

	}

	Z_App::~Z_App()
	{

	}

	void Z_App::run()
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

	void Z_App::draw()
	{
	
	}
	
	void Z_App::update()
	{
	
	}
}
