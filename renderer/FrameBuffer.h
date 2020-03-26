#pragma once

#include <string>
#include "Vector3D.h"
#include <vector>

class FrameBuffer {
 public:
  FrameBuffer();

  FrameBuffer(int width, int height);
  ~FrameBuffer();

  void setPixelColor(const int i, const int j, const Vector3D &rgb){
    int prod = j * m_width + i;
    imageData[prod] = rgb;
  }

  void exportAsPNG(const std::string &fileName);
  void setBackground(float r, float g, float b);
  Vector3D getBackground();
  void setBackground(const Vector3D& bgcolor){
    m_bgcolor = bgcolor;
  }
  const int getHeight(){ return m_height; }
  const int getWidth(){ return m_width; }

 private:
  int m_height;
  int m_width;
  Vector3D m_bgcolor;
  std::vector< Vector3D > imageData;

};


