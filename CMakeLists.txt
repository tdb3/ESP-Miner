# The following lines of boilerplate have to be in your project's CMakeLists
# in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.5)

if(MINING_DEVICE STREQUAL "Bitaxe_Supra")
    message(STATUS "Building for Bitaxe Supra family")
    add_compile_definitions(BITAXE_SUPRA)
elseif(MINING_DEVICE STREQUAL "Bitaxe_Gamma")
    add_compile_definitions(BITAXE_GAMMA)
    message(STATUS "Building for Bitaxe Gamma family")
# TODO: make the else() work if MINING_DEVICE is not defined
#else()
#    message(FATAL_ERROR "No MINING_DEVICE defined! Use \"-D MINING_DEVICE=<device string>\"")
endif()

# (Not part of the boilerplate)
# This example uses an extra component for common functions such as Wi-Fi and Ethernet connection.
# set(EXTRA_COMPONENT_DIRS $ENV{IDF_PATH}/examples/common_components/protocol_examples_common)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)


project(esp-miner)

