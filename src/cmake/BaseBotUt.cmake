cmake_minimum_required(VERSION 3.10)

project(BaseBotUt )
enable_language(CXX)

set(UT_DIR "${CMAKE_CURRENT_LIST_DIR}/../Test/")

add_executable(UtPitcher
    ${UT_DIR}/test_pitch.cpp
    )

target_compile_definitions(UtPitcher
    PRIVATE
    -DENABLE_ERROR_LOG
    -DENABLE_DEBUG_LOG
    -DENABLE_INFORMATION_LOG
    )

target_link_libraries(UtPitcher
    BaseballSim
    )

target_include_directories(UtPitcher
    PRIVATE
    ${UT_DIR}
    )