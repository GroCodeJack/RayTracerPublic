#include "RayTracer.h"
#include "SceneContainer.h"
#include "FrameBuffer.h"
#include "Ray.h"
#include "Vector3D.h"
#include <iostream>

using namespace std;

void RayTracer::render(){

  for(int i = 0; i < m_fb.getHeight(); i++){
    for(int j = 0; j < m_fb.getWidth(); j++){
      bool hitObj = false;
      
      Ray r = m_sc.getCamera(0)->genRay(i, j, m_fb.getHeight(), m_fb.getWidth());
      float tmin = 1.0;
      float tmax = 10000.0;
      for(int k = 0; k < m_sc.getAllShapes().size(); k++){
	//cout << "Obj processed" << endl;
	if(m_sc.getShape(k)->closestHit(r, tmin, tmax)){
	  m_fb.setPixelColor(i, j, m_sc.getShape(k)->getColor());
	  //cout << "HIT!" << endl;

	  hitObj = true;
	}
      }
      if(!hitObj){
	m_fb.setPixelColor(i, j, m_fb.getBackground());
      }
      
    }
    std::cout << i << std::endl;
  }
}

