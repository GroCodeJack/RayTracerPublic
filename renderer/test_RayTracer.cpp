#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>

#include "png++/png.hpp"
#include "Vector3D.h"
#include "handleGraphicsArgs.h"
#include "FrameBuffer.h"
#include "Rasterizer.h"
#include "Triangle.h"

#include "Camera.h"
#include "PerspectiveCamera.h"
#include "SceneContainer.h"
#include "RayTracer.h"
#include "Shape.h"
#include <string>


int main(int argc, char *argv[])
{
  sivelab::GraphicsArgs args;
  args.process(argc, argv);

  FrameBuffer fb(args.width, args.height);
  /*
  for(int i = 0; i < 100; i++){
    for(int j = 0; j < 100; j++){
      fb.setPixelColor(i, j, Vector3D(1.0, 1.0, 1.0));
    }
  }
  */
  
  SceneContainer sc;

  Camera *cam = new PerspectiveCamera;
  sc.addCamera(cam);
  //std::string bgtest = "bgtest";
  //fb.exportAsPNG(bgtest);

  RayTracer *rayTracer = new RayTracer(sc, fb);
  Shape *s = new Triangle(Vector3D(-1.0, -1.0, -5.0), Vector3D(1.0, -1.0, -5.0), Vector3D(0.0, 1.0, -5.0));
  rayTracer->render(s);
  



  

  // When complete, output the file
  std::string oFilename;
  if (args.isSet("outputfile", oFilename)) {
    rayTracer->getFB().exportAsPNG( oFilename );
  }
  

}
