#include <stdio.h>

#define Yoga 1
#define Thinkpad 2
#define Mac 0

int change(char a)
{
    int i = 3;
    if(a == 'M')
    {
        i = 0;
    }
    if(a == 'Y')
    {
        i = 1;
    }
    if(a == 'T')
    {
        i = 2;
    }
    if(a == 'q')
    {
        i = 4;
    }
    return i;
}

int main()
{
    int pc[12]={0},i = 0,num = 0;
    char a;
    printf("please put in the numbers of the Mac,the Yoga and the Thinkpad\n");
    printf("when you want to break,you can put in the 'q' \n");
    scanf("%d %d %d",&pc[Mac],&pc[Yoga],&pc[Thinkpad]);
    printf("Mac %d  Yoga %d  Thinkpad %d\n",pc[Mac],pc[Yoga],pc[Thinkpad]);
    
    for(;;)
    {
    	i=3;
		scanf("%c",&a); 
        printf("please put in the change of  the Mac(M),the Yoga(Y) and the Thinkpad(T)\n"); 
		scanf("%c",&a);
        i=change(a);
        if(i == 4)
        {
            break;
        }
        scanf("%d",&num);
        pc[i]=pc[i]+num;
        printf("Mac %d  Yoga %d  Thinkpad %d\n",pc[Mac],pc[Yoga],pc[Thinkpad]);
    }
    return 0;
}
