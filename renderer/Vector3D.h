#pragma once
#include <vector>
#include <string>
#include <sstream>


class Vector3D{
public:
  const float operator[]( const int idx ) const;   // allow float y = a[1]
  float &operator[]( const int idx );    // allow a[1] = y
  Vector3D &operator=(const Vector3D &rhs);   // assignment operator
  Vector3D &operator=(const std::string &rhs);
  Vector3D &operator+=(const Vector3D &rhs);  // plus equal
  std::ostringstream operator<<(const Vector3D &rhs);
  Vector3D();
  Vector3D &operator/=(const float &rhs);
  Vector3D( float x, float y, float z );
  const float findLength();
 
  

  float getAt(int i) const;
  int getSize() const;
  void printVector();

private:
  std::vector< float > m_data;

};

const Vector3D operator+(const Vector3D &lhs, const Vector3D &rhs);
const Vector3D operator-(const Vector3D &lhs, const Vector3D &rhs);
const float operator*(const Vector3D &lhs, const Vector3D &rhs);
const Vector3D cross(const Vector3D &a, const Vector3D &b);
const Vector3D operator*(const Vector3D &lhs, const float &rhs);
const Vector3D operator*(const float &lhs, const Vector3D &rhs);
//const Vector3D operator*(const Vector3D &lhs, const float &rhs);

