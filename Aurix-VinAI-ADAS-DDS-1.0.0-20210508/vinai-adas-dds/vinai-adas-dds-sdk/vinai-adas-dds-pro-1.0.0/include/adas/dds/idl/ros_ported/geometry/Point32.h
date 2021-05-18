

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Point32.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Point32_945017083_h
#define Point32_945017083_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {
    namespace geometry_msgs {

        extern const char *Point32TYPENAME;

        struct Point32Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class Point32TypeSupport;
        class Point32DataWriter;
        class Point32DataReader;
        #endif
        class Point32 
        {
          public:
            typedef struct Point32Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef Point32TypeSupport TypeSupport;
            typedef Point32DataWriter DataWriter;
            typedef Point32DataReader DataReader;
            #endif

            DDS_Float   x ;
            DDS_Float   y ;
            DDS_Float   z ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Point32_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Point32_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Point32_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Point32_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(Point32Seq, Point32);

        NDDSUSERDllExport
        RTIBool Point32_initialize(
            Point32* self);

        NDDSUSERDllExport
        RTIBool Point32_initialize_ex(
            Point32* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Point32_initialize_w_params(
            Point32* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Point32_finalize_w_return(
            Point32* self);

        NDDSUSERDllExport
        void Point32_finalize(
            Point32* self);

        NDDSUSERDllExport
        void Point32_finalize_ex(
            Point32* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Point32_finalize_w_params(
            Point32* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Point32_finalize_optional_members(
            Point32* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Point32_copy(
            Point32* dst,
            const Point32* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace geometry_msgs  */
} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::geometry_msgs::Point32> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Point32 */

