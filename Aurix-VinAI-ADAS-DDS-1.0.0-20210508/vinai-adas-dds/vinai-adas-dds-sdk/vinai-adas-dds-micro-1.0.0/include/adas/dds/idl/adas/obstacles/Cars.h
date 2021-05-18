/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Cars.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Cars_69122126_h
#define Cars_69122126_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "Car.h"

namespace adas_dds {

    extern const char *CarsTYPENAME;

    struct CarsSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class CarsTypeSupport;
    class CarsDataWriter;
    class CarsDataReader;
    #endif
    class Cars 
    {
      public:
        typedef struct CarsSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef CarsTypeSupport TypeSupport;
        typedef CarsDataWriter DataWriter;
        typedef CarsDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::CarSeq  car_list ;
        DDS_Long   num ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Cars_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Cars_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Cars_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Cars
    #define TSeq CarsSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Cars
    #define TSeq CarsSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Cars*
    Cars_create();

    NDDSUSERDllExport extern void
    Cars_delete(Cars* sample);

    NDDSUSERDllExport
    RTIBool Cars_initialize(
        Cars* self);

    NDDSUSERDllExport
    RTIBool Cars_initialize_ex(
        Cars* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Cars_initialize_w_params(
        Cars* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Cars_finalize(
        Cars* self);

    NDDSUSERDllExport
    RTIBool Cars_finalize_w_return(
        Cars* self);

    NDDSUSERDllExport
    void Cars_finalize_ex(
        Cars* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Cars_finalize_w_params(
        Cars* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Cars_finalize_optional_members(
        Cars* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Cars_copy(
        Cars* dst,
        const Cars* src);

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

#endif /* Cars */

