#include <cstdio>
#include <iostream>
#include <string>
#include "Array.h"
using namespace std;


int& Array::operator[] (int i)
{
	int p=0;
	if(i >= 100 || i < 0)
	{
		return p;
	}
	else
	{
		return a[i];
	}
}
		
int Array::get(int i,int *k)
{
	if(i >= 100 || i < 0)
	{
		*k=0;
		return -1;		
	}
	else
	{
		*k=1;
		return a[i];
	}	
}

/*Array::Array(int i,int j)
{
	//this->i=i;
	this->j=j;
}*/
