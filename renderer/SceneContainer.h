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
  SceneContainer();

 private:
  std::vector<Camera*> m_allCameras;
  std::vector<Shader*> m_allShaders;
  std::vector<Light*> m_allLights;
  std::vector<Shape*> m_allShapes;

};
