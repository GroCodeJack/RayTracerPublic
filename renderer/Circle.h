#pragma once

#include "Vector3D.h"
#include "Ray.h"
#include "Shape.h"
#include "math.h"

class Circle : public Shape {

 public:

  Circle();
  ~Circle();
  Circle(const float& x, const float& y, const float& z, const float& r, const Vector3D& color);
  Circle(const float& x, const float& y, const float& z, const float& r);
  Vector3D getColor();
  void setColor(float x, float y, float z);
 
  bool closestHit(const Ray &r, float tmin, float &tmax) const;

 private:
  Vector3D m_center;
  float m_radius;

};