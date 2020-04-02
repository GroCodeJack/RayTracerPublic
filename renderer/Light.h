#pragma once

#include "Vector3D.h"
#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>


class Light {
 public:
  Light();
 Light(const Vector3D &p, const Vector3D &i)
  {
    m_pos[0] = p[0];
    m_pos[1] = p[1];
    m_pos[2] = p[2];

    m_intensity[0] = i[0];
    m_intensity[1] = i[1];
    m_intensity[2] = i[2];
  }
  virtual ~Light(){}

  Vector3D getPosition(){ return m_pos; }
  Vector3D getIntensity(){ return m_intensity; }
  
  
 private:
  Vector3D m_pos, m_intensity;

};
