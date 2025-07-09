#include "Window.h"

namespace Beam {
	
	Window::Window(const std::string &title) 
	: _title(title), _width(DEFAULT_WIDTH), _height(DEFAULT_HEIGHT), _baseWindow(nullptr) {
		_baseWindow = glfwCreateWindow(_width, _height, title.c_str(), NULL, NULL);
		
	}

}