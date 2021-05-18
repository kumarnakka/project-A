

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ColorRGBA.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ColorRGBA_345806284_h
#define ColorRGBA_345806284_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *ColorRGBA_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(ColorRGBASeq, ColorRGBA);

        NDDSUSERDllExport
        RTIBool ColorRGBA_initialize(
            ColorRGBA* self);

        NDDSUSERDllExport
        RTIBool ColorRGBA_initialize_ex(
            ColorRGBA* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool ColorRGBA_initialize_w_params(
            ColorRGBA* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool ColorRGBA_finalize_w_return(
            ColorRGBA* self);

        NDDSUSERDllExport
        void ColorRGBA_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::std_msgs::ColorRGBA> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ColorRGBA */

