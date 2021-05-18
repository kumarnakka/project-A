

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Path.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Path_1297919671_h
#define Path_1297919671_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
#include "PoseStamped.h"
namespace adas_dds {
    namespace nav_msgs {

        extern const char *PathTYPENAME;

        struct PathSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class PathTypeSupport;
        class PathDataWriter;
        class PathDataReader;
        #endif
        class Path 
        {
          public:
            typedef struct PathSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef PathTypeSupport TypeSupport;
            typedef PathDataWriter DataWriter;
            typedef PathDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            adas_dds::geometry_msgs::PoseStampedSeq  poses ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Path_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Path_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Path_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Path_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PathSeq, Path);

        NDDSUSERDllExport
        RTIBool Path_initialize(
            Path* self);

        NDDSUSERDllExport
        RTIBool Path_initialize_ex(
            Path* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Path_initialize_w_params(
            Path* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Path_finalize_w_return(
            Path* self);

        NDDSUSERDllExport
        void Path_finalize(
            Path* self);

        NDDSUSERDllExport
        void Path_finalize_ex(
            Path* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Path_finalize_w_params(
            Path* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Path_finalize_optional_members(
            Path* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Path_copy(
            Path* dst,
            const Path* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace nav_msgs  */
} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::nav_msgs::Path> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Path */

