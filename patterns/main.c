#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        if(i%2==0)
            for(int j=1,k=2;j<=i;j++,k+=2)
                printf("%d",k);
         else
              for(int j=1,k=1;j<=i;j++,k+=2)
                printf("%d",k);


    printf("\n");
    }
    printf("\n\n");
    /////////////////////////////////////////

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
          printf("%d",j);
              printf("\n");
    }
printf("\n\n");
///////////////////////////////

for(int i=1;i<=5;i++)
{
            for(int j=1;j<=i;j++)
              if(j%2==0)
                    printf("%c",'0');
              else
                printf("%c",'1');
   printf("\n");
}
///////////////////////
printf("\n");

for(int i=1;i<=5;i++)
{
            for(int j=1,k=i;j<=i;k+=5-j,j++)
                    printf("%d ",k);
   printf("\n");
}
    ////////////////////////////////
     printf("\n");
    int n=5;
     for(int i=0;i<n;i++)
    {
        for(int k=(n-i)*3-3;k>0;k--)
             printf(" ");
             if(i==0)
                printf("\b");

        for(int j=1;j<=i*2+1;j++)
          printf("%d ",j);

      printf("\n");

    }
printf("\n");
///////////////////////////////////////////////

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
            if(j<i)
                printf("*");
        }

        printf("\n");
    }

    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
            if(j<i)
                printf("*");
        }

        printf("\n");
    }
////////////////////////////////////////
	printf("\n");

for( int i=1,j;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           printf("%d*",i);
        }
        printf("\b\n");
    }

   for(int i=n-1,j;i>0;i--)
    {
            for(j=i;j>=1;j--)
            {
                printf("%d*",i);
            }
            printf("\b\n");

}
return 0;
}
