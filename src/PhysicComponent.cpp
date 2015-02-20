#include <Components.h>
namespace Component
{
PhysicComponent::PhysicComponent(int bulk, Vector pos, Polygon geometry)
{
    this->pos = pos;
    this->geometry = geometry;
    this->bulk = bulk;
    this->changes = Vector(0,0);
}
Vector PhysicComponent::getPosition()
{
    return this->pos;
}
void PhysicComponent::changePos(Vector newPosition)
{
    this->changes += newPosition;
}
void PhysicComponent::calcCollision(std::vector<PhysicComponent*> closerObjects)
{
    //Comming soon
}
Polygon PhysicComponent::getHitBox()
{
    return this->geometry;
}
}