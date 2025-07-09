#ifndef WINDOW_H
#define WINDOW_H

#include <string>
#include <GLFW/glfw3.h>

#define DEFAULT_WIDTH 1000
#define DEFAULT_HEIGHT 1000

namespace Beam {
	class Window {
	public:
		Window(const std::string& title);
		inline void setWidth(int width) { _width = width; }
		inline void setHeight(int height) { _height = height; }
	private:
		int _width;
		int _height;
		std::string _title;
		GLFWwindow* _baseWindow;
	};
}

#endif
