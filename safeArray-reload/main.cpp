#include <iostream>
#include <cstdio>
#include <string>
#include "Array.h"
using namespace std;

int main()
{
	Array s;
	int data = 0,i = 0,j = 0,k = -1;
	string d;
	for(;;)
	{
		cout<<"please input your crtl"<<endl;
		cin>>d;
		if(d == "in")
		{
			cin>>i>>j;
			s[i]=j;
		}
		if(d == "out")
		{
			cin>>i;
			data=s[i];
			//data=s.get(i,&k);
			if(i >= 100 || i < 0)
			{
				cout<<"you have overflowed"<<endl;
			} 
			else
			{
				cout<<data<<endl;
			}
		}
		if(d == "q")
		{
			break;
		} 
			
	}
	return 0;
}
