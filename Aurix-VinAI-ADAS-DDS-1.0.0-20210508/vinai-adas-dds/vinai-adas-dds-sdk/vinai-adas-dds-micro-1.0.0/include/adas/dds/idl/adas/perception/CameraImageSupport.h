/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraImage.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef CameraImageSupport_787820529_h
#define CameraImageSupport_787820529_h

#include <stdlib.h>

/* Uses */
#include "CameraImage.h"
/* Requires */
#include "CameraImagePlugin.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)

/* If we're building on Windows, explicitly import the superclasses of
* the types declared below.
*/
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataWriter_impl;
class __declspec(dllimport) DDSDataReader;
class __declspec(dllimport) DDSDataReader_impl;

#endif

namespace adas {

    namespace dds {

        /* ========================================================================== */
        /**
        Uses:     T
        Defines:  TTypeSupport, TDataWriter, TDataReader*/

        #if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols. */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        DDS_TYPESUPPORT_CPP(CameraImageTypeSupport, CameraImage);
        DDS_DATAWRITER_CPP(CameraImageDataWriter, CameraImage);

        DDS_DATAREADER_CPP(CameraImageDataReader, CameraImage);

        #if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols. */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

    } /* namespace dds  */

} /* namespace adas  */

#endif  /* CameraImageSupport_787820529_h */

