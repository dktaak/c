#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={1,5,9,7,3,4,6,8,40};
    int ele,i=0,k,j,t;
    ele=sizeof(a)/sizeof(a[0]);

    for(i=0;i<ele;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<ele;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    for(i=0;i<ele-1;i++)
        for(j=0;j<ele-1-i;j++)
        {
        printf("\nSo now %d is compared with %d",a[j],a[j+1]);

           if(a[j]>a[j+1])
           {

               printf("\n So %d > %d --> True",a[j],a[j+1]);
               t=a[j];
               a[j]=a[j+1];
               a[j+1]=t;
              printf("\n  So After swap of %dth with %dth \n",j,j+1);
              printf("   ");
              for(k=0;k<ele;k++)
                 {
                   printf("%d ",a[k]);
                 }
              printf("\n");
           }

        }

    for(i=0;i<ele;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
