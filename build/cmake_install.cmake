# Install script for directory: /home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build/json-develop/cmake_install.cmake")
  include("/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build/glfw-master/cmake_install.cmake")
  include("/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build/src/cmake_install.cmake")
  include("/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build/examples/cmake_install.cmake")
  include("/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build/renderer/cmake_install.cmake")
  include("/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build/utests/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/csugrads/groth252/summercode/graphics/ghcLab1pt2/myCode/sample/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
