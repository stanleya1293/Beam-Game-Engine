cmake_minimum_required(VERSION 4.0)

project(Beam)

add_subdirectory(libs/glfw-3.4)
add_subdirectory(libs/glad)

add_executable(beam src/Beam.cpp src/Game.cpp src/Window.cpp src/Shader.cpp)

target_link_libraries(beam PUBLIC glfw)
target_link_libraries(beam PUBLIC glad)
