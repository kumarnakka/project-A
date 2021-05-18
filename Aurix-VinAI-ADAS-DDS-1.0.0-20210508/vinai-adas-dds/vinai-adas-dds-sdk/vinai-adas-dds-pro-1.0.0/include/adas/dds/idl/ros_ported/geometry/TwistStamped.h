

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TwistStamped.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TwistStamped_1158951440_h
#define TwistStamped_1158951440_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "Twist.h"
namespace adas_dds {
    namespace geometry_msgs {

        extern const char *TwistStampedTYPENAME;

        struct TwistStampedSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class TwistStampedTypeSupport;
        class TwistStampedDataWriter;
        class TwistStampedDataReader;
        #endif
        class TwistStamped 
        {
          public:
            typedef struct TwistStampedSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef TwistStampedTypeSupport TypeSupport;
            typedef TwistStampedDataWriter DataWriter;
            typedef TwistStampedDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            adas_dds::geometry_msgs::Twist   twist ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* TwistStamped_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *TwistStamped_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *TwistStamped_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *TwistStamped_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(TwistStampedSeq, TwistStamped);

        NDDSUSERDllExport
        RTIBool TwistStamped_initialize(
            TwistStamped* self);

        NDDSUSERDllExport
        RTIBool TwistStamped_initialize_ex(
            TwistStamped* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool TwistStamped_initialize_w_params(
            TwistStamped* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool TwistStamped_finalize_w_return(
            TwistStamped* self);

        NDDSUSERDllExport
        void TwistStamped_finalize(
            TwistStamped* self);

        NDDSUSERDllExport
        void TwistStamped_finalize_ex(
            TwistStamped* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void TwistStamped_finalize_w_params(
            TwistStamped* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void TwistStamped_finalize_optional_members(
            TwistStamped* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool TwistStamped_copy(
            TwistStamped* dst,
            const TwistStamped* src);

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
        struct type_code<adas_dds::geometry_msgs::TwistStamped> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* TwistStamped */

