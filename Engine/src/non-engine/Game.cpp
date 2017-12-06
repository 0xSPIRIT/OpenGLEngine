#include "Game.h"

Game::Game(const Window& window) : GameLoop(window) {
	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);
}

void Game::update() {

}

void Game::render() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(1, 0, 0, 1);
	glDrawArrays(GL_STATIC_DRAW, 0, 6);
}
