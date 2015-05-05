#include <iostream>
#include <cstdio>
using namespace std;

class Point
{
private:
	int x,y;
public:
	Point(int x1,int y1);
	int popx();
	int popy();	
};

class Circle
{
private:
	int r,Xc,Yc;
public:
	Circle(Point a,int r1);
	void move(int x1,int y1);
	int getX();
	int getY();	
};
