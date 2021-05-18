/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EyeqVehicleLines.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef EyeqVehicleLines_710963952_h
#define EyeqVehicleLines_710963952_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T EyeqVehicleLines
    #define TSeq EyeqVehicleLinesSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T EyeqVehicleLines
    #define TSeq EyeqVehicleLinesSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern EyeqVehicleLines*
    EyeqVehicleLines_create();

    NDDSUSERDllExport extern void
    EyeqVehicleLines_delete(EyeqVehicleLines* sample);

    NDDSUSERDllExport
    RTIBool EyeqVehicleLines_initialize(
        EyeqVehicleLines* self);

    NDDSUSERDllExport
    RTIBool EyeqVehicleLines_initialize_ex(
        EyeqVehicleLines* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool EyeqVehicleLines_initialize_w_params(
        EyeqVehicleLines* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool EyeqVehicleLines_finalize(
        EyeqVehicleLines* self);

    NDDSUSERDllExport
    RTIBool EyeqVehicleLines_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* EyeqVehicleLines */

