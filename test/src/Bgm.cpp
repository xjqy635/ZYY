#include "Bgm.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

Bgm::Bgm()
{
    this->bgm.openFromFile("resources/sound/bgm.ogg");
    /*if (!music.openFromFile("resources/sound/bgm.ogg"))
    {
        cout<<"error"<<endl;//error to open
    }*/
    bgm1=&bgm;
}

Bgm::~Bgm()
{
    //dtor
}
sf::Music* Bgm::getbgm()
{
    return bgm1;
}

