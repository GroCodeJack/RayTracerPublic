#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>
/*
#include <boost/progress.hpp>
#include <boost/thread.hpp>
#include <boost/date_time.hpp>
*/
#include "png++/png.hpp"
#include "Vector3D.h"
#include "handleGraphicsArgs.h"
#include "FrameBuffer.h"
#include "Rasterizer.h"
#include "Triangle.h"

int main(int argc, char *argv[])
{
  sivelab::GraphicsArgs args;
  args.process(argc, argv);
  /*

  boost::progress_timer ptimer;
  int startTime = ptimer.elapsed();
  */
  // Create a Framebuffer to hold the 2D data for our scene
  FrameBuffer fb(args.width, args.height);
  Vector3D color(1.0, 0.25, 1.0);
  // fb.setBackground(color);

  Triangle t(Vector3D(200.0, 40.0, 0.0), Vector3D(250.0, 80.0, 0.0), Vector3D(225.0, 200.0, 0.0));
  
  Rasterizer r;
  //r.rasterizeTriangle(t, fb);

  //
  // "Render" the scene - normally you might call your different
  // renderer class functions here, but we're going to do something
  // very simple to test the FB
  //

  // e.g. set all the framebuffer pixels to red
  /*
  for (auto i=0; i<fb.getWidth(); i++)
    for (auto j=0; j<fb.getHeight(); j++) {
      fb.setPixelColor( i, j, Vector3D(1.0, 0.0, 0.0) );
    }
  */
  /*
  for(auto i = 0; i < fb.getWidth(); i++){
    for(auto j = 0; j < fb.getWidth(); j++){
      if((j * i) % 2 == 0){
	fb.setPixelColor(i, j, Vector3D(1.0, 0.0, 0.0));
      } else {
	fb.setPixelColor(i, j, Vector3D(0.0, 0.0, 1.0));
      }
    }
  }
  */

  // When complete, output the file
  std::string oFilename;
  if (args.isSet("outputfile", oFilename)) {
    fb.exportAsPNG( oFilename );
  }
  /*
  int endTime = ptimer.elapsed();
  std::cout << "Rendering time: " << endTime - startTime << std::endl;
  */
}















