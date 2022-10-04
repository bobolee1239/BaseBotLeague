cmake_minimum_required(VERSION 3.10)

project(BaseBotGameCPP )
enable_language(CXX)

set(SRC_DIR "${CMAKE_CURRENT_LIST_DIR}/../")

add_executable(BaseBotGame
    ${SRC_DIR}/main.cpp
    )

target_compile_definitions(BaseBotGame
    PRIVATE
    -DENABLE_ERROR_LOG
    -DENABLE_DEBUG_LOG
    -DENABLE_INFORMATION_LOG
    )

target_link_libraries(BaseBotGame
    BaseballSim
    )

target_include_directories(BaseBotGame
    PRIVATE
    ${SRC_DIR}
    )