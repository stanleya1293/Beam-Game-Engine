#ifndef GAME_H
#define GAME_H

#include <string>

#include "Window.h"

namespace Beam {
	class Game {
	public:
		Game(const std::string &title);
		void run();
	private:
		Window _window; 
	};
}

#endif
