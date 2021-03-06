#include "BlinnPhongShader.h"

Vector3D BlinnPhongShader::apply(SceneContainer *s, HitStructure &h){
  Vector3D m_c1(0, 0, 0);
  Vector3D m_c2(0, 0, 0);
  Vector3D m_c(0, 0, 0);
  Vector3D lightPos = s->getLight(0)->getPosition();
  Vector3D lightInt = s->getLight(0)->getIntensity();
  Vector3D camPos = s->getCamera(0)->getPosition();
  Vector3D hn = h.pt;

  Vector3D L = lightPos - h.pt;
  Vector3D Ln = L;
  Ln /= Ln.findLength();

  Vector3D V = camPos - h.pt;
  Vector3D Vn = V;
  Vn /= Vn.findLength();

  Vector3D H = L + V;
  Vector3D Hn = H;
  Hn /= Hn.findLength();
  
  Vector3D I = lightInt;
  float hnxln = h.n * Ln;
  float hnxHn = h.n * Hn;
  float maxOfZero = std::max((float) 0.0, hnxln);
  float maxOfZero1 = pow(std::max((float) 0.0, hnxHn), m_phExp);

  float I0 = I[0] * maxOfZero;
  float I1 = I[1] * maxOfZero;
  float I2 = I[2] * maxOfZero;

  float I0_1 = I[0] * maxOfZero1;
  float I1_1 = I[1] * maxOfZero1;
  float I2_1 = I[2] * maxOfZero1;

  float m_c1_0 = m_diffuse[0] * I0;
  float m_c1_1 = m_diffuse[1] * I1;
  float m_c1_2 = m_diffuse[2] * I2;

  float m_c2_0 = m_spec[0] * I0_1;
  float m_c2_1 = m_spec[1] * I1_1;
  float m_c2_2 = m_spec[2] * I2_1;
  
  Vector3D m_c1_final(m_c1_0, m_c1_1, m_c1_2);
  m_c1 = m_c1_final;

  Vector3D m_c2_final(m_c2_0, m_c2_1, m_c2_2);
  m_c2 = m_c2_final;

  float m_c2_ph1 = pow(m_c2[0], m_phExp);
  float m_c2_ph2 = pow(m_c2[1], m_phExp);
  float m_c2_ph3 = pow(m_c2[2], m_phExp);

  Vector3D m_c2_fin(m_c2_ph1, m_c2_ph2, m_c2_ph3);
  m_c = m_c1 + m_c2;

  if(m_c[0] > 1){
    m_c[0] = 1.0;
  }
  if(m_c[1] > 1){
    m_c[1] = 1.0;
  }
  if(m_c[2] > 1){
    m_c[2] = 1.0;
  }

  return m_c;
  

}
