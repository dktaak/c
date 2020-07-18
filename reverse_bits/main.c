#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,p,m,x,y;
    printf("Enter no.\n");
    scanf("%d",&num);

        for(p=31;p>=0;p--)
        {
            printf("%d",num>>p&1);

        }
        printf("\n");
    //*********************************
    for(int i=0,j=31;i<j;i++,j--)
    {
        n=num>>i&1;
        m=num>>j&1;

        if(n!=m)
        {
            num=num^1<<i;
            num=num^1<<j;
        }

    }
    printf("\n");
     //*************************

    for(p=31;p>=0;p--)
    {
        printf("%d",num>>p&1);
    }
    return 0;
}
