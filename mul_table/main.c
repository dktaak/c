#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1;
    printf("enter no.\n");
    scanf("%d",&n);

    L1:
        if(n>=1)
            if(i<11)
        {
            printf("%d * %d = %d\n",n,i,n*i);
            i++;
            goto L1;
        }

    return 0;
}
