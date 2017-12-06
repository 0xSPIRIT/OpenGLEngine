#ifndef GAMELOOP_H
#define GAMELOOP_H

#include "../window/Window.h"

class GameLoop {
public:
	GameLoop(const Window& window);

	void run();

	virtual void update() = 0;
	virtual void render() = 0;

	Window getWindow() { return m_Window; }
private:
	Window m_Window;
	bool m_Running;
};

#endif