#include <iostream>
#include <string>
#include <Graphics.h>
#include <Components.h>

using namespace Component;

int main()
{
    WindowManager wm = WindowManager();
    std::string name = "Blop";
    if(wm.initWindow(name))
    {
        std::cout << "Orthogonals vectors of polygon (0,0) (1,0) (0,1) :" << std::endl;
        Polygon p = Polygon::Triangle(Point(0,0), Point(1,0), Point(0,1));
        std::vector<Vector> v = p.getOrthogonalsVect();
        for(int i=0; i<v.size(); i++)
            std::cout<< v[i] << std::endl;
    }
    return 0;
}