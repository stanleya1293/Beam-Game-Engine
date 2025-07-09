project(Beam)

add_subdirectory(libs/glfw-3.4)
add_subdirectory(libs/glad)

add_executable(beam src/Beam.cpp  "src/Window.h" "src/Game.h" "src/Game.cpp" "src/Window.cpp")

target_link_libraries(beam PUBLIC glfw)
target_link_libraries(beam PUBLIC glad)
