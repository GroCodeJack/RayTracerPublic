#pragma once

#include "Vector3D.h"
#include "Camera.h"
#include <vector>
#include "Ray.h"

class PerspectiveCamera: public Camera {
 public:
 PerspectiveCamera():
  Camera()
    {
      m_nX = 100;
      m_nY = 100;
      m_ip_w = 0.5;
      m_focalLength = 1.0;
      
    }
 PerspectiveCamera(int nX, int nY, float fL, float ip_w):
  Camera(), m_nX(nX), m_nY(nY), m_focalLength(fL), m_ip_w(ip_w)
  {
  }

 PerspectiveCamera(Vector3D position, Vector3D dir, float focalLength, float ar, float ipw):
  Camera(position, dir), m_focalLength(focalLength), m_ar(ar), m_ip_w(ipw), m_nX(400), m_nY(400)
  {
  }

  Ray genRay(int i, int j, int nx, int ny);

  float getFL(){
    return m_focalLength;
  }

 private:
  int m_nX;
  int m_nY;
  float m_focalLength;
  float m_ip_w;
  float m_ar;
		    
};
