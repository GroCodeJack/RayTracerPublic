#ifndef __SCENEDATA_H__
#define __SCENEDATA_H__ 1

using namespace sivelab;

//
// Scene Parameters
//
struct sceneParamData 
{
    float backgroundColor[3];
    bool usesEnvMap;
    std::string envMapPrefix;
};


// 
// Camera Initialization Data
//
enum CamType { 
  perspective, orthographic 
};
struct cameraData {
  CamType type;
  float position[3];
  float gazeDirection[3];
  float focalLength;
  float imagePlaneWidth;
  float aspectRatio;
};


//
// Light initialization Data
//
enum LightType {
    point, area
};
struct lightData 
{
    LightType type;
    float position[3];
    float intensity[3];
    float normal[3];
    float width, length;
};


//
// Shader initialization Data
//
enum ShaderType {
    lambertian, blinnphong, phong, mirror, glaze, dielectric
};
struct shaderData 
{
    ShaderType type;
    std::string name;
    float kd_diffuse[3];
    float ks_specular[3];
    float phongExp;
};

//
// Shape initialization Data
//
enum ShapeType {
    sphere, triangle, box
};
struct shapeData
{
    ShapeType type;
    std::string name;

    float radius;
    float center[3];

    float minPt[3];
    float maxPt[3];

    float v0[3], v1[3], v2[3];

    shaderData shader;
};


#endif
