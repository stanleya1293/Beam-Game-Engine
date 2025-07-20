#include "Game.h"

namespace Beam {

	Game::Game(const std::string& title) : _window(Window(title)) {
		
	}

	void Game::run() const {
		while (_window.is_open()) {
			_window.update();
		}
	}
}
