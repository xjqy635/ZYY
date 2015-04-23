#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "Node.h"
using namespace std;

Node::Node(int i)
{
   child[0]=NULL;
   parent=NULL;
   data=i;
//   k = 0;
  // m = 0;
}
//static int count()
//{
    //return k;
//}
void Node::append(Node* j)
{
   child[m]=j;
   j->parent=this;
 //  k++;
   m++;
   child[m]=NULL;
}
int count(Node* n)
{
    int num=0,i = 0;
    Node *p;
    n=n->child[0];
    for(i = 0;;i++)
    {
    	p=n->child[i];
		if(n = NULL)
    	{
    		break;
    	}
    	num++;		 
    }
    for(i = num;i >= 0 && num != 0;i--)
    {
    	num=num+count(n->child[i]);
    }
    return num;
}
