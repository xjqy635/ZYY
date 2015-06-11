#ifndef STAGE_H
#define STAGE_H
#include <SFML/Graphics.hpp>
#include "Enemy.h"
#include "Bullet.h"
#include "Font.h"
#include <string>
using namespace std;
class Stage
{
public:
    Font font;
    sf::RenderWindow *window;
    Stage();
    sf::RenderWindow* getwin();
    ~Stage();
    std::vector<Enemy*> enemies;
    void popenemy();
    int i,points;
    void drawenemy(sf::RenderWindow*);
    void crash(std::vector<Bullet*> &bullets);
    string number(int);
};
#endif // STAGE_H
