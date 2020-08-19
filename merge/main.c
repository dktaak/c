#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[10],b[10],c[20];
    int i,j;
    printf("enter 1st string\n");
    scanf("%s",a);

    printf("enter 2nd string\n");
    scanf("%s",b);

    for(j=0,i=0;a[i]&&b[i];i++)
    {
        c[j++]=a[i];
        c[j++]=b[i];
    }
    while(a[i])
    {
        c[j++]=a[i];
        i++;
    }


    while(b[i])
    {
        c[j++]=b[i];
        i++;
    }
    c[j]='\0';

    printf("\nmerged string is = %s",c);
    return 0;
}
