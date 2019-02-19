cmake_minimum_required(VERSION 3.9)

project(async VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER})

find_package(Threads)

set(CMAKE_CXX_STANDARD 14)

add_library(async SHARED async.cpp)

set_target_properties(async PROPERTIES VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER})
set_target_properties(async PROPERTIES PUBLIC_HEADER async.h)

install(TARGETS async LIBRARY  DESTINATION lib PUBLIC_HEADER DESTINATION include)

add_executable(async_cli main.cpp)

target_link_libraries(async_cli async)

set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
set(CPACK_PACKAGE_CONTACT sava_test@mail.ru)
set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS ON)

include (CPack)
