#include <stdio.h>
#include <windows.h>
#define f1 6     //flag's X
#define f2 6    //flag's Y
#define MOVE 1 //when meeting the 'press',then can move
#define WALL 0 //meetint the wall
#define WIN 2 //you win


int push(char (*map)[10],int &s1,int &s2,int &b1,int &b2,char move)
{
	//pushing
	int i=0,j=0,k=0,a=0,b=0;
	switch(move)
	{
		case 'w':a=-1;
			break;
		case 's':a=1;
			break;
		case 'a':b=-1;
			break;
		case 'd':b=1;
			break;
	}			
	if(map[s1+a][s2+b] == ' ')
	{
		map[s1][s2]=' ';
		map[s1+a][s2+b]='s';
		s1=s1+a;
		s2=s2+b;
		return MOVE;
	}
	if(map[s1+a][s2+b] == '*' || map[s1+a][s2+b] == 'f')
	{
		return WALL;
	}
	if(map[s1+a][s2+b] == '@')
	{
		if(map[s1+2*a][s2+2*b] == '*')
		{
			return WALL;
		}
		if(map[s1+2*a][s2+2*b] == ' ')
		{
			map[s1][s2]=' ';
			map[s1+a][s2+b]='s';
			map[b1+a][b2+b]='@';
			b1=b1+a;
			s1=s1+a;
			b2=b2+b;
			s2=s2+b;
			return MOVE;
		}
		if(map[s1+2*a][s2+2*b] == 'f')
		{
			map[s1][s2]=' ';
			map[s1+a][s2+b]='s';
			map[b1+a][b2+b]='@';
			return WIN;
		}
	}
}

void printmap(char map[10][10])
{   //print the map
	int i = 0,j = 0;
	for(i = 0;i < 10;i++)
	{
		for(j = 0;j < 10;j++)
		{
			printf("%c",map[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	char map[10][10]={
	{'*','*','*','*','*','*','*','*','*','*'},
	{'*','*','*','*','*','*','*','*','*','*'},
	{'*',' ',' ',' ','*','*','*','*','*','*'},
	{'*','s',' ',' ','*',' ',' ','*','*','*'},
	{'*',' ','*',' ',' ',' ','@',' ','*','*'},
	{'*',' ','*','*','*','*',' ','*',' ','*'},
	{'*',' ','*','*',' ','*','f','*',' ','*'},
	{'*',' ',' ',' ',' ','*',' ','*',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*','*','*','*','*','*','*','*','*','*'},
	};
	char move = '0';
	int i = 0,j = 0,k = 0,s1 = 3,s2 = 1,b1 = 4,b2 = 6;
	printmap(map);
	for(;;)
	{
		scanf("%c",&move);
		if(move == 'w' || move == 'a' ||move == 's'||move == 'd')
		{
			k=push(map,s1,s2,b1,b2,move);
			if(k == WIN)
			{
				system("cls");
				printmap(map);
				printf("YOU WIN!\n");
				break;
			}
			if(k == MOVE)
			{
				system("cls");
				printmap(map);
			}
		}
	}
	return 0;
} 
