set (QFM_SERVER_VERSION_MAJOR 0)
set (QFM_SERVER_VERSION_MINOR 1)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Core)

set(SRCS main.cpp qfmserver.cpp)
set(HDRS qfmserver.h)

# Tell CMake to create the qfm executable
add_executable(qfmserver WIN32 ${SRCS})

# Use the Widgets module from Qt 5.
target_link_libraries(qfmserver  ${Qt5Core_LIBRARIES} Qt5::Network)
