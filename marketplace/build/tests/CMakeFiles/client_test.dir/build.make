# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yabiel/Desktop/poo/p4/marketplace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yabiel/Desktop/poo/p4/marketplace/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/client_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/client_test.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/client_test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/client_test.dir/flags.make

tests/CMakeFiles/client_test.dir/client_test.cc.o: tests/CMakeFiles/client_test.dir/flags.make
tests/CMakeFiles/client_test.dir/client_test.cc.o: ../tests/client_test.cc
tests/CMakeFiles/client_test.dir/client_test.cc.o: tests/CMakeFiles/client_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yabiel/Desktop/poo/p4/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/client_test.dir/client_test.cc.o"
	cd /home/yabiel/Desktop/poo/p4/marketplace/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/client_test.dir/client_test.cc.o -MF CMakeFiles/client_test.dir/client_test.cc.o.d -o CMakeFiles/client_test.dir/client_test.cc.o -c /home/yabiel/Desktop/poo/p4/marketplace/tests/client_test.cc

tests/CMakeFiles/client_test.dir/client_test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client_test.dir/client_test.cc.i"
	cd /home/yabiel/Desktop/poo/p4/marketplace/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yabiel/Desktop/poo/p4/marketplace/tests/client_test.cc > CMakeFiles/client_test.dir/client_test.cc.i

tests/CMakeFiles/client_test.dir/client_test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client_test.dir/client_test.cc.s"
	cd /home/yabiel/Desktop/poo/p4/marketplace/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yabiel/Desktop/poo/p4/marketplace/tests/client_test.cc -o CMakeFiles/client_test.dir/client_test.cc.s

# Object files for target client_test
client_test_OBJECTS = \
"CMakeFiles/client_test.dir/client_test.cc.o"

# External object files for target client_test
client_test_EXTERNAL_OBJECTS =

tests/client_test: tests/CMakeFiles/client_test.dir/client_test.cc.o
tests/client_test: tests/CMakeFiles/client_test.dir/build.make
tests/client_test: src/client/libclient.a
tests/client_test: src/person/libperson.a
tests/client_test: lib/libgtest_main.a
tests/client_test: lib/libgtest.a
tests/client_test: tests/CMakeFiles/client_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yabiel/Desktop/poo/p4/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable client_test"
	cd /home/yabiel/Desktop/poo/p4/marketplace/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/client_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/client_test.dir/build: tests/client_test
.PHONY : tests/CMakeFiles/client_test.dir/build

tests/CMakeFiles/client_test.dir/clean:
	cd /home/yabiel/Desktop/poo/p4/marketplace/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/client_test.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/client_test.dir/clean

tests/CMakeFiles/client_test.dir/depend:
	cd /home/yabiel/Desktop/poo/p4/marketplace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yabiel/Desktop/poo/p4/marketplace /home/yabiel/Desktop/poo/p4/marketplace/tests /home/yabiel/Desktop/poo/p4/marketplace/build /home/yabiel/Desktop/poo/p4/marketplace/build/tests /home/yabiel/Desktop/poo/p4/marketplace/build/tests/CMakeFiles/client_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/client_test.dir/depend

