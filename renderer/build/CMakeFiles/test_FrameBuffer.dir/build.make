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
include CMakeFiles/test_FrameBuffer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_FrameBuffer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_FrameBuffer.dir/flags.make

CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.o: CMakeFiles/test_FrameBuffer.dir/flags.make
CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.o: ../test_Framebuffer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.o -c /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/test_Framebuffer.cpp

CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/test_Framebuffer.cpp > CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.i

CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/test_Framebuffer.cpp -o CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.s

CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.o.requires:

.PHONY : CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.o.requires

CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.o.provides: CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.o.requires
	$(MAKE) -f CMakeFiles/test_FrameBuffer.dir/build.make CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.o.provides.build
.PHONY : CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.o.provides

CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.o.provides.build: CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.o


# Object files for target test_FrameBuffer
test_FrameBuffer_OBJECTS = \
"CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.o"

# External object files for target test_FrameBuffer
test_FrameBuffer_EXTERNAL_OBJECTS =

test_FrameBuffer: CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.o
test_FrameBuffer: CMakeFiles/test_FrameBuffer.dir/build.make
test_FrameBuffer: libgraphics.a
test_FrameBuffer: CMakeFiles/test_FrameBuffer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_FrameBuffer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_FrameBuffer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_FrameBuffer.dir/build: test_FrameBuffer

.PHONY : CMakeFiles/test_FrameBuffer.dir/build

CMakeFiles/test_FrameBuffer.dir/requires: CMakeFiles/test_FrameBuffer.dir/test_Framebuffer.o.requires

.PHONY : CMakeFiles/test_FrameBuffer.dir/requires

CMakeFiles/test_FrameBuffer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_FrameBuffer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_FrameBuffer.dir/clean

CMakeFiles/test_FrameBuffer.dir/depend:
	cd /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles/test_FrameBuffer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_FrameBuffer.dir/depend

