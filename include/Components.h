// Classes de base Component. Contient :
//     - Component
//     - Graphic Component
//     - Physic Component
#include <iostream>
#include <vector>

namespace Component
{
    class PhysicVector
    {
    public:
        PhysicVector(int x, int y);
        int getX();
        int getY();
        int getNorm();

        void print(std::ostream &stream) const;

        void operator+=(PhysicVector const& a);
    private:
        int x;
        int y;
    };
    PhysicVector operator+(PhysicVector a, PhysicVector b);
    std::ostream& operator<<( std::ostream &stream, PhysicVector const& v);

    class Polygon
    {
    public:
        Polygon();
        Polygon(std::vector<PhysicVector> &list);
        static Polygon& Triangle(PhysicVector a, PhysicVector b, PhysicVector c);
        static Polygon& Rectangle(PhysicVector a, PhysicVector b, PhysicVector c, PhysicVector d);
        void addPoint(PhysicVector p);

        std::vector<PhysicVector> getOrthogonalsVect();
    };
    class PhysicComponent
    {
    public:
        PhysicComponent(int masse, PhysicVector pos, Polygon polygon);
        PhysicVector getPosition();
        void changePos(PhysicVector newPosition);

        void calcCollision(std::vector<PhysicComponent&> closerObjects);

    private:
        PhysicVector pos;
        PhysicVector changes;
    
    };
}