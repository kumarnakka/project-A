

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Quaternion.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Quaternion_1529911567_h
#define Quaternion_1529911567_h

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

        extern const char *QuaternionTYPENAME;

        struct QuaternionSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class QuaternionTypeSupport;
        class QuaternionDataWriter;
        class QuaternionDataReader;
        #endif
        class Quaternion 
        {
          public:
            typedef struct QuaternionSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef QuaternionTypeSupport TypeSupport;
            typedef QuaternionDataWriter DataWriter;
            typedef QuaternionDataReader DataReader;
            #endif

            DDS_Double   x ;
            DDS_Double   y ;
            DDS_Double   z ;
            DDS_Double   w ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Quaternion_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Quaternion_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Quaternion_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Quaternion_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(QuaternionSeq, Quaternion);

        NDDSUSERDllExport
        RTIBool Quaternion_initialize(
            Quaternion* self);

        NDDSUSERDllExport
        RTIBool Quaternion_initialize_ex(
            Quaternion* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Quaternion_initialize_w_params(
            Quaternion* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Quaternion_finalize_w_return(
            Quaternion* self);

        NDDSUSERDllExport
        void Quaternion_finalize(
            Quaternion* self);

        NDDSUSERDllExport
        void Quaternion_finalize_ex(
            Quaternion* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Quaternion_finalize_w_params(
            Quaternion* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Quaternion_finalize_optional_members(
            Quaternion* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Quaternion_copy(
            Quaternion* dst,
            const Quaternion* src);

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
        struct type_code<adas_dds::geometry_msgs::Quaternion> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Quaternion */

