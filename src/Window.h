#ifndef WINDOW_H
#define WINDOW_H

#include "Libraries.h"

#define DEFAULT_WIDTH 1000
#define DEFAULT_HEIGHT 1000

namespace Beam {
	class Window {
	public:
		Window(const std::string& title);

		void Update() const;

		inline void SetWidth(int width) { _width = width; }
		inline void SetHeight(int height) { _height = height; }

		inline int GetWidth() const { return _width; }
		inline int GetHeight() const { return _height; }
		
		inline bool IsOpen() const { return !glfwWindowShouldClose(_baseWindow); }
	private:
		int _width;
		int _height;
		std::string _title;
		GLFWwindow* _baseWindow;
	};
}

#endif
