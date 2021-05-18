

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GearReject.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GearReject_1180477576_h
#define GearReject_1180477576_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "Gear.h"
namespace adas_dds {
    namespace dbw_mkz_msgs {
        typedef enum GearReject_Value
        {
            NONE ,      
            SHIFT_IN_PROGRESS ,      
            OVERRIDE ,      
            ROTARY_LOW ,      
            ROTARY_PARK ,      
            VEHICLE      
        } GearReject_Value;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* GearReject_Value_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *GearReject_Value_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *GearReject_Value_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *GearReject_Value_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(GearReject_ValueSeq, GearReject_Value);

        NDDSUSERDllExport
        RTIBool GearReject_Value_initialize(
            GearReject_Value* self);

        NDDSUSERDllExport
        RTIBool GearReject_Value_initialize_ex(
            GearReject_Value* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool GearReject_Value_initialize_w_params(
            GearReject_Value* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool GearReject_Value_finalize_w_return(
            GearReject_Value* self);

        NDDSUSERDllExport
        void GearReject_Value_finalize(
            GearReject_Value* self);

        NDDSUSERDllExport
        void GearReject_Value_finalize_ex(
            GearReject_Value* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void GearReject_Value_finalize_w_params(
            GearReject_Value* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void GearReject_Value_finalize_optional_members(
            GearReject_Value* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool GearReject_Value_copy(
            GearReject_Value* dst,
            const GearReject_Value* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *GearRejectTYPENAME;

        struct GearRejectSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class GearRejectTypeSupport;
        class GearRejectDataWriter;
        class GearRejectDataReader;
        #endif
        class GearReject 
        {
          public:
            typedef struct GearRejectSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef GearRejectTypeSupport TypeSupport;
            typedef GearRejectDataWriter DataWriter;
            typedef GearRejectDataReader DataReader;
            #endif

            DDS_Octet   value ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* GearReject_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *GearReject_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *GearReject_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *GearReject_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(GearRejectSeq, GearReject);

        NDDSUSERDllExport
        RTIBool GearReject_initialize(
            GearReject* self);

        NDDSUSERDllExport
        RTIBool GearReject_initialize_ex(
            GearReject* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool GearReject_initialize_w_params(
            GearReject* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool GearReject_finalize_w_return(
            GearReject* self);

        NDDSUSERDllExport
        void GearReject_finalize(
            GearReject* self);

        NDDSUSERDllExport
        void GearReject_finalize_ex(
            GearReject* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void GearReject_finalize_w_params(
            GearReject* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void GearReject_finalize_optional_members(
            GearReject* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool GearReject_copy(
            GearReject* dst,
            const GearReject* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace dbw_mkz_msgs  */
} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::dbw_mkz_msgs::GearReject> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* GearReject */

