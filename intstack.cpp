#include <cstdio>
#include <iostream>
#include <list>
using namespace std;
typedef list<int> LISTINT; 

int main() 
{ 
    int num=0,j = 0,n = 0;
    LISTINT listOne; 
    LISTINT::iterator i; 
    cin>>n;
    for(j=0;j < n;j++)
    {
    	cin>>num;
    	listOne.push_back (num); 
    }

    LISTINT::reverse_iterator ir; 
    for (ir =listOne.rbegin(); ir!=listOne.rend();ir++) { 
        cout << *ir << " "; 
    } 
    cout << endl; 
    return 0;
}
