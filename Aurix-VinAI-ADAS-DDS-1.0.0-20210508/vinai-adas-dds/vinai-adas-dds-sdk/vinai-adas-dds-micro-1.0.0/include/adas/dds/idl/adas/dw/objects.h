/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from objects.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef objects_1260807792_h
#define objects_1260807792_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "lane.h"

#include "object.h"

namespace adas_dds {

    namespace dw {

        extern const char *ObjectsTYPENAME;

        struct ObjectsSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class ObjectsTypeSupport;
        class ObjectsDataWriter;
        class ObjectsDataReader;
        #endif
        class Objects 
        {
          public:
            typedef struct ObjectsSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef ObjectsTypeSupport TypeSupport;
            typedef ObjectsDataWriter DataWriter;
            typedef ObjectsDataReader DataReader;
            #endif

            DDS_UnsignedLong   timestamp ;
            DDS_Short   camera_id ;
            adas_dds::dw::objectSeq  object_list ;
            adas_dds::dw::LaneSeq  lane_list ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Objects_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Objects_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Objects_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Objects
        #define TSeq ObjectsSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Objects
        #define TSeq ObjectsSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Objects*
        Objects_create();

        NDDSUSERDllExport extern void
        Objects_delete(Objects* sample);

        NDDSUSERDllExport
        RTIBool Objects_initialize(
            Objects* self);

        NDDSUSERDllExport
        RTIBool Objects_initialize_ex(
            Objects* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Objects_initialize_w_params(
            Objects* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Objects_finalize(
            Objects* self);

        NDDSUSERDllExport
        RTIBool Objects_finalize_w_return(
            Objects* self);

        NDDSUSERDllExport
        void Objects_finalize_ex(
            Objects* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Objects_finalize_w_params(
            Objects* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Objects_finalize_optional_members(
            Objects* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Objects_copy(
            Objects* dst,
            const Objects* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

    } /* namespace dw  */

} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* objects */

