// Classes System. Contient :
//     - Physics

#include "Components.h"

namespace System
{
    class Physics
    {
    public:
        Physics();
        Physics(std::vector<PhysicComponent> &components);
        void setGravity(int gravity);
        void addComponent(Component::PhysicComponent &component);
        void applyGravity(Component::PhysicVector beg, Component::PhysicVector end);
    private:
        std::vector<Component::PhysicComponent> components;
        int gravity;
    };
}