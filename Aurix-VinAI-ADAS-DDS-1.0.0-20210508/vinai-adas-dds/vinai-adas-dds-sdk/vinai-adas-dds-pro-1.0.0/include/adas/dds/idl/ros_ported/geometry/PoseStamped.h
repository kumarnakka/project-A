

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PoseStamped.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PoseStamped_1754545695_h
#define PoseStamped_1754545695_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "Pose.h"
namespace adas_dds {
    namespace geometry_msgs {

        extern const char *PoseStampedTYPENAME;

        struct PoseStampedSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PoseStampedTypeSupport;
        class PoseStampedDataWriter;
        class PoseStampedDataReader;
        #endif
        class PoseStamped 
        {
          public:
            typedef struct PoseStampedSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PoseStampedTypeSupport TypeSupport;
            typedef PoseStampedDataWriter DataWriter;
            typedef PoseStampedDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            adas_dds::geometry_msgs::Pose   pose ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* PoseStamped_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PoseStamped_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PoseStamped_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PoseStamped_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PoseStampedSeq, PoseStamped);

        NDDSUSERDllExport
        RTIBool PoseStamped_initialize(
            PoseStamped* self);

        NDDSUSERDllExport
        RTIBool PoseStamped_initialize_ex(
            PoseStamped* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PoseStamped_initialize_w_params(
            PoseStamped* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PoseStamped_finalize_w_return(
            PoseStamped* self);

        NDDSUSERDllExport
        void PoseStamped_finalize(
            PoseStamped* self);

        NDDSUSERDllExport
        void PoseStamped_finalize_ex(
            PoseStamped* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PoseStamped_finalize_w_params(
            PoseStamped* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PoseStamped_finalize_optional_members(
            PoseStamped* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PoseStamped_copy(
            PoseStamped* dst,
            const PoseStamped* src);

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
        struct type_code<adas_dds::geometry_msgs::PoseStamped> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PoseStamped */

