#  Try to find VINAIADASDDS lib
#  The following are set after configuration is done: 
#  VINAIADASDDS_FOUND
#  VINAIADASDDS_INCLUDE_DIR
#  VINAIADASDDS_LIBRARY_DIR
#  VINAIADASDDS_LIBRARIES

set(VINAIADASDDS_INCLUDE_DIR "")
set(VINAIADASDDS_LIBRARY_DIR "")
set(VINAIADASDDS_LIBRARIES "")

# Find package
set(VINAIADASDDS_PATH ${VINAIADASDDS_ROOT}/vinai-adas-dds-pro-1.0.0)
#find_file(VINAIADASDDS_FOUND "node_hanlde.h" PATHS ${VINAIADASDDS_PATH}/include/adas/dds/common)
#if (VINAIADASDDS_FOUND)
    set(VINAIADASDDS_INCLUDE_DIR 
        ${VINAIADASDDS_PATH}/include 
    )
    set(VINAIADASDDS_LIBRARY_DIR
        ${VINAIADASDDS_PATH}/lib/${VINAIADASDDS_ARCH}
    )
    message("VINAIADASDDS_ARCH ==> " ${VINAIADASDDS_ARCH})
    set(VINAIADASDDS_LIBRARIES
        vinai_adas_dds
        vinai_adas_dds_idl
    )
#else (VINAIADASDDS_FOUND)
#    message(FATAL_ERROR "=====\nVINAIADASDDS not found! Please install VINAIADASDDS.\n====\n")
#endif(VINAIADASDDS_FOUND)
