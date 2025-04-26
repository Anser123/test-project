cmake_minimum_required(VERSION 3.15)
project(TestBox2D)

set(CMAKE_CXX_STANDARD 17)

# Box2D include and lib
include_directories(thirdparty/box2d/include)
link_directories(thirdparty/box2d/lib)

add_executable(TestBox2DApp src/main.cpp)

target_link_libraries(TestBox2DApp box2d)
