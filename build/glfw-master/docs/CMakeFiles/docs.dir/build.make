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
CMAKE_SOURCE_DIR = /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build

# Utility rule file for docs.

# Include the progress variables for this target.
include glfw-master/docs/CMakeFiles/docs.dir/progress.make

glfw-master/docs/CMakeFiles/docs:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating HTML documentation"
	cd /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build/glfw-master/docs && /usr/bin/doxygen

docs: glfw-master/docs/CMakeFiles/docs
docs: glfw-master/docs/CMakeFiles/docs.dir/build.make

.PHONY : docs

# Rule to build all files generated by this target.
glfw-master/docs/CMakeFiles/docs.dir/build: docs

.PHONY : glfw-master/docs/CMakeFiles/docs.dir/build

glfw-master/docs/CMakeFiles/docs.dir/clean:
	cd /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build/glfw-master/docs && $(CMAKE_COMMAND) -P CMakeFiles/docs.dir/cmake_clean.cmake
.PHONY : glfw-master/docs/CMakeFiles/docs.dir/clean

glfw-master/docs/CMakeFiles/docs.dir/depend:
	cd /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/glfw-master/docs /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build/glfw-master/docs /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build/glfw-master/docs/CMakeFiles/docs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : glfw-master/docs/CMakeFiles/docs.dir/depend

