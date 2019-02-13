SET(binarySearch_SRCS "binarySearch.cpp" "binarySearch.hpp")

ADD_LIBRARY(binarySearch STATIC ${binarySearch_SRCS})

TARGET_INCLUDE_DIRECTORIES(binarySearch PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
