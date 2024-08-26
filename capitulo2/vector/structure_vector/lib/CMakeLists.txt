add_library(structure_vector_lib structure_vector.h structure_vector.cpp)
target_include_directories(structure_vector_lib PUBLIC
  ${CMAKE_CURRENT_LIST_DIR})
