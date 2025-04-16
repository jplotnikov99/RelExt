# add_subdirectory(amp2s)

file(GLOB_RECURSE my_sources *.cpp)
add_library(placeholder_sources STATIC ${my_sources})

