add_subdirectory(amp2s)

file(GLOB my_sources *.cpp)
add_library(trsm_sources STATIC ${my_sources})

