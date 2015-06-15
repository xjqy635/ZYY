#ifndef ENEMY_H
#define ENEMY_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Bullet.h"

class Enemy
{
    public:
        sf::Texture texture11;
        sf::Sprite enemy;
        float speed,x1,y1,k;
        int note,blood;
        sf::Texture texture21;
        sf::Texture texture4;
        sf::Texture texture31;
        sf::Texture texture2;
        sf::Texture texture3;
        //sf::Sprite enemy2;
        //sf::Sprite enemy3;
        Enemy(sf::Vector2f position);
        sf::Sprite getenemy();
        int willdelete(sf::Sprite a);
        int ifcrash(sf::Sprite a,sf::Vector2f position);
        void crash1(sf::Sprite a);
        void crash2(sf::Sprite a);
        void crash3(sf::Sprite a);
        sf::Sprite getenemy(int);

};

#endif // ENEMY_H
