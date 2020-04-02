#pragma once

#include <iostream>
#include "Vector3D.h"
#include <string>
#include <vector>
//#include "SceneContainer.h"
#include "HitStructure.h"
//#include "Shape.h"

class HitStructure;
class SceneContainer;

class Shader {
 public:
  Shader(){}
  ~Shader(){}
  virtual Vector3D apply(SceneContainer *s, HitStructure &h) = 0;
  //virtual Vector3D computeShading() = 0;
  //virtual Vector3D computeShading(Vector3D n) = 0;
  void setName(std::string n){ name = n; }

  

 private:
  std::string name;
};
