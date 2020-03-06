#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Camera.h"
#include "Shader.h"
#include "Shape.h"
#include "CoordinateSys.h"
#include "Light.h"

class SceneContainer {
 public:
  //SceneContainer();

  void addCamera(Camera* cam){
    m_allCameras.push_back(cam);
  }

  void addShape(Shape* s){
    m_allShapes.push_back(s);
  }

  Camera* getCamera(int x){
    return m_allCameras[x];
  }

  Shape* getShape(int x){
    return m_allShapes[x];
  }

 private:
  std::vector<Camera*> m_allCameras;
  std::vector<Shader*> m_allShaders;
  std::vector<Light*> m_allLights;
  std::vector<Shape*> m_allShapes;

};
