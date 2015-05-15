#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

class Shape
{
	private:
		string shape;
	public:
		void input(string a);
		virtual void location(int,int,int,int)
		{
			;
		}
		virtual void location(int ,int,int)
		{
			;
		}
		virtual void draw()
		{
			;
		}
		//void draw();
};

class Circle:public Shape
{
	private:
		int r,Xc,Yc;
	public:
		Circle();
		void location(int x1,int y1,int r1);
		void draw();
};

class Rectangle:public Shape 
{
	private:
		int X,Y,length,width;
	public:
		Rectangle();
		void location(int x1,int y1,int l1,int w1);
		void draw();
};






