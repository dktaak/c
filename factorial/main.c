#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,f=1;
    printf("Enter no.\n");
    scanf("%d",&n);

    for(int i=1;i<=n;f=f*i,i++);

    printf("Factorial is = %d\n",f);
    return 0;
}
