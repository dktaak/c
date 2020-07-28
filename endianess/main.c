#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    char *cp=&i;

    if(*cp==1)
    printf("up is Little endianess\n");
    else if (*cp==0)
        printf("Big endianess\n");
    return 0;
}
