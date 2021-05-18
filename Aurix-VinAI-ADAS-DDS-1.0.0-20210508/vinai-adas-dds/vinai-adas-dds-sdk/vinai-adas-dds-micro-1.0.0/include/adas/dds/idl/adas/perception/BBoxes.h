/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BBoxes.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef BBoxes_1108965481_h
#define BBoxes_1108965481_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "BBox.h"

#include "../../ros_ported/std/Header.h"

#include "../../ros_ported/geometry/Pose.h"

namespace adas_dds {

    extern const char *BboxesTYPENAME;

    struct BboxesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class BboxesTypeSupport;
    class BboxesDataWriter;
    class BboxesDataReader;
    #endif
    class Bboxes 
    {
      public:
        typedef struct BboxesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef BboxesTypeSupport TypeSupport;
        typedef BboxesDataWriter DataWriter;
        typedef BboxesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::geometry_msgs::Pose   vehicle_pose ;
        adas_dds::BoxSeq  bboxes ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Bboxes_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Bboxes_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Bboxes_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Bboxes
    #define TSeq BboxesSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Bboxes
    #define TSeq BboxesSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Bboxes*
    Bboxes_create();

    NDDSUSERDllExport extern void
    Bboxes_delete(Bboxes* sample);

    NDDSUSERDllExport
    RTIBool Bboxes_initialize(
        Bboxes* self);

    NDDSUSERDllExport
    RTIBool Bboxes_initialize_ex(
        Bboxes* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Bboxes_initialize_w_params(
        Bboxes* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Bboxes_finalize(
        Bboxes* self);

    NDDSUSERDllExport
    RTIBool Bboxes_finalize_w_return(
        Bboxes* self);

    NDDSUSERDllExport
    void Bboxes_finalize_ex(
        Bboxes* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Bboxes_finalize_w_params(
        Bboxes* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Bboxes_finalize_optional_members(
        Bboxes* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Bboxes_copy(
        Bboxes* dst,
        const Bboxes* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* BBoxes */

