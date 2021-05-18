

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Pedestrian.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Pedestrian_83966814_h
#define Pedestrian_83966814_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../control/Twist.h"
#include "../../ros_ported/std/Header.h"
namespace adas_dds {

    extern const char *PedestrianTYPENAME;

    struct PedestrianSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class PedestrianTypeSupport;
    class PedestrianDataWriter;
    class PedestrianDataReader;
    #endif
    class Pedestrian 
    {
      public:
        typedef struct PedestrianSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef PedestrianTypeSupport TypeSupport;
        typedef PedestrianDataWriter DataWriter;
        typedef PedestrianDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::Twist   pos ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Pedestrian_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Pedestrian_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Pedestrian_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Pedestrian_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PedestrianSeq, Pedestrian);

    NDDSUSERDllExport
    RTIBool Pedestrian_initialize(
        Pedestrian* self);

    NDDSUSERDllExport
    RTIBool Pedestrian_initialize_ex(
        Pedestrian* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Pedestrian_initialize_w_params(
        Pedestrian* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Pedestrian_finalize_w_return(
        Pedestrian* self);

    NDDSUSERDllExport
    void Pedestrian_finalize(
        Pedestrian* self);

    NDDSUSERDllExport
    void Pedestrian_finalize_ex(
        Pedestrian* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Pedestrian_finalize_w_params(
        Pedestrian* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Pedestrian_finalize_optional_members(
        Pedestrian* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Pedestrian_copy(
        Pedestrian* dst,
        const Pedestrian* src);

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
        struct type_code<adas_dds::Pedestrian> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Pedestrian */

