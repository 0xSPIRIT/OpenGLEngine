#ifndef GAME_H
#define GAME_H

#include "../gameloop/GameLoop.h"

class Game : public GameLoop {
public:
	Game(const Window& window);

	virtual void update();
	virtual void render();
};

#endif