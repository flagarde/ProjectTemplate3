add_library(Complex Complex.cpp)
target_include_directories(Complex PUBLIC "${CMAKE_SOURCE_DIR}/include")
set_target_properties(Complex PROPERTIES PUBLIC_HEADER "${CMAKE_SOURCE_DIR}/include/Complex.hpp")
install(TARGETS Complex ARCHIVE DESTINATION lib LIBRARY DESTINATION bin RUNTIME DESTINATION bin PUBLIC_HEADER DESTINATION include)

