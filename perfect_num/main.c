#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s=0;
    printf("Enter no.\n");
    scanf("%d",&n);

    for(int i=1;i<n;i++)
        if(n%i==0)
          s=s+i;

        if(s==n)
           printf("Perfect Number");
           else
            printf("Not a Perfect Number");

return 0;
}
