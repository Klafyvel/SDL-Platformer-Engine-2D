// Classes de base Component. Contient :
//     - Component
//     - Graphic Component
//     - Physic Component
#include <iostream>
#include <vector>
#include <cmath>

namespace Component
{
    class Vector
    {
    public:
        Vector();
        Vector(int x, int y);
        int getX();
        int getY();
        int getNorm();

        void print(std::ostream &stream) const;

        void operator+=(Vector const& a);
    private:
        int x;
        int y;
    };
    Vector operator+(Vector a, Vector b);
    std::ostream& operator<<( std::ostream &stream, Vector const& v);
    class Point
    {
    public:
        Point(int x, int y);
        void setX(int x);
        void setY(int y);
        int getX();
        int getY();
    private:
        int x;
        int y;
    };

    class Polygon
    {
    public:
        Polygon();
        Polygon(std::vector<Point> &list);
        static Polygon Triangle(Point a, Point b, Point c);
        static Polygon Rectangle(Point a, Point b, Point c, Point d);
        void addPoint(Point p);

        std::vector<Vector> getOrthogonalsVect();
    private:
        std::vector<Point> points;
    };
    class PhysicComponent
    {
    public:
        PhysicComponent();
        PhysicComponent(int bulk, Vector pos, Polygon geometry);
        Vector getPosition();
        void changePos(Vector newPosition);

        void calcCollision(std::vector<PhysicComponent*> closerObjects);
        Polygon getHitBox();

    private:
        Vector pos;
        Vector changes;
        Polygon geometry;
        int bulk;
    
    };
}