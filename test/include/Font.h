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
        sf::Text grade;
        string point,level;
        Font();
        int note;
        virtual ~Font();
};

#endif // FONT_H
