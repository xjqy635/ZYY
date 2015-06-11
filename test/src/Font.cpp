#include "Font.h"
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
Font::Font()
{
    point="0";
    font.loadFromFile("resources/font/STHeiti Light.ttc");
    text.setFont(font);
    text.setString("Point:"+point);
    text.setCharacterSize(24);
    text.setColor(sf::Color::Black);
    text.setStyle(sf::Text::Bold);
    life.setFont(font);
    life.setString("***");
    life.setCharacterSize(40);
    life.setColor(sf::Color::Red);
    life.setStyle(sf::Text::Bold);
    life.setPosition(330,0);
}
Font::~Font()
{
    //dtor
}
