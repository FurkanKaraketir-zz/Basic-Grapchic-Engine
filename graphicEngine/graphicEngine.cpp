
#include "olcConsoleGameEngine.h"
using namespace std;

struct vec3d
{
	float x, y, z;
};

struct triangle
{
	vec3d p[3];

};

struct mesh 
{
	vector<triangle> tris;
};


class graphicEngine :public olcConsoleGameEngine {
public:
	graphicEngine() {
		m_sAppName = L"3D Demo";
	}

public:
	bool OnUserCreate() override {

		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override {


		return true;
	}

};

int main()
{
	graphicEngine demo;
	if (demo.ConstructConsole(256, 240, 4, 4))
		demo.Start();

	return 0;
}
