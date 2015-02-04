#include "Components.h"
#include <cmath>

namespace Component
{
    PhysicVector::PhysicVector(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int PhysicVector::getX()
    {
        return this->x;
    }
    int PhysicVector::getY()
    {
        return this->y;
    }
    int PhysicVector::getNorm()
    {
        return sqrt(pow(this->x, 2) + pow(this->y, 2));
    }
    void PhysicVector::print(std::ostream &stream) const
    {
        stream << '(' << this->x << ',' << this->y << ')';
    }
    void PhysicVector::operator+=(PhysicVector const& a)
    {
        this->x += a.x;
        this->y += a.y;
    }
    PhysicVector operator+(PhysicVector a, PhysicVector b)
    {
        PhysicVector returned(0,0);
        returned += a;
        returned += b;
        return returned;
    }
    std::ostream& operator<<( std::ostream &stream, PhysicVector const& v)
    {
        v.print(stream);
        return stream;
    }
}