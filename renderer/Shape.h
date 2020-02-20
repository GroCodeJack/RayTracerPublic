#include <vector>
#include <iostream>
#include "Vector3D.h"
#include <string>

class Shape {
 public:
  Shape();
  virtual bool closestHit(const Ray &r) = 0;

 private:
  std::vector<float> vertices;
};