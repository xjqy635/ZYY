#include "Plane.h"
#include "Bullet.h"
#include <SFML/Graphics.hpp>
Plane::Plane()
{
    this->texture2.loadFromFile("resources/image/plane.PNG");
    sf::Sprite plane1(texture2);
    this->plane=plane1;
    x=this->plane.getPosition().x;
    y=this->plane.getPosition().y;
}

sf::Sprite Plane::getplane()
{
    return this->plane;
}

void Plane::crtl()
{
    int a=0,b=0;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        a=-2;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        a=2;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        b=-2;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        b=2;
    }
    if(x+a >= -200 && x+a <= 200 && y+b >=-550 && y+b <= 0)
    {
        //printf("(%f,%f)\n",x,y);
        x=x+a;
        y=y+b;
        plane.move(a,b);
    }
}

void Plane::fire()
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
    {
        this->biu1.biu.play();
        this->bullets.push_back(new Bullet(this->plane.getPosition()));
    }
}


