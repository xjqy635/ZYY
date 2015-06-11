#ifndef FONT_H
#define FONT_H
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
class Font
{
    public:
        sf::Font font;
        sf::Text text;
        sf::Text life;
        string point;
        Font();
        virtual ~Font();
};

#endif // FONT_H
