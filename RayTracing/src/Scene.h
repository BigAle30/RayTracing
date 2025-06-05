#pragma once
#include <glm/glm.hpp>
#include <vector>
struct Material
{
	glm::vec3 Albedo{ 1.0f };
	float Roughness = 0.5f;
	float Metallic = 0.0f;
	float EmissionPow = 0.0f;
	glm::vec3 EmissionCol = { 1.0f, 1.0f, 1.0f };

	glm::vec3 GetEmission() const { return  EmissionCol * EmissionPow; }
};
struct Sphere
{
	glm::vec3 Position{0.0f};
	float Radius = .5f;
	int MaterialIndex = 0;
};

struct Scene
{
	std::vector<Sphere> Spheres;
	std::vector <Material> Materials;
	glm::vec3 SkyCol = { 0.4f, 0.5f, 0.9f };
	int bounces = 100;
};