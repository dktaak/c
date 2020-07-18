#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,p=31;
    printf("enter no.\n");
    scanf("%d",&n);
    L1:
    if(p>=0 && p<=31)
    {
        //printf("%d",(n&1<<p)!=0);
        printf("%d",(n>>p&1)==1);

        if(p%8==0)
          printf(" ");

        p--;
        goto L1;
    }
    return 0;
}
