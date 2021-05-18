

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointXYZI.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PointXYZI_830974386_h
#define PointXYZI_830974386_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {

    extern const char *PointXYZITYPENAME;

    struct PointXYZISeq;
    #ifndef NDDS_STANDALONE_TYPE
    class PointXYZITypeSupport;
    class PointXYZIDataWriter;
    class PointXYZIDataReader;
    #endif
    class PointXYZI 
    {
      public:
        typedef struct PointXYZISeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef PointXYZITypeSupport TypeSupport;
        typedef PointXYZIDataWriter DataWriter;
        typedef PointXYZIDataReader DataReader;
        #endif

        DDS_Float   x ;
        DDS_Float   y ;
        DDS_Float   z ;
        DDS_Float   intensity ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* PointXYZI_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PointXYZI_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PointXYZI_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PointXYZI_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PointXYZISeq, PointXYZI);

    NDDSUSERDllExport
    RTIBool PointXYZI_initialize(
        PointXYZI* self);

    NDDSUSERDllExport
    RTIBool PointXYZI_initialize_ex(
        PointXYZI* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PointXYZI_initialize_w_params(
        PointXYZI* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PointXYZI_finalize_w_return(
        PointXYZI* self);

    NDDSUSERDllExport
    void PointXYZI_finalize(
        PointXYZI* self);

    NDDSUSERDllExport
    void PointXYZI_finalize_ex(
        PointXYZI* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PointXYZI_finalize_w_params(
        PointXYZI* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PointXYZI_finalize_optional_members(
        PointXYZI* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PointXYZI_copy(
        PointXYZI* dst,
        const PointXYZI* src);

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
        struct type_code<adas_dds::PointXYZI> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PointXYZI */

