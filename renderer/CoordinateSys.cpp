#include "CoordinateSys.h"

CoordinateSys::CoordinateSys():
  u(1, 0, 0), v(0, 1, 0), w(0, 0, 1)
{
}

CoordinateSys::CoordinateSys(Vector3D g){
  w = -1 * g;
  float length = w.findLength();
  w /= length;
  float lowest = w[0];
  int low;
  for(int i = 0; i < w.getSize(); i++){
    if(w[i] < lowest){
      lowest = w[i];
      low = i;
    }
  }

  Vector3D t(w[0], w[1], w[2]);
  t[low] = 1;

  Vector3D txw;
  txw = cross(t, w);
  txw /= txw.findLength();
  u = txw;
  v = cross(u, w);

}

CoordinateSys::CoordinateSys(Vector3D g, Vector3D ud){
  w = -1 * g;
  float length = w.findLength();
  w /= length;

  Vector3D txw;
  txw = cross(ud, w);
  txw /= txw.findLength();
  u = txw;
  v = cross(u, w);

}
