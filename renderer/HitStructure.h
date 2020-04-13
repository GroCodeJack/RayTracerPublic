#pragma once

#include <iostream>
#include "Ray.h"
#include "Shader.h"
#include <limits>
#include "Vector3D.h"

class Shader;
class Ray;
class HitStructure {

 public:

 HitStructure():
  t(std::numeric_limits<double>::max()),
    pt(0, 0, 0), n(0, 0, 0), r(Vector3D(0, 0, 0), Vector3D(0, 0, 0)), shaderPtr(0)
    {
    }

  ~HitStructure(){}
  

  double t;
  Ray r;
  Vector3D pt;
  Vector3D n;
  Shader *shaderPtr;
  Vector3D objColor;

};
