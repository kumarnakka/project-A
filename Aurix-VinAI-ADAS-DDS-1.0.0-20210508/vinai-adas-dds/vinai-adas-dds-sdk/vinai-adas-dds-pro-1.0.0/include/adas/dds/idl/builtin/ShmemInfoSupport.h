
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ShmemInfo.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ShmemInfoSupport_1787268623_h
#define ShmemInfoSupport_1787268623_h

/* Uses */
#include "ShmemInfo.h"

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)

class __declspec(dllimport) DDSTypeSupport;
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataReader;

#endif

namespace adas_dds {
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        ShmemInfoTypeSupport, 
        ShmemInfo);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(ShmemInfoDataWriter, ShmemInfo);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(ShmemInfoDataReader, ShmemInfoSeq, ShmemInfo);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        ShmemImageTypeSupport, 
        ShmemImage);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(ShmemImageDataWriter, ShmemImage);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(ShmemImageDataReader, ShmemImageSeq, ShmemImage);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace adas_dds  */

#endif  /* ShmemInfoSupport_1787268623_h */

