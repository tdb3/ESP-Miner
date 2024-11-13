# This is the project CMakeLists.txt file for the test subproject
cmake_minimum_required(VERSION 3.16)

# Include the components directory of the main application:
#
set(EXTRA_COMPONENT_DIRS "../components")

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

# Set the components to include the tests for.
# This can be overriden from CMake cache:
# - when invoking CMake directly: cmake -D TEST_COMPONENTS="xxxxx" ..
# - when using idf.py: idf.py -T xxxxx build
#
set(TEST_COMPONENTS "bm1397 stratum miner nvstorage" CACHE STRING "List of components to test")

include($ENV{IDF_PATH}/tools/cmake/project.cmake)

set(IDF_TARGET "esp32s3")

idf_build_set_property(COMPILE_DEFINITIONS "-DCONFIG_ASIC_FREQUENCY=100" APPEND)

project(unit_test_stratum)
