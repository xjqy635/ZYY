#ifndef BULLET_H
#define BULLET_H
#include <SFML/Graphics.hpp>
//#include "Stage.h"
#include <SFML/Audio.hpp>
class Bullet
{
    public:
        //int i;
        sf::Texture texture3;
        sf::Sprite bullet;
        Bullet(sf::Vector2f biuposition);
        ~Bullet();
        sf::Sprite getbullet();
        int willdelete();
};

#endif // BULLET_H
