#include "Rasterizer.h"
#include <iostream>
#include "Triangle.h"
#include "Vector3D.h"
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;


Rasterizer::Rasterizer(){
}

void Rasterizer::findBoundingBox(Triangle t){
  xmin = std::floor(std::min({t[0][0], t[1][0], t[2][0]}));
  xmax = std::ceil(std::max({t[0][0], t[1][0], t[2][0]}));
  ymin = std::floor(std::min({t[0][1], t[1][1], t[2][1]}));
  ymax = std::ceil(std::max({t[0][1], t[1][1], t[2][1]}));
  cout << "xmin: " << xmin << endl << "ymin: " << ymin << endl;
}

void Rasterizer::rasterizeTriangle(Triangle t, FrameBuffer& fb){
  findBoundingBox(t);

  for(int y = ymin; y <= ymax; y++){
    for(int x = xmin; x <= xmax; x++){
      
      float alpha = (
		     ((t[1][1] - t[2][1])*x) +
		     ((t[2][0] - t[1][0])*y) +
		     ((t[1][0] * t[2][1]) - (t[2][0] * t[1][1])))
	/
	(((t[1][1] - t[2][1])*t[0][0]) +
	  ((t[2][0] - t[1][0])*t[0][1]) +
	  ((t[1][0] * t[2][1]) - (t[2][0] * t[1][1] )));
      

      float beta = (((t[2][1] - t[0][1])*x) +
		    ((t[0][0] - t[2][0])*y) +
		    ((t[2][0] * t[0][1]) - (t[0][0] * t[2][1] )))
	/
	(((t[2][1] - t[0][1])*t[1][0]) +
	 ((t[0][0] - t[2][0])*t[1][1]) +
	 ((t[2][0] * t[0][1]) - (t[0][0]*t[2][1] )));

      float gamma = (((t[0][1] - t[1][1])*x) +
		     ((t[1][0] - t[0][0])*y) +
		     ((t[0][0] * t[1][1]) - (t[1][0] * t[0][1])))
	/
	(((t[0][1] - t[1][1]) * t[2][0]) +
	 ((t[1][0] - t[0][0]) * t[2][1]) +
	 ((t[0][0] * t[1][1]) - (t[1][0] * t[0][1])));

      // float alpha = 1 - beta - gamma;
      
      if(alpha > 0 && beta > 0 && gamma > 0){
	fb.setPixelColor(x, y, Vector3D(0.2, 1.0, 0.25));
      }
      
    }
  }
}
			 
