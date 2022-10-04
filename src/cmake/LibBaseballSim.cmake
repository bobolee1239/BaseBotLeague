cmake_minimum_required(VERSION 3.10)

project(LibBaseballSim )
enable_language(CXX)

set(LIB_SRC_DIR "${CMAKE_CURRENT_LIST_DIR}/../")

set(LIB_SRC
    # ${LIB_SRC_DIR}/DataType/Pitch/Pitch.cpp
    ${LIB_SRC_DIR}/Component/Pitcher/Pitcher.cpp
    ${LIB_SRC_DIR}/Component/PitchSpace/PitchSpace.cpp
    )

add_library(BaseballSim
    ${LIB_SRC}
    )

target_include_directories(BaseballSim
    PUBLIC
    ${LIB_SRC_DIR}
    )
