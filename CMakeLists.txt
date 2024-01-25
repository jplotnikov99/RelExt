cmake_minimum_required(VERSION 3.22)

project(
 DarkTree
 VERSION 0.1
 LANGUAGES C CXX Fortran)

add_compile_options(-O3)

#include(FetchContent)
#FetchContent_Declare(
#  anyhdecay GIT_REPOSITORY https://gitlab.com/jonaswittbrodt/anyhdecay.git)
#FetchContent_GetProperties(anyhdecay)
#if(NOT anyhdecay_POPULATED)
#  FetchContent_Populate(anyhdecay)
#  add_subdirectory(${anyhdecay_SOURCE_DIR} ${anyhdecay_BINARY_DIR})
#endif()
#AnyHdecay::anyhdecay

add_subdirectory(sources)

set(include_dir ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_include_directories(sources PRIVATE ${include_dir})


add_executable(cxsm md_cxsm/main.cpp)
add_subdirectory(md_cxsm/sources)
target_include_directories(cxsm_amp2s PRIVATE ${include_dir})
target_include_directories(cxsm_sources PRIVATE ${include_dir})
target_include_directories(cxsm PRIVATE ${include_dir})
target_include_directories(sources PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/md_cxsm/include)
target_link_libraries(cxsm PRIVATE sources cxsm_sources cxsm_amp2s)


