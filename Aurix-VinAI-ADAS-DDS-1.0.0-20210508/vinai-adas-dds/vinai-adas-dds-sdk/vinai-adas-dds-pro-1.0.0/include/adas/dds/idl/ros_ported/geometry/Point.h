

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Point.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Point_727602097_h
#define Point_727602097_h

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

        extern const char *PointTYPENAME;

        struct PointSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PointTypeSupport;
        class PointDataWriter;
        class PointDataReader;
        #endif
        class Point 
        {
          public:
            typedef struct PointSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PointTypeSupport TypeSupport;
            typedef PointDataWriter DataWriter;
            typedef PointDataReader DataReader;
            #endif

            DDS_Double   x ;
            DDS_Double   y ;
            DDS_Double   z ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Point_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Point_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Point_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Point_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PointSeq, Point);

        NDDSUSERDllExport
        RTIBool Point_initialize(
            Point* self);

        NDDSUSERDllExport
        RTIBool Point_initialize_ex(
            Point* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Point_initialize_w_params(
            Point* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Point_finalize_w_return(
            Point* self);

        NDDSUSERDllExport
        void Point_finalize(
            Point* self);

        NDDSUSERDllExport
        void Point_finalize_ex(
            Point* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Point_finalize_w_params(
            Point* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Point_finalize_optional_members(
            Point* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Point_copy(
            Point* dst,
            const Point* src);

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
        struct type_code<adas_dds::geometry_msgs::Point> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Point */

