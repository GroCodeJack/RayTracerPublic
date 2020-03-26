# 
# Adds the src directory to the include search
# path. ${CMAKE_SOURCE_DIR} is prefixed to allow the files in the
# utest directory to correctly include the relative reference to the
# src files.
#

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(${CMAKE_SOURCE_DIR}/src)

add_library(graphics
  FrameBuffer.h
  FrameBuffer.cpp
  Vector3D.h
  Vector3D.cpp
  Triangle.h
  Triangle.cpp
  Rasterizer.h
  Rasterizer.cpp
  Camera.h
  PerspectiveCamera.h
  PerspectiveCamera.cpp
  SceneContainer.h
  Ray.h
  RayTracer.h
  RayTracer.cpp
  Shape.h
  CoordinateSys.h
  CoordinateSys.cpp
  Circle.h
  Circle.cpp
  Scene_jsonParser.cpp
  Shader.h
  LambertianShader.h
  BlinnPhongShader.h
  HitStructure.h
  Light.h
  
  )

add_executable(test_RayTracer
  test_RayTracer.cpp
  )


target_link_libraries(test_RayTracer graphics)
target_link_libraries(test_RayTracer sive-util)
target_link_libraries(test_RayTracer ${Boost_PROGRAM_OPTIONS_LIBRARIES})
target_link_libraries(test_RayTracer ${PNG_LIBRARIES})
target_link_libraries(test_RayTracer ${ZLIB_LIBRARIES})




