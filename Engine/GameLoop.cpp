#include "GameLoop.h"

GameLoop::GameLoop(const Window& window) : m_Window(window), m_Running(true) {

}

void GameLoop::update() {

}

void GameLoop::render() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_TRIANGLES);

	glColor3f	(1, 0, 0);
	glVertex2f	( 0.0f,  0.5f);
	
	glColor3f	(0, 1, 0);
	glVertex2f	(-0.5f, -0.5f);
	
	glColor3f	(0, 0, 1);
	glVertex2f	( 0.5f, -0.5f);

	glEnd();
}

void GameLoop::run() {
	while (m_Running) {
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
				case SDL_QUIT: m_Running = false;
			}
		}

		update();
		render();

		SDL_GL_SwapWindow(m_Window.getSDLWindow());
	}

	SDL_DestroyWindow(m_Window.getSDLWindow());
	SDL_GL_DeleteContext(m_Window.getGLContext());
	SDL_Quit();
}
