#pragma once

#include "Vector3D.h"
#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>


class Light {
 public:
  Light();
  Light(const Vector3D &p, const Vector3D &i);
  virtual ~Light(){}
  
 private:
  Vector3D m_pos, m_intensity;

};
