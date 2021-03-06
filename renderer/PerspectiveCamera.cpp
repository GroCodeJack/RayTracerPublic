#include <iostream>
#include "PerspectiveCamera.h"
#include "Ray.h"

Ray PerspectiveCamera::genRay(int i, int j, int nx, int ny ){
  float left = -m_ip_w / 2;
  float right = m_ip_w / 2;
  float top = m_ip_w / 2;
  float bottom = -m_ip_w / 2;

  float u = left + (right - left) * ((i + 0.5) / nx );
  float v = bottom + (top - bottom) * ((j + 0.5) / ny);

  Vector3D wxfl = m_coord.getW() * m_focalLength;
  Vector3D uxbigu = m_coord.getU() * u;
  Vector3D vxbigv = m_coord.getV() * v;
  
  
  Vector3D d1plusd2 = wxfl + uxbigu;
  Vector3D d1pd2plusd3 = d1plusd2 + vxbigv;

  
  Ray r(m_position, d1pd2plusd3);
  return r;
}
