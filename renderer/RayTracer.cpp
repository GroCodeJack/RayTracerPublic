#include "RayTracer.h"
#include "SceneContainer.h"
#include "FrameBuffer.h"
#include "Ray.h"
#include "Vector3D.h"
#include <iostream>

using namespace std;

void RayTracer::render(const Shape* shPtr){
  //chapter 4 section 2-3
  for(int i = 0; i < m_fb.getHeight(); i++){
    for(int j = 0; j < m_fb.getWidth(); j++){
      Ray r = m_sc.getCamera(0)->genRay(i, j, m_fb.getHeight(), m_fb.getWidth());
      //cout << m_sc.getCamera(0)->getFL() << endl;
      //cout << r.getDirection()[0] << endl;
      //cout << r.getDirection()[1] << endl;
      //cout << r.getDirection()[2] << endl;
      if(shPtr->closestHit(r)){
	if(i % 4 == 0 && j % 4 == 0){
	  cout << "hit" << endl; }
	m_fb.setPixelColor(i, j, Vector3D(1.0, 0.0, 0.0));
      }
      else {
	if(i % 4 == 0 && j % 4 == 0){
	  cout << "no hit" << endl; }
	m_fb.setPixelColor(i, j, Vector3D(0.0, 0.0, 1.0));
      }
    }
  }
}
