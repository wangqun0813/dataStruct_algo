# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /work_space/repository/mygithub/dataStruct_algo/c_algo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /work_space/repository/mygithub/dataStruct_algo/c_algo/build

# Include any dependencies generated for this target.
include src/CMakeFiles/list_static.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/list_static.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/list_static.dir/flags.make

src/CMakeFiles/list_static.dir/list.c.o: src/CMakeFiles/list_static.dir/flags.make
src/CMakeFiles/list_static.dir/list.c.o: ../src/list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work_space/repository/mygithub/dataStruct_algo/c_algo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/list_static.dir/list.c.o"
	cd /work_space/repository/mygithub/dataStruct_algo/c_algo/build/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/list_static.dir/list.c.o   -c /work_space/repository/mygithub/dataStruct_algo/c_algo/src/list.c

src/CMakeFiles/list_static.dir/list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/list_static.dir/list.c.i"
	cd /work_space/repository/mygithub/dataStruct_algo/c_algo/build/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /work_space/repository/mygithub/dataStruct_algo/c_algo/src/list.c > CMakeFiles/list_static.dir/list.c.i

src/CMakeFiles/list_static.dir/list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/list_static.dir/list.c.s"
	cd /work_space/repository/mygithub/dataStruct_algo/c_algo/build/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /work_space/repository/mygithub/dataStruct_algo/c_algo/src/list.c -o CMakeFiles/list_static.dir/list.c.s

# Object files for target list_static
list_static_OBJECTS = \
"CMakeFiles/list_static.dir/list.c.o"

# External object files for target list_static
list_static_EXTERNAL_OBJECTS =

../lib/liblist.a: src/CMakeFiles/list_static.dir/list.c.o
../lib/liblist.a: src/CMakeFiles/list_static.dir/build.make
../lib/liblist.a: src/CMakeFiles/list_static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work_space/repository/mygithub/dataStruct_algo/c_algo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library ../../lib/liblist.a"
	cd /work_space/repository/mygithub/dataStruct_algo/c_algo/build/src && $(CMAKE_COMMAND) -P CMakeFiles/list_static.dir/cmake_clean_target.cmake
	cd /work_space/repository/mygithub/dataStruct_algo/c_algo/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/list_static.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/list_static.dir/build: ../lib/liblist.a

.PHONY : src/CMakeFiles/list_static.dir/build

src/CMakeFiles/list_static.dir/clean:
	cd /work_space/repository/mygithub/dataStruct_algo/c_algo/build/src && $(CMAKE_COMMAND) -P CMakeFiles/list_static.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/list_static.dir/clean

src/CMakeFiles/list_static.dir/depend:
	cd /work_space/repository/mygithub/dataStruct_algo/c_algo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work_space/repository/mygithub/dataStruct_algo/c_algo /work_space/repository/mygithub/dataStruct_algo/c_algo/src /work_space/repository/mygithub/dataStruct_algo/c_algo/build /work_space/repository/mygithub/dataStruct_algo/c_algo/build/src /work_space/repository/mygithub/dataStruct_algo/c_algo/build/src/CMakeFiles/list_static.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/list_static.dir/depend

