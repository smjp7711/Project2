#include <iostream>
#include <string>
using namespace std;


int main() {
	std::string path = "....";
	std::unique_ptr<Engine> engine{ std::make_unique<Engine>(path) };
	while (engine->run())
	{

	}

	return 0;
}