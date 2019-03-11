project(c_algo C)


link_directories(${PROJECT_SOURCE_DIR}/lib)
link_libraries(smart_array list avl_tree array_stack array_queue base_sort jump_list binary_search)

set(SOURCE_FILES smart_array_test.c)
add_executable(smart_array_test ${SOURCE_FILES})

set(SOURCE_FILES list_test.c)
add_executable(list_test ${SOURCE_FILES})

set(SOURCE_FILES avl_tree_test.c)
add_executable(avl_tree_test ${SOURCE_FILES})

set(SOURCE_FILES array_statck_test.c)
add_executable(array_statck_test ${SOURCE_FILES})

set(SOURCE_FILES array_queue_test.c)
add_executable(array_queue_test ${SOURCE_FILES})

set(SOURCE_FILES dgFunc_test.c)
add_executable(dgFunc_test ${SOURCE_FILES})

set(SOURCE_FILES base_sort_test.c)
add_executable(base_sort_test ${SOURCE_FILES})

set(SOURCE_FILES binary_search_test.c)
add_executable(binary_search_test ${SOURCE_FILES})

set(SOURCE_FILES jump_list_test.c)
add_executable(jump_list_test ${SOURCE_FILES})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../bin)

