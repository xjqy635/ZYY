#include <cstdio>
#include <iostream>
#include <string>
#include "Array.h"
using namespace std;


int Array::set(int i,int j)
{
	if(i >= 100 || i < 0)
	{
		return 1;
	}
	else
	{
		a[i]=j;
		return 0;
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

