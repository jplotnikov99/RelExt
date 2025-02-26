#add_subdirectory(amp2s)
add_subdirectory(interface/CollierLTCPP)

file(GLOB my_sources *.cpp)
add_library(sources SHARED ${my_sources})

#target_link_libraries(sources amp2s)
