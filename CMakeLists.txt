cmake_minimum_required(VERSION 3.20)
project(libft C)

set(CMAKE_C_STANDARD 11)

add_compile_options(-Wall -Wextra -Werror)

set(CMAKE_C_FLAGS_DEBUG "-g -O0 -fsanitize=address,undefined")
set(CMAKE_EXE_LINKER_FLAGS_DEBUG "-fsanitize=address,undefined")

file(GLOB LIB_SOURCES CONFIGURE_DEPENDS "src/*.c")
add_library(libft STATIC ${LIB_SOURCES})
target_include_directories(libft PUBLIC include/)