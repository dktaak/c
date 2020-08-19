#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,n1;
    printf("enter size of 1st array\n");
    scanf("%d",&n);
    printf("enter size of 2nd array\n");
    scanf("%d",&n1);

    int a[3];
    int b[5],i,j,k,c[10];

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

        //int *p=&c;
        for(i=0,k=0;i<5;i++)
        {
            //*p++=a[i];
            //*p++=b[i];
            c[k++]=a[i];
            c[k++]=b[i];
        }
        for(i=0;i<10;i++)
        printf("%d ",c[i]);
        printf("\n");
    return 0;
}
