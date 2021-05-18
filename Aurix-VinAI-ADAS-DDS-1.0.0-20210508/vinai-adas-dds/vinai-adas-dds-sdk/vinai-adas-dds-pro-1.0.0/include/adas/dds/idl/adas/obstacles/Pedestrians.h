

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Pedestrians.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Pedestrians_1753974072_h
#define Pedestrians_1753974072_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "Pedestrian.h"
namespace adas_dds {

    extern const char *PedestriansTYPENAME;

    struct PedestriansSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class PedestriansTypeSupport;
    class PedestriansDataWriter;
    class PedestriansDataReader;
    #endif
    class Pedestrians 
    {
      public:
        typedef struct PedestriansSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef PedestriansTypeSupport TypeSupport;
        typedef PedestriansDataWriter DataWriter;
        typedef PedestriansDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::PedestrianSeq  pedestrian_list ;
        DDS_Long   num ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Pedestrians_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Pedestrians_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Pedestrians_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Pedestrians_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PedestriansSeq, Pedestrians);

    NDDSUSERDllExport
    RTIBool Pedestrians_initialize(
        Pedestrians* self);

    NDDSUSERDllExport
    RTIBool Pedestrians_initialize_ex(
        Pedestrians* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Pedestrians_initialize_w_params(
        Pedestrians* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Pedestrians_finalize_w_return(
        Pedestrians* self);

    NDDSUSERDllExport
    void Pedestrians_finalize(
        Pedestrians* self);

    NDDSUSERDllExport
    void Pedestrians_finalize_ex(
        Pedestrians* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Pedestrians_finalize_w_params(
        Pedestrians* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Pedestrians_finalize_optional_members(
        Pedestrians* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Pedestrians_copy(
        Pedestrians* dst,
        const Pedestrians* src);

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
        struct type_code<adas_dds::Pedestrians> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Pedestrians */

