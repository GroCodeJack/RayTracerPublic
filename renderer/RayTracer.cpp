#include "RayTracer.h"
#include "SceneContainer.h"
#include "FrameBuffer.h"
#include "Ray.h"
#include "Vector3D.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void RayTracer::render(){

  for(int i = 0; i < m_fb.getHeight(); i++){
    for(int j = 0; j < m_fb.getWidth(); j++){
      bool hitObj = false;
      HitStructure h;
      
      Ray r = m_sc.getCamera(0)->genRay(i, j, m_fb.getHeight(), m_fb.getWidth());
      float tmin = 1.0;
      float tmax = 10000.0;
      for(int k = 0; k < m_sc.getAllShapes().size(); k++){
	//cout << "Obj processed" << endl;
	if(m_sc.getShape(k)->closestHit(r, tmin, tmax, h)){
	  //m_fb.setPixelColor(i, j, m_sc.getShape(k)->getColor());
	  //cout << "HIT!" << endl;

	  hitObj = true;
	  h.shaderPtr = m_sc.getShape(k)->getShader();
	}
      }
      if(hitObj){
	m_fb.setPixelColor(i, j, h.shaderPtr->apply(&m_sc, h));
      }
      else{
	/*
	int range1 = 200;
	int r = rand() % range1 + 1;
	int rColor = rand() % 4 + 1;
	int bigStar = rand() % 5 + 1;
	float center = m_fb.getHeight() / 2;
	float galaxyBound = center * 0.4;
	//std::cout << center << std::endl;
	//std::cout << galaxyBound << std::endl;
	//std::cout << (int) center - galaxyBound << std::endl;
	if(r == 50 /*&& (i < (int) center - galaxyBound  || i > (int) center + galaxyBound )*/ //){
	/*
	  
	  std::cout << "FIRST COND" << std::endl;
	  if(bigStar == 4 && i > 1 && j > 1 && i < m_fb.getHeight() - 1 && j < m_fb.getHeight() - 1){
	    std::cout << "BIG STAR COND" << std::endl;
	    addBigStar(rColor, i, j);
	  }else{
	    std::cout << "SMALL STAR COND" << std::endl;
	    addSmallStar(rColor, i, j);
	  }
	  
	
	}else{
	*/
	  m_fb.setPixelColor(i, j, Vector3D(0.2, 0.2, 0.2));
	  //}
      }
    }
  }
}

  

void RayTracer::addMilkyWay(int rc, int bs, int i, int j){
  float c = m_fb.getWidth() / 2;
  float b = c * 0.39;
  int range = 200;
  if(i > (int) c - (b * 0.25) && i < (int) c + (b * 0.25)){
    int r = rand() % (range - 80) + 1;
    if(r == 50 && bs == 4){
      addBigStar(rc, i, j);
    }else if(r == 50){
      addSmallStar(rc, i, j);
    }else{
      int gascloud = rand() % 10 + 1;
      int rc2 = rand() % 3 + 1;
      if(gascloud == 4 || gascloud == 3 || gascloud == 2 || gascloud == 5){
      switch(rc){
      case 1:
	m_fb.setPixelColor(i, j, Vector3D(0.95, 0.85, 0.65));
	break;
      case 2:
	m_fb.setPixelColor(i, j, Vector3D(0.3, 0.05, 0.4));
	break;
      case 3:
	m_fb.setPixelColor(i, j, Vector3D(0.32, 0.3, 0.33));
      }
      }else{
	m_fb.setPixelColor(i, j, Vector3D(0.0, 0.0, 0.0));
    }
  }
  }

  if(i > (int) c - (b * 0.5) && i < (int) c + (b * 0.5) && (i < (int) c - (b * 0.25) || i > (int) c + (b * 0.25))){
    int r = rand() % (range - 60) + 1;
    if(r == 50 && bs == 4){
      addBigStar(rc, i, j);
    }else if(r == 50){
      addSmallStar(rc, i, j);
    }else{
      int gascloud = rand() % 10 + 1;
      int rc2 = rand() % 3 + 1;
      if(gascloud == 4 || gascloud == 2 || gascloud == 3){
      switch(rc){
      case 1:
	m_fb.setPixelColor(i, j, Vector3D(0.95, 0.85, 0.65));
	break;
      case 2:
	m_fb.setPixelColor(i, j, Vector3D(0.3, 0.05, 0.4));
	break;
      case 3:
	m_fb.setPixelColor(i, j, Vector3D(0.32, 0.3, 0.33));
      }
      }else{
	m_fb.setPixelColor(i, j, Vector3D(0.0, 0.0, 0.0));
      }
    }
  }

  if(i > (int) c - (b * 0.75) && i < (int) c + (b * 0.75) && (i < (int) c - (b * 0.5) || i > (int) c + (b * 0.5))){
    int r = rand() % (range - 40) + 1;
    if(r == 50 && bs == 4){
      addBigStar(rc, i, j);
    }else if(r == 50){
      addSmallStar(rc, i, j);
    }else{
      int gascloud = rand() % 10 + 1;
	int rc2 = rand() % 3 + 1;
      if(gascloud == 4 || gascloud == 2){
	switch(rc){
	case 1:
	  m_fb.setPixelColor(i, j, Vector3D(0.95, 0.85, 0.65));
	  break;
	case 2:
	  m_fb.setPixelColor(i, j, Vector3D(0.3, 0.05, 0.4));
	  break;
	case 3:
	  m_fb.setPixelColor(i, j, Vector3D(0.32, 0.3, 0.33));
	}
      }else{
	m_fb.setPixelColor(i, j, Vector3D(0.0, 0.0, 0.0));
      }
    }
  }

  if(i > (int) c - b && i < (int) c + b && (i < (int) c - (b * 0.75) || i > (int) c + (b * 0.75))){
    int r = rand() % (range - 20) + 1;
    if(r == 50 && bs == 4){
      addBigStar(rc, i, j);
    }else if(r == 50){
      addSmallStar(rc, i, j);
    }else{
      int gascloud = rand() % 10 + 1;
      int rc2 = rand() % 3 + 1;
      if(gascloud == 2){
	switch(rc){
	case 1:
	  m_fb.setPixelColor(i, j, Vector3D(0.95, 0.85, 0.65));
	  break;
	case 2:
	  m_fb.setPixelColor(i, j, Vector3D(0.3, 0.05, 0.4));
	  break;
	case 3:
	  m_fb.setPixelColor(i, j, Vector3D(0.32, 0.3, 0.33));
	}
      }else{
	m_fb.setPixelColor(i, j, Vector3D(0.0, 0.0, 0.0));
      }
      	
    }
  }
}
    
          

void RayTracer::addSmallStar(int rc, int i, int j){
  switch(rc){
  case 1:
    m_fb.setPixelColor(i, j, Vector3D(1.0, 1.0, 1.0));
    break;
  case 2:
    m_fb.setPixelColor(i, j, Vector3D(1.0, 0.9, 0.5));
    break;
  case 3:
    m_fb.setPixelColor(i, j, Vector3D(1.0, 0.6, 0.6));
    break;
  case 4:
    m_fb.setPixelColor(i, j, Vector3D(0.7, 0.95, 1.0));
    break;
  }
}

void RayTracer::addBigStar(int rc, int i, int j){
  switch(rc){
  case 1:
    m_fb.setPixelColor(i - 1, j - 1, Vector3D(1.0, 1.0, 1.0));
    m_fb.setPixelColor(i - 2, j - 1, Vector3D(1.0, 1.0, 1.0));
    m_fb.setPixelColor(i - 1, j - 2, Vector3D(1.0, 1.0, 1.0));
    m_fb.setPixelColor(i - 1, j, Vector3D(1.0, 1.0, 1.0));
    m_fb.setPixelColor(i, j - 1, Vector3D(1.0, 1.0, 1.0));
    break;
  case 2:
    m_fb.setPixelColor(i - 1, j - 1, Vector3D(1.0, 0.9, 0.5));
    m_fb.setPixelColor(i - 2, j - 1, Vector3D(1.0, 0.9, 0.5));
    m_fb.setPixelColor(i - 1, j - 2, Vector3D(1.0, 0.9, 0.5));
    m_fb.setPixelColor(i - 1, j, Vector3D(1.0, 0.9, 0.5));
    m_fb.setPixelColor(i, j - 1, Vector3D(1.0, 0.9, 0.5));
    break;
  case 3:
    m_fb.setPixelColor(i - 1, j - 1, Vector3D(1.0, 0.6, 0.6));
    m_fb.setPixelColor(i - 2, j - 1, Vector3D(1.0, 0.6, 0.6));
    m_fb.setPixelColor(i - 1, j - 2, Vector3D(1.0, 0.6, 0.6));
    m_fb.setPixelColor(i - 1, j, Vector3D(1.0, 0.6, 0.6));
    m_fb.setPixelColor(i, j - 1, Vector3D(1.0, 0.6, 0.6));

    break;
  case 4:
    m_fb.setPixelColor(i - 1, j - 1, Vector3D(0.7, 0.95, 1.0));
    m_fb.setPixelColor(i - 2, j - 1, Vector3D(0.7, 0.95, 1.0));
    m_fb.setPixelColor(i - 1, j - 2, Vector3D(0.7, 0.95, 1.0));
    m_fb.setPixelColor(i - 1, j, Vector3D(0.7, 0.95, 1.0));
    m_fb.setPixelColor(i, j - 1, Vector3D(0.7, 0.95, 1.0));

    break;
  }
}
  

