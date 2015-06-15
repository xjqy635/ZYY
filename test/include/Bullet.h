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
        Bullet(sf::Vector2f biuposition,int,int);
        ~Bullet();
        sf::Sprite getbullet();
        sf::Sprite getbullet(int);
        int ifcrash(sf::Vector2f position1,sf::Vector2f position2,int x);
        int willdelete();
};

#endif // BULLET_H
