#pragma once

//#include "PerspectiveCamera.h"
//#include "Camera.h"
#include "Vector3D.h"

class Ray{
 public:

  Ray();
 Ray(Vector3D o, Vector3D d):
  m_origin(o), m_direction(d)
  {
  }

 const Vector3D getOrigin() const { return m_origin; }
 const Vector3D getDirection() const { return m_direction; }

 private:
  Vector3D m_origin;
  Vector3D m_direction;
};
