#pragma once
#include "Shape.h"
#include "Vector3D.h"
#include "FrameBuffer.h"
#include "Ray.h"
#include "HitStructure.h"
//#include "SceneContainer.h"

class Triangle : public Shape {
 public:
  Triangle();
  ~Triangle();
  Triangle(const Vector3D& a, const Vector3D& b, const Vector3D& c, const Vector3D &color);
  Triangle(const Vector3D& a, const Vector3D& b, const Vector3D& c);
  const Vector3D operator[](const int idx) const;
  Vector3D &operator[](const int idx);
  void setColor(float x, float y, float z);
  Vector3D getColor();
  bool closestHit(const Ray &r, float tmin, float &tmax, HitStructure &h);
  void setShader(Shader *s){ shader = s; }
  


 private:
  std::vector<Vector3D> vertices;
  Shader *shader;

};
