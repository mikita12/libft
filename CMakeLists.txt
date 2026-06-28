cmake_minimum_required(VERSION 3.20)
project(libft C)

# Standard C
set(CMAKE_C_STANDARD 11)

# Flagi jak w twoim Makefile
add_compile_options(-Wall -Wextra -Werror)

# Biblioteka z plików w src/
file(GLOB LIB_SOURCES "src/*.c")
add_library(libft STATIC ${LIB_SOURCES})
target_include_directories(libft PUBLIC include/)

# Executable (main.c + biblioteka)
add_executable(program tests/main.c)
target_link_libraries(program PRIVATE libft)