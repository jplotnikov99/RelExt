#add_subdirectory(amp2s)

file(GLOB my_sources *.cpp)
add_library(sources STATIC ${my_sources})

#target_link_libraries(sources amp2s)
