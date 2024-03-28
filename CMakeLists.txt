cmake_minimum_required(VERSION 3.22)

project(
 DarkTree
 VERSION 0.1
 LANGUAGES C CXX Fortran)

add_compile_options(-O3)

add_subdirectory(sources)

set(include_dir ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_include_directories(sources PRIVATE ${include_dir})


 
 
 
