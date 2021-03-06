#include "Box.h"


Box::Box(){}
Box::~Box(){}

Box::Box(const Vector3D& min, const Vector3D& max)
{
  std::cout << min[0] << min[1] << min[2] << std::endl;
  std::cout << max[0] << max[1] << max[2] << std::endl;
  m_vertList.push_back(min);
  Vector3D v1(min[0], max[1], min[2]);
  Vector3D v2(max[0], max[1], min[2]);
  Vector3D v3(max[0], min[1], min[2]);
  Vector3D v4(min[0], min[0], max[1]);
  Vector3D v5(min[0], max[1], max[2]);
  Vector3D v7(max[0], min[1], max[2]);
  m_vertList.push_back(v1);
  m_vertList.push_back(v2);
  m_vertList.push_back(v3);
  m_vertList.push_back(v4);
  m_vertList.push_back(v5);
  m_vertList.push_back(max);
  m_vertList.push_back(v7);

  Triangle posZFace1(m_vertList[4], m_vertList[7], m_vertList[6]);
  Triangle posZFace2(m_vertList[4], m_vertList[5], m_vertList[6]);

  Triangle negZFace1(m_vertList[3], m_vertList[2], m_vertList[1]);
  Triangle negZFace2(m_vertList[3],  m_vertList[0],  m_vertList[1]);

  Triangle posXFace1( m_vertList[5], m_vertList[6], m_vertList[2]);
  Triangle posXFace2( m_vertList[5], m_vertList[1], m_vertList[2]);

  Triangle negXFace1( m_vertList[0], m_vertList[3], m_vertList[7]);
  Triangle negXFace2( m_vertList[0], m_vertList[4],  m_vertList[7]);

  Triangle posYFace1( m_vertList[0], m_vertList[4], m_vertList[5]);
  Triangle posYFace2( m_vertList[0], m_vertList[1], m_vertList[5]);

  Triangle negYFace1( m_vertList[7], m_vertList[3], m_vertList[2]);
  Triangle negYFace2( m_vertList[7], m_vertList[6], m_vertList[2]);

  m_triList.push_back(posZFace1);
  m_triList.push_back(posZFace2);
  
  m_triList.push_back(negZFace1);
  m_triList.push_back(negZFace2);
  
  m_triList.push_back(posXFace1);
  m_triList.push_back(posXFace2);
  
  m_triList.push_back(negXFace1);
  m_triList.push_back(negXFace2);
  
  m_triList.push_back(posYFace1);
  m_triList.push_back(posYFace2);
  
  m_triList.push_back(negYFace1);
  m_triList.push_back(negYFace2);
  /*
  for(int i = 0; i < m_triList.size(); i++){
    m_triList[i].setShader(shader);
  }
  */
  
  printTris();
  printVerts();

}

void Box::printTris(){
  for(int i = 0; i < m_triList.size(); i++){
    std::cout << m_triList[i][0][0] << " " << m_triList[i][0][1] << " " << m_triList[i][0][2] << std::endl;
    std::cout << m_triList[i][1][0] << " " << m_triList[i][1][1] << " " << m_triList[i][1][2] << std::endl;
    std::cout << m_triList[i][2][0] << " " << m_triList[i][2][1] << " " << m_triList[i][2][2] << std::endl;
    std::cout << " ----------------- " << std::endl;
  }
}

void Box::printVerts(){
  for(int i = 0; i < m_vertList.size(); i++){
    std::cout << m_vertList.size() << " verts: " << m_vertList[i][0] << " " << m_vertList[i][1] << " " << m_vertList[i][2] << std::endl;
  }
}

bool Box::closestHit(const Ray &r, float tmin, float &tmax, HitStructure &h){
  bool hit = false;
  HitStructure ph;
  //std::cout << "In closestHit of Box" << std::endl;

  for(int i = 0; i < m_triList.size(); i++){
    //std::cout << "In For loop of closest hit!" << std::endl;

    if(m_triList[i].closestHit(r, tmin, tmax, h)){
      //std::cout << "triangle list closest hit true!" << std::endl;
      hit = true;
      
      ph.t = h.t;
      //tmax = ph.t;
      ph.pt = h.pt;
      ph.r = h.r;
      ph.n = h.n;
      ph.shaderPtr = h.shaderPtr;
      m_triList[i].setShader(shader);
    }
  }

    

  if(hit){
    //std::cout << "good hit was found!" << std::endl;
    h.t = ph.t;
    h.pt = ph.pt;
    h.n = ph.n;
    h.shaderPtr = shader;
    //m_triList[1].setShader(h.shaderPtr);
    //tmax = ph.t;
    /*
    std::cout << "h.t: " << h.t << std::endl;
    std::cout << "h.pt: " << h.pt[0] << " " << h.pt[1] << " " << h.pt[2] << std::endl;
    std::cout << "h.n: " << h.n[0] << " " << h.n[1] << " " << h.n[2] << std::endl;
    std::cout << "h.shaderPtr: " << h.shaderPtr << std::endl;
    std::cout << "---------------------" << std::endl;
    */
    return true;
  }
  
  return false;
}
