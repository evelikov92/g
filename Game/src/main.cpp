#include <Zong.h>

class Game : public Zong::Z_App
{
public:
	Game() { }
	~Game() { }
};

Zong::Z_App* Zong::create_app()
{
	return new Game();
}
