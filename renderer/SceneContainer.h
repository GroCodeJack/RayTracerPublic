#pragma once

#include <map>
#include <glm/gtx/string_cast.hpp>
#include <iostream>
#include <string>
#include <vector>
#include "Camera.h"
#include "Shader.h"
#include "Shape.h"
#include "CoordinateSys.h"
#include "Light.h"
#include <nlohmann/json.hpp>
//#include "LambertianShader.h"
#include "HitStructure.h"

using json = nlohmann::json;


class SceneContainer {
 public:
  //SceneContainer();

  void addCamera(Camera* cam){
    m_allCameras.push_back(cam);
  }

  void addShape(Shape* s){
    m_allShapes.push_back(s);
    std::cout << "shape added" << std::endl;
  }

  Camera* getCamera(int x){
    return m_allCameras[x];
  }

  Shape* getShape(int x){
    return m_allShapes[x];
  }

  Light* getLight(int x){
    return m_allLights[x];
  }

  std::vector<Shape*> getAllShapes(){
    return m_allShapes;
  }
  void parseJSONData(const std::string &filename);
  Shape* extractAndCreateShapeFromJSONData( json &shapeData );
  glm::mat4 parseTransformData( json &transformData );

  Shader *locateShader( const std::string &sname )
  {
    std::map<std::string, Shader*>::const_iterator mIterator = shaderMap.find( sname );
    if (mIterator != shaderMap.end()) {
      return mIterator->second;
    }
    else
      return nullptr;
  }
    

 private:
  std::vector<Camera*> m_allCameras;
  std::vector<Shader*> m_allShaders;
  std::vector<Light*> m_allLights;
  std::vector<Shape*> m_allShapes;
  std::map<std::string, Shader*> shaderMap; 

  Vector3D m_background;
  float m_aspectRatio;

};
