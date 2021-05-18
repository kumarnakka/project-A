/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraImage.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef CameraImage_787820529_h
#define CameraImage_787820529_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace adas {

    namespace dds {

        static const DDS_Long MAX_IMAGE_SIZE = (1920*1208*3);

        typedef enum ImageType
        {
            RGB  = 0,      
            RGBA  = 1,      
            YUV  = 2     
        } ImageType;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* ImageType_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *ImageType_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *ImageType_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T ImageType
        #define TSeq ImageTypeSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T ImageType
        #define TSeq ImageTypeSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern ImageType*
        ImageType_create();

        NDDSUSERDllExport extern void
        ImageType_delete(ImageType* sample);

        NDDSUSERDllExport
        RTIBool ImageType_initialize(
            ImageType* self);

        NDDSUSERDllExport
        RTIBool ImageType_initialize_ex(
            ImageType* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool ImageType_initialize_w_params(
            ImageType* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool ImageType_finalize(
            ImageType* self);

        NDDSUSERDllExport
        RTIBool ImageType_finalize_w_return(
            ImageType* self);

        NDDSUSERDllExport
        void ImageType_finalize_ex(
            ImageType* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void ImageType_finalize_w_params(
            ImageType* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void ImageType_finalize_optional_members(
            ImageType* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool ImageType_copy(
            ImageType* dst,
            const ImageType* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *CameraImageTYPENAME;

        struct CameraImageSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class CameraImageTypeSupport;
        class CameraImageDataWriter;
        class CameraImageDataReader;
        #endif
        class CameraImage 
        {
          public:
            typedef struct CameraImageSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef CameraImageTypeSupport TypeSupport;
            typedef CameraImageDataWriter DataWriter;
            typedef CameraImageDataReader DataReader;
            #endif

            DDS_UnsignedLong   id ;
            DDS_UnsignedLong   sec ;
            DDS_UnsignedLong   nanosec ;
            DDS_UnsignedLong   seqnum ;
            DDS_UnsignedShort   width ;
            DDS_UnsignedShort   height ;
            DDS_UnsignedShort   channel ;
            adas::dds::ImageType   type ;
            DDS_Octet   data [(adas::dds::MAX_IMAGE_SIZE)];

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* CameraImage_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *CameraImage_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *CameraImage_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T CameraImage
        #define TSeq CameraImageSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T CameraImage
        #define TSeq CameraImageSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern CameraImage*
        CameraImage_create();

        NDDSUSERDllExport extern void
        CameraImage_delete(CameraImage* sample);

        NDDSUSERDllExport
        RTIBool CameraImage_initialize(
            CameraImage* self);

        NDDSUSERDllExport
        RTIBool CameraImage_initialize_ex(
            CameraImage* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool CameraImage_initialize_w_params(
            CameraImage* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool CameraImage_finalize(
            CameraImage* self);

        NDDSUSERDllExport
        RTIBool CameraImage_finalize_w_return(
            CameraImage* self);

        NDDSUSERDllExport
        void CameraImage_finalize_ex(
            CameraImage* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void CameraImage_finalize_w_params(
            CameraImage* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void CameraImage_finalize_optional_members(
            CameraImage* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool CameraImage_copy(
            CameraImage* dst,
            const CameraImage* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

    } /* namespace dds  */

} /* namespace adas  */

#ifndef NDDS_STANDALONE_TYPE
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CameraImage */

