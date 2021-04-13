add_library(CodeKata SHARED Grid.cpp include/Grid.h)
target_include_directories(CodeKata PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)
