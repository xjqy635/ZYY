#ifndef STAGE_H
#define STAGE_H
#include <SFML/Graphics.hpp>

class Stage
{
public:
    sf::RenderWindow *window;
    Stage();
    sf::RenderWindow* getwin();
    ~Stage();

};
#endif // STAGE_H
