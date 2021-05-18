cmake_minimum_required(VERSION 3.12)
project(camera_image)

if (RTI_PRO)
    ADD_DEFINITIONS(-DVINAI_ADAS_DDS_PRO)
endif()

set(INCLUDE_DIRS 
    ${RTIDDS_INCLUDE_DIR}
    ${VINAIADASDDS_INCLUDE_DIR}
    ${VINAIADASDDS_INCLUDE_DIR}/adas/dds/idl
)

add_executable(camera_pub_example camera_pub_example.cpp)

target_include_directories(camera_pub_example PRIVATE
                    ${INCLUDE_DIRS}
                )

target_link_libraries(camera_pub_example
                    ${PLATFORM_LIBS}
                    -L${RTIDDS_LIBRARY_DIR} ${RTIDDS_LIBRARIES}
                    -L${VINAIADASDDS_LIBRARY_DIR} ${VINAIADASDDS_LIBRARIES}
                    )

INSTALL(TARGETS camera_pub_example
        RUNTIME DESTINATION bin
)

add_executable(camera_sub_example camera_sub_example.cpp)

target_include_directories(camera_sub_example PRIVATE
                    ${INCLUDE_DIRS}
                )

target_link_libraries(camera_sub_example
                    ${PLATFORM_LIBS}
                    -L${RTIDDS_LIBRARY_DIR} ${RTIDDS_LIBRARIES}
                    -L${VINAIADASDDS_LIBRARY_DIR} ${VINAIADASDDS_LIBRARIES}
                    )

INSTALL(TARGETS camera_sub_example
        RUNTIME DESTINATION bin
)
