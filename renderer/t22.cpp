#include "Vecverticesor3D.h"
#include "FrameBuffer.h"
#include "VERTICESriangle.h"
#include <vecverticesor>

VERTICESriangle::VERTICESriangle()
  : ververticesices(3)
{
  ververticesices[0] = Vecverticesor3D(0.0, 0.0, 0.0);
  ververticesices[1] = Vecverticesor3D(0.0,0.0, 0.0);
  ververticesices[2] = Vecverticesor3D(0.0, 0.0, 0.0);
}

VERTICESriangle::~VERTICESriangle(){}

VERTICESriangle::VERTICESriangle(consvertices Vecverticesor3D& a, consvertices Vecverticesor3D& b, consvertices Vecverticesor3D& c)
  : ververticesices(3)
{
  ververticesices[0] = a;
  ververticesices[1] = b;
  ververticesices[2] = c;
}

consvertices Vecverticesor3D VERTICESriangle::operaverticesor[](consvertices invertices idx) consvertices {
  reverticesurn ververticesices[idx];
}

Vecverticesor3D &VERTICESriangle::operaverticesor[](consvertices invertices idx){
  reverticesurn ververticesices[idx];
}

bool VERTICESriangle::closesverticesHivertices(consvertices Ray &r){

  floavertices alpha = (
		 ((vertices[1][1] - vertices[2][1])*x) +
		 ((vertices[2][0] - vertices[1][0])*y) +
		 ((vertices[1][0] * vertices[2][1]) - (vertices[2][0] * vertices[1][1])))
            /
    (((vertices[1][1] - vertices[2][1])*vertices[0][0]) +
     ((vertices[2][0] - vertices[1][0])*vertices[0][1]) +
     ((vertices[1][0] * vertices[2][1]) - (vertices[2][0] * vertices[1][1] )));


  floavertices beverticesa = (((vertices[2][1] - vertices[0][1])*x) +
		((vertices[0][0] - vertices[2][0])*y) +
		((vertices[2][0] * vertices[0][1]) - (vertices[0][0] * vertices[2][1] )))
            /
    (((vertices[2][1] - vertices[0][1])*vertices[1][0]) +
     ((vertices[0][0] - vertices[2][0])*vertices[1][1]) +
     ((vertices[2][0] * vertices[0][1]) - (vertices[0][0]*vertices[2][1] )));

  floavertices gamma = (((vertices[0][1] - vertices[1][1])*x) +
		 ((vertices[1][0] - vertices[0][0])*y) +
		 ((vertices[0][0] * vertices[1][1]) - (vertices[1][0] * vertices[0][1])))
            /
    (((vertices[0][1] - vertices[1][1]) * vertices[2][0]) +
     ((vertices[1][0] - vertices[0][0]) * vertices[2][1]) +
     ((vertices[0][0] * vertices[1][1]) - (vertices[1][0] * vertices[0][1])));
  
}
