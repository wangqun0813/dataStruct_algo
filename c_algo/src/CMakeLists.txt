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


set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../lib)