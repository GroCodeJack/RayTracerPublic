#include "Vector3D.h"
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

Vector3D::Vector3D()
  : m_data(3){
  m_data[0] = m_data[1] = m_data[2] = 0.0;
    }

Vector3D::Vector3D(float x, float y, float z) : m_data(3){
  m_data[0] = x;
  m_data[1] = y;
  m_data[2] = z;
}

float Vector3D::getAt(int i) const{
  return m_data.at(i);
}

int Vector3D::getSize() const{
  return m_data.size();
}

const Vector3D operator+(const Vector3D &lhs, const Vector3D &rhs){
    vector< float > sumVect;
    for(int i = 0; i < lhs.getSize(); i++){
      sumVect.push_back(lhs.getAt(i) + rhs.getAt(i));
    }

    Vector3D tmp(sumVect.at(0), sumVect.at(1), sumVect.at(2));
    return tmp;
}

const Vector3D operator-(const Vector3D &lhs, const Vector3D &rhs){

  vector< float > diffVect;
  for(int i = 0; i < lhs.getSize(); i++){
    diffVect.push_back(lhs.getAt(i) - rhs.getAt(i));
  }
  Vector3D tmp(diffVect.at(0), diffVect.at(1), diffVect.at(2));
  return tmp;
}

const float operator*(const Vector3D &lhs, const Vector3D &rhs){

  float tmp = ((lhs.getAt(0) * rhs.getAt(0)) +
	       (lhs.getAt(1) * rhs.getAt(1)) +
	       (lhs.getAt(2) * rhs.getAt(2)));
  return tmp;
}

const float Vector3D::operator[](const int idx) const{
  return m_data[idx];
}

float &Vector3D::operator[](const int idx){
  return m_data[idx];
}

Vector3D& Vector3D::operator=(const Vector3D &rhs){
  m_data[0] = rhs[0];
  m_data[1] = rhs[1];
  m_data[2] = rhs[2];
}

const float Vector3D::findLength(){
  float a = this->getAt(0);
  float b = this->getAt(1);
  float c = this->getAt(2);
  float sumofex = pow(a, 2.0) +
    pow(b, 2.0) +
    pow(c, 2.0);
  return sqrt(sumofex);
}

void Vector3D::printVector(){
  std::cout << "[ " <<
    this->getAt(0) << ", "
	    << this->getAt(1)  <<
    ", " << this->getAt(2) << " ]" << endl;
}





