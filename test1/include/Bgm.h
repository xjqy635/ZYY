#ifndef BGM_H
#define BGM_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Bgm
{
public:
    sf::Music* bgm1;
    sf::Music bgm;
    sf::Music* getbgm();
    Bgm();
    ~Bgm();
};

#endif // BGM_H
