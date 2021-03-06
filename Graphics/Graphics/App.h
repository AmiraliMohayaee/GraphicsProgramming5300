#pragma once


#include <memory>
#include "Screen.h"
#include "Input.h"
#include "Camera.h"
#include "Cube.h"
#include "Quad.h"
#include "Debug.h"
#include "GLError.h"
#include "Grid.h"
#include "Light.h"
#include "Model.h"


class App
{
public:
	App();
	bool InitScreenAndShaders();
	void BindElements();

	int GetTotalTime();
	int GetElapsedTime();

	void InitObjects();
	void Draw();
	void Update();
	void Shutdown();


private:
	bool m_isProgramRunning;

	std::unique_ptr<Camera> m_camera;
	std::unique_ptr<Cube> m_cube;
	std::unique_ptr<Grid> m_grid;
	std::unique_ptr<Quad> m_quad;
	std::unique_ptr<Light> m_light;
	std::unique_ptr<Model> m_model;

};