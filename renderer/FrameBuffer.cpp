#include <iostream>
#include <vector>
#include "FrameBuffer.h"
#include "Vector3D.h"
#include "png++/png.hpp"
#include <math.h>


FrameBuffer::FrameBuffer()
  : m_width(100), m_height(100), imageData(m_height * m_width, Vector3D(0.0f, 0.0f, 0.0f))
{
  
}

FrameBuffer::FrameBuffer(int width, int height)
  : m_width(width), m_height(height), imageData(height * width)
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
    