/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParkingBrake.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef ParkingBrake_2119277955_h
#define ParkingBrake_2119277955_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas_dds {

    namespace dbw_mkz_msgs {

        extern const char *ParkingBrakeTYPENAME;

        struct ParkingBrakeSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class ParkingBrakeTypeSupport;
        class ParkingBrakeDataWriter;
        class ParkingBrakeDataReader;
        #endif
        class ParkingBrake 
        {
          public:
            typedef struct ParkingBrakeSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef ParkingBrakeTypeSupport TypeSupport;
            typedef ParkingBrakeDataWriter DataWriter;
            typedef ParkingBrakeDataReader DataReader;
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
        NDDSUSERDllExport DDS_TypeCode* ParkingBrake_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *ParkingBrake_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *ParkingBrake_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T ParkingBrake
        #define TSeq ParkingBrakeSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T ParkingBrake
        #define TSeq ParkingBrakeSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern ParkingBrake*
        ParkingBrake_create();

        NDDSUSERDllExport extern void
        ParkingBrake_delete(ParkingBrake* sample);

        NDDSUSERDllExport
        RTIBool ParkingBrake_initialize(
            ParkingBrake* self);

        NDDSUSERDllExport
        RTIBool ParkingBrake_initialize_ex(
            ParkingBrake* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool ParkingBrake_initialize_w_params(
            ParkingBrake* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool ParkingBrake_finalize(
            ParkingBrake* self);

        NDDSUSERDllExport
        RTIBool ParkingBrake_finalize_w_return(
            ParkingBrake* self);

        NDDSUSERDllExport
        void ParkingBrake_finalize_ex(
            ParkingBrake* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void ParkingBrake_finalize_w_params(
            ParkingBrake* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void ParkingBrake_finalize_optional_members(
            ParkingBrake* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool ParkingBrake_copy(
            ParkingBrake* dst,
            const ParkingBrake* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

    } /* namespace dbw_mkz_msgs  */

} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ParkingBrake */

