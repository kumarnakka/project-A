
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TwistWithCovariance.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TwistWithCovarianceSupport_1047502647_h
#define TwistWithCovarianceSupport_1047502647_h

/* Uses */
#include "TwistWithCovariance.h"

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)

class __declspec(dllimport) DDSTypeSupport;
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataReader;

#endif

namespace adas_dds {
    namespace geometry_msgs {
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
            TwistWithCovarianceTypeSupport, 
            TwistWithCovariance);

        #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(TwistWithCovarianceDataWriter, TwistWithCovariance);
        #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
        DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(TwistWithCovarianceDataReader, TwistWithCovarianceSeq, TwistWithCovariance);
        #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace geometry_msgs  */
} /* namespace adas_dds  */

#endif  /* TwistWithCovarianceSupport_1047502647_h */

