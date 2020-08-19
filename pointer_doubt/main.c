#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i=10;
    int *p=&i;
    *p=230;

    printf("%d\n",*p);
    return 0;
}
