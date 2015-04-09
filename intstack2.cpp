#include <cstdio>
#include <iostream>
#include <cstdlib>
using namespace std;
#define N 10000

typedef struct Linker list;
struct Linker
{
	int data;
	list *next;
};
list *a[N],*p; 

void init(int n)
{
	int i=0;
	a[0]=(struct Linker *)malloc(sizeof(struct Linker));
	cin>>a[0]->data;
	for(i=1;i < n;i++) 
	{
		a[i]=(struct Linker *)malloc(sizeof(struct Linker));
		cin>>a[i]->data;
		a[i-1]->next=a[i];
		//printf("%d %d %d\n",a[i-1]->data,a[i]->data,i);
	}
	a[i]=NULL;
}

void ex(int *num,int n)
{
	int i=0;
	for(p=a[0],i = n-1;i >= 0;i--)
	{
		num[i]=p->data;
		p=p->next;
	}
}

void out(int *num,int n)
{
	int i = 0;
	for(;i < n;i++)
	{
		cout<<num[i]<<" ";
	}
	cout<<endl;
}


int main()
{
	int i = 0,n = 0,j = 0;
	cin>>n;
	init(n);
	int num[N]={0};
	ex(num,n);
	out(num,n);
	return 0;
}
