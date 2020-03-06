#include "Vector3D.h"
#include "FrameBuffer.h"
#include "Triangle.h"
#include "Ray.h"
#include <vector>

Triangle::Triangle()
  : vertices(3)
{
  vertices[0] = Vector3D(0.0, 0.0, 0.0);
  vertices[1] = Vector3D(0.0,0.0, 0.0);
  vertices[2] = Vector3D(0.0, 0.0, 0.0);
}

Triangle::~Triangle(){}

Triangle::Triangle(const Vector3D& a, const Vector3D& b, const Vector3D& c)
  : vertices(3)
{
  vertices[0] = a;
  vertices[1] = b;
  vertices[2] = c;
}

const Vector3D Triangle::operator[](const int idx) const {
  return vertices[idx];
}

Vector3D &Triangle::operator[](const int idx){
  return vertices[idx];
}

bool Triangle::closestHit(const Ray &r) const {
 
  float a = vertices[0][0] - vertices[1][0];
  float d = vertices[0][0] - vertices[2][0];
  float g = r.getDirection()[0];

  float b = vertices[0][1] - vertices[1][1];
  float e = vertices[0][1] - vertices[2][1];
  float h = r.getDirection()[1];

  float c = vertices[0][2] - vertices[1][2];
  float f = vertices[0][2] - vertices[2][2];
  float i = r.getDirection()[2];

  float j = vertices[0][0] - r.getOrigin()[0];
  float k = vertices[0][1] - r.getOrigin()[1];
  float l = vertices[0][2] - r.getOrigin()[2];

  float ei_minus_hf = ((e * i) - (h * f));
  float gf_minus_di = ((g * f) - (d * i));
  float dh_minus_eg = ((d * h) - (e * g));

  float ak_minus_jb = ((a * k) - (j * b));
  float jc_minus_al = ((j * c) - (a * l));
  float bl_minus_kc = ((b * l) - (k * c));

  float M = (a * ei_minus_hf) + (b * gf_minus_di) + (c * dh_minus_eg);

  float beta_num = (j * ei_minus_hf) + (k * gf_minus_di) + (l * dh_minus_eg);
  float gamma_num = (i * ak_minus_jb) + (h * jc_minus_al) + (g * bl_minus_kc);
  float t_num = (f * ak_minus_jb) + (e * jc_minus_al) + (d * bl_minus_kc);

  float beta = beta_num / M;
  float gamma = gamma_num / M;
  float t = t_num / M;

  float t_min = 0.0;
  float t_max = 10000.0;

  if( t < t_min || t > t_max){
    return false;
  }
  if( gamma < 0 || gamma > 1){
    return false;
  }
  if( beta < 0 || beta > 1 - gamma){
    return false;
  }
  return true;

}
