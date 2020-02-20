
class CoordinateSys {
 public:
 CoordinateSys():
  u(1, 0, 0), v(0, 1, 0), w(0, 0, 1)
    {
    }
  CoordinateSys(Vector3D g){
    w = -1 * g;
    float length = w.findLength();
    w /= length; //takes a float, return &v
    //
  }

  CoordinateSys(Vector3D g, Vector3D ud){

  }
  //w = a/||a||
  //u = t x w / ||t x w||
  //v = w x u
     
    //(0, 0, 43)

 private:
  Vector3D u;
  Vector3D v;
  Vector3D w;
};
