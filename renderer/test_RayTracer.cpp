#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>
#include <cstdlib>

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
#include "Circle.h"
#include <string>

bool isPrime(int n);

int main(int argc, char *argv[])
{
  sivelab::GraphicsArgs args;
  args.process(argc, argv);

  FrameBuffer fb(args.width, args.height);
  fb.setBackground(Vector3D(0.0, 0.0, 0.0));
  
  SceneContainer sc;

  sc.parseJSONData(args.inputFileName);
  
  Camera *cam = new PerspectiveCamera;
  cam->getCoord().getU().printVector();
  cam->getCoord().getV().printVector();
  cam->getCoord().getW().printVector();
  
  
  sc.addCamera(cam);
    /*;

  Shape *c = new Circle(1.0, 1.0, 3.0, 0.5, Vector3D(1.0, 0.0, 0.0));
  Shape *c1 = new Circle(1.0, -1.0, 3.0, 0.5, Vector3D(0.0, 1.0, 0.0));
  Shape *c2 = new Circle(-1.0, 1.0, 3.0, 0.5, Vector3D(0.0, 0.0, 1.0));
  Shape *c3 = new Circle(-1.0, -1.0, 3.0, 0.5, Vector3D(1.0, 0.0, 1.0));

  sc.addShape(c);
  sc.addShape(c1);
  sc.addShape(c2);
  sc.addShape(c3);
  
  
  Shape *t1 = new Triangle(Vector3D(-1.2, -0.2, -7.0),
			   Vector3D(0.8, -0.5, -5.0),
			   Vector3D(0.9, 0.0, -5.0),
			   Vector3D(1.0, 0.0, 0.0));
  Shape *t2 = new Triangle(Vector3D(0.773205, -0.93923, -7.0),
			   Vector3D(0.0330127, 0.94282, -5.0),
			   Vector3D(-0.45, 0.779423, -5.0),
			   Vector3D(0.0, 1.0, 0.0));
  Shape *t3 = new Triangle(Vector3D(0.426795, 1.13923, -7.0),
			   Vector3D(-0.833013, -0.44282, -5.0),
			   Vector3D(-0.45, -0.779423, -5.0),
			   Vector3D(0.0, 0.0, 1.0));
  sc.addShape(t1);
  sc.addShape(t2);
  sc.addShape(t3);
  #endif

  
  Shape *c = new Circle(0.0, 0.0, 6.0, 1.0, Vector3D(1.0, 0.0, 1.0));
  sc.addShape(c);
  
  int cc = 0;
  int fuck = 0;

  for(int i = -50; i < 50; i++){
    for(int j = -50; j < 50; j++){
      
      bool isPrime = false;
      for(int k=1; k < i; k++)
	{
	  if(i%k!=0){
	    isPrime = true;
	  }
      
      if(isPrime(abs(i)) && isPrime(abs(j))){
	Shape *c = new Circle(float(i), float(j), -150.0, 0.2, Vector3D(1.0, 0.0, 1.0));
	sc.addShape(c);
	std::cout << cc << std::endl;
      }
      cc++;
    }
  }
  std::cout << "done" << std::endl;
    */
	  
	  




  RayTracer *rayTracer = new RayTracer(sc, fb);
  
  rayTracer->render();
  


  
  std::string oFilename;
  if (args.isSet("outputfile", oFilename)) {
    rayTracer->getFB().exportAsPNG( oFilename );
  }
  

}

bool isPrime(int n)
{
  // Corner case
  if (n <= 1)
    return false;

  // Check from 2 to n-1
  for (int i = 2; i < n; i++)
    if (n % i == 0)
      return false;

  return true;
}
