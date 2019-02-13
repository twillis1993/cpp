SET(mergesort_SRCS "mergesort.cpp" "mergesort.hpp")

ADD_LIBRARY(mergesort STATIC ${mergesort_SRCS})

# Public?
TARGET_INCLUDE_DIRECTORIES(mergesort PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
