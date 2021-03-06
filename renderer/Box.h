#pragma once
#include "Shape.h"
#include "Vector3D.h"
#include "FrameBuffer.h"
#include "Ray.h"
#include "HitStructure.h"
#include "Triangle.h"
#include <vector>
#include "Shader.h"

class Box : public Shape {
 public:
  Box();
  ~Box();
  Box(const Vector3D& min, const Vector3D& max);
  Vector3D &operator[](const int idx);
  bool closestHit(const Ray &r, float tmin, float &tmax, HitStructure &h);
  void setShader(Shader *s){ shader = s; }
  void printTris();
  void printVerts();

 private:
  std::vector<Vector3D> m_vertList;
  std::vector<Triangle> m_triList;
  Shader *shader;

};
