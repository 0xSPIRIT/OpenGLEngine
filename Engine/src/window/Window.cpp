#include "Window.h"

Window::Window(const char* title, int width, int height) : m_Title(title), m_Width(width), m_Height(height) {
	m_Window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_OPENGL);

	if (!m_Window) {
		Errors::fatal("Could not create SDL Window!");
	}

	glcontext = SDL_GL_CreateContext(m_Window);

	if (glewInit() != GLEW_OK) {
		Errors::fatal("Could not initialize glew!");
	}
}