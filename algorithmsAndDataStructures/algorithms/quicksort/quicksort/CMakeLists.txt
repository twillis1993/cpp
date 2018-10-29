SET(quicksort_SRCS "quicksort.cpp" "quicksort.hpp")

ADD_LIBRARY(quicksort STATIC ${quicksort_SRCS})

# Public?
TARGET_INCLUDE_DIRECTORIES(quicksort PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
