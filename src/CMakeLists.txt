cmake_minimum_required(VERSION 3.10)

project(BaseBotGameCPP )
enable_language(CXX)

set(LIB_SRC
    Component/Pitcher/Pitcher.cpp
    )

add_library(BaseballSim
    ${LIB_SRC}
    )

target_include_directories(BaseballSim
    PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}
    )

add_executable(BaseBotGame
    main.cpp
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