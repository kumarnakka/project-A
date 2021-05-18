/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrafficSignEyeQ4.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef TrafficSignEyeQ4Support_563920906_h
#define TrafficSignEyeQ4Support_563920906_h

#include <stdlib.h>

/* Uses */
#include "TrafficSignEyeQ4.h"
/* Requires */
#include "TrafficSignEyeQ4Plugin.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)

/* If we're building on Windows, explicitly import the superclasses of
* the types declared below.
*/
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataWriter_impl;
class __declspec(dllimport) DDSDataReader;
class __declspec(dllimport) DDSDataReader_impl;

#endif

namespace adas_dds {

    /* ========================================================================== */
    /**
    Uses:     T
    Defines:  TTypeSupport, TDataWriter, TDataReader*/

    #if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols. */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    DDS_TYPESUPPORT_CPP(TrafficSignEyeQ4TypeSupport, TrafficSignEyeQ4);
    DDS_DATAWRITER_CPP(TrafficSignEyeQ4DataWriter, TrafficSignEyeQ4);

    DDS_DATAREADER_CPP(TrafficSignEyeQ4DataReader, TrafficSignEyeQ4);

    #if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols. */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

} /* namespace adas_dds  */

#endif  /* TrafficSignEyeQ4Support_563920906_h */

