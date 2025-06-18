#include "Shape.h"
#include <iostream>

Shape::~Shape() {
    std::cout << "Shape destroyed" << std::endl;
}
