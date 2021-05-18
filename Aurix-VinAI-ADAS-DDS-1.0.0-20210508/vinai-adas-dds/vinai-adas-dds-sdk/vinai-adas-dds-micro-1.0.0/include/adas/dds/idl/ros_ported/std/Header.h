/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Header.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Header_325112074_h
#define Header_325112074_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "Time.h"

namespace adas_dds {

    namespace std_msgs {

        extern const char *HeaderTYPENAME;

        struct HeaderSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class HeaderTypeSupport;
        class HeaderDataWriter;
        class HeaderDataReader;
        #endif
        class Header 
        {
          public:
            typedef struct HeaderSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef HeaderTypeSupport TypeSupport;
            typedef HeaderDataWriter DataWriter;
            typedef HeaderDataReader DataReader;
            #endif

            DDS_UnsignedLong   seq ;
            adas_dds::std_msgs::Time   stamp ;
            DDS_String   frame_id ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Header_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Header_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Header_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Header
        #define TSeq HeaderSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Header
        #define TSeq HeaderSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Header*
        Header_create();

        NDDSUSERDllExport extern void
        Header_delete(Header* sample);

        NDDSUSERDllExport
        RTIBool Header_initialize(
            Header* self);

        NDDSUSERDllExport
        RTIBool Header_initialize_ex(
            Header* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Header_initialize_w_params(
            Header* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Header_finalize(
            Header* self);

        NDDSUSERDllExport
        RTIBool Header_finalize_w_return(
            Header* self);

        NDDSUSERDllExport
        void Header_finalize_ex(
            Header* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Header_finalize_w_params(
            Header* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Header_finalize_optional_members(
            Header* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Header_copy(
            Header* dst,
            const Header* src);

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

#endif /* Header */

