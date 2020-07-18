#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c=0,p;
    printf("enter no.\n");
    scanf("%d",&n);
    L1:
    printf("enter position of bit to check(0 - 31)\n");
    scanf("%d",&p);

    if(p>=0 && p<=31)
        if(n&1<<p)
            printf("Set\n");
        else
            printf("Clear\n");
    else
        {
        c++;
        if(c<=3)
        {
        printf("Bit is out of range(0-31),Enter again\n");
        if(c==2)
            printf("warning: 2nd time entering wrong bit position\n");
            else if(c==3)
                printf("if you again enter wrong position, program will terminate \n");
        goto L1;
        }
        }
    return 0;
}
