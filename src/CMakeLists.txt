cmake_minimum_required(VERSION 3.10)

project(BaseBotGame )

set(FOLDER "${CMAKE_CURRENT_LIST_DIR}/cmake")

message("INFO: Build Simulation Library")
include(${FOLDER}/LibBaseballSim.cmake)

message("INFO: Build BaseBotGame Executable")
include(${FOLDER}/BaseBotGame.cmake)

if (${ENABLE_UT})
    message("INFO: Build BaseBotGame Testing Suits")
    include(${FOLDER}/BaseBotUt.cmake)
endif()
