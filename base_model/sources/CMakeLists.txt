add_subdirectory(amp2s)

file(GLOB my_sources *.cpp)
add_library(placeholder_sources SHARED ${my_sources})

