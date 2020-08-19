#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],l,sl,i;

    printf("enter 10 elements of array\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    if(a[0]>a[1])
    {
        l=a[0];
        sl=a[1];
    }
    else if(a[0]<a[1])
    {
        l=a[1];
        sl=a[0];
    }

    for(i=2;i<10;i++)
    {
       if(a[i]>l)
       {
           sl=l;
           l=a[i];
       }
       else if(a[i]>sl&&a[i]<l)
       {
           sl=a[i];
       }
    }

    printf("\n");
    printf("l=%d sl=%d\n",l,sl);
    return 0;
}
