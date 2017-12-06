#ifndef GAMELOOP_H
#define GAMELOOP_H

#include "Window.h"

class GameLoop {
public:
	GameLoop(const Window& window);

	void run();

	void update();
	void render();

	Window getWindow() { return m_Window; }
private:
	Window m_Window;
	bool m_Running;
};

#endif