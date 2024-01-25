#add_subdirectory(amp2s)

file(GLOB my_sources *.cpp)
add_library(sources SHARED ${my_sources})

#target_link_libraries(sources amp2s)
