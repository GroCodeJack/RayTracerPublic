# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build

# Include any dependencies generated for this target.
include CMakeFiles/test_RayTracer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_RayTracer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_RayTracer.dir/flags.make

CMakeFiles/test_RayTracer.dir/test_RayTracer.o: CMakeFiles/test_RayTracer.dir/flags.make
CMakeFiles/test_RayTracer.dir/test_RayTracer.o: ../test_RayTracer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_RayTracer.dir/test_RayTracer.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_RayTracer.dir/test_RayTracer.o -c /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/test_RayTracer.cpp

CMakeFiles/test_RayTracer.dir/test_RayTracer.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_RayTracer.dir/test_RayTracer.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/test_RayTracer.cpp > CMakeFiles/test_RayTracer.dir/test_RayTracer.i

CMakeFiles/test_RayTracer.dir/test_RayTracer.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_RayTracer.dir/test_RayTracer.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/test_RayTracer.cpp -o CMakeFiles/test_RayTracer.dir/test_RayTracer.s

CMakeFiles/test_RayTracer.dir/test_RayTracer.o.requires:

.PHONY : CMakeFiles/test_RayTracer.dir/test_RayTracer.o.requires

CMakeFiles/test_RayTracer.dir/test_RayTracer.o.provides: CMakeFiles/test_RayTracer.dir/test_RayTracer.o.requires
	$(MAKE) -f CMakeFiles/test_RayTracer.dir/build.make CMakeFiles/test_RayTracer.dir/test_RayTracer.o.provides.build
.PHONY : CMakeFiles/test_RayTracer.dir/test_RayTracer.o.provides

CMakeFiles/test_RayTracer.dir/test_RayTracer.o.provides.build: CMakeFiles/test_RayTracer.dir/test_RayTracer.o


# Object files for target test_RayTracer
test_RayTracer_OBJECTS = \
"CMakeFiles/test_RayTracer.dir/test_RayTracer.o"

# External object files for target test_RayTracer
test_RayTracer_EXTERNAL_OBJECTS =

test_RayTracer: CMakeFiles/test_RayTracer.dir/test_RayTracer.o
test_RayTracer: CMakeFiles/test_RayTracer.dir/build.make
test_RayTracer: libgraphics.a
test_RayTracer: CMakeFiles/test_RayTracer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_RayTracer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_RayTracer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_RayTracer.dir/build: test_RayTracer

.PHONY : CMakeFiles/test_RayTracer.dir/build

CMakeFiles/test_RayTracer.dir/requires: CMakeFiles/test_RayTracer.dir/test_RayTracer.o.requires

.PHONY : CMakeFiles/test_RayTracer.dir/requires

CMakeFiles/test_RayTracer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_RayTracer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_RayTracer.dir/clean

CMakeFiles/test_RayTracer.dir/depend:
	cd /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles/test_RayTracer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_RayTracer.dir/depend

