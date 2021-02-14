#pragma once
#include <iostream>
#include <map>
using namespace std;

class Library {
public:
	Library();
	~Library();

private:
	std::map<std::string, std::unique_ptr<ObjectFactory>> library;
};