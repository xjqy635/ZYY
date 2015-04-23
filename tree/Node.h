#include <iostream>
using namespace std;
/*typedef struct T tree;
struct T
{
   int data;
   tree *parent,*child[];
};*/
class Node
{
 public:
 	int data;
 	Node *parent,*child[100];
    //tree *a;
    //static int k;
    int m; 
   //static int count();
    Node(int i);
    void append(Node* j);
};
int count(Node *n);
