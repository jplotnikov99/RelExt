cmake_minimum_required(VERSION 3.22)

# Project name and version
project(DarkTree VERSION 0.1 LANGUAGES C CXX Fortran)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add optimization flags and verbose output
add_compile_options(-O3 -ffast-math -fno-inline-functions -fno-tree-vectorize -funroll-loops 
-march=native -fno-var-tracking-assignments)

# Include directory for headers
set(include_dir ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Add the main sources directory
add_subdirectory(sources)

# 1. cxsm target
# Add executable for cxsm

add_executable(cxsm md_cxsm/main.cpp)
add_subdirectory(md_cxsm/sources)
# Set include directories for cxsm and related libraries
target_include_directories(cxsm PRIVATE ${include_dir})
target_include_directories(cxsm_src PRIVATE ${include_dir})
target_include_directories(cxsm_amp2s PRIVATE ${include_dir})

# Link CoreFoundation framework only for macOS systems

# Link libraries for cxsm
target_link_libraries(cxsm PRIVATE sources cxsm_src cxsm_amp2s)

# 2. cpvdm target
add_executable(cpvdm md_cpvdm/main.cpp)
add_subdirectory(md_cpvdm/sources)
target_include_directories(cpvdm PRIVATE ${include_dir})
target_include_directories(cpvdm_amp2s PRIVATE ${include_dir})
target_include_directories(cpvdm_sources PRIVATE ${include_dir})
target_link_libraries(cpvdm PRIVATE sources cpvdm_sources cpvdm_amp2s)

# 3. trsm target
add_executable(trsm md_trsm/main.cpp)
add_subdirectory(md_trsm/sources)
target_include_directories(trsm PRIVATE ${include_dir})
target_include_directories(trsm_amp2s PRIVATE ${include_dir})
target_include_directories(trsm_sources PRIVATE ${include_dir})
target_link_libraries(trsm PRIVATE sources trsm_sources trsm_amp2s)

# 4. DDP target
add_executable(DDP md_DDP/main.cpp)
add_subdirectory(md_DDP/sources)
target_include_directories(DDP PRIVATE ${include_dir})
target_include_directories(DDP_amp2s PRIVATE ${include_dir})
target_include_directories(DDP_sources PRIVATE ${include_dir})
target_link_libraries(DDP PRIVATE sources DDP_sources DDP_amp2s)

# 5. bmd5 target
add_executable(bmd5 md_bmd5/main.cpp)
add_subdirectory(md_bmd5/sources)
target_include_directories(bmd5 PRIVATE ${include_dir})
target_include_directories(bmd5_amp2s PRIVATE ${include_dir})
target_include_directories(bmd5_sources PRIVATE ${include_dir})
target_link_libraries(bmd5 PRIVATE sources bmd5_sources bmd5_amp2s)

# Optional: Clean build to ensure everything is rebuilt from scratch  
add_executable(NMSSM md_NMSSM/main.cpp)
add_subdirectory(md_NMSSM/sources)
target_include_directories(NMSSM_amp2s PRIVATE ${include_dir})
target_include_directories(NMSSM_sources PRIVATE ${include_dir})
target_include_directories(NMSSM PRIVATE ${include_dir})
target_include_directories(sources PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/md_NMSSM/include)
target_link_libraries(NMSSM PRIVATE sources NMSSM_sources NMSSM_amp2s)
