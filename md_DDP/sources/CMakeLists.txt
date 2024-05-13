add_subdirectory(amp2s)

file(GLOB my_sources *.cpp)
add_library(DDP_sources SHARED ${my_sources})

