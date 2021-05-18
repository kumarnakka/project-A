

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BBoxes.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BBoxes_1108965481_h
#define BBoxes_1108965481_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Bboxes_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(BboxesSeq, Bboxes);

    NDDSUSERDllExport
    RTIBool Bboxes_initialize(
        Bboxes* self);

    NDDSUSERDllExport
    RTIBool Bboxes_initialize_ex(
        Bboxes* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Bboxes_initialize_w_params(
        Bboxes* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Bboxes_finalize_w_return(
        Bboxes* self);

    NDDSUSERDllExport
    void Bboxes_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::Bboxes> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* BBoxes */

