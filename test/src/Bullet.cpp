#include "Bullet.h"
#include <SFML/Graphics.hpp>
#include "define.h"
#include <iostream>
#include <SFML/Audio.hpp>
Bullet::Bullet(sf::Vector2f biuposition)
{
    this->texture3.loadFromFile("resources/image/bullet.PNG");
    sf::Sprite bullet1(texture3);
    this->bullet=bullet1;
    //bullet.setColor(White);
    biuposition.x+=45;
    biuposition.y+=0;
    bullet.setPosition(biuposition);
}

Bullet::~Bullet()
{
   /* if(!bullet)
    {
        delete bullet;
        bullet=NULL;
    }*/
}

sf::Sprite Bullet::getbullet()
{
    //window->draw(this->bullet);
    bullet.move(0,-1);
    return this->bullet;
}

int Bullet::willdelete()
{
    if(this->bullet.getPosition().y < -WIN_HEIGHT)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


