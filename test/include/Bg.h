#ifndef BG_H
#define BG_H
#include <SFML/Graphics.hpp>
//#include "define.h"
class Bg
{
    public:
        sf::Texture texture1;
        sf::Sprite bg;
        //sf::FloatRect box;
        Bg();
        sf::Sprite getbg();

};

#endif // BG_H
