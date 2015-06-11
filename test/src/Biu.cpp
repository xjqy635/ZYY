#include "Biu.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

Biu::Biu()
{
    this->biu.openFromFile("resources/sound/bullet.ogg");
    biu.setVolume(100);
   /* if (!biu.openFromFile("resources/sound/bullet.ogg"))
    {
        std::cout<<"error"<<std::endl;//error to open
    }*/
   // biu=biu2


}

Biu::~Biu()
{
    //dtor
}

/*sf::Music Biu::getbiu()
{
    return this->biu;
}*/
