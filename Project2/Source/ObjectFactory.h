#pragma once
#include <iostream>
using namespace std;

class ObjectFactory {
public:
	virtual std::unique_ptr<Object> create(tinyxml2::XMLElement*
		objectElement) = 0;
};