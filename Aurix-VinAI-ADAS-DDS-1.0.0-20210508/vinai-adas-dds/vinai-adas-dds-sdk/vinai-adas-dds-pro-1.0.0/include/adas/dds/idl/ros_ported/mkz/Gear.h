

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Gear.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Gear_1512824474_h
#define Gear_1512824474_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {
    namespace dbw_mkz_msgs {

        extern const char *GearTYPENAME;

        struct GearSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class GearTypeSupport;
        class GearDataWriter;
        class GearDataReader;
        #endif
        class Gear 
        {
          public:
            typedef struct GearSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef GearTypeSupport TypeSupport;
            typedef GearDataWriter DataWriter;
            typedef GearDataReader DataReader;
            #endif

            DDS_Octet   gear ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Gear_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Gear_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Gear_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Gear_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(GearSeq, Gear);

        NDDSUSERDllExport
        RTIBool Gear_initialize(
            Gear* self);

        NDDSUSERDllExport
        RTIBool Gear_initialize_ex(
            Gear* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Gear_initialize_w_params(
            Gear* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Gear_finalize_w_return(
            Gear* self);

        NDDSUSERDllExport
        void Gear_finalize(
            Gear* self);

        NDDSUSERDllExport
        void Gear_finalize_ex(
            Gear* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Gear_finalize_w_params(
            Gear* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Gear_finalize_optional_members(
            Gear* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Gear_copy(
            Gear* dst,
            const Gear* src);

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
        struct type_code<adas_dds::dbw_mkz_msgs::Gear> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Gear */

