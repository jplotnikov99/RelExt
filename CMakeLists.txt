cmake_minimum_required(VERSION 3.22)

project(
 DarkTree
 VERSION 0.1
 LANGUAGES C CXX Fortran)

add_compile_options(-O3)

add_subdirectory(sources)

set(include_dir ${CMAKE_CURRENT_SOURCE_DIR}/include)

include_directories(include)

target_include_directories(sources PRIVATE ${include_dir})


# -------------------------- COLLIER --------------------------
find_package(collier 1.2.5 QUIET)
if(NOT collier_FOUND)
  set(INCLUDE_COLLIER_TARGET True)
  include(FetchContent)
  FetchContent_Declare(collier URL https://collier.hepforge.org/downloads/?f=collier-1.2.8.tar.gz)
  FetchContent_MakeAvailable(collier)
  target_include_directories(collier PUBLIC $<TARGET_PROPERTY:collier,Fortran_MODULE_DIRECTORY>)
endif()
# -------------------------------------------------------------


#set(include_dir_cxsm1 ${CMAKE_CURRENT_SOURCE_DIR}/md_cxsm1)
add_executable(cxsm md_cxsm/main.cpp)
add_subdirectory(md_cxsm/sources)
target_include_directories(cxsm_src PRIVATE ${include_dir})
target_include_directories(cxsm_amp2s PRIVATE ${include_dir})
target_include_directories(cxsm PRIVATE ${include_dir})
target_link_libraries(cxsm PRIVATE sources CollierLTCPP cxsm_src cxsm_amp2s)

add_executable(cpvdm md_cpvdm/main.cpp)
add_subdirectory(md_cpvdm/sources)
target_include_directories(cpvdm_amp2s PRIVATE ${include_dir})
target_include_directories(cpvdm_sources PRIVATE ${include_dir})
target_include_directories(cpvdm PRIVATE ${include_dir})
target_include_directories(sources PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/md_cpvdm/include)
target_link_libraries(cpvdm PRIVATE sources CollierLTCPP cpvdm_sources cpvdm_amp2s)
 
add_executable(trsm md_trsm/main.cpp)
add_subdirectory(md_trsm/sources)
target_include_directories(trsm_amp2s PRIVATE ${include_dir})
target_include_directories(trsm_sources PRIVATE ${include_dir})
target_include_directories(trsm PRIVATE ${include_dir})
target_include_directories(sources PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/md_trsm/include)
target_link_libraries(trsm PRIVATE sources CollierLTCPP trsm_sources trsm_amp2s)
 
add_executable(DDP md_DDP/main.cpp)
add_subdirectory(md_DDP/sources)
target_include_directories(DDP_amp2s PRIVATE ${include_dir})
target_include_directories(DDP_sources PRIVATE ${include_dir})
target_include_directories(DDP PRIVATE ${include_dir})
target_include_directories(sources PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/md_DDP/include)
target_link_libraries(DDP PRIVATE sources CollierLTCPP DDP_sources DDP_amp2s)

add_executable(bmd5 md_bmd5/main.cpp)
add_subdirectory(md_bmd5/sources)
target_include_directories(bmd5_amp2s PRIVATE ${include_dir})
target_include_directories(bmd5_sources PRIVATE ${include_dir})
target_include_directories(bmd5 PRIVATE ${include_dir})
target_include_directories(sources PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/md_bmd5/include)
target_link_libraries(bmd5 PRIVATE sources CollierLTCPP bmd5_sources bmd5_amp2s) 