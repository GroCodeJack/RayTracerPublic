#pragma once

#include "Triangle.h"
#include "FrameBuffer.h"

class Rasterizer {

 public:

  Rasterizer();
  // void rasterizeTriangle(Triangle t, FrameBuffer& fb);

 private:
  int xmin, xmax, ymin, ymax;
  // void findBoundingBox(Triangle t);

};
