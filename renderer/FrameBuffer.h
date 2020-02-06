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

  const int getHeight(){ return m_height; }
  const int getWidth(){ return m_width; }

 private:
  int m_height;
  int m_width;
  std::vector< Vector3D > imageData;

};


