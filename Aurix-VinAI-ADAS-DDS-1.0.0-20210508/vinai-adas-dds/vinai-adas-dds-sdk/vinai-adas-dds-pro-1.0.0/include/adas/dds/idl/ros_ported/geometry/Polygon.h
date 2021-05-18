

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Polygon.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Polygon_634212533_h
#define Polygon_634212533_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "Point32.h"
namespace adas_dds {
    namespace geometry_msgs {

        extern const char *PolygonTYPENAME;

        struct PolygonSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PolygonTypeSupport;
        class PolygonDataWriter;
        class PolygonDataReader;
        #endif
        class Polygon 
        {
          public:
            typedef struct PolygonSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PolygonTypeSupport TypeSupport;
            typedef PolygonDataWriter DataWriter;
            typedef PolygonDataReader DataReader;
            #endif

            adas_dds::geometry_msgs::Point32Seq  points ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Polygon_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Polygon_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Polygon_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Polygon_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PolygonSeq, Polygon);

        NDDSUSERDllExport
        RTIBool Polygon_initialize(
            Polygon* self);

        NDDSUSERDllExport
        RTIBool Polygon_initialize_ex(
            Polygon* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Polygon_initialize_w_params(
            Polygon* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Polygon_finalize_w_return(
            Polygon* self);

        NDDSUSERDllExport
        void Polygon_finalize(
            Polygon* self);

        NDDSUSERDllExport
        void Polygon_finalize_ex(
            Polygon* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Polygon_finalize_w_params(
            Polygon* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Polygon_finalize_optional_members(
            Polygon* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Polygon_copy(
            Polygon* dst,
            const Polygon* src);

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
        struct type_code<adas_dds::geometry_msgs::Polygon> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Polygon */

