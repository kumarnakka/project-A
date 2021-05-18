

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from lane.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef lane_1617544613_h
#define lane_1617544613_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {
    namespace dw {

        extern const char *PointTYPENAME;

        struct PointSeq;
        class Point 
        {
          public:
            typedef struct PointSeq Seq;

            DDS_Float   x ;
            DDS_Float   y ;

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

        extern const char *LaneTYPENAME;

        struct LaneSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class LaneTypeSupport;
        class LaneDataWriter;
        class LaneDataReader;
        #endif
        class Lane 
        {
          public:
            typedef struct LaneSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef LaneTypeSupport TypeSupport;
            typedef LaneDataWriter DataWriter;
            typedef LaneDataReader DataReader;
            #endif

            DDS_Float   confidence ;
            DDS_Short   line_type ;
            adas_dds::dw::PointSeq  point_list ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Lane_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Lane_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Lane_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Lane_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(LaneSeq, Lane);

        NDDSUSERDllExport
        RTIBool Lane_initialize(
            Lane* self);

        NDDSUSERDllExport
        RTIBool Lane_initialize_ex(
            Lane* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Lane_initialize_w_params(
            Lane* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Lane_finalize_w_return(
            Lane* self);

        NDDSUSERDllExport
        void Lane_finalize(
            Lane* self);

        NDDSUSERDllExport
        void Lane_finalize_ex(
            Lane* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Lane_finalize_w_params(
            Lane* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Lane_finalize_optional_members(
            Lane* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Lane_copy(
            Lane* dst,
            const Lane* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace dw  */
} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::dw::Point> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<adas_dds::dw::Lane> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* lane */

