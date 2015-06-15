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
    note=3;
    level="1";
    life.setCharacterSize(40);
    life.setColor(sf::Color::Red);
    life.setStyle(sf::Text::Bold);
    life.setPosition(330,0);
    grade.setFont(font);
    grade.setString("Level:"+level);
    grade.setCharacterSize(24);
    grade.setColor(sf::Color::Blue);
    grade.setStyle(sf::Text::Bold);
    grade.setPosition(140,0);
}
Font::~Font()
{
    //dtor
}
