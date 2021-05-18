/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ColorRGBA.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef ColorRGBA_345806284_h
#define ColorRGBA_345806284_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    namespace std_msgs {

        extern const char *ColorRGBATYPENAME;

        struct ColorRGBASeq;
        #ifndef NDDS_STANDALONE_TYPE
        class ColorRGBATypeSupport;
        class ColorRGBADataWriter;
        class ColorRGBADataReader;
        #endif
        class ColorRGBA 
        {
          public:
            typedef struct ColorRGBASeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef ColorRGBATypeSupport TypeSupport;
            typedef ColorRGBADataWriter DataWriter;
            typedef ColorRGBADataReader DataReader;
            #endif

            DDS_Float   r ;
            DDS_Float   g ;
            DDS_Float   b ;
            DDS_Float   a ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* ColorRGBA_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *ColorRGBA_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *ColorRGBA_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T ColorRGBA
        #define TSeq ColorRGBASeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T ColorRGBA
        #define TSeq ColorRGBASeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern ColorRGBA*
        ColorRGBA_create();

        NDDSUSERDllExport extern void
        ColorRGBA_delete(ColorRGBA* sample);

        NDDSUSERDllExport
        RTIBool ColorRGBA_initialize(
            ColorRGBA* self);

        NDDSUSERDllExport
        RTIBool ColorRGBA_initialize_ex(
            ColorRGBA* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool ColorRGBA_initialize_w_params(
            ColorRGBA* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool ColorRGBA_finalize(
            ColorRGBA* self);

        NDDSUSERDllExport
        RTIBool ColorRGBA_finalize_w_return(
            ColorRGBA* self);

        NDDSUSERDllExport
        void ColorRGBA_finalize_ex(
            ColorRGBA* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void ColorRGBA_finalize_w_params(
            ColorRGBA* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void ColorRGBA_finalize_optional_members(
            ColorRGBA* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool ColorRGBA_copy(
            ColorRGBA* dst,
            const ColorRGBA* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

    } /* namespace std_msgs  */

} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ColorRGBA */

