cmake_minimum_required(VERSION 3.12)

project(example LANGUAGES CXX C)
set (CMAKE_CXX_STANDARD 11)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)

option(WITH_XAVIER "include " OFF)
option(RTI_PRO "RTI_PRO " OFF)

if (WITH_XAVIER)
    ADD_DEFINITIONS(-DHAVE_XAVIER)
endif()
if (NOT "$ENV{QNX_TARGET}" STREQUAL "" AND WITH_XAVIER)
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall --std=c++11 -O3 -fPIC -Wno-deprecated-declarations -Wno-comment -ffast-math")
    set(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} -Wall -O3 -fPIC -Wno-deprecated-declarations -Wno-comment -ffast-math")
    include(cmake/scripts/armv8QNX7.0.0qcc_gpp5.4.0.cmake)
    set(TARGET_DEVICE "qnx_aarch64")
else()
    include(cmake/scripts/x64Linux4gcc7.3.0.cmake)
endif()

if(POLICY CMP0069)
  set(CMAKE_POLICY_DEFAULT_CMP0069 NEW)
  cmake_policy(SET CMP0069 NEW)
endif()

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules)

set(PLATFORM_ROOT ${CMAKE_CURRENT_SOURCE_DIR})
set(PLATFORM_BUILD_DIR ${CMAKE_BINARY_DIR})
set(PLATFORM_SOURCE_DIR ${PLATFORM_ROOT}/src)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "" FORCE)
endif()

set(VINAIADASDDS_ROOT ${CMAKE_SOURCE_DIR}/vinai-adas-dds/vinai-adas-dds-sdk)

if ("${RTIDDS_ROOT}" STREQUAL "") 
    set(RTIDDS_ROOT ${PLATFORM_ROOT}/3rd-party)
endif()

if ("${RTIDDS_MICRO_VERSION}" STREQUAL "") 
    set(RTIDDS_MICRO_VERSION 3.0.3)  
endif()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_ASM_FLAGS "${CMAKE_C_FLAGS} -x assembler-with-cpp")

if (CMAKE_BUILD_TYPE MATCHES Release)
    set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -s -Wall -Werror")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -s -Wall -Werror")
else()
    set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall -Werror")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -Werror")
endif()

option(VERBOSE "Enable verbose output?" OFF)

# Hide messages from Check*.cmake (e.g. CheckCSourceCompiles)
if(NOT VERBOSE)
  set(CMAKE_REQUIRED_QUIET ON)
endif()

if (RTI_PRO)
    find_package(RTIDDS_PRO REQUIRED)
    find_package(VINAIADASDDS_PRO REQUIRED)
else()
    find_package(RTIDDS REQUIRED)
    find_package(VINAIADASDDS REQUIRED)
endif()

SET(CMAKE_SKIP_BUILD_RPATH  FALSE)
SET(CMAKE_BUILD_WITH_INSTALL_RPATH FALSE)
SET(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
SET(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
LIST(FIND CMAKE_PLATFORM_IMPLICIT_LINK_DIRECTORIES "${CMAKE_INSTALL_PREFIX}/lib" isSystemDir)
IF("${isSystemDir}" STREQUAL "-1")
   SET(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
ENDIF("${isSystemDir}" STREQUAL "-1")

add_subdirectory(example/camera_image)
add_subdirectory(example/helloworld)
