cmake_minimum_required(VERSION 3.22)

project(DarkTree VERSION 0.1 LANGUAGES C CXX)

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Optimization
add_compile_options(-O3)

# Common headers and sources
set(include_dir ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(sources)

# --------------------------------------------------
# CxSM
# --------------------------------------------------

add_executable(cxsm md_cxsm/main.cpp)
add_subdirectory(md_cxsm/sources)

target_include_directories(cxsm PRIVATE ${include_dir})
target_include_directories(cxsm_src PRIVATE ${include_dir})
target_include_directories(cxsm_amp2s PRIVATE ${include_dir})

target_link_libraries(cxsm PRIVATE
    sources
    cxsm_src
    cxsm_amp2s
)

# --------------------------------------------------
# CPVDM
# --------------------------------------------------

add_executable(cpvdm md_cpvdm/main.cpp)
add_subdirectory(md_cpvdm/sources)

target_include_directories(cpvdm PRIVATE ${include_dir})
target_include_directories(cpvdm_sources PRIVATE ${include_dir})
target_include_directories(cpvdm_amp2s PRIVATE ${include_dir})

target_link_libraries(cpvdm PRIVATE
    sources
    cpvdm_sources
    cpvdm_amp2s
)

# --------------------------------------------------
# TRSM
# --------------------------------------------------

add_executable(trsm md_trsm/main.cpp)
add_subdirectory(md_trsm/sources)

target_include_directories(trsm PRIVATE ${include_dir})
target_include_directories(trsm_sources PRIVATE ${include_dir})
target_include_directories(trsm_amp2s PRIVATE ${include_dir})

target_link_libraries(trsm PRIVATE
    sources
    trsm_sources
    trsm_amp2s
)

# --------------------------------------------------
# N2HDM Dark Doublet Phase
# --------------------------------------------------

add_executable(DDP md_DDP/main.cpp)
add_subdirectory(md_DDP/sources)

target_include_directories(DDP PRIVATE ${include_dir})
target_include_directories(DDP_sources PRIVATE ${include_dir})
target_include_directories(DDP_amp2s PRIVATE ${include_dir})

target_link_libraries(DDP PRIVATE
    sources
    DDP_sources
    DDP_amp2s
)

# --------------------------------------------------
# BMD5
# --------------------------------------------------

add_executable(bmd5 md_bmd5/main.cpp)
add_subdirectory(md_bmd5/sources)

target_include_directories(bmd5 PRIVATE ${include_dir})
target_include_directories(bmd5_sources PRIVATE ${include_dir})
target_include_directories(bmd5_amp2s PRIVATE ${include_dir})

target_link_libraries(bmd5 PRIVATE
    sources
    bmd5_sources
    bmd5_amp2s
)

# --------------------------------------------------
# Relic density tests
# --------------------------------------------------

include(CTest)

if(BUILD_TESTING)

    # CxSM: MODE = 1
    add_executable(test_relic_cxsm
        tests/test_relic.cpp
    )

    target_include_directories(test_relic_cxsm PRIVATE
        ${include_dir}
    )

    target_compile_definitions(test_relic_cxsm PRIVATE
        TEST_MODE=1
    )

    target_link_libraries(test_relic_cxsm PRIVATE
        sources
        cxsm_src
        cxsm_amp2s
    )

    add_test(
        NAME relic_density_cxsm
        COMMAND test_relic_cxsm examples/cxsm_example.dat cxsm_test.out
    )

    set_tests_properties(relic_density_cxsm PROPERTIES
        WORKING_DIRECTORY "${PROJECT_SOURCE_DIR}/tests"
        TIMEOUT 120
    )

    # CPVDM: MODE = 3
    add_executable(test_relic_cpvdm
        tests/test_relic.cpp
    )

    target_include_directories(test_relic_cpvdm PRIVATE
        ${include_dir}
    )

    target_compile_definitions(test_relic_cpvdm PRIVATE
        TEST_MODE=3
    )

    target_link_libraries(test_relic_cpvdm PRIVATE
        sources
        cpvdm_sources
        cpvdm_amp2s
    )

    add_test(
        NAME relic_density_cpvdm
        COMMAND test_relic_cpvdm examples/cpvdm_mode3.dat cpvdm_test.out
    )

    set_tests_properties(relic_density_cpvdm PROPERTIES
        WORKING_DIRECTORY "${PROJECT_SOURCE_DIR}/tests"
        TIMEOUT 120
    )

endif()