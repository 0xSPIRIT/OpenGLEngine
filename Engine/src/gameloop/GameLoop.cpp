#include "GameLoop.h"

GameLoop::GameLoop(const Window& window) : m_Window(window), m_Running(true) {
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
