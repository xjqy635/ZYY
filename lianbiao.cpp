#include <stdio.h>
#include <stdlib.h>
//#include <assert.h>
#define N 100
 
typedef struct hh list;
struct hh
{
    int data;
    list *next;
}*s;
list *a[N],*p;

void init()
{
	int i=0;
	a[0]=(struct hh *)malloc(sizeof(struct hh));
	a[0]->data=1;
	for(i=1;i < N;i++) 
	{
		a[i]=(struct hh *)malloc(sizeof(struct hh));
		a[i]->data=1;
		a[i-1]->next=a[i];
		//printf("%d %d %d\n",a[i-1]->data,a[i]->data,i);
	}
	a[N - 2]->next=NULL;
}

void in(int i,int data)
{
	int j=0;
	for(p=a[0];p!= NULL;j++)
	{
		if(i == j)
		{
			p->data=data;
			break;
		}
		p=p->next;
	}
}

void del(int i)
{
	int j = 0;
	for(p=a[0];p!= NULL;j++)
	{
		if(i-1 == j)
		{
			p->next=(p->next)->next;
			free(p->next);
			//assert(p->next);
			break;
		}
		p=p->next;
	}
}

void add(int i,int data)
{
	s=(struct hh*)malloc(sizeof(struct hh));
	s->data=data;
	s->next=a[i+1];
	a[i]->next=s;
}

int find(int i)
{
	int j=0;
	int temp=0;
	for(p=a[0];p!= NULL;j++)
	{
		if(i == j)
		{
			temp=p->data;
			break;
		}
		p=p->next;
	}
	return temp;
}

void print()
{
	int i=0;
	for(p=a[0];p != NULL;i++)
	{
		printf("%d %d\n",p->data,i);
		p=p->next;
	}
}

void operate(int input)
{
	int temp=0,data1=0;
	if(input == 'f')
	{
		scanf("%d",&temp);
		printf("%d\n",find(temp));
	}
	if(input == 'a')
	{
		scanf("%d",&temp);
		scanf("%d",&data1);
		add(temp,data1);
	}
	if(input == 'i')
	{
		scanf("%d",&temp);
		scanf("%d",&data1);
		in(temp,data1);
	}
	if(input == 'd')
	{
		scanf("%d",&temp);
		del(temp);
	}
	if(input == 'p')
	{
		print();
	}
} 

int main()
{
   	init();
	char input='0';	
	for(;;)
	{
		scanf("%c",&input);
		if(input == 'q')
		{
			return 0;
		}
		operate(input);
	}

	return 0; 
}
