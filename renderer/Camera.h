#pragma once

#include <iostream>
#include <string>
#include "Vector3D.h"
#include <vector>
#include "CoordinateSys.h"
#include "Ray.h"

class Camera {
 public:
  
 Camera():
  m_position(Vector3D(0, 0, 0)), m_coord()
    {
    }

 Camera(Vector3D p, Vector3D gaze):
  m_position(p), m_coord(gaze, Vector3D(0, 1, 0))
    {
    }
  
  
  virtual Ray genRay(int i, int j, int nx, int ny) = 0;

  CoordinateSys getCoord(){
    return m_coord;
  }

  Vector3D getPosition(){ return m_position; }
  

 protected:
  Vector3D m_position;
  std::string m_name;
  CoordinateSys m_coord;
};
  
  
