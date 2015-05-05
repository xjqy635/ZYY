#include <iostream>
#include <cstdio>
#include "class.h"
using namespace std;

Point::Point(int x1,int y1)
{
	x=x1;
	y=y1;
}

int Point::popx()
{
	return this->x;
}
int Point::popy()
{
	return this->y;
}


Circle::Circle(Point a,int r1)
{
	Xc=a.popx();
	Yc=a.popy();
	r=r1;
}

void Circle::move(int x1,int y1)
{
	Xc=Xc+x1;
	Yc=Yc+y1;
}

int Circle::getX()
{
	return Xc;
}
int Circle::getY()
{
	return Yc;
}
