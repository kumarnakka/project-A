

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Image.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Image_1124672659_h
#define Image_1124672659_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

#include "../../ros_ported/std/Header.h"
namespace adas_dds {

    extern const char *ImageTYPENAME;

    struct ImageSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ImageTypeSupport;
    class ImageDataWriter;
    class ImageDataReader;
    #endif
    class Image 
    {
      public:
        typedef struct ImageSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ImageTypeSupport TypeSupport;
        typedef ImageDataWriter DataWriter;
        typedef ImageDataReader DataReader;
        #endif

        adas_dds::std_msgs::Header   header ;
        DDS_UnsignedShort   meta ;
        DDS_UnsignedShort   width ;
        DDS_UnsignedShort   height ;
        DDS_OctetSeq  data ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Image_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Image_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Image_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Image_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ImageSeq, Image);

    NDDSUSERDllExport
    RTIBool Image_initialize(
        Image* self);

    NDDSUSERDllExport
    RTIBool Image_initialize_ex(
        Image* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Image_initialize_w_params(
        Image* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Image_finalize_w_return(
        Image* self);

    NDDSUSERDllExport
    void Image_finalize(
        Image* self);

    NDDSUSERDllExport
    void Image_finalize_ex(
        Image* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Image_finalize_w_params(
        Image* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Image_finalize_optional_members(
        Image* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Image_copy(
        Image* dst,
        const Image* src);

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
        struct type_code<adas_dds::Image> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Image */

