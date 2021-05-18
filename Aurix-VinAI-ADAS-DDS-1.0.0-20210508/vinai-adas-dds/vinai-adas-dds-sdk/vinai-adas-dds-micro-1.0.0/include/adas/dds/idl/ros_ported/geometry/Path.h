/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Path.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Path_1297919671_h
#define Path_1297919671_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Path
        #define TSeq PathSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Path
        #define TSeq PathSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Path*
        Path_create();

        NDDSUSERDllExport extern void
        Path_delete(Path* sample);

        NDDSUSERDllExport
        RTIBool Path_initialize(
            Path* self);

        NDDSUSERDllExport
        RTIBool Path_initialize_ex(
            Path* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Path_initialize_w_params(
            Path* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Path_finalize(
            Path* self);

        NDDSUSERDllExport
        RTIBool Path_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Path */

