

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Cars.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Cars_69122126_h
#define Cars_69122126_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
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
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Cars_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(CarsSeq, Cars);

    NDDSUSERDllExport
    RTIBool Cars_initialize(
        Cars* self);

    NDDSUSERDllExport
    RTIBool Cars_initialize_ex(
        Cars* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Cars_initialize_w_params(
        Cars* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Cars_finalize_w_return(
        Cars* self);

    NDDSUSERDllExport
    void Cars_finalize(
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
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::Cars> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Cars */

