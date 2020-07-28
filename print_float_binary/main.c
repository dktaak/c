#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i=23.5;
    int *j=&i;  //this will consider float binary as integer so bit wise operation can be performed

    for(int p=31;p<=31&&p>=0;p--)
    {
        printf("%d",*j>>p&1);
        if(p==31)
        printf(" ");
 if(p==25)
    printf(" ");
    }


    return 0;
}
