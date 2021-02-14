#pragma once
#include <iostream>
using namespace std;

class Engine {
public:
	Engine();
	~Engine();
	void loadLevel(std::string levelPath);
	void update();
	void draw();
	bool run();


private:
	std::unique_ptr<Libray> objectLibrary;
	std::_Adjust_manually_vector_aligned<std::unique_ptr<Object>> objects;
};



Engine::Engine() {
	loadLevel(std::string levelPath);
}

void loadLevel(std::string levelPath) {
	return 0;