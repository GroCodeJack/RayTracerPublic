#pragma once

#include <iostream>
#include "Vector3D.h"
#include <string>
//#include "Shape.h"
#include "Shader.h"
#include <vector>
#include <cstdlib>
#include "HitStructure.h"
#include "SceneContainer.h"
#include <cmath>


class LambertianShader : public Shader {
 public:
 LambertianShader():
  Shader()
    {
    }
  
  ~LambertianShader(){}

 

 LambertianShader(Vector3D diffuse):
  Shader()
  {
    m_diffuse[0] = diffuse[0];
    m_diffuse[1] = diffuse[1];
    m_diffuse[2] = diffuse[2];
  }

  Vector3D apply(SceneContainer* s, HitStructure &h);
  //Vector3D computeShading();
  //Vector3D computeShading(Vector3D n);
  void setName(std::string name);
  int count;

 private:
  Vector3D m_c;
  Vector3D m_diffuse;
};
