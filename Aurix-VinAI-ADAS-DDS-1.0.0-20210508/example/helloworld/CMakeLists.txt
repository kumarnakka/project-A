cmake_minimum_required(VERSION 3.12)
project(helloworld)

set(INCLUDE_DIRS 
    ${RTIDDS_INCLUDE_DIR}
    ${VINAIADASDDS_INCLUDE_DIR}
    ${VINAIADASDDS_INCLUDE_DIR}/adas/dds/idl
)

if (RTI_PRO)
    ADD_DEFINITIONS(-DVINAI_ADAS_DDS_PRO)
endif()

add_executable(helloworld_pub pub.cpp)

target_include_directories(helloworld_pub PRIVATE
                    ${INCLUDE_DIRS}
                )

target_link_libraries(helloworld_pub
                    ${PLATFORM_LIBS}
                    -L${RTIDDS_LIBRARY_DIR} ${RTIDDS_LIBRARIES}
                    -L${VINAIADASDDS_LIBRARY_DIR} ${VINAIADASDDS_LIBRARIES}
                    )


INSTALL(TARGETS helloworld_pub
        RUNTIME DESTINATION bin
)

add_executable(helloworld_sub sub.cpp)

target_include_directories(helloworld_sub PRIVATE
                    ${INCLUDE_DIRS}
                )

target_link_libraries(helloworld_sub
                    ${PLATFORM_LIBS}
                    -L${RTIDDS_LIBRARY_DIR} ${RTIDDS_LIBRARIES}
                    -L${VINAIADASDDS_LIBRARY_DIR} ${VINAIADASDDS_LIBRARIES}
                    )

INSTALL(TARGETS helloworld_sub
        RUNTIME DESTINATION bin
)
