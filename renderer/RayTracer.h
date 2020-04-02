#pragma once

#include <vector>
#include "FrameBuffer.h"
#include "Shape.h"
#include "Camera.h"
#include "SceneContainer.h"


class RayTracer {
 public:
 RayTracer():
  m_fb(FrameBuffer()), m_sc(SceneContainer())
    {
    }

 RayTracer(SceneContainer &sc, FrameBuffer &fb):
  m_sc(sc), m_fb(fb)
  {
  }
  
  void render();

  FrameBuffer getFB(){
    return m_fb;
  }

  void spaceMode();
  void addSmallStar(int rc, int i, int j);
  void addBigStar(int rc, int i, int j);
  void addMilkyWay(int rc, int bs, int i, int j);

 private:
  SceneContainer m_sc;
  FrameBuffer m_fb;

};
