#include "Bg.h"
#include <SFML/Graphics.hpp>
Bg::Bg()
{
    this->texture1.loadFromFile("background.PNG");
    sf::Sprite bg1(texture1);
    this->bg=bg1;
    //this->box=bg.getGlobalBounds();
}

sf::Sprite Bg::getbg()
{
    return this->bg;
}
