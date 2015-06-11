#ifndef PLANE_H
#define PLANE_H
#include <SFML/Graphics.hpp>
#include <vector>
#include "Bullet.h"
#include "Biu.h"
class Plane
{
    public:
        Plane();
        float x,y;
        Biu biu1;
        std::vector<Bullet*> bullets;
        sf::Texture texture2;
        sf::Sprite plane;
        sf::Sprite getplane();
        void crtl();
        void fire();
};

#endif // PLANE_H
