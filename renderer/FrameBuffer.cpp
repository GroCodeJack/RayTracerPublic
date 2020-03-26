#include <iostream>
#include <vector>
#include "FrameBuffer.h"
#include "Vector3D.h"
#include "png++/png.hpp"
#include <math.h>


FrameBuffer::FrameBuffer()
  : m_width(100), m_height(100), m_bgcolor(0.0, 0.0, 0.0), imageData(m_height * m_width, Vector3D(0.0f, 0.0f, 0.0f))
{
  
}

FrameBuffer::FrameBuffer(int width, int height)
  : m_width(width), m_height(height), m_bgcolor(0.0, 0.0, 0.0), imageData(height * width)
{
  
}

FrameBuffer::~FrameBuffer(){
  std::cout << "Destructor called" << std::endl;
}

void FrameBuffer::exportAsPNG(const std::string &fileName){
  png::image< png::rgb_pixel > imData(m_width, m_height);

  for(unsigned int idx=0; idx < m_height * m_width; idx++){
    size_t i = idx % m_width;
    size_t j = static_cast<size_t> (floor (idx / static_cast<float> (m_width)) );

    imData[m_height - j - 1][i] = png::rgb_pixel( imageData[idx][0] * 255,
						  imageData[idx][1] * 255,
						  imageData[idx][2] * 255);
  }
  std::string outputFileName = fileName;
  imData.write( outputFileName );
}

void FrameBuffer::setBackground(float r, float g, float b){
  /*
  for(int i = 0; i < m_width; i++){
    for(int j = 0; j < m_height; j++){
      setPixelColor(i, j, color);
    }
  }
  */

  Vector3D color(r, g, b);
  m_bgcolor = color;

}

Vector3D FrameBuffer::getBackground(){
  return m_bgcolor;
}
    
