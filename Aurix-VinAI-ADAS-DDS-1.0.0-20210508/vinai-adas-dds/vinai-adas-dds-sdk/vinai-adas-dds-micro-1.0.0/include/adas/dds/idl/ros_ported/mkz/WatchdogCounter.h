/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WatchdogCounter.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef WatchdogCounter_1549973033_h
#define WatchdogCounter_1549973033_h

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

        typedef enum WatchdogCounter_Source
        {
            SOURCE_NONE ,      
            OTHER_BRAKE ,      
            OTHER_THROTTLE ,      
            OTHER_STEERING ,      
            BRAKE_COUNTER ,      
            BRAKE_DISABLED ,      
            BRAKE_COMMAND ,      
            BRAKE_REPORT ,      
            THROTTLE_COUNTER ,      
            THROTTLE_DISABLED ,      
            THROTTLE_COMMAND ,      
            THROTTLE_REPORT ,      
            STEERING_COUNTER ,      
            STEERING_DISABLED ,      
            STEERING_COMMAND ,      
            STEERING_REPORT      
        } WatchdogCounter_Source;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* WatchdogCounter_Source_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *WatchdogCounter_Source_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *WatchdogCounter_Source_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T WatchdogCounter_Source
        #define TSeq WatchdogCounter_SourceSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T WatchdogCounter_Source
        #define TSeq WatchdogCounter_SourceSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern WatchdogCounter_Source*
        WatchdogCounter_Source_create();

        NDDSUSERDllExport extern void
        WatchdogCounter_Source_delete(WatchdogCounter_Source* sample);

        NDDSUSERDllExport
        RTIBool WatchdogCounter_Source_initialize(
            WatchdogCounter_Source* self);

        NDDSUSERDllExport
        RTIBool WatchdogCounter_Source_initialize_ex(
            WatchdogCounter_Source* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool WatchdogCounter_Source_initialize_w_params(
            WatchdogCounter_Source* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool WatchdogCounter_Source_finalize(
            WatchdogCounter_Source* self);

        NDDSUSERDllExport
        RTIBool WatchdogCounter_Source_finalize_w_return(
            WatchdogCounter_Source* self);

        NDDSUSERDllExport
        void WatchdogCounter_Source_finalize_ex(
            WatchdogCounter_Source* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void WatchdogCounter_Source_finalize_w_params(
            WatchdogCounter_Source* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void WatchdogCounter_Source_finalize_optional_members(
            WatchdogCounter_Source* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool WatchdogCounter_Source_copy(
            WatchdogCounter_Source* dst,
            const WatchdogCounter_Source* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *WatchdogCounterTYPENAME;

        struct WatchdogCounterSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class WatchdogCounterTypeSupport;
        class WatchdogCounterDataWriter;
        class WatchdogCounterDataReader;
        #endif
        class WatchdogCounter 
        {
          public:
            typedef struct WatchdogCounterSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef WatchdogCounterTypeSupport TypeSupport;
            typedef WatchdogCounterDataWriter DataWriter;
            typedef WatchdogCounterDataReader DataReader;
            #endif

            DDS_Octet   source ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* WatchdogCounter_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *WatchdogCounter_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *WatchdogCounter_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T WatchdogCounter
        #define TSeq WatchdogCounterSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T WatchdogCounter
        #define TSeq WatchdogCounterSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern WatchdogCounter*
        WatchdogCounter_create();

        NDDSUSERDllExport extern void
        WatchdogCounter_delete(WatchdogCounter* sample);

        NDDSUSERDllExport
        RTIBool WatchdogCounter_initialize(
            WatchdogCounter* self);

        NDDSUSERDllExport
        RTIBool WatchdogCounter_initialize_ex(
            WatchdogCounter* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool WatchdogCounter_initialize_w_params(
            WatchdogCounter* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool WatchdogCounter_finalize(
            WatchdogCounter* self);

        NDDSUSERDllExport
        RTIBool WatchdogCounter_finalize_w_return(
            WatchdogCounter* self);

        NDDSUSERDllExport
        void WatchdogCounter_finalize_ex(
            WatchdogCounter* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void WatchdogCounter_finalize_w_params(
            WatchdogCounter* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void WatchdogCounter_finalize_optional_members(
            WatchdogCounter* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool WatchdogCounter_copy(
            WatchdogCounter* dst,
            const WatchdogCounter* src);

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

#endif /* WatchdogCounter */

