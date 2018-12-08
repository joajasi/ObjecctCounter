#include <iostream>
#include "Object.h"

int Object::counter = 0;

Object::Object() {
	std::cout << "Object created" << std::endl;
	std::cout << "Objects: " << ++counter << std::endl;
}

Object::~Object() {
	std::cout << "Object destroyed" << std::endl;
	std::cout << "Objects: " << --counter << std::endl;
}
