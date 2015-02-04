#include <iostream>
#include "Components.h"
using namespace Component;

int main()
{
    PhysicVector v(2,2);
    std::cout << v << std::endl;
    v += PhysicVector(5,4);
    std::cout << v << std::endl;
    return 0;
}