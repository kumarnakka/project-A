/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Marker.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Marker_1187234442_h
#define Marker_1187234442_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "dds_c/dds_c_typecode.h"

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "../std/Header.h"

#include "../geometry/Pose.h"

#include "../geometry/Point.h"

#include "../geometry/Vector3.h"

#include "../std/ColorRGBA.h"

#include "../std/Duration.h"

namespace adas_dds {

    namespace visualization_msgs {

        typedef enum Marker_Type
        {
            MARKER_ARROW ,      
            MARKER_CUBE ,      
            MARKER_SPHERE ,      
            MARKER_CYLINDER ,      
            MARKER_LINE_STRIP ,      
            MARKER_LINE_LIST ,      
            MARKER_CUBE_LIST ,      
            MARKER_SPHERE_LIST ,      
            MARKER_POINTS ,      
            MARKER_TEXT_VIEW_FACING ,      
            MARKER_MESH_RESOURCE ,      
            MARKER_TRIANGLE_LIST      
        } Marker_Type;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Marker_Type_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Marker_Type_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Marker_Type_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Marker_Type
        #define TSeq Marker_TypeSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Marker_Type
        #define TSeq Marker_TypeSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Marker_Type*
        Marker_Type_create();

        NDDSUSERDllExport extern void
        Marker_Type_delete(Marker_Type* sample);

        NDDSUSERDllExport
        RTIBool Marker_Type_initialize(
            Marker_Type* self);

        NDDSUSERDllExport
        RTIBool Marker_Type_initialize_ex(
            Marker_Type* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Marker_Type_initialize_w_params(
            Marker_Type* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Marker_Type_finalize(
            Marker_Type* self);

        NDDSUSERDllExport
        RTIBool Marker_Type_finalize_w_return(
            Marker_Type* self);

        NDDSUSERDllExport
        void Marker_Type_finalize_ex(
            Marker_Type* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Marker_Type_finalize_w_params(
            Marker_Type* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Marker_Type_finalize_optional_members(
            Marker_Type* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Marker_Type_copy(
            Marker_Type* dst,
            const Marker_Type* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        typedef enum Marker_Action
        {
            MARKER_ADD ,      
            MARKER_MODIFY ,      
            MARKER_DELETE ,      
            MARKER_DELETEALL      
        } Marker_Action;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Marker_Action_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Marker_Action_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Marker_Action_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Marker_Action
        #define TSeq Marker_ActionSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Marker_Action
        #define TSeq Marker_ActionSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Marker_Action*
        Marker_Action_create();

        NDDSUSERDllExport extern void
        Marker_Action_delete(Marker_Action* sample);

        NDDSUSERDllExport
        RTIBool Marker_Action_initialize(
            Marker_Action* self);

        NDDSUSERDllExport
        RTIBool Marker_Action_initialize_ex(
            Marker_Action* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Marker_Action_initialize_w_params(
            Marker_Action* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Marker_Action_finalize(
            Marker_Action* self);

        NDDSUSERDllExport
        RTIBool Marker_Action_finalize_w_return(
            Marker_Action* self);

        NDDSUSERDllExport
        void Marker_Action_finalize_ex(
            Marker_Action* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Marker_Action_finalize_w_params(
            Marker_Action* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Marker_Action_finalize_optional_members(
            Marker_Action* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Marker_Action_copy(
            Marker_Action* dst,
            const Marker_Action* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *MarkerTYPENAME;

        struct MarkerSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class MarkerTypeSupport;
        class MarkerDataWriter;
        class MarkerDataReader;
        #endif
        class Marker 
        {
          public:
            typedef struct MarkerSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef MarkerTypeSupport TypeSupport;
            typedef MarkerDataWriter DataWriter;
            typedef MarkerDataReader DataReader;
            #endif

            adas_dds::std_msgs::Header   header ;
            DDS_String   ns ;
            DDS_Long   id ;
            DDS_Long   type ;
            DDS_Long   action ;
            adas_dds::geometry_msgs::Pose   pose ;
            adas_dds::geometry_msgs::Vector3   scale ;
            adas_dds::std_msgs::ColorRGBA   color ;
            adas_dds::std_msgs::Duration   lifetime ;
            DDS_Boolean   frame_locked ;
            adas_dds::geometry_msgs::PointSeq  points ;
            adas_dds::std_msgs::ColorRGBASeq  colors ;
            DDS_String   text ;
            DDS_String   mesh_resource ;
            DDS_Boolean   mesh_use_embedded_materials ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Marker_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Marker_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Marker_get_sample_access_info(void);
        #endif

        #define REDA_SEQUENCE_USER_API
        #define T Marker
        #define TSeq MarkerSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>
        #define REDA_SEQUENCE_USER_API
        #define T Marker
        #define TSeq MarkerSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern Marker*
        Marker_create();

        NDDSUSERDllExport extern void
        Marker_delete(Marker* sample);

        NDDSUSERDllExport
        RTIBool Marker_initialize(
            Marker* self);

        NDDSUSERDllExport
        RTIBool Marker_initialize_ex(
            Marker* self,
            RTIBool allocatePointers,
            RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Marker_initialize_w_params(
            Marker* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Marker_finalize(
            Marker* self);

        NDDSUSERDllExport
        RTIBool Marker_finalize_w_return(
            Marker* self);

        NDDSUSERDllExport
        void Marker_finalize_ex(
            Marker* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Marker_finalize_w_params(
            Marker* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Marker_finalize_optional_members(
            Marker* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Marker_copy(
            Marker* dst,
            const Marker* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

    } /* namespace visualization_msgs  */

} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
#endif

#if (defined(RTI_WIN32) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Marker */

