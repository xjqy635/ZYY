#include <iostream>
#include <cstdio> 
#include "class.h"
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	Sales pig;
	pig.setname("pig");
	pig.setlevel(4);
	pig.getachieve(1000);
	cout<<pig.getname()<<"  "<<"level="<<pig.getlevel()<<endl;
	cout<<"salary="<<pig.Salary()<<"  sales="<<pig.sale()<<endl;
	cout<<"money="<<pig.Salary()+pig.sale()<<endl;
	return 0;
}
