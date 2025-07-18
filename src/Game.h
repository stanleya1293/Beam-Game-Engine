#ifndef GAME_H
#define GAME_H

#include "Libraries.h"
#include "Window.h"

namespace Beam {
	class Game {
	public:
		Game(const std::string &title);
		void Run() const;
	private:
		Window _window;
	};
}

#endif
