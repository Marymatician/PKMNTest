# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_SOURCE_DIR = /home/mary/Documents/PKMNTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mary/Documents/PKMNTest

# Include any dependencies generated for this target.
include CMakeFiles/PKMNTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/PKMNTest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/PKMNTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PKMNTest.dir/flags.make

CMakeFiles/PKMNTest.dir/src/main.cpp.o: CMakeFiles/PKMNTest.dir/flags.make
CMakeFiles/PKMNTest.dir/src/main.cpp.o: src/main.cpp
CMakeFiles/PKMNTest.dir/src/main.cpp.o: CMakeFiles/PKMNTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/mary/Documents/PKMNTest/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PKMNTest.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PKMNTest.dir/src/main.cpp.o -MF CMakeFiles/PKMNTest.dir/src/main.cpp.o.d -o CMakeFiles/PKMNTest.dir/src/main.cpp.o -c /home/mary/Documents/PKMNTest/src/main.cpp

CMakeFiles/PKMNTest.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/PKMNTest.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mary/Documents/PKMNTest/src/main.cpp > CMakeFiles/PKMNTest.dir/src/main.cpp.i

CMakeFiles/PKMNTest.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/PKMNTest.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mary/Documents/PKMNTest/src/main.cpp -o CMakeFiles/PKMNTest.dir/src/main.cpp.s

CMakeFiles/PKMNTest.dir/src/LTexture.cpp.o: CMakeFiles/PKMNTest.dir/flags.make
CMakeFiles/PKMNTest.dir/src/LTexture.cpp.o: src/LTexture.cpp
CMakeFiles/PKMNTest.dir/src/LTexture.cpp.o: CMakeFiles/PKMNTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/mary/Documents/PKMNTest/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PKMNTest.dir/src/LTexture.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PKMNTest.dir/src/LTexture.cpp.o -MF CMakeFiles/PKMNTest.dir/src/LTexture.cpp.o.d -o CMakeFiles/PKMNTest.dir/src/LTexture.cpp.o -c /home/mary/Documents/PKMNTest/src/LTexture.cpp

CMakeFiles/PKMNTest.dir/src/LTexture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/PKMNTest.dir/src/LTexture.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mary/Documents/PKMNTest/src/LTexture.cpp > CMakeFiles/PKMNTest.dir/src/LTexture.cpp.i

CMakeFiles/PKMNTest.dir/src/LTexture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/PKMNTest.dir/src/LTexture.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mary/Documents/PKMNTest/src/LTexture.cpp -o CMakeFiles/PKMNTest.dir/src/LTexture.cpp.s

# Object files for target PKMNTest
PKMNTest_OBJECTS = \
"CMakeFiles/PKMNTest.dir/src/main.cpp.o" \
"CMakeFiles/PKMNTest.dir/src/LTexture.cpp.o"

# External object files for target PKMNTest
PKMNTest_EXTERNAL_OBJECTS =

PKMNTest: CMakeFiles/PKMNTest.dir/src/main.cpp.o
PKMNTest: CMakeFiles/PKMNTest.dir/src/LTexture.cpp.o
PKMNTest: CMakeFiles/PKMNTest.dir/build.make
PKMNTest: CMakeFiles/PKMNTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/mary/Documents/PKMNTest/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable PKMNTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PKMNTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PKMNTest.dir/build: PKMNTest
.PHONY : CMakeFiles/PKMNTest.dir/build

CMakeFiles/PKMNTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PKMNTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PKMNTest.dir/clean

CMakeFiles/PKMNTest.dir/depend:
	cd /home/mary/Documents/PKMNTest && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mary/Documents/PKMNTest /home/mary/Documents/PKMNTest /home/mary/Documents/PKMNTest /home/mary/Documents/PKMNTest /home/mary/Documents/PKMNTest/CMakeFiles/PKMNTest.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/PKMNTest.dir/depend

