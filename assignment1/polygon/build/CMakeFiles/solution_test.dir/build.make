# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/divya/Desktop/cpp-training/basics/tasks/polygon

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/divya/Desktop/cpp-training/basics/tasks/polygon/build

# Include any dependencies generated for this target.
include CMakeFiles/solution_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/solution_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/solution_test.dir/flags.make

CMakeFiles/solution_test.dir/solution_test.cpp.o: CMakeFiles/solution_test.dir/flags.make
CMakeFiles/solution_test.dir/solution_test.cpp.o: ../solution_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/divya/Desktop/cpp-training/basics/tasks/polygon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/solution_test.dir/solution_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/solution_test.dir/solution_test.cpp.o -c /home/divya/Desktop/cpp-training/basics/tasks/polygon/solution_test.cpp

CMakeFiles/solution_test.dir/solution_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/solution_test.dir/solution_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/divya/Desktop/cpp-training/basics/tasks/polygon/solution_test.cpp > CMakeFiles/solution_test.dir/solution_test.cpp.i

CMakeFiles/solution_test.dir/solution_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/solution_test.dir/solution_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/divya/Desktop/cpp-training/basics/tasks/polygon/solution_test.cpp -o CMakeFiles/solution_test.dir/solution_test.cpp.s

# Object files for target solution_test
solution_test_OBJECTS = \
"CMakeFiles/solution_test.dir/solution_test.cpp.o"

# External object files for target solution_test
solution_test_EXTERNAL_OBJECTS =

solution_test: CMakeFiles/solution_test.dir/solution_test.cpp.o
solution_test: CMakeFiles/solution_test.dir/build.make
solution_test: /usr/lib/x86_64-linux-gnu/libgtest_main.a
solution_test: /usr/lib/x86_64-linux-gnu/libgtest.a
solution_test: CMakeFiles/solution_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/divya/Desktop/cpp-training/basics/tasks/polygon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable solution_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/solution_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/solution_test.dir/build: solution_test

.PHONY : CMakeFiles/solution_test.dir/build

CMakeFiles/solution_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/solution_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/solution_test.dir/clean

CMakeFiles/solution_test.dir/depend:
	cd /home/divya/Desktop/cpp-training/basics/tasks/polygon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/divya/Desktop/cpp-training/basics/tasks/polygon /home/divya/Desktop/cpp-training/basics/tasks/polygon /home/divya/Desktop/cpp-training/basics/tasks/polygon/build /home/divya/Desktop/cpp-training/basics/tasks/polygon/build /home/divya/Desktop/cpp-training/basics/tasks/polygon/build/CMakeFiles/solution_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/solution_test.dir/depend

