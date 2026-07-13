file(GLOB my_amp2s CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

file(GLOB my_amp2s_nlo CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/NLO/*.cpp
)

add_library(cxsm_amp2s SHARED
    ${my_amp2s}
    ${my_amp2s_nlo}
)