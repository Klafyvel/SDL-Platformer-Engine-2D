#include "Components.h"
#include <cmath>

namespace Component
{
    Vector::Vector()
    {
        this->x = 0;
        this->y = 0;
    }
    Vector::Vector(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int Vector::getX()
    {
        return this->x;
    }
    int Vector::getY()
    {
        return this->y;
    }
    int Vector::getNorm()
    {
        return sqrt(pow(this->x, 2) + pow(this->y, 2));
    }
    void Vector::print(std::ostream &stream) const
    {
        stream << '(' << this->x << ',' << this->y << ')';
    }
    void Vector::operator+=(Vector const& a)
    {
        this->x += a.x;
        this->y += a.y;
    }
    Vector operator+(Vector a, Vector b)
    {
        Vector returned(0,0);
        returned += a;
        returned += b;
        return returned;
    }
    std::ostream& operator<<( std::ostream &stream, Vector const& v)
    {
        v.print(stream);
        return stream;
    }
}