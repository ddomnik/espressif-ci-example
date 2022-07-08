cmake_minimum_required(VERSION 3.5)

project(ci_example_test LANGUAGES C CXX)

add_subdirectory(lib/Catch2)
 
set(srcs
    ../geometry.cpp
    geometry.test.cpp)
    
    
add_library(geometry_test OBJECT "${srcs}")

include_directories("${CMAKE_CURRENT_SOURCE_DIR}"        
                    "${CMAKE_CURRENT_SOURCE_DIR}/../"
                    )
                    
target_link_libraries(geometry_test PRIVATE
    Catch2::Catch2
)

add_executable(unit_tests) 

target_link_libraries(unit_tests PUBLIC
    Catch2::Catch2WithMain
    geometry_test
)