#pragma once

#include <vector>
#include <iostream>
#include "Vector3D.h"
#include <string>
#include "Ray.h"
#include "HitStructure.h"

class Shape {
 public:
  //Shape();
  virtual bool closestHit(const Ray &r, float tmin, float &tmax, HitStructure& h) const = 0;
  Vector3D getColor(){ return m_color; }
  void setName(std::string name){ m_name = name; }
  void setColor(float x, float y, float z){
    m_color[0] = x;
    m_color[1] = y;
    m_color[2] = z;
  }

 protected:
  // std::vector<float> vertices;
  Vector3D m_color;
  std::string m_name;
};
