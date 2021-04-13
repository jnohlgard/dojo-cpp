add_library(CodeKata SHARED CodeKata.cpp include/CodeKata.h)
target_include_directories(CodeKata PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)
