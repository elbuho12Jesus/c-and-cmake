add_library(class_vector_lib class_vector.h class_vector.cpp)
target_include_directories(class_vector_lib PUBLIC
  ${CMAKE_CURRENT_LIST_DIR})
