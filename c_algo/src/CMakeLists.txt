project(c_algo C)

set(SOURCE_FILES smart_array.c)
add_library(smart_array SHARED ${SOURCE_FILES})
add_library(smart_array_static STATIC ${SOURCE_FILES})
set_target_properties(smart_array_static PROPERTIES OUTPUT_NAME "smart_array")
set_target_properties(smart_array PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(smart_array_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)


set(SOURCE_FILES list.c)
add_library(list SHARED ${SOURCE_FILES})
add_library(list_static STATIC ${SOURCE_FILES})
set_target_properties(list_static PROPERTIES OUTPUT_NAME "list")
set_target_properties(list PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(list_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)


set(SOURCE_FILES avl_tree.c)
add_library(avl_tree SHARED ${SOURCE_FILES})
add_library(avl_tree_static STATIC ${SOURCE_FILES})
set_target_properties(avl_tree_static PROPERTIES OUTPUT_NAME "avl_tree")
set_target_properties(avl_tree PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(avl_tree_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)

set(SOURCE_FILES array_stack.c)
add_library(array_stack SHARED ${SOURCE_FILES})
add_library(array_stack_static STATIC ${SOURCE_FILES})
set_target_properties(array_stack_static PROPERTIES OUTPUT_NAME "array_stack")
set_target_properties(array_stack PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(array_stack_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)

set(SOURCE_FILES array_queue.c)
add_library(array_queue SHARED ${SOURCE_FILES})
add_library(array_queue_static STATIC ${SOURCE_FILES})
set_target_properties(array_queue_static PROPERTIES OUTPUT_NAME "array_queue")
set_target_properties(array_queue PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(array_queue_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)

set(SOURCE_FILES base_sort.c)
add_library(base_sort SHARED ${SOURCE_FILES})
add_library(base_sort_static STATIC ${SOURCE_FILES})
set_target_properties(base_sort_static PROPERTIES OUTPUT_NAME "base_sort")
set_target_properties(base_sort PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(base_sort_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)

set(SOURCE_FILES binary_search.c)
add_library(binary_search SHARED ${SOURCE_FILES})
add_library(binary_search_static STATIC ${SOURCE_FILES})
set_target_properties(binary_search_static PROPERTIES OUTPUT_NAME "binary_search")
set_target_properties(binary_search PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(binary_search_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../lib)