#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,n1,r,sum=0;
    printf("enter no.\n");
    scanf("%d",&n);

    if(n>=1)
    {
        for(n1=n;n1;r=n1%10,sum=sum+r*r*r,n1=n1/10);

        if(sum==n)
            printf("Number is Armstrong ");
            else
                printf("Not Armstrong");
    }
    else
        printf("Enter only +ve integer number");

    return 0;
}
