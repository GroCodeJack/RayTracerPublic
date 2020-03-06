#pragma once

#include <vector>
#include <iostream>
#include "Vector3D.h"
#include <string>
#include "Ray.h"

class Shape {
 public:
  //Shape();
  virtual bool closestHit(const Ray &r) const = 0;

 private:
  // std::vector<float> vertices;
};
