#include "pch.h"
#include <Zong.h>

#include "Zong/app.h"
#include "game/game.h"

Zong::App* Zong::create_app()
{
	return new Game::Game;
}
