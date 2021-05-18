

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Obstacles2D.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Obstacles2D_1531937460_h
#define Obstacles2D_1531937460_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "Obstacle2D.h"
namespace adas_dds {

    extern const char *Obstacles2DTYPENAME;

    struct Obstacles2DSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class Obstacles2DTypeSupport;
    class Obstacles2DDataWriter;
    class Obstacles2DDataReader;
    #endif
    class Obstacles2D 
    {
      public:
        typedef struct Obstacles2DSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef Obstacles2DTypeSupport TypeSupport;
        typedef Obstacles2DDataWriter DataWriter;
        typedef Obstacles2DDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        adas_dds::Obstacle2DSeq  obstacles ;
        DDS_UnsignedLong   num ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Obstacles2D_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Obstacles2D_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Obstacles2D_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Obstacles2D_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(Obstacles2DSeq, Obstacles2D);

    NDDSUSERDllExport
    RTIBool Obstacles2D_initialize(
        Obstacles2D* self);

    NDDSUSERDllExport
    RTIBool Obstacles2D_initialize_ex(
        Obstacles2D* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Obstacles2D_initialize_w_params(
        Obstacles2D* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Obstacles2D_finalize_w_return(
        Obstacles2D* self);

    NDDSUSERDllExport
    void Obstacles2D_finalize(
        Obstacles2D* self);

    NDDSUSERDllExport
    void Obstacles2D_finalize_ex(
        Obstacles2D* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Obstacles2D_finalize_w_params(
        Obstacles2D* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Obstacles2D_finalize_optional_members(
        Obstacles2D* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Obstacles2D_copy(
        Obstacles2D* dst,
        const Obstacles2D* src);

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
        struct type_code<adas_dds::Obstacles2D> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Obstacles2D */

