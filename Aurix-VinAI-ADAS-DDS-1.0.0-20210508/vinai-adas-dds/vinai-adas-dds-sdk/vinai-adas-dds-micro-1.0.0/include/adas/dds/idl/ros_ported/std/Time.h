/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Time.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Time_2013853848_h
#define Time_2013853848_h

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

    namespace std_msgs {

        extern const char *TimeTYPENAME;

        struct TimeSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class TimeTypeSupport;
        class TimeDataWriter;
        class TimeDataReader;
        #endif
        class Time 
        {
          public:
            typedef struct TimeSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef TimeTypeSupport TypeSupport;
            typedef TimeDataWriter DataWriter;
            typedef TimeDataReader DataReader;
            #endif

            DDS_UnsignedLong   sec ;
            DDS_UnsignedLong   nsec ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Time_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Time_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Time_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Time
        #define TSeq TimeSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Time
        #define TSeq TimeSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Time*
        Time_create();

        NDDSUSERDllExport extern void
        Time_delete(Time* sample);

        NDDSUSERDllExport
        RTIBool Time_initialize(
            Time* self);

        NDDSUSERDllExport
        RTIBool Time_initialize_ex(
            Time* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Time_initialize_w_params(
            Time* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Time_finalize(
            Time* self);

        NDDSUSERDllExport
        RTIBool Time_finalize_w_return(
            Time* self);

        NDDSUSERDllExport
        void Time_finalize_ex(
            Time* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Time_finalize_w_params(
            Time* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Time_finalize_optional_members(
            Time* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Time_copy(
            Time* dst,
            const Time* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

    } /* namespace std_msgs  */

} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Time */

