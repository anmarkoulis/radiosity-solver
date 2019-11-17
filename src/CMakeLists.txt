add_subdirectory(physics)
add_subdirectory(geometry)
set(SOURCE_FILES main.cpp)

add_executable(radiosity ${SOURCE_FILES})
target_link_libraries(radiosity physics geometry pthread boost_log boost_log_setup boost_thread boost_filesystem )
install(TARGETS radiosity DESTINATION ${RADIOSITY_INSTALL_BIN_DIR})
