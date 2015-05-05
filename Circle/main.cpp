#include <iostream>
#include <cstdio>
#include "class.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	Point center(10,20);
	
	Circle circle(center,5);
	circle.move(30,20);
	
	cout<<"("<<circle.getX()<<","<<circle.getY()<<")"<<endl;
	
	return 0;
}
