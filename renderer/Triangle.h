#pragma once
#include "Shape.h"
#include "Vector3D.h"
#include "FrameBuffer.h"
#include "Ray.h"

class Triangle : public Shape {
 public:
  Triangle();
  ~Triangle();
  Triangle(const Vector3D& a, const Vector3D& b, const Vector3D& c);
  const Vector3D operator[](const int idx) const;
  Vector3D &operator[](const int idx);
  bool closestHit(const Ray &r) const;
  


 private:
  std::vector<Vector3D> vertices;

};
