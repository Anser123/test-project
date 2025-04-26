#include <box2d/box2d.h>
#include <iostream>

int main() {
    b2Vec2 gravity(0.0f, -9.8f);
    b2World world(gravity);

    std::cout << "Box2D World Created!" << std::endl;
    return 0;
}
