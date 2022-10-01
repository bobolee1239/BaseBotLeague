cmake_minimum_required(VERSION 3.10)

project(BaseBotGameCPP )
enable_language(CXX)

add_executable(BaseBotGame
    main.cpp
    )

target_compile_definitions(BaseBotGame
    PRIVATE
    -DENABLE_ERROR_LOG
    -DENABLE_DEBUG_LOG
    -DENABLE_INFORMATION_LOG
    )
