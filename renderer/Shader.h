#pragma once

#include <iostream>
#include "Vector3D.h"
#include <string>
#include <vector>

class Shader {
 public:
  Shader();
  virtual Vector3D apply() = 0;
  virtual Vector3D computeShading() = 0;
  virtual Vector3D computeShading(Vector3D n) = 0;

 private:
  std::string name;
};
