#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=10,j;
    int *p=&i;int *q;
    j=++*p;
    printf("%d %d\n",i,j);
    return 0;
}
