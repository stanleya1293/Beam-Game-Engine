#include "Game.h"

namespace Beam {

	Game::Game(const std::string& title) : _window(Window(title)) {
		
	}

	void Game::Run() const {
		while (_window.IsOpen()) {
			_window.Update();
		}
	}
}