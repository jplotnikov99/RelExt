add_subdirectory(amp2s)

file(GLOB my_sources *.cpp)
add_library(NMSSM_sources STATIC ${my_sources})

