#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	int salary,level,i;
	string name;
public:
	Employee();
	void setname(string c);
	string getname();
	void setlevel(int a);
	int getlevel();
	int Salary(); 
};

class Sales:public Employee
{
private:
	int sales,achieve;
public:
	void getachieve(int b);
	//string name();
	Sales();
	int sale();
};
