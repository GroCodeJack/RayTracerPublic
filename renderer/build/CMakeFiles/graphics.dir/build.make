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
include CMakeFiles/graphics.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/graphics.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/graphics.dir/flags.make

CMakeFiles/graphics.dir/FrameBuffer.o: CMakeFiles/graphics.dir/flags.make
CMakeFiles/graphics.dir/FrameBuffer.o: ../FrameBuffer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/graphics.dir/FrameBuffer.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graphics.dir/FrameBuffer.o -c /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/FrameBuffer.cpp

CMakeFiles/graphics.dir/FrameBuffer.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphics.dir/FrameBuffer.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/FrameBuffer.cpp > CMakeFiles/graphics.dir/FrameBuffer.i

CMakeFiles/graphics.dir/FrameBuffer.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphics.dir/FrameBuffer.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/FrameBuffer.cpp -o CMakeFiles/graphics.dir/FrameBuffer.s

CMakeFiles/graphics.dir/FrameBuffer.o.requires:

.PHONY : CMakeFiles/graphics.dir/FrameBuffer.o.requires

CMakeFiles/graphics.dir/FrameBuffer.o.provides: CMakeFiles/graphics.dir/FrameBuffer.o.requires
	$(MAKE) -f CMakeFiles/graphics.dir/build.make CMakeFiles/graphics.dir/FrameBuffer.o.provides.build
.PHONY : CMakeFiles/graphics.dir/FrameBuffer.o.provides

CMakeFiles/graphics.dir/FrameBuffer.o.provides.build: CMakeFiles/graphics.dir/FrameBuffer.o


CMakeFiles/graphics.dir/Vector3D.o: CMakeFiles/graphics.dir/flags.make
CMakeFiles/graphics.dir/Vector3D.o: ../Vector3D.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/graphics.dir/Vector3D.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graphics.dir/Vector3D.o -c /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/Vector3D.cpp

CMakeFiles/graphics.dir/Vector3D.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphics.dir/Vector3D.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/Vector3D.cpp > CMakeFiles/graphics.dir/Vector3D.i

CMakeFiles/graphics.dir/Vector3D.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphics.dir/Vector3D.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/Vector3D.cpp -o CMakeFiles/graphics.dir/Vector3D.s

CMakeFiles/graphics.dir/Vector3D.o.requires:

.PHONY : CMakeFiles/graphics.dir/Vector3D.o.requires

CMakeFiles/graphics.dir/Vector3D.o.provides: CMakeFiles/graphics.dir/Vector3D.o.requires
	$(MAKE) -f CMakeFiles/graphics.dir/build.make CMakeFiles/graphics.dir/Vector3D.o.provides.build
.PHONY : CMakeFiles/graphics.dir/Vector3D.o.provides

CMakeFiles/graphics.dir/Vector3D.o.provides.build: CMakeFiles/graphics.dir/Vector3D.o


CMakeFiles/graphics.dir/Triangle.o: CMakeFiles/graphics.dir/flags.make
CMakeFiles/graphics.dir/Triangle.o: ../Triangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/graphics.dir/Triangle.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graphics.dir/Triangle.o -c /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/Triangle.cpp

CMakeFiles/graphics.dir/Triangle.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphics.dir/Triangle.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/Triangle.cpp > CMakeFiles/graphics.dir/Triangle.i

CMakeFiles/graphics.dir/Triangle.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphics.dir/Triangle.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/Triangle.cpp -o CMakeFiles/graphics.dir/Triangle.s

CMakeFiles/graphics.dir/Triangle.o.requires:

.PHONY : CMakeFiles/graphics.dir/Triangle.o.requires

CMakeFiles/graphics.dir/Triangle.o.provides: CMakeFiles/graphics.dir/Triangle.o.requires
	$(MAKE) -f CMakeFiles/graphics.dir/build.make CMakeFiles/graphics.dir/Triangle.o.provides.build
.PHONY : CMakeFiles/graphics.dir/Triangle.o.provides

CMakeFiles/graphics.dir/Triangle.o.provides.build: CMakeFiles/graphics.dir/Triangle.o


CMakeFiles/graphics.dir/Rasterizer.o: CMakeFiles/graphics.dir/flags.make
CMakeFiles/graphics.dir/Rasterizer.o: ../Rasterizer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/graphics.dir/Rasterizer.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graphics.dir/Rasterizer.o -c /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/Rasterizer.cpp

CMakeFiles/graphics.dir/Rasterizer.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphics.dir/Rasterizer.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/Rasterizer.cpp > CMakeFiles/graphics.dir/Rasterizer.i

CMakeFiles/graphics.dir/Rasterizer.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphics.dir/Rasterizer.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/Rasterizer.cpp -o CMakeFiles/graphics.dir/Rasterizer.s

CMakeFiles/graphics.dir/Rasterizer.o.requires:

.PHONY : CMakeFiles/graphics.dir/Rasterizer.o.requires

CMakeFiles/graphics.dir/Rasterizer.o.provides: CMakeFiles/graphics.dir/Rasterizer.o.requires
	$(MAKE) -f CMakeFiles/graphics.dir/build.make CMakeFiles/graphics.dir/Rasterizer.o.provides.build
.PHONY : CMakeFiles/graphics.dir/Rasterizer.o.provides

CMakeFiles/graphics.dir/Rasterizer.o.provides.build: CMakeFiles/graphics.dir/Rasterizer.o


CMakeFiles/graphics.dir/PerspectiveCamera.o: CMakeFiles/graphics.dir/flags.make
CMakeFiles/graphics.dir/PerspectiveCamera.o: ../PerspectiveCamera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/graphics.dir/PerspectiveCamera.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graphics.dir/PerspectiveCamera.o -c /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/PerspectiveCamera.cpp

CMakeFiles/graphics.dir/PerspectiveCamera.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphics.dir/PerspectiveCamera.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/PerspectiveCamera.cpp > CMakeFiles/graphics.dir/PerspectiveCamera.i

CMakeFiles/graphics.dir/PerspectiveCamera.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphics.dir/PerspectiveCamera.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/PerspectiveCamera.cpp -o CMakeFiles/graphics.dir/PerspectiveCamera.s

CMakeFiles/graphics.dir/PerspectiveCamera.o.requires:

.PHONY : CMakeFiles/graphics.dir/PerspectiveCamera.o.requires

CMakeFiles/graphics.dir/PerspectiveCamera.o.provides: CMakeFiles/graphics.dir/PerspectiveCamera.o.requires
	$(MAKE) -f CMakeFiles/graphics.dir/build.make CMakeFiles/graphics.dir/PerspectiveCamera.o.provides.build
.PHONY : CMakeFiles/graphics.dir/PerspectiveCamera.o.provides

CMakeFiles/graphics.dir/PerspectiveCamera.o.provides.build: CMakeFiles/graphics.dir/PerspectiveCamera.o


CMakeFiles/graphics.dir/RayTracer.o: CMakeFiles/graphics.dir/flags.make
CMakeFiles/graphics.dir/RayTracer.o: ../RayTracer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/graphics.dir/RayTracer.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graphics.dir/RayTracer.o -c /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/RayTracer.cpp

CMakeFiles/graphics.dir/RayTracer.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphics.dir/RayTracer.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/RayTracer.cpp > CMakeFiles/graphics.dir/RayTracer.i

CMakeFiles/graphics.dir/RayTracer.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphics.dir/RayTracer.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/RayTracer.cpp -o CMakeFiles/graphics.dir/RayTracer.s

CMakeFiles/graphics.dir/RayTracer.o.requires:

.PHONY : CMakeFiles/graphics.dir/RayTracer.o.requires

CMakeFiles/graphics.dir/RayTracer.o.provides: CMakeFiles/graphics.dir/RayTracer.o.requires
	$(MAKE) -f CMakeFiles/graphics.dir/build.make CMakeFiles/graphics.dir/RayTracer.o.provides.build
.PHONY : CMakeFiles/graphics.dir/RayTracer.o.provides

CMakeFiles/graphics.dir/RayTracer.o.provides.build: CMakeFiles/graphics.dir/RayTracer.o


CMakeFiles/graphics.dir/CoordinateSys.o: CMakeFiles/graphics.dir/flags.make
CMakeFiles/graphics.dir/CoordinateSys.o: ../CoordinateSys.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/graphics.dir/CoordinateSys.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graphics.dir/CoordinateSys.o -c /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/CoordinateSys.cpp

CMakeFiles/graphics.dir/CoordinateSys.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphics.dir/CoordinateSys.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/CoordinateSys.cpp > CMakeFiles/graphics.dir/CoordinateSys.i

CMakeFiles/graphics.dir/CoordinateSys.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphics.dir/CoordinateSys.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/CoordinateSys.cpp -o CMakeFiles/graphics.dir/CoordinateSys.s

CMakeFiles/graphics.dir/CoordinateSys.o.requires:

.PHONY : CMakeFiles/graphics.dir/CoordinateSys.o.requires

CMakeFiles/graphics.dir/CoordinateSys.o.provides: CMakeFiles/graphics.dir/CoordinateSys.o.requires
	$(MAKE) -f CMakeFiles/graphics.dir/build.make CMakeFiles/graphics.dir/CoordinateSys.o.provides.build
.PHONY : CMakeFiles/graphics.dir/CoordinateSys.o.provides

CMakeFiles/graphics.dir/CoordinateSys.o.provides.build: CMakeFiles/graphics.dir/CoordinateSys.o


CMakeFiles/graphics.dir/Circle.o: CMakeFiles/graphics.dir/flags.make
CMakeFiles/graphics.dir/Circle.o: ../Circle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/graphics.dir/Circle.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graphics.dir/Circle.o -c /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/Circle.cpp

CMakeFiles/graphics.dir/Circle.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphics.dir/Circle.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/Circle.cpp > CMakeFiles/graphics.dir/Circle.i

CMakeFiles/graphics.dir/Circle.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphics.dir/Circle.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/Circle.cpp -o CMakeFiles/graphics.dir/Circle.s

CMakeFiles/graphics.dir/Circle.o.requires:

.PHONY : CMakeFiles/graphics.dir/Circle.o.requires

CMakeFiles/graphics.dir/Circle.o.provides: CMakeFiles/graphics.dir/Circle.o.requires
	$(MAKE) -f CMakeFiles/graphics.dir/build.make CMakeFiles/graphics.dir/Circle.o.provides.build
.PHONY : CMakeFiles/graphics.dir/Circle.o.provides

CMakeFiles/graphics.dir/Circle.o.provides.build: CMakeFiles/graphics.dir/Circle.o


CMakeFiles/graphics.dir/LambertianShader.o: CMakeFiles/graphics.dir/flags.make
CMakeFiles/graphics.dir/LambertianShader.o: ../LambertianShader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/graphics.dir/LambertianShader.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graphics.dir/LambertianShader.o -c /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/LambertianShader.cpp

CMakeFiles/graphics.dir/LambertianShader.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphics.dir/LambertianShader.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/LambertianShader.cpp > CMakeFiles/graphics.dir/LambertianShader.i

CMakeFiles/graphics.dir/LambertianShader.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphics.dir/LambertianShader.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/LambertianShader.cpp -o CMakeFiles/graphics.dir/LambertianShader.s

CMakeFiles/graphics.dir/LambertianShader.o.requires:

.PHONY : CMakeFiles/graphics.dir/LambertianShader.o.requires

CMakeFiles/graphics.dir/LambertianShader.o.provides: CMakeFiles/graphics.dir/LambertianShader.o.requires
	$(MAKE) -f CMakeFiles/graphics.dir/build.make CMakeFiles/graphics.dir/LambertianShader.o.provides.build
.PHONY : CMakeFiles/graphics.dir/LambertianShader.o.provides

CMakeFiles/graphics.dir/LambertianShader.o.provides.build: CMakeFiles/graphics.dir/LambertianShader.o


CMakeFiles/graphics.dir/BlinnPhongShader.o: CMakeFiles/graphics.dir/flags.make
CMakeFiles/graphics.dir/BlinnPhongShader.o: ../BlinnPhongShader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/graphics.dir/BlinnPhongShader.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graphics.dir/BlinnPhongShader.o -c /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/BlinnPhongShader.cpp

CMakeFiles/graphics.dir/BlinnPhongShader.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphics.dir/BlinnPhongShader.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/BlinnPhongShader.cpp > CMakeFiles/graphics.dir/BlinnPhongShader.i

CMakeFiles/graphics.dir/BlinnPhongShader.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphics.dir/BlinnPhongShader.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/BlinnPhongShader.cpp -o CMakeFiles/graphics.dir/BlinnPhongShader.s

CMakeFiles/graphics.dir/BlinnPhongShader.o.requires:

.PHONY : CMakeFiles/graphics.dir/BlinnPhongShader.o.requires

CMakeFiles/graphics.dir/BlinnPhongShader.o.provides: CMakeFiles/graphics.dir/BlinnPhongShader.o.requires
	$(MAKE) -f CMakeFiles/graphics.dir/build.make CMakeFiles/graphics.dir/BlinnPhongShader.o.provides.build
.PHONY : CMakeFiles/graphics.dir/BlinnPhongShader.o.provides

CMakeFiles/graphics.dir/BlinnPhongShader.o.provides.build: CMakeFiles/graphics.dir/BlinnPhongShader.o


# Object files for target graphics
graphics_OBJECTS = \
"CMakeFiles/graphics.dir/FrameBuffer.o" \
"CMakeFiles/graphics.dir/Vector3D.o" \
"CMakeFiles/graphics.dir/Triangle.o" \
"CMakeFiles/graphics.dir/Rasterizer.o" \
"CMakeFiles/graphics.dir/PerspectiveCamera.o" \
"CMakeFiles/graphics.dir/RayTracer.o" \
"CMakeFiles/graphics.dir/CoordinateSys.o" \
"CMakeFiles/graphics.dir/Circle.o" \
"CMakeFiles/graphics.dir/LambertianShader.o" \
"CMakeFiles/graphics.dir/BlinnPhongShader.o"

# External object files for target graphics
graphics_EXTERNAL_OBJECTS =

libgraphics.a: CMakeFiles/graphics.dir/FrameBuffer.o
libgraphics.a: CMakeFiles/graphics.dir/Vector3D.o
libgraphics.a: CMakeFiles/graphics.dir/Triangle.o
libgraphics.a: CMakeFiles/graphics.dir/Rasterizer.o
libgraphics.a: CMakeFiles/graphics.dir/PerspectiveCamera.o
libgraphics.a: CMakeFiles/graphics.dir/RayTracer.o
libgraphics.a: CMakeFiles/graphics.dir/CoordinateSys.o
libgraphics.a: CMakeFiles/graphics.dir/Circle.o
libgraphics.a: CMakeFiles/graphics.dir/LambertianShader.o
libgraphics.a: CMakeFiles/graphics.dir/BlinnPhongShader.o
libgraphics.a: CMakeFiles/graphics.dir/build.make
libgraphics.a: CMakeFiles/graphics.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX static library libgraphics.a"
	$(CMAKE_COMMAND) -P CMakeFiles/graphics.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/graphics.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/graphics.dir/build: libgraphics.a

.PHONY : CMakeFiles/graphics.dir/build

CMakeFiles/graphics.dir/requires: CMakeFiles/graphics.dir/FrameBuffer.o.requires
CMakeFiles/graphics.dir/requires: CMakeFiles/graphics.dir/Vector3D.o.requires
CMakeFiles/graphics.dir/requires: CMakeFiles/graphics.dir/Triangle.o.requires
CMakeFiles/graphics.dir/requires: CMakeFiles/graphics.dir/Rasterizer.o.requires
CMakeFiles/graphics.dir/requires: CMakeFiles/graphics.dir/PerspectiveCamera.o.requires
CMakeFiles/graphics.dir/requires: CMakeFiles/graphics.dir/RayTracer.o.requires
CMakeFiles/graphics.dir/requires: CMakeFiles/graphics.dir/CoordinateSys.o.requires
CMakeFiles/graphics.dir/requires: CMakeFiles/graphics.dir/Circle.o.requires
CMakeFiles/graphics.dir/requires: CMakeFiles/graphics.dir/LambertianShader.o.requires
CMakeFiles/graphics.dir/requires: CMakeFiles/graphics.dir/BlinnPhongShader.o.requires

.PHONY : CMakeFiles/graphics.dir/requires

CMakeFiles/graphics.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/graphics.dir/cmake_clean.cmake
.PHONY : CMakeFiles/graphics.dir/clean

CMakeFiles/graphics.dir/depend:
	cd /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/renderer/build/CMakeFiles/graphics.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/graphics.dir/depend

