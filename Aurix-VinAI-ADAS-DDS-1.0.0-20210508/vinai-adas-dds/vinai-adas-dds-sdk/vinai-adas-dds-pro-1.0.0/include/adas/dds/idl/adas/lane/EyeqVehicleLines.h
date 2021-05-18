

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EyeqVehicleLines.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef EyeqVehicleLines_710963952_h
#define EyeqVehicleLines_710963952_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "EyeqVehicleLine.h"
namespace adas_dds {

    extern const char *EyeqVehicleLinesTYPENAME;

    struct EyeqVehicleLinesSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class EyeqVehicleLinesTypeSupport;
    class EyeqVehicleLinesDataWriter;
    class EyeqVehicleLinesDataReader;
    #endif
    class EyeqVehicleLines 
    {
      public:
        typedef struct EyeqVehicleLinesSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef EyeqVehicleLinesTypeSupport TypeSupport;
        typedef EyeqVehicleLinesDataWriter DataWriter;
        typedef EyeqVehicleLinesDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::EyeqVehicleLineSeq  lines ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* EyeqVehicleLines_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *EyeqVehicleLines_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EyeqVehicleLines_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EyeqVehicleLines_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(EyeqVehicleLinesSeq, EyeqVehicleLines);

    NDDSUSERDllExport
    RTIBool EyeqVehicleLines_initialize(
        EyeqVehicleLines* self);

    NDDSUSERDllExport
    RTIBool EyeqVehicleLines_initialize_ex(
        EyeqVehicleLines* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool EyeqVehicleLines_initialize_w_params(
        EyeqVehicleLines* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool EyeqVehicleLines_finalize_w_return(
        EyeqVehicleLines* self);

    NDDSUSERDllExport
    void EyeqVehicleLines_finalize(
        EyeqVehicleLines* self);

    NDDSUSERDllExport
    void EyeqVehicleLines_finalize_ex(
        EyeqVehicleLines* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void EyeqVehicleLines_finalize_w_params(
        EyeqVehicleLines* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void EyeqVehicleLines_finalize_optional_members(
        EyeqVehicleLines* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool EyeqVehicleLines_copy(
        EyeqVehicleLines* dst,
        const EyeqVehicleLines* src);

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
        struct type_code<adas_dds::EyeqVehicleLines> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* EyeqVehicleLines */

