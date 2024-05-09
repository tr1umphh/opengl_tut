project(${PROJECT_NAME}_Tests LANGUAGES CXX)

find_package(GTest REQUIRED)

file(GLOB TEST_SOURCES *.cc)

enable_testing()

add_executable(${PROJECT_NAME} ${TEST_SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE gtest::gtest)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)
