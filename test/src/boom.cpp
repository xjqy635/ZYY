#include "boom.h"
#include <SFML/Audio.hpp>

boom::boom()
{
    this->Boom.openFromFile("resources/sound/use_bomb.ogg");
    Boom.setVolume(50);
}

boom::~boom()
{
    //dtor
}
