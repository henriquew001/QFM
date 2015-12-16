set (QFM_CLIENT_VERSION_MAJOR 0)
set (QFM_CLIENT_VERSION_MINOR 1)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

# Find the QtWidgets library
find_package(Qt5Widgets)

include_directories(
#    ${CMAKE_SOURCE_DIR}
#    ${CMAKE_BINARY_DIR}
)

set(SRCS main.cpp qfmmainwindow.cpp)
set(HDRS qfmmainwindow.h)

# Tell CMake to create the qfm executable
add_executable(qfm WIN32 ${SRCS})

# Use the Widgets module from Qt 5.
target_link_libraries(qfm Qt5::Widgets)
