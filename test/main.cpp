#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include "Stage.h"
#include "define.h"
#include "Bg.h"
#include "Bgm.h"
#include "Plane.h"
#include "Bullet.h"
#include "Font.h"
int main()
{
    Stage stage;
    Bg bg1;
    Bgm bgm;
    Plane hero;
    //Font text;
    //sf::Vector2f position1;
    hero.plane.setPosition(HERO_X,HERO_Y);//set the plane's position
    bgm.getbgm()->play(); //play the bgm
    bgm.bgm.setLoop(1);//loop the background music
    int temp=0;
     // run the program as long as the window is open
    while (stage.getwin()->isOpen())
    {
        temp++;
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (stage.getwin()->pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                stage.getwin()->close();
        }
        hero.crtl();//move the hero
        if(temp%30 == 0)
        {
            hero.fire();//fire the bulllet
        }

        if(temp%450 == 0)
        {
           stage.popenemy();//fire the bulllet
        }
        stage.getwin()->clear(sf::Color::Black);
        stage.getwin()->draw(bg1.getbg()); //draw the background
        stage.getwin()->draw(stage.font.text);
        stage.getwin()->draw(stage.font.life);
        stage.getwin()->draw(hero.getplane()); //draw the plane
        /*if(hero.bullets.size() != 0)
        {
            for(std::vector<Bullet*>::iterator k = hero.bullets.begin();k != hero.bullets.end();k++)
            {
                stage.drawenemy(stage.getwin(),(*k)->getbullet().getPosition());
                if(stage.i)
                {
                    (*k)->getbullet().setPosition(0,-610);
                }
            }
        }
        else
        {*/
            stage.drawenemy(stage.getwin());
            if(hero.bullets.size() != 0)
            {
                stage.crash(hero.bullets);
            }
/* *******************************************hero.bullet**************************************************** */
        for(std::vector<Bullet*>::iterator i = hero.bullets.begin();i != hero.bullets.end() && hero.bullets.size() != 0;)
        {
                if((*i)->getbullet().getPosition().y > -600)
                {
                    stage.getwin()->draw((*i)->getbullet());//draw the bullet
                    i++;
                }
                else
                {
                    i=hero.bullets.erase(i);
                }
        }
        std::vector<Bullet*>(hero.bullets).swap(hero.bullets);
        //printf("%d\n",hero.bullets.size());
/* ********************************************************************************************************* */
        stage.getwin()->display();
    }
    return 0;
}
