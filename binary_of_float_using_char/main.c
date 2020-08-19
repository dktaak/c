#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f=23.5;
    char *cp;
    /*
    cp=&f;
    cp=cp+3;

    for(int i=1;i<=4;i++)
    {
        for(int pos=7;pos>=0;pos--)
        {
            printf("%d",*cp>>pos&1);
        }
        cp--;
    }
    */
    for(cp=&f,cp+=3;cp>=&f;cp--)
    {
        for(int pos=7;pos>=0;pos--)
        {
            printf("%d",*cp>>pos&1);
        }
    }
    printf("\n");
    return 0;
}
