project(c_algo C)


link_directories(${PROJECT_SOURCE_DIR}/lib)
link_libraries(smart_array list)

set(SOURCE_FILES smart_array_test.c)
add_executable(smart_array_test ${SOURCE_FILES})

set(SOURCE_FILES list_test.c)
add_executable(list_test ${SOURCE_FILES})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../bin)

