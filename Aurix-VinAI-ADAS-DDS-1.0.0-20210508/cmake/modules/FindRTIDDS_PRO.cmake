#  Try to find RTIDDS lib
#  The following are set after configuration is done: 
#  RTIDDS_FOUND
#  RTIDDS_INCLUDE_DIR
#  RTIDDS_LIBRARY_DIR
#  RTIDDS_LIBRARIES

set(RTIDDS_INCLUDE_DIR "")
set(RTIDDS_LIBRARY_DIR "")
set(RTIDDS_LIBRARIES "")

message("We are using rti_connext_dds-6.0.1")

# Find package
set(RTIDDS_PATH ${RTIDDS_ROOT}/rti_connext_dds-6.0.1)
#find_file(RTIDDS_FOUND "ndds_c.h" PATHS ${RTIDDS_PATH}/include/ndds)
#if (RTIDDS_FOUND)
    set(RTIDDS_INCLUDE_DIR 
        ${RTIDDS_PATH}/include/
        ${RTIDDS_PATH}/include/ndds
    )
    set(RTIDDS_LIBRARY_DIR
        ${RTIDDS_PATH}/lib/${RTIDDS_ARCH}
    )
    set(RTIDDS_LIBRARIES
        nddsmetp
        nddscpp
        nddsc
        nddscore
    )
if(RTIDDS_ARCH STREQUAL x64Linux4gcc7.3.0)
    list(APPEND RTIDDS_LIBRARIES SDL2)
    add_definitions(
        -DRTI_UNIX
        -DRTI_LINUX
        -DRTI_64BIT
        -DRTI_DDS
        -no-pie
    ) 
endif()

if(RTIDDS_ARCH STREQUAL armv8QNX7.0.0qcc_gpp5.4.0)
    list(APPEND RTIDDS_LIBRARIES stdc++)
    add_definitions(
        -DRTI_QNX
        -DRTI_64BIT
        -DRTI_DDS
    ) 
endif()

#else (RTIDDS_FOUND)
#   message(FATAL_ERROR "=====\nRTIDDS PRO not found! Please install RTIDDS PRO.\n====\n")
#endif(RTIDDS_FOUND)
