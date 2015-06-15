#ifndef STAGE_H
#define STAGE_H
#include <SFML/Graphics.hpp>
#include "Enemy.h"
#include "Bullet.h"
#include "Font.h"
#include <string>
#include "boom.h"
#include "Biu.h"
using namespace std;
class Stage
{
public:
    Font font;
    sf::RenderWindow *window;
    Stage();
    sf::RenderWindow* getwin();
    boom boom1;
    Biu biu;
    ~Stage();
    std::vector<Enemy*> enemies;
    std::vector<Bullet*> bullet;
    void popenemy();
    int i,points,levels;
    void drawenemy(sf::RenderWindow*);
    void crash(std::vector<Bullet*> &bullets);
    void biucrash(sf::Vector2f position);
    void planecrash(sf::Vector2f position);
    void fire();
    void drawbiu(sf::RenderWindow*);
    string number(int);
};
#endif // STAGE_H
