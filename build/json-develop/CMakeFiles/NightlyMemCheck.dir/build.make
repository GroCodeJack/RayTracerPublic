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

# Utility rule file for NightlyMemCheck.

# Include the progress variables for this target.
include json-develop/CMakeFiles/NightlyMemCheck.dir/progress.make

json-develop/CMakeFiles/NightlyMemCheck:
	cd /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build/json-develop && /usr/bin/ctest -D NightlyMemCheck

NightlyMemCheck: json-develop/CMakeFiles/NightlyMemCheck
NightlyMemCheck: json-develop/CMakeFiles/NightlyMemCheck.dir/build.make

.PHONY : NightlyMemCheck

# Rule to build all files generated by this target.
json-develop/CMakeFiles/NightlyMemCheck.dir/build: NightlyMemCheck

.PHONY : json-develop/CMakeFiles/NightlyMemCheck.dir/build

json-develop/CMakeFiles/NightlyMemCheck.dir/clean:
	cd /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build/json-develop && $(CMAKE_COMMAND) -P CMakeFiles/NightlyMemCheck.dir/cmake_clean.cmake
.PHONY : json-develop/CMakeFiles/NightlyMemCheck.dir/clean

json-develop/CMakeFiles/NightlyMemCheck.dir/depend:
	cd /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/json-develop /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build/json-develop /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build/json-develop/CMakeFiles/NightlyMemCheck.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : json-develop/CMakeFiles/NightlyMemCheck.dir/depend

