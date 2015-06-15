#include <SFML/Graphics.hpp>
#include "Stage.h"
#include "define.h"
#include <time.h>
#include <iostream>
#include "Bullet.h"
#include "Font.h"
#include <string>
#include "boom.h"
#include <SFML/Audio.hpp>
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
    levels = 1;
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

void Stage::fire()
{
    for(std::vector<Enemy*>::iterator j = this->enemies.begin();j != this->enemies.end() && this->enemies.size() != 0;j++)
    {
        this->biu.biu.play();
        this->bullet.push_back(new Bullet((*j)->getenemy().getPosition(),(*j)->x1,(*j)->y1));
    }
}

void Stage::biucrash(sf::Vector2f position)
{
    for(std::vector<Bullet*>::iterator i = this->bullet.begin();i != this->bullet.end() && bullet.size() != 0;)
    {
        if((*i)->ifcrash(position,(*i)->getbullet(1).getPosition(),98))
        {
            (this->font.note)--;
            if(this->font.note == 2)
            {
                font.life.setString("**");
            }
            if(this->font.note == 1)
            {
                font.life.setString("*");
            }
            if(this->font.note == 0)
            {
                font.life.setString("");
                break;
            }
            i=bullet.erase(i);
            //cout<<"OK"<<endl;
            if(i == this->bullet.end())
            {
                break;
            }
        }
        else
        {
            if(i != this->bullet.end())
            {
                i++;
            }
            else
            {
                break;
            }
        }
    }
    std::vector<Bullet*>(bullet).swap(bullet);
}

void Stage::drawbiu(sf::RenderWindow* win)
{
    for(std::vector<Bullet*>::iterator i = bullet.begin();i != bullet.end() && bullet.size() != 0;)
        {
                if((*i)->getbullet(1).getPosition().y < 600)
                {
                    win->draw((*i)->getbullet(1));//draw the bullet
                    i++;
                }
                else
                {
                    i=bullet.erase(i);
                }
        }
        std::vector<Bullet*>(bullet).swap(bullet);
        //std::cout<<bullet.size()<<std::endl;
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
                    if(points == levels*levels*10)
                    {
                        levels++;
                        font.level="";
                        font.level=font.level+this->number(levels);
                        font.grade.setString("Level:"+font.level);
                    }
                    ((*j)->blood)--;
                    if((*j)->blood == 0)
                    {
                        boom1.Boom.play();
                        j=this->enemies.erase(j);
                        std::vector<Enemy*>(this->enemies).swap(this->enemies);
                    }
                    else
                    {
                       if(j != this->enemies.end())
                       {
                           j++;
                       }
                       else
                        {
                            break;
                        }
                    }
                    i=bullets.erase(i);
                    std::vector<Bullet*>(bullets).swap(bullets);
                    break;
                }
                else
                {
                    if(i != bullets.end())
                    {
                           i++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            if(a == 0 && j != this->enemies.end())
            {
                j++;
            }
            else{
                a=0;
                break;
            }
        }
}

void Stage::planecrash(sf::Vector2f position)
{
    int x=0,y=0,x2=0,y2=0,x3=0,y3=0;
    x=position.x+20;
    y=position.y;
    for(std::vector<Enemy*>::iterator j = this->enemies.begin();j != this->enemies.end();j++)
    {
        x2=(*j)->getenemy(1).getPosition().x;
        y2=(*j)->getenemy(1).getPosition().y;
        x3=(*j)->getenemy(1).getPosition().x+(*j)->x1;
        y3=(*j)->getenemy(1).getPosition().y+(*j)->y1;
        if((x2 > x && x2 < x +49 && y2 > y && y2 > y+111) || (x3 > x && x3 < x+98 && y3 > y &&  y2+111))
        {
            this->font.note--;
            break;
        }
    }
}
