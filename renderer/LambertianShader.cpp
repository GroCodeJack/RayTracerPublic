#include "LambertianShader.h"


Vector3D LambertianShader::apply(SceneContainer *s, HitStructure &h){
  Vector3D m_c(0, 0, 0);
  Vector3D lightPos = s->getLight(0)->getPosition();
  Vector3D lightInt = s->getLight(0)->getIntensity();
  Vector3D hn = h.pt;
  // hn /= hn.findLength();
  Vector3D R = s->getCamera(0)->getPosition() - h.pt;
  Vector3D Rn = R;
  Rn /= Rn.findLength();
  Vector3D L = lightPos - h.pt; 
  Vector3D Ln = L;
  Ln /= Ln.findLength();
  Vector3D I = lightInt;
  float hnxln = h.n * Ln;
  float maxOfZero = std::max((float) 0.0, hnxln);
  float I0 = I[0] * maxOfZero;
  float I1 = I[1] * maxOfZero;
  float I2 = I[2] * maxOfZero;

  float m_c0 = m_diffuse[0] * I0;
  float m_c1 = m_diffuse[1] * I1;
  float m_c2 = m_diffuse[2] * I2;
  Vector3D finalColor(m_c0, m_c1, m_c2);
  m_c = finalColor;
  /*
  if(count % 1000 == 0){
    std::cout << "Light Position: " << lightPos[0] << " " <<  lightPos[1] << " " << lightPos[2] << std::endl;
    std::cout << "Light Intensity: " << lightInt[0] << " " << lightInt[1] << " " << lightInt[2] << std::endl;
    std::cout << "h.pt: " << h.pt[0] << " " << h.pt[1] << " " << h.pt[2] << std::endl;
    std::cout << "Light Vector: " << L[0] << " " << L[1] << " " << L[2] << std::endl;
    std::cout << "LV norm: " << Ln[0] << " " <<  Ln[1] << " " << Ln[2] << std::endl;
    //std::cout << "I: " << I << std::endl;
    std::cout << "hnxln: " << hnxln << std::endl;
    std::cout << "diffuse vec: " << m_diffuse[0] << " " << m_diffuse[1] << " " << m_diffuse[2] << std::endl;
    std::cout << "final color: " << m_c[0] << " " << m_c[1] << " " << m_c[2] << std::endl;
    std::cout << "abs of hnxln: " << fabs(hnxln) << std::endl;

    std::cout << "-------------------------" << std::endl;
  }
  */
  if(m_c[0] > 1){
    m_c[0] = 1.0;
  }
  if(m_c[1] > 1){
    m_c[1] = 1.0;
  }
  if(m_c[2] > 1){
    m_c[2] = 1.0;
  }
    
  //Ln /= Ln.findLength();
  /*
  std::cout << "m_diffuse val: " << m_diffuse[0] << m_diffuse[1] << m_diffuse[2] << std::endl;
  std::cout << I << std::endl;
  std::cout << h.n[0] << " " << h.n[1] << " " << h.n[2] << std::endl;
  std::cout << Ln[0] << " "<< Ln[1] << " " << Ln[2] << std::endl;
  */
  //m_c = m_diffuse * (I * std::max((float)0.0, h.n * Ln));
  //std::cout << m_c[0] << m_c[1] << m_c[2] << std::endl;
  count++;
  return m_c;
}

