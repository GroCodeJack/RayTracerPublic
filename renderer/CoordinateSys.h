#pragma once

#include "Vector3D.h"
#include <string>
#include <vector>


class CoordinateSys {
 public:
  CoordinateSys();
  CoordinateSys(Vector3D g);
  CoordinateSys(Vector3D g, Vector3D ud);
 
  Vector3D getU(){ return u; };
  Vector3D getV(){ return v; };
  Vector3D getW(){ return w; };
 
 private:
  Vector3D u;
  Vector3D v;
  Vector3D w;
};
