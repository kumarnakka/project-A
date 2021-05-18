/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Image.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Image_1124672659_h
#define Image_1124672659_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
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
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Image
    #define TSeq ImageSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Image
    #define TSeq ImageSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Image*
    Image_create();

    NDDSUSERDllExport extern void
    Image_delete(Image* sample);

    NDDSUSERDllExport
    RTIBool Image_initialize(
        Image* self);

    NDDSUSERDllExport
    RTIBool Image_initialize_ex(
        Image* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Image_initialize_w_params(
        Image* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Image_finalize(
        Image* self);

    NDDSUSERDllExport
    RTIBool Image_finalize_w_return(
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
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Image */

