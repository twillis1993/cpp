# From horenmar at <https://github.com/catchorg/Catch2/issues/882>
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

PROJECT(BinarySearch)

file(GLOB SOURCES "src/*.cpp")

# Prepare Catch library for other executables
SET(CATCH_INCLUDE_DIR "include/catch")
ADD_LIBRARY(Catch INTERFACE)
TARGET_INCLUDE_DIRECTORIES(Catch INTERFACE ${CATCH_INCLUDE_DIR})

ADD_EXECUTABLE(main ${SOURCES})

# Links the executable to the Catch library
TARGET_LINK_LIBRARIES(main Catch)
