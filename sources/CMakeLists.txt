#add_subdirectory(amp2s)

file(GLOB my_sources *.cpp)
if(APPLE)
  add_library(sources STATIC ${my_sources})
else()
  add_library(sources SHARED ${my_sources})
endif()
#target_link_libraries(sources amp2s)
