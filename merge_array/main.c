#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];
    int b[5],i,c[10];

    printf("enter 5 elements of 1st array\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);

    printf("enter 5 elements of 2nd array\n");
    for(i=0;i<5;i++)
    scanf("%d",&b[i]);

    for(i=0;i<5;i++)
        printf("%d ",a[i]);
        printf("\n");
    for(i=0;i<5;i++)
        printf("%d ",b[i]);
        printf("\n");

        int *p=&c;
        for(i=0;i<5;i++)
        {
            *p++=a[i];
            *p++=b[i];
        }
        for(i=0;i<10;i++)
        printf("%d ",c[i]);
        printf("\n");
    return 0;
}
