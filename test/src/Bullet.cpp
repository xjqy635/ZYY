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

Bullet::Bullet(sf::Vector2f biuposition,int x1,int y1)
{
    this->texture3.loadFromFile("resources/image/enemy_bullet.png");
    sf::Sprite bullet1(texture3);
    this->bullet=bullet1;
    //bullet.setColor(White);
    biuposition.x+=x1/2;
    biuposition.y+=y1;
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

sf::Sprite Bullet::getbullet(int a)
{
    bullet.move(0,0.7);
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

int Bullet::ifcrash(sf::Vector2f position1,sf::Vector2f position2,int x)
{
    float x1=position1.x,y1=position1.y;
    float x2=position2.x,y2=position2.y;
    if(x2 < x1+x && x2 > x1 && y1-y2 < 0.01)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

