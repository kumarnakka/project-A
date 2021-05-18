

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Vector3.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Vector3_2087827963_h
#define Vector3_2087827963_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace adas_dds {
    namespace geometry_msgs {

        extern const char *Vector3TYPENAME;

        struct Vector3Seq;
        #ifndef NDDS_STANDALONE_TYPE
        class Vector3TypeSupport;
        class Vector3DataWriter;
        class Vector3DataReader;
        #endif
        class Vector3 
        {
          public:
            typedef struct Vector3Seq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef Vector3TypeSupport TypeSupport;
            typedef Vector3DataWriter DataWriter;
            typedef Vector3DataReader DataReader;
            #endif

            DDS_Double   x ;
            DDS_Double   y ;
            DDS_Double   z ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode* Vector3_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *Vector3_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Vector3_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *Vector3_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(Vector3Seq, Vector3);

        NDDSUSERDllExport
        RTIBool Vector3_initialize(
            Vector3* self);

        NDDSUSERDllExport
        RTIBool Vector3_initialize_ex(
            Vector3* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool Vector3_initialize_w_params(
            Vector3* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool Vector3_finalize_w_return(
            Vector3* self);

        NDDSUSERDllExport
        void Vector3_finalize(
            Vector3* self);

        NDDSUSERDllExport
        void Vector3_finalize_ex(
            Vector3* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void Vector3_finalize_w_params(
            Vector3* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void Vector3_finalize_optional_members(
            Vector3* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool Vector3_copy(
            Vector3* dst,
            const Vector3* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace geometry_msgs  */
} /* namespace adas_dds  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<adas_dds::geometry_msgs::Vector3> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* Vector3 */

