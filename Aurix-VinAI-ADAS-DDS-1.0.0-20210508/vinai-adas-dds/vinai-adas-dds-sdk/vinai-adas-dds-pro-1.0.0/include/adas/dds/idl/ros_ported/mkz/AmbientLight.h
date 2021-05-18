

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AmbientLight.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef AmbientLight_670832398_h
#define AmbientLight_670832398_h

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

        extern const char *AmbientLightTYPENAME;

        struct AmbientLightSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class AmbientLightTypeSupport;
        class AmbientLightDataWriter;
        class AmbientLightDataReader;
        #endif
        class AmbientLight 
        {
          public:
            typedef struct AmbientLightSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef AmbientLightTypeSupport TypeSupport;
            typedef AmbientLightDataWriter DataWriter;
            typedef AmbientLightDataReader DataReader;
            #endif

            DDS_Octet   status ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* AmbientLight_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *AmbientLight_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *AmbientLight_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *AmbientLight_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(AmbientLightSeq, AmbientLight);

        NDDSUSERDllExport
        RTIBool AmbientLight_initialize(
            AmbientLight* self);

        NDDSUSERDllExport
        RTIBool AmbientLight_initialize_ex(
            AmbientLight* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool AmbientLight_initialize_w_params(
            AmbientLight* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool AmbientLight_finalize_w_return(
            AmbientLight* self);

        NDDSUSERDllExport
        void AmbientLight_finalize(
            AmbientLight* self);

        NDDSUSERDllExport
        void AmbientLight_finalize_ex(
            AmbientLight* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void AmbientLight_finalize_w_params(
            AmbientLight* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void AmbientLight_finalize_optional_members(
            AmbientLight* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool AmbientLight_copy(
            AmbientLight* dst,
            const AmbientLight* src);

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
        struct type_code<adas_dds::dbw_mkz_msgs::AmbientLight> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* AmbientLight */

