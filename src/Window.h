#ifndef WINDOW_H
#define WINDOW_H

#include "Libraries.h"

#define DEFAULT_WIDTH 1000
#define DEFAULT_HEIGHT 1000

namespace Beam {
	class Window {
	public:
		Window(const std::string& title);

		void update() const;

		inline void set_width(int width) { _width = width; }
		inline void set_height(int height) { _height = height; }

		inline int get_width() const { return _width; }
		inline int get_height() const { return _height; }
		
		inline bool is_open() const { return !glfwWindowShouldClose(_base_window); }
	private:
		int _width;
		int _height;
		std::string _title;
		GLFWwindow* _base_window;
	};
}

#endif
