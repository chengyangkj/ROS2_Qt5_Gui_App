
file(GLOB_RECURSE SOURCE_FILE  CONFIGURE_DEPENDS ${CMAKE_SOURCE_DIR} ./*.cpp ./*.cc)
file(GLOB_RECURSE INCLUDE_FILE CONFIGURE_DEPENDS  ${CMAKE_SOURCE_DIR}  ./*.h ./*.hpp)
find_package(Qt5 COMPONENTS Widgets REQUIRED)
add_executable(
    ${PROJECT_NAME} ${SOURCE_FILE})

target_link_libraries(${PROJECT_NAME}  common mainwindow Qt5::Core Qt5::Widgets)
set_target_properties(${PROJECT_NAME} PROPERTIES
RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
)
install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION bin)