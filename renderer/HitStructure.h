#pragma once

#include <iostream>
#include "Ray.h"
#include "Shader.h"
#include <limits>

class Shader;

class HitStructure {

 public:

 HitStructure():
  t(std::numeric_limits<double>::max()),
    pt(0, 0, 0), n(0, 0, 0), shaderPtr(0)
    {
    }

  ~HitStructure(){}
  

  double t;
  //Ray r;
  Vector3D pt;
  Vector3D n;
  Shader *shaderPtr;
  Vector3D objColor;

};
