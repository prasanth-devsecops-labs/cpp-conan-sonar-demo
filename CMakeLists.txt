cmake_minimum_required(VERSION 3.15)

project(CppConanSonarDemo)

set(CMAKE_CXX_STANDARD 17)

find_package(fmt REQUIRED)

add_executable(app
    src/main.cpp
    src/calculator.cpp
)

target_include_directories(app PRIVATE src)

target_link_libraries(app PRIVATE fmt::fmt)
