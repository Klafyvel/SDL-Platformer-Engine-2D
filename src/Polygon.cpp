#include <Components.h>
namespace Component
{
Polygon::Polygon()
{
}
Polygon::Polygon(std::vector<Point> &list)
{
    this->points = list;
}
Polygon Polygon::Triangle(Point a, Point b, Point c)
{
    std::vector<Point> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    return Polygon(v);
}
Polygon Polygon::Rectangle(Point a, Point b, Point c, Point d)
{
    std::vector<Point> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);

    return Polygon(v);
}
void Polygon::addPoint(Point p)
{
    this->points.push_back(p);
}
std::vector<Vector> Polygon::getOrthogonalsVect()
{
    int nb_side = this->points.size();
    std::vector<Vector> vectors;
    for(int i=0; i<nb_side; i++) {
        int xA = this->points[i].getX();
        int yA = this->points[i].getY();
        int xB = this->points[(i+1)%(nb_side)].getX();
        int yB = this->points[(i+1)%(nb_side)].getY();
        int x = 0;
        int y = 0;
        if((yA-yB)==0)
        {
            x = 0;
            y = 1;
        }
        else 
        {
            x = sqrt(10/(1+pow((xA-xB)/(yA-yB), 2)));
            y = -(xA-xB)/(yA-yB)*x;
        }
        vectors.push_back(Vector(x, y));
    }
    return vectors;
}
   
}