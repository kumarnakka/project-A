############################ prefix path ######################################
if(DEFINED ENV{NVIDIA_SDK_PATH} AND NOT DEFINED NVIDIA_SDK_PATH)
    set(NVIDIA_SDK_PATH ENV{NVIDIA_SDK_PATH})
endif()

if(NOT DEFINED NVIDIA_SDK_PATH)
    set(NVIDIA_SDK_PATH /work/disk01/DATA/SDK_NVIDIA/QNX)
endif()

set(XAVIER_SYSROOT_PATH ${NVIDIA_SDK_PATH}/rootfs)
set(XAVIER_COMPILER_PREFIX_PATH ${NVIDIA_SDK_PATH}/qnx700/host/linux/x86_64/usr/bin/aarch64-unknown-nto-qnx7.0.0)

############################# CMake configuration #######################################

# need that one here, because this is a toolchain file and hence executed before
# default cmake settings are set
set(CMAKE_FIND_LIBRARY_PREFIXES "lib")
set(CMAKE_FIND_LIBRARY_SUFFIXES ".a" ".so")

# QNX-required environment variables
if(NOT DEFINED ENV{QNX_HOST} OR NOT DEFINED ENV{QNX_TARGET})
    message(FATAL_ERROR "Need to define QNX_HOST and QNX_TARGET")
endif()

set(QNX_HOST "$ENV{QNX_HOST}")
set(QNX_TARGET "$ENV{QNX_TARGET}")

# QNX-required definitions & compiler flags
set(QNX_TOOLCHAIN_VERSION "5.4.0")
set(QNX_TOOLCHAIN_PATH "${QNX_HOST}/usr/bin")
set(QNX_TOOLCHAIN_TRIPLE "aarch64-unknown-nto-qnx7.0.0")
set(QNX_TOOLCHAIN_PREFIX "${QNX_TOOLCHAIN_PATH}/${QNX_TOOLCHAIN_TRIPLE}")

include_directories(
    ${QNX_HOST}/usr/lib/gcc/${QNX_TOOLCHAIN_TRIPLE}/${QNX_TOOLCHAIN_VERSION}/include
    ${QNX_TARGET}/usr/include
    ${QNX_TARGET}/usr/include/io-pkt
    $<$<COMPILE_LANGUAGE:CXX>:${QNX_TARGET}/usr/include/c++/v1>
    $<$<COMPILE_LANGUAGE:CUDA>:${QNX_TARGET}/usr/include/c++/v1>)
#add_compile_definitions(_POSIX_C_SOURCE=200112L _QNX_SOURCE WIN_INTERFACE_CUSTOM _FILE_OFFSET_BITS=64 __EXT_XOPEN_EX _GLIBCXX_USE_C99 _GLIBCXX_USE_CXX11_ABI=0)
add_compile_definitions(_POSIX_C_SOURCE=200112L _QNX_SOURCE WIN_INTERFACE_CUSTOM _FILE_OFFSET_BITS=64 __EXT_XOPEN_EX _GLIBCXX_USE_CXX11_ABI=0)
#add_definitions(-D_POSIX_C_SOURCE=200112L -D_DQNX_SOURCE -DWIN_INTERFACE_CUSTOM -D_FILE_OFFSET_BITS=64 -D__EXT_XOPEN_EX=1)
add_compile_options($<$<COMPILE_LANGUAGE:CXX>:-fno-tree-vectorize>)



set(CMAKE_CROSSCOMPILING TRUE)
set(CMAKE_SYSROOT "${XAVIER_SYSROOT_PATH}")

# Tell cmake we're cross compiling
set(CMAKE_SYSTEM_NAME QNX)
set(CMAKE_SYSTEM_VERSION 1)
set(CMAKE_SYSTEM_PROCESSOR aarch64)

#set(TARGET_OS LINUX)
#SET(TARGET_ARCH ARMV8)
#SET(TARGET_COMPILER GCC)

#this one not so much
SET(CMAKE_SYSTEM_VERSION 1)

# specify the cross compiler

set(CMAKE_C_COMPILER "${XAVIER_COMPILER_PREFIX_PATH}-gcc")
set(CMAKE_CXX_COMPILER "${XAVIER_COMPILER_PREFIX_PATH}-g++")
set(CMAKE_LINKER "${XAVIER_COMPILER_PREFIX_PATH}-ld")
set(CMAKE_C_COMPILER_AR "${XAVIER_COMPILER_PREFIX_PATH}-ar")
set(CMAKE_CXX_COMPILER_AR "${XAVIER_COMPILER_PREFIX_PATH}-ar")
set(CMAKE_C_COMPILER_RANLIB "${XAVIER_COMPILER_PREFIX_PATH}-ranlib")
set(CMAKE_CXX_COMPILER_RANLIB "${XAVIER_COMPILER_PREFIX_PATH}-ranlib")
set(TOOLCHAIN_STRIP "${XAVIER_COMPILER_PREFIX_PATH}-strip")
set(TOOLCHAIN_NM "${XAVIER_COMPILER_PREFIX_PATH}-nm")


# root filesystem containing shared libs
set (LINUX_ROOTFS ${XAVIER_SYSROOT_PATH})
set (CMAKE_FIND_ROOT_PATH ${LINUX_ROOTFS})

#set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ${LINUX_ROOTFS}/opt/nvidia_arm64/libtorch_cu102_STATIC/lib)

# linker flags
set (MRPATH_LINK "${LINUX_ROOTFS}/usr/lib:${LINUX_ROOTFS}/lib:${LINUX_ROOTFS}/usr/local/cuda-safe-10.2.187/targets/aarch64-qnx/lib:${LINUX_ROOTFS}/usr/libnvidia:${LINUX_ROOTFS}/usr/lib/aarch64-qnx-gnu:${LINUX_ROOTFS}/usr/local/cuda-10.2/targets/aarch64-qnx/lib:${EX_RPATH_LINK}")
set (MLINK_DIRS "-L${LINUX_ROOTFS}/usr/lib -L${LINUX_ROOTFS}/lib -L${LINUX_ROOTFS}/usr/local/cuda-safe-10.2.187/targets/aarch64-qnx/lib -L${LINUX_ROOTFS}/usr/libnvidia -L${LINUX_ROOTFS}/usr/lib/aarch64-qnx-gnu -L${LINUX_ROOTFS}/usr/local/cuda-10.2/targets/aarch64-qnx/lib ${EX_LINK_DIRS}")
set (CMAKE_EXE_LINKER_FLAGS "-Wl,-rpath-link,${MRPATH_LINK} ${MLINK_DIRS}" CACHE STRING "EXE LD Flags" FORCE)
set (CMAKE_SHARED_LINKER_FLAGS "-Wl,-rpath-link,${MRPATH_LINK} ${MLINK_DIRS}" CACHE STRING "SHARED LD Flags" FORCE)
set (CMAKE_MODULE_LINKER_FLAGS "-Wl,-rpath-link,${MRPATH_LINK} ${MLINK_DIRS}" CACHE STRING "MODULE LD Flags" FORCE)

set(ENV{CUDA_TOOLKIT_ROOT} ${LINUX_ROOTFS}/usr/local/cuda-safe-10.2.187)
set(CUDA_NVCC_EXECUTABLE /usr/local/cuda-10.2/bin/nvcc)
set(CUDNN_INCLUDE_PATH ${LINUX_ROOTFS}/usr/include/aarch64-unknown-nto-qnx)
set(CUDA_HEADERS ${LINUX_ROOTFS}/usr/local/cuda-safe-10.2.187/include ${LINUX_ROOTFS}/usr/include ${LINUX_ROOTFS}/usr/local/cuda-safe-10.2.187/targets/aarch64-qnx/include)
set(CUDA_INCLUDE_DIRS ${CUDA_HEADERS})
set(GLIBCXX_USE_CXX11_ABI 1)
include_directories(${CUDA_HEADERS})
#set(CUDA_INCLUDE_DIRS ${LINUX_ROOTFS}/usr/local/cuda-10.2/include ${LINUX_ROOTFS}/usr/include/aarch64-linux-gnu)
#set(CUDA_CUDART_LIBRARY ${LINUX_ROOTFS}/usr/local/cuda-10.2/targets/aarch64-linux/lib)

# compiler flags for debug target
#set (CMAKE_C_FLAGS_DEBUG ${CMAKE_C_FLAGS} CACHE STRING "C Debug Flags" FORCE)
#set (CMAKE_CXX_FLAGS_DEBUG ${CMAKE_CXX_FLAGS} CACHE STRING "CXX Debug Flags" FORCE)

# compiler flags for release target
#set (CMAKE_C_FLAGS_RELEASE ${CMAKE_C_FLAGS} CACHE STRING "C Release Flags" FORCE )
#set (CMAKE_CXX_FLAGS_RELEASE ${CMAKE_CXX_FLAGS}  CACHE STRING "CXX Release Flags" FORCE)

# where is the target environment
#SET(CMAKE_FIND_ROOT_PATH  ${XAVIER_SYSROOT_PATH}})

if (CMAKE_CROSSCOMPILING)
#set(CMAKE_CUDA_FLAGS " -ccbin ${CMAKE_CXX_COMPILER} -gencode arch=compute_72,code=sm_72 -use_fast_math -O3 -dc -std=c++11")
#set(CMAKE_CUDA_NVCC_FLAGS " -ccbin ${CMAKE_CXX_COMPILER} -gencode arch=compute_72,code=sm_72 -use_fast_math -O3 -dc -std=c++11")

set(CMAKE_CUDA_FLAGS " -ccbin ${CMAKE_C_COMPILER} -gencode arch=compute_72,code=sm_72 -use_fast_math -O3 -dc -std=c++11")
set(CMAKE_CUDA_NVCC_FLAGS " -ccbin ${CMAKE_CXX_COMPILER} -gencode arch=compute_72,code=sm_72 -use_fast_math -O3 -dc -std=c++11")
endif()

# search for programs in the build host directories
SET(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)

# for libraries and headers in the target directories
SET(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
SET(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

set_property(GLOBAL PROPERTY FIND_LIBRARY_USE_LIB32_PATHS FALSE)
set_property(GLOBAL PROPERTY FIND_LIBRARY_USE_LIBX32_PATHS FALSE)
set_property(GLOBAL PROPERTY FIND_LIBRARY_USE_LIB64_PATHS FALSE)



