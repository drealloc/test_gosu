#include "game.h"

Game::Game () :
	Window (640, 480, false),
	img (graphics(), L"data/img.png")
{
}

void
Game::buttonDown (Gosu::Button btn)
{
	if (btn == Gosu::kbEscape)
		close();
}

void
Game::draw ()
{
	img.draw (graphics().width()/2, graphics().height()/2, 1, 1, 1);
}

void
Game::update ()
{
}

