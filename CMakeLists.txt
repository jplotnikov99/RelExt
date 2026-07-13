cmake_minimum_required(VERSION 3.22)
project(DarkTree VERSION 0.1 LANGUAGES C CXX Fortran)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_compile_options(-O3)
add_compile_options(-fPIC)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(include_dir ${CMAKE_CURRENT_SOURCE_DIR}/include)
include(ExternalProject)
include(FetchContent)
set(EXTERNAL_INSTALL_DIR ${CMAKE_BINARY_DIR}/external)

find_package(GSL QUIET)
if(NOT GSL_FOUND)
  message(STATUS "GSL not found - building from source via ExternalProject")
  ExternalProject_Add(gsl_external
    URL              https://ftp.gnu.org/gnu/gsl/gsl-2.7.1.tar.gz
    URL_HASH         SHA256=dcb0fbd43048832b757ff9942691a8dd70026d5da0ff85601e52687f6deeb34b
    PREFIX           ${CMAKE_BINARY_DIR}/gsl
    CONFIGURE_COMMAND <SOURCE_DIR>/configure
                        --prefix=${EXTERNAL_INSTALL_DIR}
                        --enable-static
                        --with-pic
    BUILD_COMMAND     make -j
    INSTALL_COMMAND   make install
    BUILD_BYPRODUCTS
      ${EXTERNAL_INSTALL_DIR}/lib/libgsl.a
      ${EXTERNAL_INSTALL_DIR}/lib/libgslcblas.a
  )
  file(MAKE_DIRECTORY ${EXTERNAL_INSTALL_DIR}/include)
  add_library(GSL::gslcblas STATIC IMPORTED GLOBAL)
  set_target_properties(GSL::gslcblas PROPERTIES
    IMPORTED_LOCATION             ${EXTERNAL_INSTALL_DIR}/lib/libgslcblas.a
    INTERFACE_INCLUDE_DIRECTORIES ${EXTERNAL_INSTALL_DIR}/include
  )
  add_dependencies(GSL::gslcblas gsl_external)
  add_library(GSL::gsl STATIC IMPORTED GLOBAL)
  set_target_properties(GSL::gsl PROPERTIES
    IMPORTED_LOCATION             ${EXTERNAL_INSTALL_DIR}/lib/libgsl.a
    INTERFACE_INCLUDE_DIRECTORIES ${EXTERNAL_INSTALL_DIR}/include
    INTERFACE_LINK_LIBRARIES      GSL::gslcblas
  )
  add_dependencies(GSL::gsl gsl_external)
endif()

find_library(CUBA_LIB NAMES cuba)
find_path(CUBA_INC NAMES cuba.h)
if(CUBA_LIB AND CUBA_INC)
  message(STATUS "Found system CUBA: ${CUBA_LIB}")
  add_library(cuba::cuba STATIC IMPORTED GLOBAL)
  set_target_properties(cuba::cuba PROPERTIES
    IMPORTED_LOCATION             ${CUBA_LIB}
    INTERFACE_INCLUDE_DIRECTORIES ${CUBA_INC}
  )
else()
  message(STATUS "CUBA not found - building from source via ExternalProject")
  ExternalProject_Add(cuba_external
    URL              https://feynarts.de/cuba/Cuba-4.2.2.tar.gz
    PREFIX           ${CMAKE_BINARY_DIR}/cuba
    CONFIGURE_COMMAND <SOURCE_DIR>/configure
                        --prefix=${EXTERNAL_INSTALL_DIR}
                        CFLAGS=-fPIC\ -fcommon\ -O3
    BUILD_COMMAND     make -j1 lib
    INSTALL_COMMAND
        ${CMAKE_COMMAND} -E make_directory ${EXTERNAL_INSTALL_DIR}/lib
        COMMAND ${CMAKE_COMMAND} -E make_directory ${EXTERNAL_INSTALL_DIR}/include
        COMMAND ${CMAKE_COMMAND} -E copy <SOURCE_DIR>/libcuba.a  ${EXTERNAL_INSTALL_DIR}/lib/libcuba.a
        COMMAND ${CMAKE_COMMAND} -E copy <SOURCE_DIR>/cuba.h      ${EXTERNAL_INSTALL_DIR}/include/cuba.h
    BUILD_IN_SOURCE   1
    BUILD_BYPRODUCTS  ${EXTERNAL_INSTALL_DIR}/lib/libcuba.a
  )
  file(MAKE_DIRECTORY ${EXTERNAL_INSTALL_DIR}/include)
  add_library(cuba::cuba STATIC IMPORTED GLOBAL)
  set_target_properties(cuba::cuba PROPERTIES
    IMPORTED_LOCATION             ${EXTERNAL_INSTALL_DIR}/lib/libcuba.a
    INTERFACE_INCLUDE_DIRECTORIES ${EXTERNAL_INSTALL_DIR}/include
  )
  add_dependencies(cuba::cuba cuba_external)
endif()

find_package(collier 1.2.5 QUIET)
if(NOT collier_FOUND)
  set(INCLUDE_COLLIER_TARGET True)
    set(CMAKE_POLICY_VERSION_MINIMUM 3.5)
  FetchContent_Declare(collier
    URL              https://collier.hepforge.org/downloads/?f=collier-1.2.8.tar.gz
    DOWNLOAD_NAME    collier-1.2.8.tar.gz
  )
  FetchContent_MakeAvailable(collier)
  target_include_directories(collier PUBLIC $<TARGET_PROPERTY:collier,Fortran_MODULE_DIRECTORY>)
endif()

add_subdirectory(sources)
target_include_directories(sources PUBLIC ${include_dir}) 
target_link_libraries(sources PRIVATE cuba::cuba)

add_executable(cxsm md_cxsm/main.cpp)
add_subdirectory(md_cxsm/sources)
target_include_directories(cxsm PRIVATE ${include_dir})
target_include_directories(cxsm_src PRIVATE ${include_dir})
target_include_directories(cxsm_amp2s PRIVATE ${include_dir})
target_link_libraries(cxsm PRIVATE
    sources cxsm_src cxsm_amp2s CollierLTCPP
    GSL::gsl GSL::gslcblas cuba::cuba
)