#  Try to find RTIDDS lib
#  The following are set after configuration is done: 
#  RTIDDS_FOUND
#  RTIDDS_INCLUDE_DIR
#  RTIDDS_LIBRARY_DIR
#  RTIDDS_LIBRARIES

set(RTIDDS_INCLUDE_DIR "")
set(RTIDDS_LIBRARY_DIR "")
set(RTIDDS_LIBRARIES "")

message("We are using rti_connext_dds_micro-${RTIDDS_MICRO_VERSION}")

# Find package
set(RTIDDS_PATH ${RTIDDS_ROOT}/rti_connext_dds_micro-${RTIDDS_MICRO_VERSION})
#find_file(RTIDDS_FOUND "rti_me_cpp.hxx" PATHS ${RTIDDS_PATH}/include)
#if (RTIDDS_FOUND)
    set(RTIDDS_INCLUDE_DIR 
        ${RTIDDS_PATH}/include 
    )
    set(RTIDDS_LIBRARY_DIR
        ${RTIDDS_PATH}/lib/${RTIDDS_ARCH}
    )
    set(RTIDDS_LIBRARIES
        rti_med
        rti_me_netiosdmd
        rti_me_netioshmemd
        rti_me_discdpsed
        rti_me_discdpded
        rti_me_appgend
        rti_me_rhsmd
        rti_me_whsmd
        rti_me_cppd

    )
#else (RTIDDS_FOUND)
#    message(FATAL_ERROR "=====\nRTIDDS not found! Please install RTIDDS.\n====\n")
#endif(RTIDDS_FOUND)
