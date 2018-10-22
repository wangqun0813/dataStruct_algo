cmake_minimum_required(VERSION 3.12)
project(c_algo C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_BUILD_TYPE Release)

include_directories(
        ${PROJECT_SOURCE_DIR}/include
        /usr/local/include
        /usr/include
)

add_subdirectory(src)
add_subdirectory(test)





