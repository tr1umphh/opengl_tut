cmake_minimum_required(VERSION 3.27)
project(
  opengl
  VERSION 0.1.0
  DESCRIPTION "Learning OpenGL"
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

find_package(fmt REQUIRED)
find_package(glfw3 REQUIRED)
find_package(opengl_system)

file(GLOB SOURCES app/*.cpp)
add_subdirectory(tests)

# ---- Declare executable ----

include_directories(libs)
add_executable(${PROJECT_NAME} ${SOURCES})

set_property(TARGET ${PROJECT_NAME} PROPERTY OUTPUT_NAME run)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)

target_link_libraries(${PROJECT_NAME} PUBLIC fmt::fmt glfw opengl::opengl)
