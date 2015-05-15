#ifndef CIRCLE_H
#define CIRCLE_H
#include "Button.h"
class Circuit:public Button
{
	private:
		Item* item[100];
		int i=0,j=0;
		Button* but[10];
	public:
		void append(Item* item1)
		{
			item[i]=item1;
			i++;
		}
		void setSwitch(Button* button)
		{
			but[j]=button;
		}
		void on()
		{
			cout<<"we are "<<i<<" items"<<"    ON"<<endl;
		}
		void off()
		{
			cout<<"we are "<<i<<" items"<<"    OFF"<<endl;
		}
};
#endif
 
