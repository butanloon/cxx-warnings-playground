cmake_minimum_required(VERSION 3.16)
project(not-my-lib-tests)
add_executable(${PROJECT_NAME}-test1 not_my_lib_test1.cc)
target_compile_options(${PROJECT_NAME}-test1 PRIVATE -std=c++17 -Wall)
get_target_property(not-my-lib_include_dirs not-my-lib INTERFACE_INCLUDE_DIRECTORIES)
# we can use `target_link_libraries` if we don't care about library warnings here
# target_link_libraries(${PROJECT_NAME}-test1 not-my-lib)
# in order to treat library header files not as system we can manually specify paths
# for me, changing only include directories didn't produce warnings
target_include_directories(${PROJECT_NAME}-test1 PRIVATE ${not-my-lib_include_dirs})
target_link_libraries(${PROJECT_NAME}-test1 $<TARGET_FILE:not-my-lib>)
