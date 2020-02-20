#include <iostream>
#include <string>
#include "Vector3D.h"
#include <vector>
#include "CoordinateSys.h"

class Camera {
 public:
  Camera();
  
  virtual Ray genRay(int i, int j) = 0;

 private:
  std::vector<Vector3D> m_position;
  std::string m_name;
  CoordinateSys m_coord;
};
  
  
