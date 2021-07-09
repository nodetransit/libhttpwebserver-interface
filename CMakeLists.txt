cmake_minimum_required(VERSION 3.5)
project(libhttpwebserver_interface)

file (GLOB_RECURSE SOURCE_FILES "." "*.cpp")

add_library(httpwebserver_interface STATIC ${SOURCE_FILES})

target_compile_options (httpwebserver_interface PRIVATE "-fPIC")

target_include_directories(httpwebserver_interface
                           INTERFACE "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
                                     "$<INSTALL_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}")

#install(TARGETS httpwebserver_interface
#        EXPORT httpwebserver_interface_targets
#        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
#        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

