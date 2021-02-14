#pragma once
#include <iostream>
using namespace std;


class Object {
public:
	Object();
	~Object();
	virtual std::unique_ptr<Object> update() = 0;
	virtual void draw = 0;

private:
	struct ObjectMembers {
		float x, y, angle;
	};
};