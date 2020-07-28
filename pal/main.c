#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num=100,n,sum,c=1,d;

    for(num=100;c<=5;num++)
    {
    for(sum=0,n=num;n;n=n/10)
    {
        d=n%10;
        sum=sum*10+d;
    }
    if(sum==num)
      c++;
    }
    printf("%d\n",num-1);

    return 0;
}
