#include <stdio.h>

void move(int n,int a,int b,int c)
{
    if(n > 1)
    {
        move(n-1,a,c,b);
        printf("%d>>%d\n",a,c);

        move(n-1,b,a,c);
    }
    else
    {
        printf("%d>>%d\n",a,c);
    }
}
int main()
{
    int num = 0;
    scanf("%d",&num);
    move(num,1,2,3);
    return 0;
}