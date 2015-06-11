#include <SFML/Graphics.hpp>
#include "Stage.h"
#include "define.h"
#include <time.h>
#include <iostream>
#include "Bullet.h"
#include "Font.h"
#include <string>
using namespace std;
string Stage::number(int a)
{
    int j=0,n=0,a1=a;
    string str="";
    for(j=0,n=1;a1/10!=0;n++)
    {
        a1=a1/10;
    }
    for(j=n-1;j >= 0;j--)
    {
        str=(char)(a%10+48)+str;
        a=a/10;
    }
    //cout<<str<<" ";
    return str;
}

Stage::Stage()
{
    this->window=new sf::RenderWindow(sf::VideoMode(WIN_WIDTH, WIN_HEIGHT), "***<War of Honor>***");
    i = 0;
    points = 0;
    font.point=font.point+number(points);
    //font.text.setString("Point:"+font.point);
}

Stage::~Stage()
{
    if(!window)
    {
        delete window;
        window=NULL;
    }
}

sf::RenderWindow* Stage::getwin()
{
    return this->window;
}

void Stage::popenemy()
{
    sf::Vector2f position;
    srand(time(0));
    int a=rand()*rand();
    a=a%360;
    position.x=a;
    position.y=-50;
    this->enemies.push_back(new Enemy(position));
}

void Stage::drawenemy(sf::RenderWindow* win)
{
    for(std::vector<Enemy*>::iterator j = this->enemies.begin();j != this->enemies.end() && this->enemies.size() != 0;)
        {
            if((*j)->getenemy().getPosition().y < 600 )
            {
                win->draw((*j)->getenemy());//draw the enemy
                j++;
            }
            else
            {
                j=this->enemies.erase(j);
            }
        }
        std::vector<Enemy*>(this->enemies).swap(this->enemies);
        //std::cout<<enemies.size()<<std::endl;
}

void Stage::crash(std::vector<Bullet*> &bullets)
{
    int a=0;
    for(std::vector<Enemy*>::iterator j = this->enemies.begin();j != this->enemies.end() && this->enemies.size() != 0;)
        {
            for(std::vector<Bullet*>::iterator i = bullets.begin();i != bullets.end();)
            {
                if((*j)->ifcrash((*j)->getenemy(0),(*i)->getbullet().getPosition()))
                {
                    a=1;
                    /*cout<<(*j)->blood<<endl;
                    cout<<(*j)->speed<<endl;*/
                    this->points=points+10;
                    font.point="";
                    font.point=font.point+this->number(points);
                    font.text.setString("Point:"+font.point);
                    ((*j)->blood)--;
                    if((*j)->blood == 0)
                    {
                        j=this->enemies.erase(j);
                        std::vector<Enemy*>(this->enemies).swap(this->enemies);
                    }
                    else
                    {
                        j++;
                    }
                    i=bullets.erase(i);
                    std::vector<Bullet*>(bullets).swap(bullets);
                    break;
                }
                else
                {
                    i++;
                }
            }
            if(a == 0)
            {
                j++;
            }
            a=0;
        }
}
