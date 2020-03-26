#pragma once

#include <iostream>
#include "Vector3D.h"
#include <string>
#include "Shape.h"
#include "Shader.h"
#include <vector>
#include <cstdlib>

class BlinnPhongShader : public Shader {
 public:
 BlinnPhongShader():
  Shader()
    {
      m_c[0] = ((float) rand() / (RAND_MAX));
      m_c[1] = ((float) rand() / (RAND_MAX));
      m_c[2] = ((float) rand() / (RAND_MAX));
    }

 BlinnPhongShader(Vector3D kd):
  Shader()
    {
      m_c[0] = kd[0];
      m_c[1] = kd[1];
      m_c[2] = kd[2];
    }
  

  Vector3D apply();
  Vector3D computeShading();
  Vector3D computeShading(Vector3D n);

 private:
  Vector3D m_c;
};
