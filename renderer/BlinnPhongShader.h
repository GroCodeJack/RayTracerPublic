#pragma once

#include <iostream>
#include "Vector3D.h"
#include <string>
#include "Shape.h"
#include "Shader.h"
#include <vector>
#include <cstdlib>
#include "HitStructure.h"
#include "SceneContainer.h"
#include <cmath>

class BlinnPhongShader : public Shader {
 public:
 BlinnPhongShader():
  Shader()
    {
    }
      

 BlinnPhongShader(Vector3D diffuse, Vector3D spec, float phExp):
  Shader()
    {
      m_diffuse[0] = diffuse[0];
      m_diffuse[1] = diffuse[1];
      m_diffuse[2] = diffuse[2];

      m_spec[0] = spec[0];
      m_spec[1] = spec[1];
      m_spec[2] = spec[2];

      m_phExp = phExp;
    }
  

  Vector3D apply(SceneContainer* s, HitStructure &h);
  Vector3D computeShading();
  Vector3D computeShading(Vector3D n);

 private:
  Vector3D m_c;
  Vector3D m_diffuse;
  Vector3D m_spec;
  float m_phExp;
};
