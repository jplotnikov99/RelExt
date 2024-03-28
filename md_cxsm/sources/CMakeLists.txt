add_subdirectory(amp2s)

file(GLOB my_src *.cpp)
add_library(cxsm_src SHARED ${my_src})