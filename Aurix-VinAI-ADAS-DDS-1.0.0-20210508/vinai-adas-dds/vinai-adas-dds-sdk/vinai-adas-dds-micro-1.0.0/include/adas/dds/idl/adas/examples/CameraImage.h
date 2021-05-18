/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraImage.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef CameraImage_787822959_h
#define CameraImage_787822959_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#include "dds_cpp/dds_cpp_flat_data.hxx"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace common {

    static const DDS_Long IMAGE_SIZE = 8294400*3;

    typedef enum Format
    {
        RGB ,      
        HSV ,      
        YUV      
    } Format;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Format_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Format_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Format_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Format
    #define TSeq FormatSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Format
    #define TSeq FormatSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Format*
    Format_create();

    NDDSUSERDllExport extern void
    Format_delete(Format* sample);

    NDDSUSERDllExport
    RTIBool Format_initialize(
        Format* self);

    NDDSUSERDllExport
    RTIBool Format_initialize_ex(
        Format* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Format_initialize_w_params(
        Format* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Format_finalize(
        Format* self);

    NDDSUSERDllExport
    RTIBool Format_finalize_w_return(
        Format* self);

    NDDSUSERDllExport
    void Format_finalize_ex(
        Format* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Format_finalize_w_params(
        Format* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Format_finalize_optional_members(
        Format* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Format_copy(
        Format* dst,
        const Format* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

} /* namespace common  */

namespace common_flat {

    extern const char *ResolutionTYPENAME;

    struct ResolutionSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ResolutionTypeSupport;
    class ResolutionDataWriter;
    class ResolutionDataReader;
    #endif
    class NDDSUSERDllExport ResolutionConstOffset 
    : public rti::flat::FinalOffset<ResolutionConstOffset> {
      public:
        enum { required_alignment = 4 };

        static rti::flat::offset_t serialized_size(rti::flat::offset_t initial_position)
        {
            static const rti::flat::offset_t sizes[] = {8, 8, 8, 8};
            return sizes[initial_position % 4];
        }

        // Null offset
        ResolutionConstOffset()
        {
        }

        // Constructor is for internal use only
        ResolutionConstOffset(
            const rti::flat::SampleBase *sample, 
            rti::flat::offset_t offset)
            : rti::flat::FinalOffset<ResolutionConstOffset>(const_cast<rti::flat::SampleBase *>(sample), offset)
        {
        }

        DDS_Long height() const; 
        DDS_Long width() const; 
    };
    class NDDSUSERDllExport ResolutionOffset 
    : public rti::flat::FinalOffset<ResolutionOffset> {
      public:
        typedef ResolutionConstOffset ConstOffset;

        enum { required_alignment = 4 };

        static rti::flat::offset_t serialized_size(rti::flat::offset_t initial_position)
        {
            static const rti::flat::offset_t sizes[] = {8, 8, 8, 8};
            return sizes[initial_position % 4];
        }

        // Null offset
        ResolutionOffset()
        {
        }

        // Constructor is for internal use only
        ResolutionOffset(
            rti::flat::SampleBase *sample, 
            rti::flat::offset_t offset)
            : rti::flat::FinalOffset<ResolutionOffset>(sample, offset)
        {
        }

        // Const accessors
        DDS_Long height() const; 
        DDS_Long width() const; 

        // Modifiers
        bool height(DDS_Long value);
        bool width(DDS_Long value);
    };

    class Resolution : public rti::flat::Sample<ResolutionOffset> {
      public:
        typedef rti::flat::Sample<ResolutionOffset> Base;
        typedef struct ResolutionSeq Seq;
        typedef ResolutionTypeSupport TypeSupport;
        typedef ResolutionDataWriter DataWriter;
        typedef ResolutionDataReader DataReader;

        static Resolution * create_data();
    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Resolution_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Resolution_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Resolution_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Resolution
    #define TSeq ResolutionSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Resolution
    #define TSeq ResolutionSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Resolution*
    Resolution_create();

    NDDSUSERDllExport extern void
    Resolution_delete(Resolution* sample);

    NDDSUSERDllExport
    RTIBool Resolution_initialize(
        Resolution* self);

    NDDSUSERDllExport
    RTIBool Resolution_initialize_ex(
        Resolution* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Resolution_initialize_w_params(
        Resolution* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Resolution_finalize(
        Resolution* self);

    NDDSUSERDllExport
    RTIBool Resolution_finalize_w_return(
        Resolution* self);

    NDDSUSERDllExport
    void Resolution_finalize_ex(
        Resolution* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Resolution_finalize_w_params(
        Resolution* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Resolution_finalize_optional_members(
        Resolution* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Resolution_copy(
        Resolution* dst,
        const Resolution* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ResolutionPlainHelperTYPENAME;

    struct ResolutionPlainHelperSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ResolutionPlainHelperTypeSupport;
    class ResolutionPlainHelperDataWriter;
    class ResolutionPlainHelperDataReader;
    #endif
    class ResolutionPlainHelper 
    {
      public:
        typedef struct ResolutionPlainHelperSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ResolutionPlainHelperTypeSupport TypeSupport;
        typedef ResolutionPlainHelperDataWriter DataWriter;
        typedef ResolutionPlainHelperDataReader DataReader;
        #endif

        DDS_Long   height ;
        DDS_Long   width ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* ResolutionPlainHelper_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ResolutionPlainHelper_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ResolutionPlainHelper_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T ResolutionPlainHelper
    #define TSeq ResolutionPlainHelperSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T ResolutionPlainHelper
    #define TSeq ResolutionPlainHelperSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern ResolutionPlainHelper*
    ResolutionPlainHelper_create();

    NDDSUSERDllExport extern void
    ResolutionPlainHelper_delete(ResolutionPlainHelper* sample);

    NDDSUSERDllExport
    RTIBool ResolutionPlainHelper_initialize(
        ResolutionPlainHelper* self);

    NDDSUSERDllExport
    RTIBool ResolutionPlainHelper_initialize_ex(
        ResolutionPlainHelper* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ResolutionPlainHelper_initialize_w_params(
        ResolutionPlainHelper* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ResolutionPlainHelper_finalize(
        ResolutionPlainHelper* self);

    NDDSUSERDllExport
    RTIBool ResolutionPlainHelper_finalize_w_return(
        ResolutionPlainHelper* self);

    NDDSUSERDllExport
    void ResolutionPlainHelper_finalize_ex(
        ResolutionPlainHelper* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ResolutionPlainHelper_finalize_w_params(
        ResolutionPlainHelper* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ResolutionPlainHelper_finalize_optional_members(
        ResolutionPlainHelper* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ResolutionPlainHelper_copy(
        ResolutionPlainHelper* dst,
        const ResolutionPlainHelper* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

} /* namespace common_flat  */

namespace flat_types {

    extern const char *CameraImageTYPENAME;

    struct CameraImageSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class CameraImageTypeSupport;
    class CameraImageDataWriter;
    class CameraImageDataReader;
    #endif
    class NDDSUSERDllExport CameraImageConstOffset 
    : public rti::flat::FinalOffset<CameraImageConstOffset> {
      public:
        enum { required_alignment = 4 };

        static rti::flat::offset_t serialized_size(rti::flat::offset_t initial_position)
        {
            static const rti::flat::offset_t sizes[] = {24883220, 24883220, 24883220, 24883220};
            return sizes[initial_position % 4];
        }

        // Null offset
        CameraImageConstOffset()
        {
        }

        // Constructor is for internal use only
        CameraImageConstOffset(
            const rti::flat::SampleBase *sample, 
            rti::flat::offset_t offset)
            : rti::flat::FinalOffset<CameraImageConstOffset>(const_cast<rti::flat::SampleBase *>(sample), offset)
        {
        }

        DDS_LongLong timestamp() const; 
        common::Format format() const; 
        common_flat::Resolution::ConstOffset resolution() const; 
        const rti::flat::PrimitiveArrayOffset<DDS_Octet, ((common::IMAGE_SIZE))> data() const; 
    };
    class NDDSUSERDllExport CameraImageOffset 
    : public rti::flat::FinalOffset<CameraImageOffset> {
      public:
        typedef CameraImageConstOffset ConstOffset;

        enum { required_alignment = 4 };

        static rti::flat::offset_t serialized_size(rti::flat::offset_t initial_position)
        {
            static const rti::flat::offset_t sizes[] = {24883220, 24883220, 24883220, 24883220};
            return sizes[initial_position % 4];
        }

        // Null offset
        CameraImageOffset()
        {
        }

        // Constructor is for internal use only
        CameraImageOffset(
            rti::flat::SampleBase *sample, 
            rti::flat::offset_t offset)
            : rti::flat::FinalOffset<CameraImageOffset>(sample, offset)
        {
        }

        // Const accessors
        DDS_LongLong timestamp() const; 
        common::Format format() const; 
        common_flat::Resolution::ConstOffset resolution() const; 
        const rti::flat::PrimitiveArrayOffset<DDS_Octet, ((common::IMAGE_SIZE))> data() const; 

        // Modifiers
        bool timestamp(DDS_LongLong value);
        bool format(common::Format value);
        common_flat::Resolution::Offset resolution(); 
        rti::flat::PrimitiveArrayOffset<DDS_Octet, ((common::IMAGE_SIZE))> data(); 
    };

    class CameraImage : public rti::flat::Sample<CameraImageOffset> {
      public:
        typedef rti::flat::Sample<CameraImageOffset> Base;
        typedef struct CameraImageSeq Seq;
        typedef CameraImageTypeSupport TypeSupport;
        typedef CameraImageDataWriter DataWriter;
        typedef CameraImageDataReader DataReader;

        static CameraImage * create_data();
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

    extern const char *CameraImagePlainHelperTYPENAME;

    struct CameraImagePlainHelperSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class CameraImagePlainHelperTypeSupport;
    class CameraImagePlainHelperDataWriter;
    class CameraImagePlainHelperDataReader;
    #endif
    class CameraImagePlainHelper 
    {
      public:
        typedef struct CameraImagePlainHelperSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef CameraImagePlainHelperTypeSupport TypeSupport;
        typedef CameraImagePlainHelperDataWriter DataWriter;
        typedef CameraImagePlainHelperDataReader DataReader;
        #endif

        DDS_LongLong   timestamp ;
        common::Format   format ;
        common_flat::ResolutionPlainHelper   resolution ;
        DDS_Octet   data [(common::IMAGE_SIZE)];

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* CameraImagePlainHelper_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *CameraImagePlainHelper_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *CameraImagePlainHelper_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T CameraImagePlainHelper
    #define TSeq CameraImagePlainHelperSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T CameraImagePlainHelper
    #define TSeq CameraImagePlainHelperSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern CameraImagePlainHelper*
    CameraImagePlainHelper_create();

    NDDSUSERDllExport extern void
    CameraImagePlainHelper_delete(CameraImagePlainHelper* sample);

    NDDSUSERDllExport
    RTIBool CameraImagePlainHelper_initialize(
        CameraImagePlainHelper* self);

    NDDSUSERDllExport
    RTIBool CameraImagePlainHelper_initialize_ex(
        CameraImagePlainHelper* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool CameraImagePlainHelper_initialize_w_params(
        CameraImagePlainHelper* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool CameraImagePlainHelper_finalize(
        CameraImagePlainHelper* self);

    NDDSUSERDllExport
    RTIBool CameraImagePlainHelper_finalize_w_return(
        CameraImagePlainHelper* self);

    NDDSUSERDllExport
    void CameraImagePlainHelper_finalize_ex(
        CameraImagePlainHelper* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void CameraImagePlainHelper_finalize_w_params(
        CameraImagePlainHelper* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void CameraImagePlainHelper_finalize_optional_members(
        CameraImagePlainHelper* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool CameraImagePlainHelper_copy(
        CameraImagePlainHelper* dst,
        const CameraImagePlainHelper* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

} /* namespace flat_types  */

namespace flat_zero_copy_types {

    extern const char *CameraImageTYPENAME;

    struct CameraImageSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class CameraImageTypeSupport;
    class CameraImageDataWriter;
    class CameraImageDataReader;
    #endif
    class NDDSUSERDllExport CameraImageConstOffset 
    : public rti::flat::FinalOffset<CameraImageConstOffset> {
      public:
        enum { required_alignment = 4 };

        static rti::flat::offset_t serialized_size(rti::flat::offset_t initial_position)
        {
            static const rti::flat::offset_t sizes[] = {24883220, 24883220, 24883220, 24883220};
            return sizes[initial_position % 4];
        }

        // Null offset
        CameraImageConstOffset()
        {
        }

        // Constructor is for internal use only
        CameraImageConstOffset(
            const rti::flat::SampleBase *sample, 
            rti::flat::offset_t offset)
            : rti::flat::FinalOffset<CameraImageConstOffset>(const_cast<rti::flat::SampleBase *>(sample), offset)
        {
        }

        DDS_LongLong timestamp() const; 
        common::Format format() const; 
        common_flat::Resolution::ConstOffset resolution() const; 
        const rti::flat::PrimitiveArrayOffset<DDS_Octet, ((common::IMAGE_SIZE))> data() const; 
    };
    class NDDSUSERDllExport CameraImageOffset 
    : public rti::flat::FinalOffset<CameraImageOffset> {
      public:
        typedef CameraImageConstOffset ConstOffset;

        enum { required_alignment = 4 };

        static rti::flat::offset_t serialized_size(rti::flat::offset_t initial_position)
        {
            static const rti::flat::offset_t sizes[] = {24883220, 24883220, 24883220, 24883220};
            return sizes[initial_position % 4];
        }

        // Null offset
        CameraImageOffset()
        {
        }

        // Constructor is for internal use only
        CameraImageOffset(
            rti::flat::SampleBase *sample, 
            rti::flat::offset_t offset)
            : rti::flat::FinalOffset<CameraImageOffset>(sample, offset)
        {
        }

        // Const accessors
        DDS_LongLong timestamp() const; 
        common::Format format() const; 
        common_flat::Resolution::ConstOffset resolution() const; 
        const rti::flat::PrimitiveArrayOffset<DDS_Octet, ((common::IMAGE_SIZE))> data() const; 

        // Modifiers
        bool timestamp(DDS_LongLong value);
        bool format(common::Format value);
        common_flat::Resolution::Offset resolution(); 
        rti::flat::PrimitiveArrayOffset<DDS_Octet, ((common::IMAGE_SIZE))> data(); 
    };

    class CameraImage : public rti::flat::Sample<CameraImageOffset> {
      public:
        typedef rti::flat::Sample<CameraImageOffset> Base;
        typedef struct CameraImageSeq Seq;
        typedef CameraImageTypeSupport TypeSupport;
        typedef CameraImageDataWriter DataWriter;
        typedef CameraImageDataReader DataReader;

        static CameraImage * create_data();
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

    extern const char *CameraImagePlainHelperTYPENAME;

    struct CameraImagePlainHelperSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class CameraImagePlainHelperTypeSupport;
    class CameraImagePlainHelperDataWriter;
    class CameraImagePlainHelperDataReader;
    #endif
    class CameraImagePlainHelper 
    {
      public:
        typedef struct CameraImagePlainHelperSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef CameraImagePlainHelperTypeSupport TypeSupport;
        typedef CameraImagePlainHelperDataWriter DataWriter;
        typedef CameraImagePlainHelperDataReader DataReader;
        #endif

        DDS_LongLong   timestamp ;
        common::Format   format ;
        common_flat::ResolutionPlainHelper   resolution ;
        DDS_Octet   data [(common::IMAGE_SIZE)];

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* CameraImagePlainHelper_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *CameraImagePlainHelper_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *CameraImagePlainHelper_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T CameraImagePlainHelper
    #define TSeq CameraImagePlainHelperSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T CameraImagePlainHelper
    #define TSeq CameraImagePlainHelperSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern CameraImagePlainHelper*
    CameraImagePlainHelper_create();

    NDDSUSERDllExport extern void
    CameraImagePlainHelper_delete(CameraImagePlainHelper* sample);

    NDDSUSERDllExport
    RTIBool CameraImagePlainHelper_initialize(
        CameraImagePlainHelper* self);

    NDDSUSERDllExport
    RTIBool CameraImagePlainHelper_initialize_ex(
        CameraImagePlainHelper* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool CameraImagePlainHelper_initialize_w_params(
        CameraImagePlainHelper* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool CameraImagePlainHelper_finalize(
        CameraImagePlainHelper* self);

    NDDSUSERDllExport
    RTIBool CameraImagePlainHelper_finalize_w_return(
        CameraImagePlainHelper* self);

    NDDSUSERDllExport
    void CameraImagePlainHelper_finalize_ex(
        CameraImagePlainHelper* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void CameraImagePlainHelper_finalize_w_params(
        CameraImagePlainHelper* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void CameraImagePlainHelper_finalize_optional_members(
        CameraImagePlainHelper* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool CameraImagePlainHelper_copy(
        CameraImagePlainHelper* dst,
        const CameraImagePlainHelper* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

} /* namespace flat_zero_copy_types  */

namespace zero_copy_types {

    extern const char *ResolutionTYPENAME;

    struct ResolutionSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ResolutionTypeSupport;
    class ResolutionDataWriter;
    class ResolutionDataReader;
    #endif
    class Resolution 
    {
      public:
        typedef struct ResolutionSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ResolutionTypeSupport TypeSupport;
        typedef ResolutionDataWriter DataWriter;
        typedef ResolutionDataReader DataReader;
        #endif

        DDS_Long   height ;
        DDS_Long   width ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Resolution_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Resolution_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Resolution_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Resolution
    #define TSeq ResolutionSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Resolution
    #define TSeq ResolutionSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Resolution*
    Resolution_create();

    NDDSUSERDllExport extern void
    Resolution_delete(Resolution* sample);

    NDDSUSERDllExport
    RTIBool Resolution_initialize(
        Resolution* self);

    NDDSUSERDllExport
    RTIBool Resolution_initialize_ex(
        Resolution* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Resolution_initialize_w_params(
        Resolution* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Resolution_finalize(
        Resolution* self);

    NDDSUSERDllExport
    RTIBool Resolution_finalize_w_return(
        Resolution* self);

    NDDSUSERDllExport
    void Resolution_finalize_ex(
        Resolution* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Resolution_finalize_w_params(
        Resolution* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Resolution_finalize_optional_members(
        Resolution* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Resolution_copy(
        Resolution* dst,
        const Resolution* src);

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

        DDS_LongLong   timestamp ;
        common::Format   format ;
        zero_copy_types::Resolution   resolution ;
        DDS_Octet   data [(common::IMAGE_SIZE)];

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

} /* namespace zero_copy_types  */

namespace plain_types {

    extern const char *ResolutionTYPENAME;

    struct ResolutionSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ResolutionTypeSupport;
    class ResolutionDataWriter;
    class ResolutionDataReader;
    #endif
    class Resolution 
    {
      public:
        typedef struct ResolutionSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ResolutionTypeSupport TypeSupport;
        typedef ResolutionDataWriter DataWriter;
        typedef ResolutionDataReader DataReader;
        #endif

        DDS_Long   height ;
        DDS_Long   width ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode* Resolution_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Resolution_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Resolution_get_sample_access_info(void);
    #endif

    #define REDA_SEQUENCE_USER_API
    #define T Resolution
    #define TSeq ResolutionSeq
    #define REDA_SEQUENCE_EXCLUDE_C_METHODS
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>
    #define REDA_SEQUENCE_USER_API
    #define T Resolution
    #define TSeq ResolutionSeq
    #define REDA_SEQUENCE_EXCLUDE_STRUCT
    #define REDA_SEQUENCE_USER_CPP
    #include <reda/reda_sequence_decl.h>

    NDDSUSERDllExport extern Resolution*
    Resolution_create();

    NDDSUSERDllExport extern void
    Resolution_delete(Resolution* sample);

    NDDSUSERDllExport
    RTIBool Resolution_initialize(
        Resolution* self);

    NDDSUSERDllExport
    RTIBool Resolution_initialize_ex(
        Resolution* self,
        RTIBool allocatePointers,
        RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Resolution_initialize_w_params(
        Resolution* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Resolution_finalize(
        Resolution* self);

    NDDSUSERDllExport
    RTIBool Resolution_finalize_w_return(
        Resolution* self);

    NDDSUSERDllExport
    void Resolution_finalize_ex(
        Resolution* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Resolution_finalize_w_params(
        Resolution* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Resolution_finalize_optional_members(
        Resolution* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Resolution_copy(
        Resolution* dst,
        const Resolution* src);

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

        DDS_LongLong   timestamp ;
        common::Format   format ;
        plain_types::Resolution   resolution ;
        DDS_Octet   data [(common::IMAGE_SIZE)];

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

} /* namespace plain_types  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<common_flat::Resolution> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_programs<common_flat::Resolution::Base> {
            static RTIXCdrInterpreterPrograms * get();
        };
        template <>
        struct type_code<common_flat::ResolutionPlainHelper> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<flat_types::CameraImage> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_programs<flat_types::CameraImage::Base> {
            static RTIXCdrInterpreterPrograms * get();
        };
        template <>
        struct type_code<flat_types::CameraImagePlainHelper> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<flat_zero_copy_types::CameraImage> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_programs<flat_zero_copy_types::CameraImage::Base> {
            static RTIXCdrInterpreterPrograms * get();
        };
        template <>
        struct type_code<flat_zero_copy_types::CameraImagePlainHelper> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<zero_copy_types::Resolution> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<zero_copy_types::CameraImage> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<plain_types::Resolution> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<plain_types::CameraImage> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

namespace rti { namespace flat {

        namespace detail {
            template <>
            struct default_primitive_value<common::Format> {

                static common::Format get()
                {
                    common::Format default_enumerator;
                    common::Format_initialize(&default_enumerator);
                    return default_enumerator;
                }
            };
        } // namespace detail

        template <>
        struct flat_type_traits<common_flat::Resolution> {
            typedef common_flat::ResolutionPlainHelper plain_type;
            typedef common_flat::ResolutionOffset offset;
        };

        template <>
        struct flat_type_traits<common_flat::ResolutionOffset> {
            typedef common_flat::Resolution flat_type;
            typedef common_flat::ResolutionPlainHelper plain_type;
        };

        template <>
        struct flat_type_traits<common_flat::ResolutionConstOffset> 
        : flat_type_traits<common_flat::ResolutionOffset> {
        };

        template <>
        struct flat_type_traits<flat_types::CameraImage> {
            typedef flat_types::CameraImagePlainHelper plain_type;
            typedef flat_types::CameraImageOffset offset;
        };

        template <>
        struct flat_type_traits<flat_types::CameraImageOffset> {
            typedef flat_types::CameraImage flat_type;
            typedef flat_types::CameraImagePlainHelper plain_type;
        };

        template <>
        struct flat_type_traits<flat_types::CameraImageConstOffset> 
        : flat_type_traits<flat_types::CameraImageOffset> {
        };

        template <>
        struct flat_type_traits<flat_zero_copy_types::CameraImage> {
            typedef flat_zero_copy_types::CameraImagePlainHelper plain_type;
            typedef flat_zero_copy_types::CameraImageOffset offset;
        };

        template <>
        struct flat_type_traits<flat_zero_copy_types::CameraImageOffset> {
            typedef flat_zero_copy_types::CameraImage flat_type;
            typedef flat_zero_copy_types::CameraImagePlainHelper plain_type;
        };

        template <>
        struct flat_type_traits<flat_zero_copy_types::CameraImageConstOffset> 
        : flat_type_traits<flat_zero_copy_types::CameraImageOffset> {
        };

    } } // namespace rti::flat

#include "rti/flat/FlatSampleImpl.hpp"
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CameraImage */

