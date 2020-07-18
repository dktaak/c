#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter no.\n");
    scanf("%d",&n);

    if(n%2==0)
        if((n&n-1)==0)
            printf("power of 2");
        else
            printf("even");
        else  //this else is working with main if
            printf("odd");

    return 0;
}
