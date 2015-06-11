#ifndef ENEMY_H
#define ENEMY_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Enemy
{
    public:
        sf::Texture texture11;
        sf::Sprite enemy1;
        sf::Texture texture21;
        sf::Sprite enemy2;
        sf::Texture texture31;
        sf::Sprite enemy3;
        Enemy();
        virtual ~Enemy();
        sf::Sprite getenemy1();
        sf::Sprite getenemy2();
        sf::Sprite getenemy3();
        int willdelete(sf::Sprite a);
};

#endif // ENEMY_H
