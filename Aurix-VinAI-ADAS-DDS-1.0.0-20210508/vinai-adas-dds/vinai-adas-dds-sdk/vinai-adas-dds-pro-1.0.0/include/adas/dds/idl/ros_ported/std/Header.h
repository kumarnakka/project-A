

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Header.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Header_325112074_h
#define Header_325112074_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
            DDS_Char *   frame_id ;

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
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Header_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(HeaderSeq, Header);

        NDDSUSERDllExport
        RTIBool Header_initialize(
            Header* self);

        NDDSUSERDllExport
        RTIBool Header_initialize_ex(
            Header* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Header_initialize_w_params(
            Header* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Header_finalize_w_return(
            Header* self);

        NDDSUSERDllExport
        void Header_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::std_msgs::Header> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Header */

