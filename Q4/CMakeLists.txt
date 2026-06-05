cmake_minimum_required(VERSION 3.11)
project(macaque_defense C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(macaque_defense
    src/thestart_iguess.c
    "modules/some math i found online.c"
    timeOfDay/TOD.c
    timeOfDay/headers/TOD_Helper.c
)

target_include_directories(macaque_defense PRIVATE
    geography/geographyNewOld
    geography/geographyNewOld/supplementaryFiles
)

target_compile_definitions(macaque_defense PRIVATE
    SYSTEM_VERSION="\"v4.2-Bonnet-Edition\""
)