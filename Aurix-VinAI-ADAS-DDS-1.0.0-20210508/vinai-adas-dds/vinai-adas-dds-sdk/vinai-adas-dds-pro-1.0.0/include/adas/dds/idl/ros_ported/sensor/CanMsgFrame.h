

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CanMsgFrame.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CanMsgFrame_1436985757_h
#define CanMsgFrame_1436985757_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
namespace adas_dds {
    namespace can_msgs {

        extern const char *FrameTYPENAME;

        struct FrameSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class FrameTypeSupport;
        class FrameDataWriter;
        class FrameDataReader;
        #endif
        class Frame 
        {
          public:
            typedef struct FrameSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef FrameTypeSupport TypeSupport;
            typedef FrameDataWriter DataWriter;
            typedef FrameDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            DDS_UnsignedLong   id ;
            DDS_Boolean   is_rtr ;
            DDS_Boolean   is_extended ;
            DDS_Boolean   is_error ;
            DDS_Octet   dlc ;
            DDS_Octet   data [8];

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Frame_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Frame_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Frame_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Frame_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(FrameSeq, Frame);

        NDDSUSERDllExport
        RTIBool Frame_initialize(
            Frame* self);

        NDDSUSERDllExport
        RTIBool Frame_initialize_ex(
            Frame* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Frame_initialize_w_params(
            Frame* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Frame_finalize_w_return(
            Frame* self);

        NDDSUSERDllExport
        void Frame_finalize(
            Frame* self);

        NDDSUSERDllExport
        void Frame_finalize_ex(
            Frame* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Frame_finalize_w_params(
            Frame* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Frame_finalize_optional_members(
            Frame* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Frame_copy(
            Frame* dst,
            const Frame* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace can_msgs  */
} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::can_msgs::Frame> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* CanMsgFrame */

