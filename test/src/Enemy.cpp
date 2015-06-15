#include "Enemy.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "Bullet.h"
Enemy::Enemy(sf::Vector2f position)
{
    //note=30;
    srand(time(0));
    int a=rand();
    a=a%8;
    if(a==0 || a==1 || a==6)
    {
        note=1;
        this->texture11.loadFromFile("resources/image/enemy1.PNG");
        //this->texture2.loadFromFile("resources/image/enemy21.PNG");
        //this->texture3.loadFromFile("resources/image/enemy22.PNG");
        this->texture4.loadFromFile("resources/image/enemy23.PNG");
        sf::Sprite enemy11(texture11);
        this->enemy=enemy11;
        this->enemy.setPosition(position);
        this->speed=0.3;
        this->k=2.55;
        x1=69;
        y1=88;
        blood=3;
    }
    if(a==3||a==4||a==5||a==7)
    {
        note=2;
        this->texture21.loadFromFile("resources/image/enemy2.PNG");
        //this->texture2.loadFromFile("resources/image/enemy21.PNG");
        //this->texture3.loadFromFile("resources/image/enemy22.PNG");
        this->texture4.loadFromFile("resources/image/enemy23.PNG");
        sf::Sprite enemy22(texture21);
        this->enemy=enemy22;
        this->enemy.setPosition(position);
        this->speed=0.5;
        this->k=1.43;
        x1=49;
        y1=35;
        blood=1;
    }
    if(a==2)
    {
        note=3;
        this->texture31.loadFromFile("resources/image/enemy3.PNG");
        //this->texture2.loadFromFile("resources/image/enemy31.PNG");
        //this->texture3.loadFromFile("resources/image/enemy32.PNG");
        this->texture4.loadFromFile("resources/image/enemy33.PNG");
        sf::Sprite enemy33(texture31);
        this->enemy=enemy33;
        this->enemy.setPosition(position);
        this->speed=0.1;
        this ->k=0;
        x1=165;
        y1=249;
        blood=5;
    }
}


sf::Sprite Enemy::getenemy()
{
    //std::cout<<this->speed<<std::endl;
    enemy.move(0,this->speed);
    return this->enemy;
}

int Enemy::willdelete(sf::Sprite a)
{
    if(a.getPosition().y > 600)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Enemy::crash1(sf::Sprite a)
{
    speed=0;
    sf::Sprite temp(this->texture2);
    a=temp;
}

void Enemy::crash2(sf::Sprite a)
{
    speed=0;
    sf::Sprite temp(this->texture3);
    a=temp;
}

void Enemy::crash3(sf::Sprite a)
{
    speed=0;
    sf::Sprite temp(this->texture4);
    a=temp;
}

int Enemy::ifcrash(sf::Sprite a,sf::Vector2f position)
{
    float x=a.getPosition().x;
    float y=a.getPosition().y;
    if(position.x  > x && position.x < x+x1 && (position.y-(y+y1)) < 0.0001 && (position.y-(y+y1)) > -4)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

sf::Sprite Enemy::getenemy(int a)
{
    return this->enemy;
}
