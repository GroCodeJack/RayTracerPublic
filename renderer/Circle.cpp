#include "Circle.h"

Circle::Circle():
  m_center(0.0, 0.0, 0.0), m_radius(0.0)
{
  m_color[0] = 0.0;
  m_color[1] = 0.0;
  m_color[2] = 0.0;
}

Circle::Circle(const float& x, const float& y, const float& z, const float& r, const Vector3D& color):
  m_center(x, y, z), m_radius(r)
{
  m_color = color;
}

Circle::Circle(const float& x, const float& y, const float& z, const float& r):
  m_center(x, y, z), m_radius(r)
{
}



Circle::~Circle(){}

void Circle::setColor(float x, float y, float z){
  m_color[0] = x;
  m_color[1] = y;
  m_color[2] = z;
}

Vector3D Circle::getColor(){
  return m_color;
}


bool Circle::closestHit(const Ray &r, float tmin, float &tmax) const{

  Vector3D d = r.getDirection();
  Vector3D e = r.getOrigin();
  Vector3D e_minus_c = e - m_center;
  Vector3D nd = -1.0 * d;
  float d_squared = d * d;
  float e_minus_c_squared = e_minus_c * e_minus_c;
  float r_squared = m_radius * m_radius;
  float B = nd * e_minus_c;
  float B_squared = B * B;
  float emcs_minus_rs = e_minus_c_squared - r_squared;

  float discr = B_squared - ((d_squared) * (emcs_minus_rs));
  
  if (discr < tmax){
    return false;
  }
  else {
    float sqrt_discr = sqrt(discr);
    float tplus = (B + sqrt_discr) / d_squared;
    float tminus = (B - sqrt_discr) / d_squared;
  }
 
  return true;
  
 
  


}