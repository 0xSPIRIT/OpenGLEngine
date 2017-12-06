#ifndef WINDOW_H
#define WINDOW_H

#include <SDL.h>
#include <iostream>
#include <glew.h>

#include "../utils/Errors.h"

class Window {
public:
	Window(const char* title, int width, int height);

	SDL_Window* getSDLWindow() { return m_Window; }
	SDL_GLContext getGLContext() { return glcontext; }

	const char* getTitle() { return m_Title; }
	int getWidth() const { return m_Width; }
	int getHeight() const { return m_Height; }
private:
	SDL_Window* m_Window;
	SDL_GLContext glcontext;

	const char* m_Title;
	int m_Width, m_Height;
};

#endif 