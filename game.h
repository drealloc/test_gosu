#ifndef _GAME_H
#define	_GAME_H

#include <Gosu/Gosu.hpp>

class Game : public Gosu::Window
{
public:
	Game();
	void buttonDown(Gosu::Button);
	void draw();
	void update();

private:
	Gosu::Image img;
};

#endif	/* _GAME_H */

