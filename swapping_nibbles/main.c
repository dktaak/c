#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char n,k,l;
    printf("Enter no.\n");
    scanf("%x",&n);

    k=n<<4;
    l=n>>4;
    n=k|l;

    printf("%x\n",n);
    return 0;
}
