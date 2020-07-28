#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,i=10;
    int *p=3,*q;
    p=&i;
    printf("p= %p\n",p);
    printf("\n");

    j=++*p;
    printf("++*p\np= %p\n",p);
    printf("j= %d\n",j);
    printf("\n");


    i=10;
    p=&i;
    j=*p++;
    printf("*p++\np= %p\n",p);
    printf("j= %d\n",j);
    printf("\n");

    i=10;
    p=&i;
    j=*p++;
    printf("*p++\np= %p\n",p);
    printf("j= %d\n",j);
    printf("\n");

    i=10;
    p=&i;
    j=(*p)++;
    printf("(*p)++\np= %p\n",p);
    printf("j= %d i=%d\n",j,i);
    printf("\n");

    i=10;
    p=&i;
    j=++(*p);
    printf("++(*p)\np= %p\n",p);
    printf("j= %d\n",j);
    printf("\n");

    i=10;
    p=&i;
    q=p++;
    printf("q=p++\np= %p\n",p);
    printf("q= %p\n",q);
    printf("\n");

    return 0;
}
