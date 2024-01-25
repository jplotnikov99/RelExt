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


add_executable(cpvdm md_cpvdm/main.cpp)
add_subdirectory(md_cpvdm/sources)
target_include_directories(cpvdm_amp2s PRIVATE ${include_dir})
target_include_directories(cpvdm_sources PRIVATE ${include_dir})
target_include_directories(cpvdm PRIVATE ${include_dir})
target_include_directories(sources PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/md_cpvdm/include)
target_link_libraries(cpvdm PRIVATE sources cpvdm_sources cpvdm_amp2s)
#add_executable(inertd md_inertd/main.cpp)
#add_subdirectory(md_inertd/sources)
#target_include_directories(inertd_amp2s PRIVATE ${include_dir})
#target_include_directories(inertd_sources PRIVATE ${include_dir})
#target_include_directories(inertd PRIVATE ${include_dir})
#target_include_directories(sources PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/md_inertd/include)
#target_link_libraries(inertd PRIVATE sources AnyHdecay::anyhdecay inertd_sources inertd_amp2s)
#add_executable(mldm md_mldm/main.cpp)
#add_subdirectory(md_mldm/sources)
#target_include_directories(mldm_amp2s PRIVATE ${include_dir})
#target_include_directories(mldm_sources PRIVATE ${include_dir})
#target_include_directories(mldm PRIVATE ${include_dir})
#target_include_directories(sources PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/md_mldm/include)
#target_link_libraries(mldm PRIVATE sources AnyHdecay::anyhdecay mldm_sources mldm_amp2s)
 
 
 
add_executable(TRSM md_TRSM/main.cpp)
add_subdirectory(md_TRSM/sources)
target_include_directories(TRSM_amp2s PRIVATE ${include_dir})
target_include_directories(TRSM_sources PRIVATE ${include_dir})
target_include_directories(TRSM PRIVATE ${include_dir})
target_include_directories(sources PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/md_TRSM/include)
target_link_libraries(TRSM PRIVATE sources TRSM_sources TRSM_amp2s)
