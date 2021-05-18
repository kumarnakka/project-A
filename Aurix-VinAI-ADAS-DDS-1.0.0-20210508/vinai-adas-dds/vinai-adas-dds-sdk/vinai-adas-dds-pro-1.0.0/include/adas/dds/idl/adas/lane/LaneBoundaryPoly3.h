

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaneBoundaryPoly3.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LaneBoundaryPoly3_2085621932_h
#define LaneBoundaryPoly3_2085621932_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "LaneBoundary.h"
namespace adas_dds {

    extern const char *LaneBoundaryPoly3TYPENAME;

    struct LaneBoundaryPoly3Seq;
    #ifndef NDDS_STANDALONE_TYPE
    class LaneBoundaryPoly3TypeSupport;
    class LaneBoundaryPoly3DataWriter;
    class LaneBoundaryPoly3DataReader;
    #endif
    class LaneBoundaryPoly3 
    {
      public:
        typedef struct LaneBoundaryPoly3Seq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef LaneBoundaryPoly3TypeSupport TypeSupport;
        typedef LaneBoundaryPoly3DataWriter DataWriter;
        typedef LaneBoundaryPoly3DataReader DataReader;
        #endif

        DDS_Double   coef0 ;
        DDS_Double   coef1 ;
        DDS_Double   coef2 ;
        DDS_Double   coef3 ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* LaneBoundaryPoly3_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LaneBoundaryPoly3_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneBoundaryPoly3_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LaneBoundaryPoly3_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LaneBoundaryPoly3Seq, LaneBoundaryPoly3);

    NDDSUSERDllExport
    RTIBool LaneBoundaryPoly3_initialize(
        LaneBoundaryPoly3* self);

    NDDSUSERDllExport
    RTIBool LaneBoundaryPoly3_initialize_ex(
        LaneBoundaryPoly3* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LaneBoundaryPoly3_initialize_w_params(
        LaneBoundaryPoly3* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LaneBoundaryPoly3_finalize_w_return(
        LaneBoundaryPoly3* self);

    NDDSUSERDllExport
    void LaneBoundaryPoly3_finalize(
        LaneBoundaryPoly3* self);

    NDDSUSERDllExport
    void LaneBoundaryPoly3_finalize_ex(
        LaneBoundaryPoly3* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LaneBoundaryPoly3_finalize_w_params(
        LaneBoundaryPoly3* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LaneBoundaryPoly3_finalize_optional_members(
        LaneBoundaryPoly3* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LaneBoundaryPoly3_copy(
        LaneBoundaryPoly3* dst,
        const LaneBoundaryPoly3* src);

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
        struct type_code<adas_dds::LaneBoundaryPoly3> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* LaneBoundaryPoly3 */

