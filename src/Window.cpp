#include "Window.h"

namespace Beam {
	Window::Window(const std::string &title) : 
		_title(title), _width(DEFAULT_WIDTH), _height(DEFAULT_HEIGHT), _base_window(nullptr) {
		glfwInit();
		_base_window = glfwCreateWindow(_width, _height, title.c_str(), NULL, NULL);
		glfwMakeContextCurrent(_base_window);
		gladLoadGLLoader((GLADloadproc) glfwGetProcAddress);
	}

	void Window::update() const {
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(_base_window);
		glfwPollEvents();
	}

}
