SET(fordFulkerson_SRCS "fordFulkerson.cpp" "fordFulkerson.hpp")

ADD_LIBRARY(fordFulkerson STATIC ${fordFulkerson_SRCS})

# Public?
TARGET_INCLUDE_DIRECTORIES(fordFulkerson PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
