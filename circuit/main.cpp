#include <iostream>
#include "class.h"
#include "Circuit.h"
#include "Lamp.h"
#include "Fan.h"
#include "Button.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	Circuit circuit;
	
	Lamp lamp;
	Fan fan;
	Button& button=circuit;
	
	circuit.setSwitch(&button);
	circuit.append(&lamp);
	circuit.append(&fan);
	
	button.on();
	button.off();
	 
	return 0;
}

