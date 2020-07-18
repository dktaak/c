#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,num,i;
    printf("enter num\n");
    scanf("%d",&num);
    if(num==1||num==2)
        printf("Prime num\n");
    else if(num%2!=0)
        for(i=2;i<num;i++)
            if(num%i!=0)
                printf(" Not a Prime num\n");
    else
        printf("Prime num");
    return 0;
}
