#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int num;
    int r1,r2,r3,r4;

    printf("enter number in hexadecimal format(0x11111111)\n");
    scanf("%x",&num);

    r1=num&0x000000ff;
    r1=r1<<24;

    r2=num&0x0000ff00;
    r2=r2<<8;

    r3=num&0xff000000;
    r3=r3>>24;

    r4=num&0x00ff0000;
    r4=r4>>8;

    num=(r1|r2|r3|r4);
    printf("%x\n",num);
}
