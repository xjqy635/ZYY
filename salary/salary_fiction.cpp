#include <cstdio>
#include <iostream>
#include "class.h"
#include <string>
using namespace std;

Employee::Employee()
{
	salary=0;
	level=0;
	i=0;
	//name=Name;
} 

void Employee::setname(string c)
{
	name=c;
}

string Employee::getname()
{
	return name;
}

void Employee::setlevel(int a)
{
	level=a;
}

int Employee::getlevel()
{
	return level;
} 

int Employee::Salary()
{
	salary=level*1200;
	return salary;
}

Sales::Sales()
{
	sales=0;
	achieve=0;
}

void Sales::getachieve(int b)
{
	achieve=b;
}

int Sales::sale()
{
	sales=achieve*10;
	return sales;
}
