SET( CMAKE_BUILD_TYPE Debug )

project(QFM)

cmake_minimum_required(VERSION 3.0.0)

find_package(Qt5Network)

add_subdirectory(client)
add_subdirectory(server)
